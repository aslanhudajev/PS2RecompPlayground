#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsSetCurVolume
// Address: 0x175a18 - 0x175ad4
void cvFsSetCurVolume_0x175a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsSetCurVolume");


    ctx->pc = 0x175a18u;

label_175a18:
    // 0x175a18: 0x27bdffb0
    ctx->pc = 0x175a18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_175a1c:
    // 0x175a1c: 0xffb10030
    ctx->pc = 0x175a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_175a20:
    // 0x175a20: 0xffbf0040
    ctx->pc = 0x175a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_175a24:
    // 0x175a24: 0xa0882d
    ctx->pc = 0x175a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175a28:
    // 0x175a28: 0x14800006
label_175a2c:
    if (ctx->pc == 0x175A2Cu) {
        ctx->pc = 0x175A2Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->pc = 0x175A30u;
        goto label_175a30;
    }
    ctx->pc = 0x175A28u;
    {
        const bool branch_taken_0x175a28 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x175A2Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        if (branch_taken_0x175a28) {
            ctx->pc = 0x175A44u;
            goto label_175a44;
        }
    }
    ctx->pc = 0x175A30u;
label_175a30:
    // 0x175a30: 0x3c04002c
    ctx->pc = 0x175a30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175a34:
    // 0x175a34: 0xc05d076
label_175a38:
    if (ctx->pc == 0x175A38u) {
        ctx->pc = 0x175A38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946160));
        ctx->pc = 0x175A3Cu;
        goto label_175a3c;
    }
    ctx->pc = 0x175A34u;
    SET_GPR_U32(ctx, 31, 0x175A3Cu);
    ctx->pc = 0x175A38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946160));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A3Cu; }
        else if (ctx->pc != 0x175A3Cu) { ctx->pc = 0x175A3Cu; }
    }
    if (ctx->pc != 0x175A3Cu) { return; }
    ctx->pc = 0x175A3Cu;
label_175a3c:
    // 0x175a3c: 0x10000020
label_175a40:
    if (ctx->pc == 0x175A40u) {
        ctx->pc = 0x175A40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175A44u;
        goto label_175a44;
    }
    ctx->pc = 0x175A3Cu;
    {
        const bool branch_taken_0x175a3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175A40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175a3c) {
            ctx->pc = 0x175AC0u;
            goto label_175ac0;
        }
    }
    ctx->pc = 0x175A44u;
label_175a44:
    // 0x175a44: 0x16200006
label_175a48:
    if (ctx->pc == 0x175A48u) {
        ctx->pc = 0x175A4Cu;
        goto label_175a4c;
    }
    ctx->pc = 0x175A44u;
    {
        const bool branch_taken_0x175a44 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x175a44) {
            ctx->pc = 0x175A60u;
            goto label_175a60;
        }
    }
    ctx->pc = 0x175A4Cu;
label_175a4c:
    // 0x175a4c: 0x3c04002c
    ctx->pc = 0x175a4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175a50:
    // 0x175a50: 0xc05d076
label_175a54:
    if (ctx->pc == 0x175A54u) {
        ctx->pc = 0x175A54u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946200));
        ctx->pc = 0x175A58u;
        goto label_175a58;
    }
    ctx->pc = 0x175A50u;
    SET_GPR_U32(ctx, 31, 0x175A58u);
    ctx->pc = 0x175A54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946200));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A58u; }
        else if (ctx->pc != 0x175A58u) { ctx->pc = 0x175A58u; }
    }
    if (ctx->pc != 0x175A58u) { return; }
    ctx->pc = 0x175A58u;
label_175a58:
    // 0x175a58: 0x10000019
label_175a5c:
    if (ctx->pc == 0x175A5Cu) {
        ctx->pc = 0x175A5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175A60u;
        goto label_175a60;
    }
    ctx->pc = 0x175A58u;
    {
        const bool branch_taken_0x175a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175A5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175a58) {
            ctx->pc = 0x175AC0u;
            goto label_175ac0;
        }
    }
    ctx->pc = 0x175A60u;
label_175a60:
    // 0x175a60: 0xc05d142
label_175a64:
    if (ctx->pc == 0x175A64u) {
        ctx->pc = 0x175A68u;
        goto label_175a68;
    }
    ctx->pc = 0x175A60u;
    SET_GPR_U32(ctx, 31, 0x175A68u);
    ctx->pc = 0x174508u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevice_0x174508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A68u; }
        else if (ctx->pc != 0x175A68u) { ctx->pc = 0x175A68u; }
    }
    if (ctx->pc != 0x175A68u) { return; }
    ctx->pc = 0x175A68u;
label_175a68:
    // 0x175a68: 0x40802d
    ctx->pc = 0x175a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175a6c:
    // 0x175a6c: 0x16000006
