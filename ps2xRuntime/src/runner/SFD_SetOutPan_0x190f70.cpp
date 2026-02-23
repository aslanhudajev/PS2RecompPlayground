#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetOutPan
// Address: 0x190f70 - 0x190ff8
void SFD_SetOutPan_0x190f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetOutPan");


    ctx->pc = 0x190f70u;

label_190f70:
    // 0x190f70: 0x27bdffc0
    ctx->pc = 0x190f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_190f74:
    // 0x190f74: 0xffb00000
    ctx->pc = 0x190f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_190f78:
    // 0x190f78: 0xffb20020
    ctx->pc = 0x190f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_190f7c:
    // 0x190f7c: 0x80802d
    ctx->pc = 0x190f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190f80:
    // 0x190f80: 0xffb10010
    ctx->pc = 0x190f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_190f84:
    // 0x190f84: 0xc0902d
    ctx->pc = 0x190f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_190f88:
    // 0x190f88: 0xffbf0030
    ctx->pc = 0x190f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_190f8c:
    // 0x190f8c: 0xc064f1e
label_190f90:
    if (ctx->pc == 0x190F90u) {
        ctx->pc = 0x190F90u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190F94u;
        goto label_190f94;
    }
    ctx->pc = 0x190F8Cu;
    SET_GPR_U32(ctx, 31, 0x190F94u);
    ctx->pc = 0x190F90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F94u; }
        else if (ctx->pc != 0x190F94u) { ctx->pc = 0x190F94u; }
    }
    if (ctx->pc != 0x190F94u) { return; }
    ctx->pc = 0x190F94u;
label_190f94:
    // 0x190f94: 0x1040000a
label_190f98:
    if (ctx->pc == 0x190F98u) {
        ctx->pc = 0x190F98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190F9Cu;
        goto label_190f9c;
    }
    ctx->pc = 0x190F94u;
    {
        const bool branch_taken_0x190f94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x190F98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x190f94) {
            ctx->pc = 0x190FC0u;
            goto label_190fc0;
        }
    }
    ctx->pc = 0x190F9Cu;
label_190f9c:
    // 0x190f9c: 0x3c05ff00
    ctx->pc = 0x190f9cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_190fa0:
    // 0x190fa0: 0xdfbf0030
    ctx->pc = 0x190fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_190fa4:
    // 0x190fa4: 0xdfb20020
    ctx->pc = 0x190fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_190fa8:
    // 0x190fa8: 0x202d
    ctx->pc = 0x190fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190fac:
    // 0x190fac: 0xdfb10010
    ctx->pc = 0x190facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_190fb0:
    // 0x190fb0: 0x34a501a1
    ctx->pc = 0x190fb0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 417));
label_190fb4:
    // 0x190fb4: 0xdfb00000
    ctx->pc = 0x190fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190fb8:
    // 0x190fb8: 0x8064ea0
label_190fbc:
    if (ctx->pc == 0x190FBCu) {
        ctx->pc = 0x190FBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x190FC0u;
        goto label_190fc0;
    }
    ctx->pc = 0x190FB8u;
    ctx->pc = 0x190FBCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x193A80u;
    SFLIB_SetErr_0x193a80(rdram, ctx, runtime); return;
    ctx->pc = 0x190FC0u;
label_190fc0:
    // 0x190fc0: 0xc0674c2
label_190fc4:
    if (ctx->pc == 0x190FC4u) {
        ctx->pc = 0x190FC4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x190FC8u;
        goto label_190fc8;
    }
    ctx->pc = 0x190FC0u;
    SET_GPR_U32(ctx, 31, 0x190FC8u);
    ctx->pc = 0x190FC4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190FC8u; }
        else if (ctx->pc != 0x190FC8u) { ctx->pc = 0x190FC8u; }
    }
    if (ctx->pc != 0x190FC8u) { return; }
    ctx->pc = 0x190FC8u;
label_190fc8:
    // 0x190fc8: 0x10400005
label_190fcc:
    if (ctx->pc == 0x190FCCu) {
        ctx->pc = 0x190FCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190FD0u;
        goto label_190fd0;
    }
    ctx->pc = 0x190FC8u;
    {
        const bool branch_taken_0x190fc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x190FCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x190fc8) {
            ctx->pc = 0x190FE0u;
            goto label_190fe0;
        }
    }
    ctx->pc = 0x190FD0u;
label_190fd0:
    // 0x190fd0: 0x8e0259a4
    ctx->pc = 0x190fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 22948)));
label_190fd4:
    // 0x190fd4: 0x220282d
    ctx->pc = 0x190fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190fd8:
    // 0x190fd8: 0x40f809
