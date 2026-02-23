#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PlScoreDispChk__Fs
// Address: 0x20dd00 - 0x20ddac
void PlScoreDispChk__Fs_0x20dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PlScoreDispChk__Fs");


    ctx->pc = 0x20dd00u;

    // 0x20dd00: 0x27bdfff0
    ctx->pc = 0x20dd00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20dd04: 0x7fbf0000
    ctx->pc = 0x20dd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20dd08: 0x8f838c04
    ctx->pc = 0x20dd08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937604)));
    // 0x20dd0c: 0x10600024
    ctx->pc = 0x20DD0Cu;
    {
        const bool branch_taken_0x20dd0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DD10u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x20dd0c) {
            ctx->pc = 0x20DDA0u;
            goto label_20dda0;
        }
    }
    ctx->pc = 0x20DD14u;
    // 0x20dd14: 0x8425e504
    ctx->pc = 0x20dd14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20dd18: 0x2403000a
    ctx->pc = 0x20dd18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20dd1c: 0x14a30020
    ctx->pc = 0x20DD1Cu;
    {
        const bool branch_taken_0x20dd1c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x20dd1c) {
            ctx->pc = 0x20DDA0u;
            goto label_20dda0;
        }
    }
    ctx->pc = 0x20DD24u;
    // 0x20dd24: 0x8f838b68
    ctx->pc = 0x20dd24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x20dd28: 0x1060001d
    ctx->pc = 0x20DD28u;
    {
        const bool branch_taken_0x20dd28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20dd28) {
            ctx->pc = 0x20DDA0u;
            goto label_20dda0;
        }
    }
    ctx->pc = 0x20DD30u;
    // 0x20dd30: 0x97838bf4
    ctx->pc = 0x20dd30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
    // 0x20dd34: 0x1460001a
    ctx->pc = 0x20DD34u;
    {
        const bool branch_taken_0x20dd34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20dd34) {
            ctx->pc = 0x20DDA0u;
            goto label_20dda0;
        }
    }
    ctx->pc = 0x20DD3Cu;
    // 0x20dd3c: 0x83858b90
    ctx->pc = 0x20dd3cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x20dd40: 0x24030010
    ctx->pc = 0x20dd40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x20dd44: 0x50a3000d
    ctx->pc = 0x20DD44u;
    {
        const bool branch_taken_0x20dd44 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x20dd44) {
            ctx->pc = 0x20DD48u;
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
            ctx->pc = 0x20DD7Cu;
            goto label_20dd7c;
        }
    }
    ctx->pc = 0x20DD4Cu;
    // 0x20dd4c: 0x2403000f
    ctx->pc = 0x20dd4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x20dd50: 0x10a30009
    ctx->pc = 0x20DD50u;
    {
        const bool branch_taken_0x20dd50 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x20DD54u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x20dd50) {
            ctx->pc = 0x20DD78u;
            goto label_20dd78;
        }
    }
    ctx->pc = 0x20DD58u;
    // 0x20dd58: 0x10a30007
    ctx->pc = 0x20DD58u;
    {
        const bool branch_taken_0x20dd58 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x20DD5Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x20dd58) {
            ctx->pc = 0x20DD78u;
            goto label_20dd78;
        }
    }
    ctx->pc = 0x20DD60u;
    // 0x20dd60: 0x10a30005
    ctx->pc = 0x20DD60u;
    {
        const bool branch_taken_0x20dd60 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x20DD64u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x20dd60) {
            ctx->pc = 0x20DD78u;
            goto label_20dd78;
        }
    }
    ctx->pc = 0x20DD68u;
    // 0x20dd68: 0x10a30003
    ctx->pc = 0x20DD68u;
    {
        const bool branch_taken_0x20dd68 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x20dd68) {
            ctx->pc = 0x20DD78u;
            goto label_20dd78;
        }
    }
    ctx->pc = 0x20DD70u;
    // 0x20dd70: 0x1000000c
    ctx->pc = 0x20DD70u;
    {
        const bool branch_taken_0x20dd70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DD74u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x20dd70) {
            ctx->pc = 0x20DDA4u;
            goto label_20dda4;
        }
    }
    ctx->pc = 0x20DD78u;
label_20dd78:
    // 0x20dd78: 0x42c3c
    ctx->pc = 0x20dd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_20dd7c:
    // 0x20dd7c: 0x52c3f
    ctx->pc = 0x20dd7cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x20dd80: 0x24030008
    ctx->pc = 0x20dd80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x20dd84: 0x24020204
    ctx->pc = 0x20dd84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 516));
    // 0x20dd88: 0x45180b
    ctx->pc = 0x20dd88u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x20dd8c: 0x44830000
    ctx->pc = 0x20dd8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x20dd90: 0x3c024100
    ctx->pc = 0x20dd90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16640 << 16));
    // 0x20dd94: 0x44826800
    ctx->pc = 0x20dd94u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x20dd98: 0xc0836f0
    ctx->pc = 0x20DD98u;
    SET_GPR_U32(ctx, 31, 0x20DDA0u);
    ctx->pc = 0x20DD9Cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x20DBC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlScoreDisp__Fsff_0x20dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDA0u; }
        else if (ctx->pc != 0x20DDA0u) { ctx->pc = 0x20DDA0u; }
    }
    if (ctx->pc != 0x20DDA0u) { return; }
    ctx->pc = 0x20DDA0u;
label_20dda0:
    // 0x20dda0: 0x7bbf0000
    ctx->pc = 0x20dda0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20dda4:
    // 0x20dda4: 0x3e00008
    ctx->pc = 0x20DDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DDA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DD78u: goto label_20dd78;
            case 0x20DD7Cu: goto label_20dd7c;
            case 0x20DDA0u: goto label_20dda0;
            case 0x20DDA4u: goto label_20dda4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DDACu;
}
