#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_memory.h"
#include <stdlib.h>
#include <string.h>

#define MAX_QSORT_NMEMB  4096u
#define MAX_QSORT_SIZE   256u

static uint8_t* s_rdram;
static R5900Context* s_ctx;
static PS2Runtime* s_runtime;
static uint32_t s_comparAddr;
static uint32_t s_base;
static uint32_t s_size;
static PS2Runtime::RecompiledFunction s_comparFn;

static int compare_indices(const void* a, const void* b) {
    uint32_t i = *(const uint32_t*)a;
    uint32_t j = *(const uint32_t*)b;
    R5900Context tmp = *s_ctx;
    SET_GPR_U32(&tmp, 4, s_base + i * s_size);
    SET_GPR_U32(&tmp, 5, s_base + j * s_size);
    tmp.pc = s_comparAddr;
    s_comparFn(s_rdram, &tmp, s_runtime);
    return (int)(int32_t)getRegU32(&tmp, 2);
}

void qsort_0x2fb478(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    uint32_t __entryPc = ctx->pc;
    uint32_t base = getRegU32(ctx, 4);
    uint32_t nmemb = getRegU32(ctx, 5);
    uint32_t size = getRegU32(ctx, 6);
    uint32_t comparAddr = getRegU32(ctx, 7);

    if (!runtime || !runtime->hasFunction(comparAddr) || size == 0) {
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }
    if (nmemb <= 1) {
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }
    if (nmemb > MAX_QSORT_NMEMB) {
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }

    s_rdram = rdram;
    s_ctx = ctx;
    s_runtime = runtime;
    s_comparAddr = comparAddr;
    s_base = base;
    s_size = size;
    s_comparFn = runtime->lookupFunction(comparAddr);

    static uint32_t indices[MAX_QSORT_NMEMB];
    static uint8_t done[MAX_QSORT_NMEMB];
    uint32_t i;
    for (i = 0; i < nmemb; i++) {
        indices[i] = i;
        done[i] = 0;
    }

    qsort(indices, nmemb, sizeof(uint32_t), compare_indices);

    /* Apply permutation: element at slot indices[i] should end up at slot i. */
    uint8_t tmpBuf[MAX_QSORT_SIZE];
    uint8_t* tmp = size <= MAX_QSORT_SIZE ? tmpBuf : (uint8_t*)malloc(size);
    if (!tmp && size > MAX_QSORT_SIZE) {
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }

    for (i = 0; i < nmemb; i++) {
        if (done[i])
            continue;
        uint8_t* curPtr = getMemPtr(rdram, base + i * size);
        if (!curPtr)
            continue;
        memcpy(tmp, curPtr, size);
        uint32_t cur = i;
        for (;;) {
            done[cur] = 1;
            uint32_t next = indices[cur];
            if (next == i)
                break;
            uint8_t* dst = getMemPtr(rdram, base + cur * size);
            uint8_t* src = getMemPtr(rdram, base + next * size);
            if (dst && src)
                memcpy(dst, src, size);
            cur = next;
        }
        {
            uint8_t* dst = getMemPtr(rdram, base + cur * size);
            if (dst)
                memcpy(dst, tmp, size);
        }
    }

    if (size > MAX_QSORT_SIZE && tmp)
        free(tmp);

    if (ctx->pc == __entryPc)
        ctx->pc = getRegU32(ctx, 31);
}
