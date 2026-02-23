#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryEvent__11DofCtrlTaskFPUi
// Address: 0x1d4e40 - 0x1d4f0c
void entryEvent__11DofCtrlTaskFPUi_0x1d4e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryEvent__11DofCtrlTaskFPUi");


    ctx->pc = 0x1d4e40u;

label_1d4e40:
    // 0x1d4e40: 0x27bdfff0
    ctx->pc = 0x1d4e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d4e44:
    // 0x1d4e44: 0x7fbf0000
    ctx->pc = 0x1d4e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1d4e48:
    // 0x1d4e48: 0x8ca20004
    ctx->pc = 0x1d4e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1d4e4c:
    // 0x1d4e4c: 0x2c410008
    ctx->pc = 0x1d4e4cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 8));
label_1d4e50:
    // 0x1d4e50: 0x10200007
label_1d4e54:
    if (ctx->pc == 0x1D4E54u) {
        ctx->pc = 0x1D4E54u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        ctx->pc = 0x1D4E58u;
        goto label_1d4e58;
    }
    ctx->pc = 0x1D4E50u;
    {
        const bool branch_taken_0x1d4e50 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4E54u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x1d4e50) {
            ctx->pc = 0x1D4E70u;
            goto label_1d4e70;
        }
    }
    ctx->pc = 0x1D4E58u;
label_1d4e58:
    // 0x1d4e58: 0x21080
    ctx->pc = 0x1d4e58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1d4e5c:
    // 0x1d4e5c: 0x2463e720
    ctx->pc = 0x1d4e5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960928));
label_1d4e60:
    // 0x1d4e60: 0x431021
    ctx->pc = 0x1d4e60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d4e64:
    // 0x1d4e64: 0x8c420000
    ctx->pc = 0x1d4e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d4e68:
    // 0x1d4e68: 0x400008
label_1d4e6c:
    if (ctx->pc == 0x1D4E6Cu) {
        ctx->pc = 0x1D4E70u;
        goto label_1d4e70;
    }
    ctx->pc = 0x1D4E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4E40u: goto label_1d4e40;
            case 0x1D4E44u: goto label_1d4e44;
            case 0x1D4E48u: goto label_1d4e48;
            case 0x1D4E4Cu: goto label_1d4e4c;
            case 0x1D4E50u: goto label_1d4e50;
            case 0x1D4E54u: goto label_1d4e54;
            case 0x1D4E58u: goto label_1d4e58;
            case 0x1D4E5Cu: goto label_1d4e5c;
            case 0x1D4E60u: goto label_1d4e60;
            case 0x1D4E64u: goto label_1d4e64;
            case 0x1D4E68u: goto label_1d4e68;
            case 0x1D4E6Cu: goto label_1d4e6c;
            case 0x1D4E70u: goto label_1d4e70;
            case 0x1D4E74u: goto label_1d4e74;
            case 0x1D4E78u: goto label_1d4e78;
            case 0x1D4E7Cu: goto label_1d4e7c;
            case 0x1D4E80u: goto label_1d4e80;
            case 0x1D4E84u: goto label_1d4e84;
            case 0x1D4E88u: goto label_1d4e88;
            case 0x1D4E8Cu: goto label_1d4e8c;
            case 0x1D4E90u: goto label_1d4e90;
            case 0x1D4E94u: goto label_1d4e94;
            case 0x1D4E98u: goto label_1d4e98;
            case 0x1D4E9Cu: goto label_1d4e9c;
            case 0x1D4EA0u: goto label_1d4ea0;
            case 0x1D4EA4u: goto label_1d4ea4;
            case 0x1D4EA8u: goto label_1d4ea8;
            case 0x1D4EACu: goto label_1d4eac;
            case 0x1D4EB0u: goto label_1d4eb0;
            case 0x1D4EB4u: goto label_1d4eb4;
            case 0x1D4EB8u: goto label_1d4eb8;
            case 0x1D4EBCu: goto label_1d4ebc;
            case 0x1D4EC0u: goto label_1d4ec0;
            case 0x1D4EC4u: goto label_1d4ec4;
            case 0x1D4EC8u: goto label_1d4ec8;
            case 0x1D4ECCu: goto label_1d4ecc;
            case 0x1D4ED0u: goto label_1d4ed0;
            case 0x1D4ED4u: goto label_1d4ed4;
            case 0x1D4ED8u: goto label_1d4ed8;
            case 0x1D4EDCu: goto label_1d4edc;
            case 0x1D4EE0u: goto label_1d4ee0;
            case 0x1D4EE4u: goto label_1d4ee4;
            case 0x1D4EE8u: goto label_1d4ee8;
            case 0x1D4EECu: goto label_1d4eec;
            case 0x1D4EF0u: goto label_1d4ef0;
            case 0x1D4EF4u: goto label_1d4ef4;
            case 0x1D4EF8u: goto label_1d4ef8;
            case 0x1D4EFCu: goto label_1d4efc;
            case 0x1D4F00u: goto label_1d4f00;
            case 0x1D4F04u: goto label_1d4f04;
            case 0x1D4F08u: goto label_1d4f08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D4E70u;
