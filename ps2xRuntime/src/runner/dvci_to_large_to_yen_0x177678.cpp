#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvci_to_large_to_yen
// Address: 0x177678 - 0x1776f0
void dvci_to_large_to_yen_0x177678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvci_to_large_to_yen");


    ctx->pc = 0x177678u;

    // 0x177678: 0x27bdffe0
    ctx->pc = 0x177678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17767c: 0xffb00000
    ctx->pc = 0x17767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177680: 0xffbf0010
    ctx->pc = 0x177680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177684: 0xc051554
    ctx->pc = 0x177684u;
    SET_GPR_U32(ctx, 31, 0x17768Cu);
    ctx->pc = 0x177688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17768Cu; }
        else if (ctx->pc != 0x17768Cu) { ctx->pc = 0x17768Cu; }
    }
    if (ctx->pc != 0x17768Cu) { return; }
    ctx->pc = 0x17768Cu;
    // 0x17768c: 0x40302d
    ctx->pc = 0x17768cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177690: 0x10c00013
    ctx->pc = 0x177690u;
    {
        const bool branch_taken_0x177690 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x177694u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177690) {
            ctx->pc = 0x1776E0u;
            goto label_1776e0;
        }
    }
    ctx->pc = 0x177698u;
    // 0x177698: 0x200202d
    ctx->pc = 0x177698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17769c: 0x2408002f
    ctx->pc = 0x17769cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1776a0: 0x2407005c
    ctx->pc = 0x1776a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 92));
    // 0x1776a4: 0x0
    ctx->pc = 0x1776a4u;
    // NOP
label_1776a8:
    // 0x1776a8: 0x80820000
    ctx->pc = 0x1776a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1776ac: 0x14480003
    ctx->pc = 0x1776ACu;
    {
        const bool branch_taken_0x1776ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        ctx->pc = 0x1776B0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x1776ac) {
            ctx->pc = 0x1776BCu;
            goto label_1776bc;
        }
    }
    ctx->pc = 0x1776B4u;
    // 0x1776b4: 0xa0870000
    ctx->pc = 0x1776b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1776b8: 0xe0182d
    ctx->pc = 0x1776b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1776bc:
    // 0x1776bc: 0x2462ff9f
    ctx->pc = 0x1776bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x1776c0: 0x2c42001a
    ctx->pc = 0x1776c0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 26));
    // 0x1776c4: 0x10400002
    ctx->pc = 0x1776C4u;
    {
        const bool branch_taken_0x1776c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1776C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967264));
        if (branch_taken_0x1776c4) {
            ctx->pc = 0x1776D0u;
            goto label_1776d0;
        }
    }
    ctx->pc = 0x1776CCu;
    // 0x1776cc: 0xa0820000
    ctx->pc = 0x1776ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1776d0:
    // 0x1776d0: 0x24a50001
    ctx->pc = 0x1776d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1776d4: 0xa6102b
    ctx->pc = 0x1776d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1776d8: 0x1440fff3
    ctx->pc = 0x1776D8u;
    {
        const bool branch_taken_0x1776d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1776DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1776d8) {
            ctx->pc = 0x1776A8u;
            goto label_1776a8;
        }
    }
    ctx->pc = 0x1776E0u;
label_1776e0:
    // 0x1776e0: 0xdfbf0010
    ctx->pc = 0x1776e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1776e4: 0xdfb00000
    ctx->pc = 0x1776e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1776e8: 0x3e00008
    ctx->pc = 0x1776E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1776ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1776A8u: goto label_1776a8;
            case 0x1776BCu: goto label_1776bc;
            case 0x1776D0u: goto label_1776d0;
            case 0x1776E0u: goto label_1776e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1776F0u;
}