label_190fdc:
    if (ctx->pc == 0x190FDCu) {
        ctx->pc = 0x190FDCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190FE0u;
        goto label_190fe0;
    }
    ctx->pc = 0x190FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190FE0u);
        ctx->pc = 0x190FDCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190F70u: goto label_190f70;
            case 0x190F74u: goto label_190f74;
            case 0x190F78u: goto label_190f78;
            case 0x190F7Cu: goto label_190f7c;
            case 0x190F80u: goto label_190f80;
            case 0x190F84u: goto label_190f84;
            case 0x190F88u: goto label_190f88;
            case 0x190F8Cu: goto label_190f8c;
            case 0x190F90u: goto label_190f90;
            case 0x190F94u: goto label_190f94;
            case 0x190F98u: goto label_190f98;
            case 0x190F9Cu: goto label_190f9c;
            case 0x190FA0u: goto label_190fa0;
            case 0x190FA4u: goto label_190fa4;
            case 0x190FA8u: goto label_190fa8;
            case 0x190FACu: goto label_190fac;
            case 0x190FB0u: goto label_190fb0;
            case 0x190FB4u: goto label_190fb4;
            case 0x190FB8u: goto label_190fb8;
            case 0x190FBCu: goto label_190fbc;
            case 0x190FC0u: goto label_190fc0;
            case 0x190FC4u: goto label_190fc4;
            case 0x190FC8u: goto label_190fc8;
            case 0x190FCCu: goto label_190fcc;
            case 0x190FD0u: goto label_190fd0;
            case 0x190FD4u: goto label_190fd4;
            case 0x190FD8u: goto label_190fd8;
            case 0x190FDCu: goto label_190fdc;
            case 0x190FE0u: goto label_190fe0;
            case 0x190FE4u: goto label_190fe4;
            case 0x190FE8u: goto label_190fe8;
            case 0x190FECu: goto label_190fec;
            case 0x190FF0u: goto label_190ff0;
            case 0x190FF4u: goto label_190ff4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x190FE0u; }
            if (ctx->pc != 0x190FE0u) { return; }
        }
    }
    ctx->pc = 0x190FE0u;
label_190fe0:
    // 0x190fe0: 0xdfbf0030
    ctx->pc = 0x190fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_190fe4:
    // 0x190fe4: 0xdfb20020
    ctx->pc = 0x190fe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_190fe8:
    // 0x190fe8: 0xdfb10010
    ctx->pc = 0x190fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_190fec:
    // 0x190fec: 0xdfb00000
    ctx->pc = 0x190fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190ff0:
    // 0x190ff0: 0x3e00008
label_190ff4:
    if (ctx->pc == 0x190FF4u) {
        ctx->pc = 0x190FF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x190FF8u;
        goto label_fallthrough_0x190ff0;
    }
    ctx->pc = 0x190FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190FF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190F70u: goto label_190f70;
            case 0x190F74u: goto label_190f74;
            case 0x190F78u: goto label_190f78;
            case 0x190F7Cu: goto label_190f7c;
            case 0x190F80u: goto label_190f80;
            case 0x190F84u: goto label_190f84;
            case 0x190F88u: goto label_190f88;
            case 0x190F8Cu: goto label_190f8c;
            case 0x190F90u: goto label_190f90;
            case 0x190F94u: goto label_190f94;
            case 0x190F98u: goto label_190f98;
            case 0x190F9Cu: goto label_190f9c;
            case 0x190FA0u: goto label_190fa0;
            case 0x190FA4u: goto label_190fa4;
            case 0x190FA8u: goto label_190fa8;
            case 0x190FACu: goto label_190fac;
            case 0x190FB0u: goto label_190fb0;
            case 0x190FB4u: goto label_190fb4;
            case 0x190FB8u: goto label_190fb8;
            case 0x190FBCu: goto label_190fbc;
            case 0x190FC0u: goto label_190fc0;
            case 0x190FC4u: goto label_190fc4;
            case 0x190FC8u: goto label_190fc8;
            case 0x190FCCu: goto label_190fcc;
            case 0x190FD0u: goto label_190fd0;
            case 0x190FD4u: goto label_190fd4;
            case 0x190FD8u: goto label_190fd8;
            case 0x190FDCu: goto label_190fdc;
            case 0x190FE0u: goto label_190fe0;
            case 0x190FE4u: goto label_190fe4;
            case 0x190FE8u: goto label_190fe8;
            case 0x190FECu: goto label_190fec;
            case 0x190FF0u: goto label_190ff0;
            case 0x190FF4u: goto label_190ff4;
            default: break;
        }
        return;
    }
label_fallthrough_0x190ff0:
    ctx->pc = 0x190FF8u;
}
