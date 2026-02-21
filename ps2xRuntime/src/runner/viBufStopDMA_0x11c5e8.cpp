#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufStopDMA
// Address: 0x11c5e8 - 0x11c6e8
void viBufStopDMA_0x11c5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c5e8u;

    // 0x11c5e8: 0x27bdffe0
    ctx->pc = 0x11c5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c5ec: 0xffb00000
    ctx->pc = 0x11c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c5f0: 0xffbf0010
    ctx->pc = 0x11c5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c5f4: 0x80802d
    ctx->pc = 0x11c5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5f8: 0xc0438b8
    ctx->pc = 0x11C5F8u;
    SET_GPR_U32(ctx, 31, 0x11C600u);
    ctx->pc = 0x11C5FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C600u; }
    }
    if (ctx->pc != 0x11C600u) { return; }
    ctx->pc = 0x11C600u;
    // 0x11c600: 0xae000044
    ctx->pc = 0x11c600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x11c604: 0xc04701c
    ctx->pc = 0x11C604u;
    SET_GPR_U32(ctx, 31, 0x11C60Cu);
    ctx->pc = 0x11C608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x11C070u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x11c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C60Cu; }
    }
    if (ctx->pc != 0x11C60Cu) { return; }
    ctx->pc = 0x11C60Cu;
    // 0x11c60c: 0x3c021000
    ctx->pc = 0x11c60cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11c610: 0x3c061000
    ctx->pc = 0x11c610u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x11c614: 0x3442b410
    ctx->pc = 0x11c614u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x11c618: 0x34c6b430
    ctx->pc = 0x11c618u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 46128));
    // 0x11c61c: 0x8c430000
    ctx->pc = 0x11c61cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x11c620: 0x3c041000
    ctx->pc = 0x11c620u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x11c624: 0x3484b420
    ctx->pc = 0x11c624u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46112));
    // 0x11c628: 0x3c051000
    ctx->pc = 0x11c628u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x11c62c: 0xae03001c
    ctx->pc = 0x11c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x11c630: 0x34a5b400
    ctx->pc = 0x11c630u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 46080));
    // 0x11c634: 0x3c071000
    ctx->pc = 0x11c634u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x11c638: 0x8cc30000
    ctx->pc = 0x11c638u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11c63c: 0x34e72010
    ctx->pc = 0x11c63cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 8208));
    // 0x11c640: 0xae030020
    ctx->pc = 0x11c640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x11c644: 0x8c820000
    ctx->pc = 0x11c644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c648: 0xae020024
    ctx->pc = 0x11c648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x11c64c: 0x8ca30000
    ctx->pc = 0x11c64cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11c650: 0xae030028
    ctx->pc = 0x11c650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x11c654: 0x0
    ctx->pc = 0x11c654u;
    // NOP
label_11c658:
    // 0x11c658: 0x8ce20000
    ctx->pc = 0x11c658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11c65c: 0x304200f0
    ctx->pc = 0x11c65cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 240));
    // 0x11c660: 0x0
    ctx->pc = 0x11c660u;
    // NOP
    // 0x11c664: 0x0
    ctx->pc = 0x11c664u;
    // NOP
    // 0x11c668: 0x0
    ctx->pc = 0x11c668u;
    // NOP
    // 0x11c66c: 0x1440fffa
    ctx->pc = 0x11C66Cu;
    {
        const bool branch_taken_0x11c66c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11c66c) {
            ctx->pc = 0x11C658u;
            goto label_11c658;
        }
    }
    ctx->pc = 0x11C674u;
    // 0x11c674: 0xc047002
    ctx->pc = 0x11C674u;
    SET_GPR_U32(ctx, 31, 0x11C67Cu);
    ctx->pc = 0x11C678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C008u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR_0x11c008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C67Cu; }
    }
    if (ctx->pc != 0x11C67Cu) { return; }
    ctx->pc = 0x11C67Cu;
    // 0x11c67c: 0x3c021000
    ctx->pc = 0x11c67cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11c680: 0x3c081000
    ctx->pc = 0x11c680u;
    SET_GPR_U32(ctx, 8, ((uint32_t)4096 << 16));
    // 0x11c684: 0x3442b010
    ctx->pc = 0x11c684u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45072));
    // 0x11c688: 0x3508b020
    ctx->pc = 0x11c688u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 45088));
    // 0x11c68c: 0x8c430000
    ctx->pc = 0x11c68cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x11c690: 0x3c061000
    ctx->pc = 0x11c690u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x11c694: 0x34c6b000
    ctx->pc = 0x11c694u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 45056));
    // 0x11c698: 0x3c071000
    ctx->pc = 0x11c698u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x11c69c: 0xae03002c
    ctx->pc = 0x11c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x11c6a0: 0x34e72020
    ctx->pc = 0x11c6a0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 8224));
    // 0x11c6a4: 0x3c051000
    ctx->pc = 0x11c6a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x11c6a8: 0x8e040040
    ctx->pc = 0x11c6a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c6ac: 0x8d030000
    ctx->pc = 0x11c6acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11c6b0: 0x34a52010
    ctx->pc = 0x11c6b0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 8208));
    // 0x11c6b4: 0xae030030
    ctx->pc = 0x11c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x11c6b8: 0x8cc20000
    ctx->pc = 0x11c6b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11c6bc: 0xae020034
    ctx->pc = 0x11c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x11c6c0: 0x8ce30000
    ctx->pc = 0x11c6c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11c6c4: 0xae030038
    ctx->pc = 0x11c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x11c6c8: 0x8ca20000
    ctx->pc = 0x11c6c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11c6cc: 0xc0438b0
    ctx->pc = 0x11C6CCu;
    SET_GPR_U32(ctx, 31, 0x11C6D4u);
    ctx->pc = 0x11C6D0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6D4u; }
    }
    if (ctx->pc != 0x11C6D4u) { return; }
    ctx->pc = 0x11C6D4u;
    // 0x11c6d4: 0xdfbf0010
    ctx->pc = 0x11c6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c6d8: 0x24020001
    ctx->pc = 0x11c6d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c6dc: 0xdfb00000
    ctx->pc = 0x11c6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c6e0: 0x3e00008
    ctx->pc = 0x11C6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C6E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C658u: goto label_11c658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C6E8u;
}