label_1d4e70:
    // 0x1d4e70: 0xc0753c4
label_1d4e74:
    if (ctx->pc == 0x1D4E74u) {
        ctx->pc = 0x1D4E78u;
        goto label_1d4e78;
    }
    ctx->pc = 0x1D4E70u;
    SET_GPR_U32(ctx, 31, 0x1D4E78u);
    ctx->pc = 0x1D4F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        eMTXDOF__11DofCtrlTaskFPUi_0x1d4f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E78u; }
        else if (ctx->pc != 0x1D4E78u) { ctx->pc = 0x1D4E78u; }
    }
    if (ctx->pc != 0x1D4E78u) { return; }
    ctx->pc = 0x1D4E78u;
label_1d4e78:
    // 0x1d4e78: 0x10000022
label_1d4e7c:
    if (ctx->pc == 0x1D4E7Cu) {
        ctx->pc = 0x1D4E7Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1D4E80u;
        goto label_1d4e80;
    }
    ctx->pc = 0x1D4E78u;
    {
        const bool branch_taken_0x1d4e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4E7Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1d4e78) {
            ctx->pc = 0x1D4F04u;
            goto label_1d4f04;
        }
    }
    ctx->pc = 0x1D4E80u;
label_1d4e80:
    // 0x1d4e80: 0xc0753e0
label_1d4e84:
    if (ctx->pc == 0x1D4E84u) {
        ctx->pc = 0x1D4E88u;
        goto label_1d4e88;
    }
    ctx->pc = 0x1D4E80u;
    SET_GPR_U32(ctx, 31, 0x1D4E88u);
    ctx->pc = 0x1D4F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        eENBDOF__11DofCtrlTaskFPUi_0x1d4f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E88u; }
        else if (ctx->pc != 0x1D4E88u) { ctx->pc = 0x1D4E88u; }
    }
    if (ctx->pc != 0x1D4E88u) { return; }
    ctx->pc = 0x1D4E88u;
label_1d4e88:
    // 0x1d4e88: 0x1000001d
label_1d4e8c:
    if (ctx->pc == 0x1D4E8Cu) {
        ctx->pc = 0x1D4E90u;
        goto label_1d4e90;
    }
    ctx->pc = 0x1D4E88u;
    {
        const bool branch_taken_0x1d4e88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4e88) {
            ctx->pc = 0x1D4F00u;
            goto label_1d4f00;
        }
    }
    ctx->pc = 0x1D4E90u;
label_1d4e90:
    // 0x1d4e90: 0x24060001
    ctx->pc = 0x1d4e90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_1d4e94:
    // 0x1d4e94: 0xc0753ec
label_1d4e98:
    if (ctx->pc == 0x1D4E98u) {
        ctx->pc = 0x1D4E98u;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D4E9Cu;
        goto label_1d4e9c;
    }
    ctx->pc = 0x1D4E94u;
    SET_GPR_U32(ctx, 31, 0x1D4E9Cu);
    ctx->pc = 0x1D4E98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D4FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        eSETDOF__11DofCtrlTaskFPUiii_0x1d4fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E9Cu; }
        else if (ctx->pc != 0x1D4E9Cu) { ctx->pc = 0x1D4E9Cu; }
    }
    if (ctx->pc != 0x1D4E9Cu) { return; }
    ctx->pc = 0x1D4E9Cu;
label_1d4e9c:
    // 0x1d4e9c: 0x10000018
label_1d4ea0:
    if (ctx->pc == 0x1D4EA0u) {
        ctx->pc = 0x1D4EA4u;
        goto label_1d4ea4;
    }
    ctx->pc = 0x1D4E9Cu;
    {
        const bool branch_taken_0x1d4e9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4e9c) {
            ctx->pc = 0x1D4F00u;
            goto label_1d4f00;
        }
    }
    ctx->pc = 0x1D4EA4u;
label_1d4ea4:
    // 0x1d4ea4: 0x24060001
    ctx->pc = 0x1d4ea4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_1d4ea8:
    // 0x1d4ea8: 0xc0753ec
label_1d4eac:
    if (ctx->pc == 0x1D4EACu) {
        ctx->pc = 0x1D4EACu;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D4EB0u;
        goto label_1d4eb0;
    }
    ctx->pc = 0x1D4EA8u;
    SET_GPR_U32(ctx, 31, 0x1D4EB0u);
    ctx->pc = 0x1D4EACu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D4FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        eSETDOF__11DofCtrlTaskFPUiii_0x1d4fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EB0u; }
        else if (ctx->pc != 0x1D4EB0u) { ctx->pc = 0x1D4EB0u; }
    }
    if (ctx->pc != 0x1D4EB0u) { return; }
    ctx->pc = 0x1D4EB0u;
