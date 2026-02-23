#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ShapeAnimParasite__10PeopleTaskFv
// Address: 0x206e90 - 0x206f68
void ShapeAnimParasite__10PeopleTaskFv_0x206e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ShapeAnimParasite__10PeopleTaskFv");


    ctx->pc = 0x206e90u;

    // 0x206e90: 0x27bdffe0
    ctx->pc = 0x206e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206e94: 0x7fbf0010
    ctx->pc = 0x206e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x206e98: 0x7fb00000
    ctx->pc = 0x206e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x206e9c: 0x8c831d74
    ctx->pc = 0x206e9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7540)));
    // 0x206ea0: 0x30620001
    ctx->pc = 0x206ea0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x206ea4: 0x10400010
    ctx->pc = 0x206EA4u;
    {
        const bool branch_taken_0x206ea4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206EA8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206ea4) {
            ctx->pc = 0x206EE8u;
            goto label_206ee8;
        }
    }
    ctx->pc = 0x206EACu;
    // 0x206eac: 0xa6001e54
    ctx->pc = 0x206eacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7764), (uint16_t)GPR_U32(ctx, 0));
    // 0x206eb0: 0xa6001e44
    ctx->pc = 0x206eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7748), (uint16_t)GPR_U32(ctx, 0));
    // 0x206eb4: 0xa6001e34
    ctx->pc = 0x206eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7732), (uint16_t)GPR_U32(ctx, 0));
    // 0x206eb8: 0x24020003
    ctx->pc = 0x206eb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x206ebc: 0xa6021e36
    ctx->pc = 0x206ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7734), (uint16_t)GPR_U32(ctx, 2));
    // 0x206ec0: 0x3c023f80
    ctx->pc = 0x206ec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x206ec4: 0xae021e38
    ctx->pc = 0x206ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7736), GPR_U32(ctx, 2));
    // 0x206ec8: 0x3c020027
    ctx->pc = 0x206ec8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x206ecc: 0x24422e88
    ctx->pc = 0x206eccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11912));
    // 0x206ed0: 0x8c450008
    ctx->pc = 0x206ed0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x206ed4: 0x8e041d70
    ctx->pc = 0x206ed4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7536)));
    // 0x206ed8: 0xc068fd8
    ctx->pc = 0x206ED8u;
    SET_GPR_U32(ctx, 31, 0x206EE0u);
    ctx->pc = 0x206EDCu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EE0u; }
        else if (ctx->pc != 0x206EE0u) { ctx->pc = 0x206EE0u; }
    }
    if (ctx->pc != 0x206EE0u) { return; }
    ctx->pc = 0x206EE0u;
    // 0x206ee0: 0x1000001e
    ctx->pc = 0x206EE0u;
    {
        const bool branch_taken_0x206ee0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206EE4u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x206ee0) {
            ctx->pc = 0x206F5Cu;
            goto label_206f5c;
        }
    }
    ctx->pc = 0x206EE8u;
label_206ee8:
    // 0x206ee8: 0x30620002
    ctx->pc = 0x206ee8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x206eec: 0x1040000c
    ctx->pc = 0x206EECu;
    {
        const bool branch_taken_0x206eec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x206eec) {
            ctx->pc = 0x206F20u;
            goto label_206f20;
        }
    }
    ctx->pc = 0x206EF4u;
    // 0x206ef4: 0xa6001e54
    ctx->pc = 0x206ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7764), (uint16_t)GPR_U32(ctx, 0));
    // 0x206ef8: 0xa6001e44
    ctx->pc = 0x206ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7748), (uint16_t)GPR_U32(ctx, 0));
    // 0x206efc: 0x3c020027
    ctx->pc = 0x206efcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x206f00: 0xa6001e34
    ctx->pc = 0x206f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7732), (uint16_t)GPR_U32(ctx, 0));
    // 0x206f04: 0x24422e98
    ctx->pc = 0x206f04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11928));
    // 0x206f08: 0x8c450008
    ctx->pc = 0x206f08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x206f0c: 0x8e041d70
    ctx->pc = 0x206f0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7536)));
    // 0x206f10: 0xc068fd8
    ctx->pc = 0x206F10u;
    SET_GPR_U32(ctx, 31, 0x206F18u);
    ctx->pc = 0x206F14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F18u; }
        else if (ctx->pc != 0x206F18u) { ctx->pc = 0x206F18u; }
    }
    if (ctx->pc != 0x206F18u) { return; }
    ctx->pc = 0x206F18u;
    // 0x206f18: 0x1000000f
    ctx->pc = 0x206F18u;
    {
        const bool branch_taken_0x206f18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x206f18) {
            ctx->pc = 0x206F58u;
            goto label_206f58;
        }
    }
    ctx->pc = 0x206F20u;
label_206f20:
    // 0x206f20: 0x8e021de8
    ctx->pc = 0x206f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7656)));
    // 0x206f24: 0x84450000
    ctx->pc = 0x206f24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206f28: 0xc082e80
    ctx->pc = 0x206F28u;
    SET_GPR_U32(ctx, 31, 0x206F30u);
    ctx->pc = 0x206F2Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 7724));
    ctx->pc = 0x20BA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimParaFace__10PeopleTaskFiP13PPL_FANI_DATA_0x20ba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F30u; }
        else if (ctx->pc != 0x206F30u) { ctx->pc = 0x206F30u; }
    }
    if (ctx->pc != 0x206F30u) { return; }
    ctx->pc = 0x206F30u;
    // 0x206f30: 0x8e021de8
    ctx->pc = 0x206f30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7656)));
    // 0x206f34: 0x72002628
    ctx->pc = 0x206f34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x206f38: 0x84450002
    ctx->pc = 0x206f38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x206f3c: 0xc082edc
    ctx->pc = 0x206F3Cu;
    SET_GPR_U32(ctx, 31, 0x206F44u);
    ctx->pc = 0x206F40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 7740));
    ctx->pc = 0x20BB70u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimParaHand__10PeopleTaskFiP13PPL_FANI_DATA_0x20bb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F44u; }
        else if (ctx->pc != 0x206F44u) { ctx->pc = 0x206F44u; }
    }
    if (ctx->pc != 0x206F44u) { return; }
    ctx->pc = 0x206F44u;
    // 0x206f44: 0x8e021de8
    ctx->pc = 0x206f44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7656)));
    // 0x206f48: 0x72002628
    ctx->pc = 0x206f48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x206f4c: 0x84450004
    ctx->pc = 0x206f4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x206f50: 0xc082edc
    ctx->pc = 0x206F50u;
    SET_GPR_U32(ctx, 31, 0x206F58u);
    ctx->pc = 0x206F54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 7756));
    ctx->pc = 0x20BB70u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimParaHand__10PeopleTaskFiP13PPL_FANI_DATA_0x20bb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F58u; }
        else if (ctx->pc != 0x206F58u) { ctx->pc = 0x206F58u; }
    }
    if (ctx->pc != 0x206F58u) { return; }
    ctx->pc = 0x206F58u;
label_206f58:
    // 0x206f58: 0x7bbf0010
    ctx->pc = 0x206f58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206f5c:
    // 0x206f5c: 0x7bb00000
    ctx->pc = 0x206f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206f60: 0x3e00008
    ctx->pc = 0x206F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206EE8u: goto label_206ee8;
            case 0x206F20u: goto label_206f20;
            case 0x206F58u: goto label_206f58;
            case 0x206F5Cu: goto label_206f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206F68u;
}
