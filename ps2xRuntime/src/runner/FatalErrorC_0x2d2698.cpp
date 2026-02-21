#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <iostream>
#include <cstdio>

// Function: FatalErrorC
// Address: 0x2d2698 - 0x2d26b8
void FatalErrorC_0x2d2698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int _fatalC_count = 0;
    ++_fatalC_count;

    ctx->pc = 0x2d2698u;

    uint32_t fmtAddr = GPR_U32(ctx, 4);
    uint32_t a1 = GPR_U32(ctx, 5), a2 = GPR_U32(ctx, 6), a3 = GPR_U32(ctx, 7);
    uint32_t ra = GPR_U32(ctx, 31), sp = GPR_U32(ctx, 29);

    const char* fmtStr = (const char*)(rdram + (fmtAddr & 0x1FFFFFF));
    char buf[512];
    snprintf(buf, sizeof(buf), fmtStr, a1, a2, a3);

    printf("[FatalErrorC #%d] ENTRY  ra=0x%x  sp=0x%x  fmt=0x%x  a1=0x%x  a2=0x%x  a3=0x%x\n",
        _fatalC_count, ra, sp, fmtAddr, a1, a2, a3);
    printf("[FatalErrorC #%d] FATAL ERROR: %s\n", _fatalC_count, buf);
    std::cerr << "[FatalErrorC] FATAL ERROR: " << buf << "\n";
    std::cerr << "  (format string at 0x" << std::hex << fmtAddr << ", args: a1=0x" << a1 << " a2=0x" << a2 << " a3=0x" << a3 << ")\n" << std::dec;

    // 0x2d2698: 0x27bdfff0
    ctx->pc = 0x2d2698u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d269c: 0xffbf0000
    ctx->pc = 0x2d269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d26a0: 0x3c020037
    ctx->pc = 0x2d26a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d26a4: 0xc0a9606
    ctx->pc = 0x2D26A4u;
    SET_GPR_U32(ctx, 31, 0x2D26ACu);
    ctx->pc = 0x2D26A8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 5));
    ctx->pc = 0x2A5818u;
    {
        const uint32_t __entryPc = ctx->pc;
        bulletproof_printf_0x2a5818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D26ACu; }
    }
    if (ctx->pc != 0x2D26ACu) { return; }
    ctx->pc = 0x2D26ACu;
    // 0x2d26ac: 0xdfbf0000
    ctx->pc = 0x2d26acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d26b0: 0x80a95b4
    ctx->pc = 0x2D26B0u;
    ctx->pc = 0x2D26B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    printf("[FatalErrorC #%d] calling pbErrorDie (then returns to caller)\n", _fatalC_count);
    ctx->pc = 0x2A56D0u;
    pbErrorDie_0x2a56d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2D26B8u;
}