label_175a70:
    if (ctx->pc == 0x175A70u) {
        ctx->pc = 0x175A70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175A74u;
        goto label_175a74;
    }
    ctx->pc = 0x175A6Cu;
    {
        const bool branch_taken_0x175a6c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x175A70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175a6c) {
            ctx->pc = 0x175A88u;
            goto label_175a88;
        }
    }
    ctx->pc = 0x175A74u;
label_175a74:
    // 0x175a74: 0x3c04002c
    ctx->pc = 0x175a74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175a78:
    // 0x175a78: 0xc05d076
label_175a7c:
    if (ctx->pc == 0x175A7Cu) {
        ctx->pc = 0x175A7Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946248));
        ctx->pc = 0x175A80u;
        goto label_175a80;
    }
    ctx->pc = 0x175A78u;
    SET_GPR_U32(ctx, 31, 0x175A80u);
    ctx->pc = 0x175A7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946248));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A80u; }
        else if (ctx->pc != 0x175A80u) { ctx->pc = 0x175A80u; }
    }
    if (ctx->pc != 0x175A80u) { return; }
    ctx->pc = 0x175A80u;
label_175a80:
    // 0x175a80: 0x1000000f
label_175a84:
    if (ctx->pc == 0x175A84u) {
        ctx->pc = 0x175A84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175A88u;
        goto label_175a88;
    }
    ctx->pc = 0x175A80u;
    {
        const bool branch_taken_0x175a80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175A84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175a80) {
            ctx->pc = 0x175AC0u;
            goto label_175ac0;
        }
    }
    ctx->pc = 0x175A88u;
label_175a88:
    // 0x175a88: 0x282d
    ctx->pc = 0x175a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175a8c:
    // 0x175a8c: 0xc050cfe
label_175a90:
    if (ctx->pc == 0x175A90u) {
        ctx->pc = 0x175A90u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x175A94u;
        goto label_175a94;
    }
    ctx->pc = 0x175A8Cu;
    SET_GPR_U32(ctx, 31, 0x175A94u);
    ctx->pc = 0x175A90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A94u; }
        else if (ctx->pc != 0x175A94u) { ctx->pc = 0x175A94u; }
    }
    if (ctx->pc != 0x175A94u) { return; }
    ctx->pc = 0x175A94u;
label_175a94:
    // 0x175a94: 0x8e020060
    ctx->pc = 0x175a94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_175a98:
    // 0x175a98: 0x10400008
label_175a9c:
    if (ctx->pc == 0x175A9Cu) {
        ctx->pc = 0x175A9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x175AA0u;
        goto label_175aa0;
    }
    ctx->pc = 0x175A98u;
    {
        const bool branch_taken_0x175a98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175A9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        if (branch_taken_0x175a98) {
            ctx->pc = 0x175ABCu;
            goto label_175abc;
        }
    }
    ctx->pc = 0x175AA0u;
label_175aa0:
    // 0x175aa0: 0x3a0202d
    ctx->pc = 0x175aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175aa4:
    // 0x175aa4: 0x24050001
    ctx->pc = 0x175aa4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_175aa8:
    // 0x175aa8: 0x302d
    ctx->pc = 0x175aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175aac:
    // 0x175aac: 0x40f809
label_175ab0:
    if (ctx->pc == 0x175AB0u) {
        ctx->pc = 0x175AB0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175AB4u;
        goto label_175ab4;
    }
    ctx->pc = 0x175AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175AB4u);
        ctx->pc = 0x175AB0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175A18u: goto label_175a18;
            case 0x175A1Cu: goto label_175a1c;
            case 0x175A20u: goto label_175a20;
            case 0x175A24u: goto label_175a24;
            case 0x175A28u: goto label_175a28;
            case 0x175A2Cu: goto label_175a2c;
            case 0x175A30u: goto label_175a30;
            case 0x175A34u: goto label_175a34;
            case 0x175A38u: goto label_175a38;
            case 0x175A3Cu: goto label_175a3c;
            case 0x175A40u: goto label_175a40;
            case 0x175A44u: goto label_175a44;
            case 0x175A48u: goto label_175a48;
            case 0x175A4Cu: goto label_175a4c;
            case 0x175A50u: goto label_175a50;
            case 0x175A54u: goto label_175a54;
            case 0x175A58u: goto label_175a58;
            case 0x175A5Cu: goto label_175a5c;
            case 0x175A60u: goto label_175a60;
            case 0x175A64u: goto label_175a64;
            case 0x175A68u: goto label_175a68;
            case 0x175A6Cu: goto label_175a6c;
            case 0x175A70u: goto label_175a70;
            case 0x175A74u: goto label_175a74;
            case 0x175A78u: goto label_175a78;
            case 0x175A7Cu: goto label_175a7c;
            case 0x175A80u: goto label_175a80;
            case 0x175A84u: goto label_175a84;
            case 0x175A88u: goto label_175a88;
            case 0x175A8Cu: goto label_175a8c;
            case 0x175A90u: goto label_175a90;
            case 0x175A94u: goto label_175a94;
            case 0x175A98u: goto label_175a98;
            case 0x175A9Cu: goto label_175a9c;
            case 0x175AA0u: goto label_175aa0;
            case 0x175AA4u: goto label_175aa4;
            case 0x175AA8u: goto label_175aa8;
            case 0x175AACu: goto label_175aac;
            case 0x175AB0u: goto label_175ab0;
            case 0x175AB4u: goto label_175ab4;
            case 0x175AB8u: goto label_175ab8;
            case 0x175ABCu: goto label_175abc;
            case 0x175AC0u: goto label_175ac0;
            case 0x175AC4u: goto label_175ac4;
            case 0x175AC8u: goto label_175ac8;
            case 0x175ACCu: goto label_175acc;
            case 0x175AD0u: goto label_175ad0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175AB4u; }
            if (ctx->pc != 0x175AB4u) { return; }
        }
    }
    ctx->pc = 0x175AB4u;
