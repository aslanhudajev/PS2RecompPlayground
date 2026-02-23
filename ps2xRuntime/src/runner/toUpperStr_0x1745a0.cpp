#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: toUpperStr
// Address: 0x1745a0 - 0x174600
void toUpperStr_0x1745a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("toUpperStr");


    ctx->pc = 0x1745a0u;

    // 0x1745a0: 0x27bdffe0
    ctx->pc = 0x1745a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1745a4: 0xffb00000
    ctx->pc = 0x1745a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1745a8: 0xffbf0010
    ctx->pc = 0x1745a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1745ac: 0xc051554
    ctx->pc = 0x1745ACu;
    SET_GPR_U32(ctx, 31, 0x1745B4u);
    ctx->pc = 0x1745B0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1745B4u; }
        else if (ctx->pc != 0x1745B4u) { ctx->pc = 0x1745B4u; }
    }
    if (ctx->pc != 0x1745B4u) { return; }
    ctx->pc = 0x1745B4u;
    // 0x1745b4: 0x24420001
    ctx->pc = 0x1745b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1745b8: 0x1040000d
    ctx->pc = 0x1745B8u;
    {
        const bool branch_taken_0x1745b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1745BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1745b8) {
            ctx->pc = 0x1745F0u;
            goto label_1745f0;
        }
    }
    ctx->pc = 0x1745C0u;
    // 0x1745c0: 0x40302d
    ctx->pc = 0x1745c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1745c4: 0x200202d
    ctx->pc = 0x1745c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1745c8:
    // 0x1745c8: 0x90830000
    ctx->pc = 0x1745c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1745cc: 0x2462ff9f
    ctx->pc = 0x1745ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x1745d0: 0x2c42001a
    ctx->pc = 0x1745d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 26));
    // 0x1745d4: 0x10400002
    ctx->pc = 0x1745D4u;
    {
        const bool branch_taken_0x1745d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1745D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967264));
        if (branch_taken_0x1745d4) {
            ctx->pc = 0x1745E0u;
            goto label_1745e0;
        }
    }
    ctx->pc = 0x1745DCu;
    // 0x1745dc: 0xa0820000
    ctx->pc = 0x1745dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1745e0:
    // 0x1745e0: 0x24a50001
    ctx->pc = 0x1745e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1745e4: 0xa6102b
    ctx->pc = 0x1745e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1745e8: 0x1440fff7
    ctx->pc = 0x1745E8u;
    {
        const bool branch_taken_0x1745e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1745ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1745e8) {
            ctx->pc = 0x1745C8u;
            goto label_1745c8;
        }
    }
    ctx->pc = 0x1745F0u;
label_1745f0:
    // 0x1745f0: 0xdfbf0010
    ctx->pc = 0x1745f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1745f4: 0xdfb00000
    ctx->pc = 0x1745f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1745f8: 0x3e00008
    ctx->pc = 0x1745F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1745FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1745C8u: goto label_1745c8;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745F0u: goto label_1745f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174600u;
}
