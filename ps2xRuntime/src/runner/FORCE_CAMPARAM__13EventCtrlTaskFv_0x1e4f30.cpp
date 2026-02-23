#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FORCE_CAMPARAM__13EventCtrlTaskFv
// Address: 0x1e4f30 - 0x1e4fb4
void FORCE_CAMPARAM__13EventCtrlTaskFv_0x1e4f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FORCE_CAMPARAM__13EventCtrlTaskFv");


    ctx->pc = 0x1e4f30u;

    // 0x1e4f30: 0x8c87000c
    ctx->pc = 0x1e4f30u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4f34: 0x24030001
    ctx->pc = 0x1e4f34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4f38: 0x8ce50008
    ctx->pc = 0x1e4f38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1e4f3c: 0x10a30010
    ctx->pc = 0x1E4F3Cu;
    {
        const bool branch_taken_0x1e4f3c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E4F40u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 4)));
        if (branch_taken_0x1e4f3c) {
            ctx->pc = 0x1E4F80u;
            goto label_1e4f80;
        }
    }
    ctx->pc = 0x1E4F44u;
    // 0x1e4f44: 0x10a00003
    ctx->pc = 0x1E4F44u;
    {
        const bool branch_taken_0x1e4f44 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e4f44) {
            ctx->pc = 0x1E4F54u;
            goto label_1e4f54;
        }
    }
    ctx->pc = 0x1E4F4Cu;
    // 0x1e4f4c: 0x10000016
    ctx->pc = 0x1E4F4Cu;
    {
        const bool branch_taken_0x1e4f4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4F50u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        if (branch_taken_0x1e4f4c) {
            ctx->pc = 0x1E4FA8u;
            goto label_1e4fa8;
        }
    }
    ctx->pc = 0x1E4F54u;
label_1e4f54:
    // 0x1e4f54: 0xc4e0000c
    ctx->pc = 0x1e4f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4f58: 0x61840
    ctx->pc = 0x1e4f58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e4f5c: 0x661821
    ctx->pc = 0x1e4f5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e4f60: 0x31880
    ctx->pc = 0x1e4f60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4f64: 0x661821
    ctx->pc = 0x1e4f64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e4f68: 0x8f858c48
    ctx->pc = 0x1e4f68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e4f6c: 0x46800020
    ctx->pc = 0x1e4f6cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1e4f70: 0x31900
    ctx->pc = 0x1e4f70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e4f74: 0x651821
    ctx->pc = 0x1e4f74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e4f78: 0x1000000a
    ctx->pc = 0x1E4F78u;
    {
        const bool branch_taken_0x1e4f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4F7Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
        if (branch_taken_0x1e4f78) {
            ctx->pc = 0x1E4FA4u;
            goto label_1e4fa4;
        }
    }
    ctx->pc = 0x1E4F80u;
label_1e4f80:
    // 0x1e4f80: 0x8f858c48
    ctx->pc = 0x1e4f80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e4f84: 0x61840
    ctx->pc = 0x1e4f84u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e4f88: 0x661821
    ctx->pc = 0x1e4f88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e4f8c: 0x31880
    ctx->pc = 0x1e4f8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4f90: 0x661821
    ctx->pc = 0x1e4f90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e4f94: 0x31900
    ctx->pc = 0x1e4f94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e4f98: 0xc4e0000c
    ctx->pc = 0x1e4f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4f9c: 0x651821
    ctx->pc = 0x1e4f9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e4fa0: 0xe46000c4
    ctx->pc = 0x1e4fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
label_1e4fa4:
    // 0x1e4fa4: 0x8c83000c
    ctx->pc = 0x1e4fa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e4fa8:
    // 0x1e4fa8: 0x24630010
    ctx->pc = 0x1e4fa8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e4fac: 0x3e00008
    ctx->pc = 0x1E4FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4FB0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4F54u: goto label_1e4f54;
            case 0x1E4F80u: goto label_1e4f80;
            case 0x1E4FA4u: goto label_1e4fa4;
            case 0x1E4FA8u: goto label_1e4fa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4FB4u;
}