label_175ab4:
    // 0x175ab4: 0x10000003
label_175ab8:
    if (ctx->pc == 0x175AB8u) {
        ctx->pc = 0x175AB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x175ABCu;
        goto label_175abc;
    }
    ctx->pc = 0x175AB4u;
    {
        const bool branch_taken_0x175ab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175AB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x175ab4) {
            ctx->pc = 0x175AC4u;
            goto label_175ac4;
        }
    }
    ctx->pc = 0x175ABCu;
label_175abc:
    // 0x175abc: 0x2402ffff
    ctx->pc = 0x175abcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_175ac0:
    // 0x175ac0: 0xdfbf0040
    ctx->pc = 0x175ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_175ac4:
    // 0x175ac4: 0xdfb10030
    ctx->pc = 0x175ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_175ac8:
    // 0x175ac8: 0xdfb00020
    ctx->pc = 0x175ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_175acc:
    // 0x175acc: 0x3e00008
label_175ad0:
    if (ctx->pc == 0x175AD0u) {
        ctx->pc = 0x175AD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x175AD4u;
        goto label_fallthrough_0x175acc;
    }
    ctx->pc = 0x175ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175AD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175A18u: goto label_175a18;
            case 0x175A1Cu: goto label_175a1c;
            case 0x175A20u: goto label_175a20;
            case 0x175A24u: goto label_175a24;
            case 0x175A28u: goto label_175a28;
            case 0x175A2Cu: goto label_175a2c;
            case 0x175A30u: goto label_175a30;
            case 0x175A34u: goto label_175a34;
            case 0x175A38u: goto label_175a38;
            case 0x175A3Cu: goto label_175a3c;
            case 0x175A40u: goto label_175a40;
            case 0x175A44u: goto label_175a44;
            case 0x175A48u: goto label_175a48;
            case 0x175A4Cu: goto label_175a4c;
            case 0x175A50u: goto label_175a50;
            case 0x175A54u: goto label_175a54;
            case 0x175A58u: goto label_175a58;
            case 0x175A5Cu: goto label_175a5c;
            case 0x175A60u: goto label_175a60;
            case 0x175A64u: goto label_175a64;
            case 0x175A68u: goto label_175a68;
            case 0x175A6Cu: goto label_175a6c;
            case 0x175A70u: goto label_175a70;
            case 0x175A74u: goto label_175a74;
            case 0x175A78u: goto label_175a78;
            case 0x175A7Cu: goto label_175a7c;
            case 0x175A80u: goto label_175a80;
            case 0x175A84u: goto label_175a84;
            case 0x175A88u: goto label_175a88;
            case 0x175A8Cu: goto label_175a8c;
            case 0x175A90u: goto label_175a90;
            case 0x175A94u: goto label_175a94;
            case 0x175A98u: goto label_175a98;
            case 0x175A9Cu: goto label_175a9c;
            case 0x175AA0u: goto label_175aa0;
            case 0x175AA4u: goto label_175aa4;
            case 0x175AA8u: goto label_175aa8;
            case 0x175AACu: goto label_175aac;
            case 0x175AB0u: goto label_175ab0;
            case 0x175AB4u: goto label_175ab4;
            case 0x175AB8u: goto label_175ab8;
            case 0x175ABCu: goto label_175abc;
            case 0x175AC0u: goto label_175ac0;
            case 0x175AC4u: goto label_175ac4;
            case 0x175AC8u: goto label_175ac8;
            case 0x175ACCu: goto label_175acc;
            case 0x175AD0u: goto label_175ad0;
            default: break;
        }
        return;
    }
label_fallthrough_0x175acc:
    ctx->pc = 0x175AD4u;
}
