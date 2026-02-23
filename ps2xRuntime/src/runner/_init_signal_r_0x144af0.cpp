#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _init_signal_r
// Address: 0x144af0 - 0x144b60
void _init_signal_r_0x144af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_init_signal_r");


    ctx->pc = 0x144af0u;

    // 0x144af0: 0x27bdffe0
    ctx->pc = 0x144af0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144af4: 0xffb00000
    ctx->pc = 0x144af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144af8: 0xffbf0010
    ctx->pc = 0x144af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x144afc: 0x80802d
    ctx->pc = 0x144afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b00: 0x8e0201d4
    ctx->pc = 0x144b00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x144b04: 0x14400012
    ctx->pc = 0x144B04u;
    {
        const bool branch_taken_0x144b04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x144B08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x144b04) {
            ctx->pc = 0x144B50u;
            goto label_144b50;
        }
    }
    ctx->pc = 0x144B0Cu;
    // 0x144b0c: 0xc050a44
    ctx->pc = 0x144B0Cu;
    SET_GPR_U32(ctx, 31, 0x144B14u);
    ctx->pc = 0x144B10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x142910u;
    {
        const uint32_t __entryPc = ctx->pc;
        _malloc_r_0x142910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B14u; }
        else if (ctx->pc != 0x144B14u) { ctx->pc = 0x144B14u; }
    }
    if (ctx->pc != 0x144B14u) { return; }
    ctx->pc = 0x144B14u;
    // 0x144b14: 0x14400003
    ctx->pc = 0x144B14u;
    {
        const bool branch_taken_0x144b14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x144B18u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        if (branch_taken_0x144b14) {
            ctx->pc = 0x144B24u;
            goto label_144b24;
        }
    }
    ctx->pc = 0x144B1Cu;
    // 0x144b1c: 0x1000000c
    ctx->pc = 0x144B1Cu;
    {
        const bool branch_taken_0x144b1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144B20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x144b1c) {
            ctx->pc = 0x144B50u;
            goto label_144b50;
        }
    }
    ctx->pc = 0x144B24u;
label_144b24:
    // 0x144b24: 0x2442007c
    ctx->pc = 0x144b24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 124));
    // 0x144b28: 0x2403001f
    ctx->pc = 0x144b28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x144b2c: 0x0
    ctx->pc = 0x144b2cu;
    // NOP
label_144b30:
    // 0x144b30: 0xac400000
    ctx->pc = 0x144b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x144b34: 0x2463ffff
    ctx->pc = 0x144b34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x144b38: 0x2442fffc
    ctx->pc = 0x144b38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x144b3c: 0x0
    ctx->pc = 0x144b3cu;
    // NOP
    // 0x144b40: 0x0
    ctx->pc = 0x144b40u;
    // NOP
    // 0x144b44: 0x461fffa
    ctx->pc = 0x144B44u;
    {
        const bool branch_taken_0x144b44 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x144b44) {
            ctx->pc = 0x144B30u;
            goto label_144b30;
        }
    }
    ctx->pc = 0x144B4Cu;
    // 0x144b4c: 0x102d
    ctx->pc = 0x144b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144b50:
    // 0x144b50: 0xdfbf0010
    ctx->pc = 0x144b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144b54: 0xdfb00000
    ctx->pc = 0x144b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144b58: 0x3e00008
    ctx->pc = 0x144B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144B5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144B24u: goto label_144b24;
            case 0x144B30u: goto label_144b30;
            case 0x144B50u: goto label_144b50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144B60u;
}
