#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"

#define FREEPSYS_ADDR  0x2c8fa0u
#define HEAD_ADDR      0x39aa44u
#define TAIL_ADDR      0x39aa40u
#define NEXT_OFFSET    0x24u

void freeQueuedPsys_0x2c9210(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    uint32_t __entryPc = ctx->pc;
    if (!runtime || !runtime->hasFunction(FREEPSYS_ADDR)) {
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }
    PS2Runtime::RecompiledFunction freePsysFn = runtime->lookupFunction(FREEPSYS_ADDR);
    uint32_t head = READ32(HEAD_ADDR);
    while (head != 0) {
        uint32_t next = READ32(ADD32(head, NEXT_OFFSET));
        SET_GPR_U32(ctx, 4, head);
        freePsysFn(rdram, ctx, runtime);
        head = next;
    }
    WRITE32(HEAD_ADDR, 0);
    WRITE32(TAIL_ADDR, 0);
    if (ctx->pc == __entryPc)
        ctx->pc = getRegU32(ctx, 31);
}
