#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setCursorColor__Fi
// Address: 0x1f4f60 - 0x1f5040
void setCursorColor__Fi_0x1f4f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setCursorColor__Fi");


    ctx->pc = 0x1f4f60u;

    // 0x1f4f60: 0x27bdfff0
    ctx->pc = 0x1f4f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4f64: 0x24020003
    ctx->pc = 0x1f4f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4f68: 0x10820024
    ctx->pc = 0x1F4F68u;
    {
        const bool branch_taken_0x1f4f68 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F4F6Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1f4f68) {
            ctx->pc = 0x1F4FFCu;
            goto label_1f4ffc;
        }
    }
    ctx->pc = 0x1F4F70u;
    // 0x1f4f70: 0x24020002
    ctx->pc = 0x1f4f70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4f74: 0x10820013
    ctx->pc = 0x1F4F74u;
    {
        const bool branch_taken_0x1f4f74 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F4F78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f4f74) {
            ctx->pc = 0x1F4FC4u;
            goto label_1f4fc4;
        }
    }
    ctx->pc = 0x1F4F7Cu;
    // 0x1f4f7c: 0x10820003
    ctx->pc = 0x1F4F7Cu;
    {
        const bool branch_taken_0x1f4f7c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f4f7c) {
            ctx->pc = 0x1F4F8Cu;
            goto label_1f4f8c;
        }
    }
    ctx->pc = 0x1F4F84u;
    // 0x1f4f84: 0x10000029
    ctx->pc = 0x1F4F84u;
    {
        const bool branch_taken_0x1f4f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4f84) {
            ctx->pc = 0x1F502Cu;
            goto label_1f502c;
        }
    }
    ctx->pc = 0x1F4F8Cu;
label_1f4f8c:
    // 0x1f4f8c: 0x8f828be4
    ctx->pc = 0x1f4f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x1f4f90: 0x30420010
    ctx->pc = 0x1f4f90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x1f4f94: 0x10400006
    ctx->pc = 0x1F4F94u;
    {
        const bool branch_taken_0x1f4f94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4F98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1f4f94) {
            ctx->pc = 0x1F4FB0u;
            goto label_1f4fb0;
        }
    }
    ctx->pc = 0x1F4F9Cu;
    // 0x1f4f9c: 0x3c023f80
    ctx->pc = 0x1f4f9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1f4fa0: 0x44806800
    ctx->pc = 0x1f4fa0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1f4fa4: 0x44826000
    ctx->pc = 0x1f4fa4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1f4fa8: 0x10000020
    ctx->pc = 0x1F4FA8u;
    {
        const bool branch_taken_0x1f4fa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4FACu;
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x1f4fa8) {
            ctx->pc = 0x1F502Cu;
            goto label_1f502c;
        }
    }
    ctx->pc = 0x1F4FB0u;
label_1f4fb0:
    // 0x1f4fb0: 0x44826000
    ctx->pc = 0x1f4fb0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1f4fb4: 0x0
    ctx->pc = 0x1f4fb4u;
    // NOP
    // 0x1f4fb8: 0x46006346
    ctx->pc = 0x1f4fb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1f4fbc: 0x1000001b
    ctx->pc = 0x1F4FBCu;
    {
        const bool branch_taken_0x1f4fbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4FC0u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1f4fbc) {
            ctx->pc = 0x1F502Cu;
            goto label_1f502c;
        }
    }
    ctx->pc = 0x1F4FC4u;
label_1f4fc4:
    // 0x1f4fc4: 0x8f828be4
    ctx->pc = 0x1f4fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x1f4fc8: 0x30420010
    ctx->pc = 0x1f4fc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x1f4fcc: 0x10400006
    ctx->pc = 0x1F4FCCu;
    {
        const bool branch_taken_0x1f4fcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4FD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1f4fcc) {
            ctx->pc = 0x1F4FE8u;
            goto label_1f4fe8;
        }
    }
    ctx->pc = 0x1F4FD4u;
    // 0x1f4fd4: 0x44806000
    ctx->pc = 0x1f4fd4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1f4fd8: 0x3c023f80
    ctx->pc = 0x1f4fd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1f4fdc: 0x44827000
    ctx->pc = 0x1f4fdcu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x1f4fe0: 0x10000012
    ctx->pc = 0x1F4FE0u;
    {
        const bool branch_taken_0x1f4fe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4FE4u;
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1f4fe0) {
            ctx->pc = 0x1F502Cu;
            goto label_1f502c;
        }
    }
    ctx->pc = 0x1F4FE8u;
label_1f4fe8:
    // 0x1f4fe8: 0x44826000
    ctx->pc = 0x1f4fe8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1f4fec: 0x0
    ctx->pc = 0x1f4fecu;
    // NOP
    // 0x1f4ff0: 0x46006346
    ctx->pc = 0x1f4ff0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1f4ff4: 0x1000000d
    ctx->pc = 0x1F4FF4u;
    {
        const bool branch_taken_0x1f4ff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4FF8u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1f4ff4) {
            ctx->pc = 0x1F502Cu;
            goto label_1f502c;
        }
    }
    ctx->pc = 0x1F4FFCu;
label_1f4ffc:
    // 0x1f4ffc: 0x8f828be4
    ctx->pc = 0x1f4ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x1f5000: 0x30420010
    ctx->pc = 0x1f5000u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x1f5004: 0x10400005
    ctx->pc = 0x1F5004u;
    {
        const bool branch_taken_0x1f5004 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5008u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1f5004) {
            ctx->pc = 0x1F501Cu;
            goto label_1f501c;
        }
    }
    ctx->pc = 0x1F500Cu;
    // 0x1f500c: 0x44806800
    ctx->pc = 0x1f500cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1f5010: 0x44826000
    ctx->pc = 0x1f5010u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1f5014: 0x10000005
    ctx->pc = 0x1F5014u;
    {
        const bool branch_taken_0x1f5014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5018u;
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x1f5014) {
            ctx->pc = 0x1F502Cu;
            goto label_1f502c;
        }
    }
    ctx->pc = 0x1F501Cu;
label_1f501c:
    // 0x1f501c: 0x44806000
    ctx->pc = 0x1f501cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1f5020: 0x3c023f80
    ctx->pc = 0x1f5020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1f5024: 0x44827000
    ctx->pc = 0x1f5024u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x1f5028: 0x46006346
    ctx->pc = 0x1f5028u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1f502c:
    // 0x1f502c: 0xc06aa80
    ctx->pc = 0x1F502Cu;
    SET_GPR_U32(ctx, 31, 0x1F5034u);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5034u; }
        else if (ctx->pc != 0x1F5034u) { ctx->pc = 0x1F5034u; }
    }
    if (ctx->pc != 0x1F5034u) { return; }
    ctx->pc = 0x1F5034u;
    // 0x1f5034: 0x7bbf0000
    ctx->pc = 0x1f5034u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5038: 0x3e00008
    ctx->pc = 0x1F5038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F503Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4F8Cu: goto label_1f4f8c;
            case 0x1F4FB0u: goto label_1f4fb0;
            case 0x1F4FC4u: goto label_1f4fc4;
            case 0x1F4FE8u: goto label_1f4fe8;
            case 0x1F4FFCu: goto label_1f4ffc;
            case 0x1F501Cu: goto label_1f501c;
            case 0x1F502Cu: goto label_1f502c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F5040u;
}