label_1d4eb0:
    // 0x1d4eb0: 0x10000013
label_1d4eb4:
    if (ctx->pc == 0x1D4EB4u) {
        ctx->pc = 0x1D4EB8u;
        goto label_1d4eb8;
    }
    ctx->pc = 0x1D4EB0u;
    {
        const bool branch_taken_0x1d4eb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4eb0) {
            ctx->pc = 0x1D4F00u;
            goto label_1d4f00;
        }
    }
    ctx->pc = 0x1D4EB8u;
label_1d4eb8:
    // 0x1d4eb8: 0x70003628
    ctx->pc = 0x1d4eb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d4ebc:
    // 0x1d4ebc: 0xc0753ec
label_1d4ec0:
    if (ctx->pc == 0x1D4EC0u) {
        ctx->pc = 0x1D4EC0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D4EC4u;
        goto label_1d4ec4;
    }
    ctx->pc = 0x1D4EBCu;
    SET_GPR_U32(ctx, 31, 0x1D4EC4u);
    ctx->pc = 0x1D4EC0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D4FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        eSETDOF__11DofCtrlTaskFPUiii_0x1d4fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EC4u; }
        else if (ctx->pc != 0x1D4EC4u) { ctx->pc = 0x1D4EC4u; }
    }
    if (ctx->pc != 0x1D4EC4u) { return; }
    ctx->pc = 0x1D4EC4u;
label_1d4ec4:
    // 0x1d4ec4: 0x1000000e
label_1d4ec8:
    if (ctx->pc == 0x1D4EC8u) {
        ctx->pc = 0x1D4ECCu;
        goto label_1d4ecc;
    }
    ctx->pc = 0x1D4EC4u;
    {
        const bool branch_taken_0x1d4ec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4ec4) {
            ctx->pc = 0x1D4F00u;
            goto label_1d4f00;
        }
    }
    ctx->pc = 0x1D4ECCu;
label_1d4ecc:
    // 0x1d4ecc: 0x24060001
    ctx->pc = 0x1d4eccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_1d4ed0:
    // 0x1d4ed0: 0xc07540c
label_1d4ed4:
    if (ctx->pc == 0x1D4ED4u) {
        ctx->pc = 0x1D4ED4u;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D4ED8u;
        goto label_1d4ed8;
    }
    ctx->pc = 0x1D4ED0u;
    SET_GPR_U32(ctx, 31, 0x1D4ED8u);
    ctx->pc = 0x1D4ED4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5030u;
    {
        const uint32_t __entryPc = ctx->pc;
        eCHGDOF__11DofCtrlTaskFPUiii_0x1d5030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4ED8u; }
        else if (ctx->pc != 0x1D4ED8u) { ctx->pc = 0x1D4ED8u; }
    }
    if (ctx->pc != 0x1D4ED8u) { return; }
    ctx->pc = 0x1D4ED8u;
label_1d4ed8:
    // 0x1d4ed8: 0x10000009
label_1d4edc:
    if (ctx->pc == 0x1D4EDCu) {
        ctx->pc = 0x1D4EE0u;
        goto label_1d4ee0;
    }
    ctx->pc = 0x1D4ED8u;
    {
        const bool branch_taken_0x1d4ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4ed8) {
            ctx->pc = 0x1D4F00u;
            goto label_1d4f00;
        }
    }
    ctx->pc = 0x1D4EE0u;
label_1d4ee0:
    // 0x1d4ee0: 0x24060001
    ctx->pc = 0x1d4ee0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_1d4ee4:
    // 0x1d4ee4: 0xc07540c
label_1d4ee8:
    if (ctx->pc == 0x1D4EE8u) {
        ctx->pc = 0x1D4EE8u;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D4EECu;
        goto label_1d4eec;
    }
    ctx->pc = 0x1D4EE4u;
    SET_GPR_U32(ctx, 31, 0x1D4EECu);
    ctx->pc = 0x1D4EE8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5030u;
    {
        const uint32_t __entryPc = ctx->pc;
        eCHGDOF__11DofCtrlTaskFPUiii_0x1d5030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EECu; }
        else if (ctx->pc != 0x1D4EECu) { ctx->pc = 0x1D4EECu; }
    }
    if (ctx->pc != 0x1D4EECu) { return; }
    ctx->pc = 0x1D4EECu;
label_1d4eec:
    // 0x1d4eec: 0x10000004
