#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitFlush
// Address: 0x125f00 - 0x125f98
void _sysbitFlush_0x125f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125f00u;

    // 0x125f00: 0x80302d
    ctx->pc = 0x125f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f04: 0xdcc20000
    ctx->pc = 0x125f04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x125f08: 0x8cc30010
    ctx->pc = 0x125f08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x125f0c: 0xa21014
    ctx->pc = 0x125f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x125f10: 0x651823
    ctx->pc = 0x125f10u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x125f14: 0xfcc20000
    ctx->pc = 0x125f14u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x125f18: 0x2c640039
    ctx->pc = 0x125f18u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 3), 57));
    // 0x125f1c: 0x10800019
    ctx->pc = 0x125F1Cu;
    {
        const bool branch_taken_0x125f1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x125F20u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x125f1c) {
            ctx->pc = 0x125F84u;
            goto label_125f84;
        }
    }
    ctx->pc = 0x125F24u;
    // 0x125f24: 0x8cc80024
    ctx->pc = 0x125f24u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x125f28: 0xa0482d
    ctx->pc = 0x125f28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f2c: 0xdcca0018
    ctx->pc = 0x125f2cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_125f30:
    // 0x125f30: 0x8cc5000c
    ctx->pc = 0x125f30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x125f34: 0x24020038
    ctx->pc = 0x125f34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
    // 0x125f38: 0x8cc70010
    ctx->pc = 0x125f38u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x125f3c: 0x90a30000
    ctx->pc = 0x125f3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x125f40: 0x471023
    ctx->pc = 0x125f40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x125f44: 0xdcc40000
    ctx->pc = 0x125f44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x125f48: 0x431814
    ctx->pc = 0x125f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x125f4c: 0x24a50001
    ctx->pc = 0x125f4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x125f50: 0x832025
    ctx->pc = 0x125f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x125f54: 0xa8102b
    ctx->pc = 0x125f54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x125f58: 0xfcc40000
    ctx->pc = 0x125f58u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x125f5c: 0x14400003
    ctx->pc = 0x125F5Cu;
    {
        const bool branch_taken_0x125f5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x125F60u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x125f5c) {
            ctx->pc = 0x125F6Cu;
            goto label_125f6c;
        }
    }
    ctx->pc = 0x125F64u;
    // 0x125f64: 0x8cc20020
    ctx->pc = 0x125f64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x125f68: 0xacc2000c
    ctx->pc = 0x125f68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_125f6c:
    // 0x125f6c: 0x24e20008
    ctx->pc = 0x125f6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 8));
    // 0x125f70: 0x2c430039
    ctx->pc = 0x125f70u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 57));
    // 0x125f74: 0x1460ffee
    ctx->pc = 0x125F74u;
    {
        const bool branch_taken_0x125f74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x125F78u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x125f74) {
            ctx->pc = 0x125F30u;
            goto label_125f30;
        }
    }
    ctx->pc = 0x125F7Cu;
    // 0x125f7c: 0x10000004
    ctx->pc = 0x125F7Cu;
    {
        const bool branch_taken_0x125f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125F80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
        if (branch_taken_0x125f7c) {
            ctx->pc = 0x125F90u;
            goto label_125f90;
        }
    }
    ctx->pc = 0x125F84u;
label_125f84:
    // 0x125f84: 0xdcca0018
    ctx->pc = 0x125f84u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x125f88: 0xa0482d
    ctx->pc = 0x125f88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f8c: 0x149102d
    ctx->pc = 0x125f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
label_125f90:
    // 0x125f90: 0x3e00008
    ctx->pc = 0x125F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125F94u;
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125F30u: goto label_125f30;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F84u: goto label_125f84;
            case 0x125F90u: goto label_125f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125F98u;
}