label_1d4ef0:
    if (ctx->pc == 0x1D4EF0u) {
        ctx->pc = 0x1D4EF4u;
        goto label_1d4ef4;
    }
    ctx->pc = 0x1D4EECu;
    {
        const bool branch_taken_0x1d4eec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4eec) {
            ctx->pc = 0x1D4F00u;
            goto label_1d4f00;
        }
    }
    ctx->pc = 0x1D4EF4u;
label_1d4ef4:
    // 0x1d4ef4: 0x70003628
    ctx->pc = 0x1d4ef4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d4ef8:
    // 0x1d4ef8: 0xc07540c
label_1d4efc:
    if (ctx->pc == 0x1D4EFCu) {
        ctx->pc = 0x1D4EFCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D4F00u;
        goto label_1d4f00;
    }
    ctx->pc = 0x1D4EF8u;
    SET_GPR_U32(ctx, 31, 0x1D4F00u);
    ctx->pc = 0x1D4EFCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D5030u;
    {
        const uint32_t __entryPc = ctx->pc;
        eCHGDOF__11DofCtrlTaskFPUiii_0x1d5030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F00u; }
        else if (ctx->pc != 0x1D4F00u) { ctx->pc = 0x1D4F00u; }
    }
    if (ctx->pc != 0x1D4F00u) { return; }
    ctx->pc = 0x1D4F00u;
label_1d4f00:
    // 0x1d4f00: 0x7bbf0000
    ctx->pc = 0x1d4f00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4f04:
    // 0x1d4f04: 0x3e00008
label_1d4f08:
    if (ctx->pc == 0x1D4F08u) {
        ctx->pc = 0x1D4F08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D4F0Cu;
        goto label_fallthrough_0x1d4f04;
    }
    ctx->pc = 0x1D4F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4F08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4E40u: goto label_1d4e40;
            case 0x1D4E44u: goto label_1d4e44;
            case 0x1D4E48u: goto label_1d4e48;
            case 0x1D4E4Cu: goto label_1d4e4c;
            case 0x1D4E50u: goto label_1d4e50;
            case 0x1D4E54u: goto label_1d4e54;
            case 0x1D4E58u: goto label_1d4e58;
            case 0x1D4E5Cu: goto label_1d4e5c;
            case 0x1D4E60u: goto label_1d4e60;
            case 0x1D4E64u: goto label_1d4e64;
            case 0x1D4E68u: goto label_1d4e68;
            case 0x1D4E6Cu: goto label_1d4e6c;
            case 0x1D4E70u: goto label_1d4e70;
            case 0x1D4E74u: goto label_1d4e74;
            case 0x1D4E78u: goto label_1d4e78;
            case 0x1D4E7Cu: goto label_1d4e7c;
            case 0x1D4E80u: goto label_1d4e80;
            case 0x1D4E84u: goto label_1d4e84;
            case 0x1D4E88u: goto label_1d4e88;
            case 0x1D4E8Cu: goto label_1d4e8c;
            case 0x1D4E90u: goto label_1d4e90;
            case 0x1D4E94u: goto label_1d4e94;
            case 0x1D4E98u: goto label_1d4e98;
            case 0x1D4E9Cu: goto label_1d4e9c;
            case 0x1D4EA0u: goto label_1d4ea0;
            case 0x1D4EA4u: goto label_1d4ea4;
            case 0x1D4EA8u: goto label_1d4ea8;
            case 0x1D4EACu: goto label_1d4eac;
            case 0x1D4EB0u: goto label_1d4eb0;
            case 0x1D4EB4u: goto label_1d4eb4;
            case 0x1D4EB8u: goto label_1d4eb8;
            case 0x1D4EBCu: goto label_1d4ebc;
            case 0x1D4EC0u: goto label_1d4ec0;
            case 0x1D4EC4u: goto label_1d4ec4;
            case 0x1D4EC8u: goto label_1d4ec8;
            case 0x1D4ECCu: goto label_1d4ecc;
            case 0x1D4ED0u: goto label_1d4ed0;
            case 0x1D4ED4u: goto label_1d4ed4;
            case 0x1D4ED8u: goto label_1d4ed8;
            case 0x1D4EDCu: goto label_1d4edc;
            case 0x1D4EE0u: goto label_1d4ee0;
            case 0x1D4EE4u: goto label_1d4ee4;
            case 0x1D4EE8u: goto label_1d4ee8;
            case 0x1D4EECu: goto label_1d4eec;
            case 0x1D4EF0u: goto label_1d4ef0;
            case 0x1D4EF4u: goto label_1d4ef4;
            case 0x1D4EF8u: goto label_1d4ef8;
            case 0x1D4EFCu: goto label_1d4efc;
            case 0x1D4F00u: goto label_1d4f00;
            case 0x1D4F04u: goto label_1d4f04;
            case 0x1D4F08u: goto label_1d4f08;
            default: break;
        }
        return;
    }
label_fallthrough_0x1d4f04:
    ctx->pc = 0x1D4F0Cu;
}
