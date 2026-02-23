#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFPLY_AddSkipPic
// Address: 0x19ba48 - 0x19baa8
void SFPLY_AddSkipPic_0x19ba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFPLY_AddSkipPic");


    ctx->pc = 0x19ba48u;

label_19ba48:
    // 0x19ba48: 0x27bdffc0
    ctx->pc = 0x19ba48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_19ba4c:
    // 0x19ba4c: 0xffb00000
    ctx->pc = 0x19ba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ba50:
    // 0x19ba50: 0xffb20020
    ctx->pc = 0x19ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19ba54:
    // 0x19ba54: 0x80802d
    ctx->pc = 0x19ba54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ba58:
    // 0x19ba58: 0xffb10010
    ctx->pc = 0x19ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19ba5c:
    // 0x19ba5c: 0xc0902d
    ctx->pc = 0x19ba5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19ba60:
    // 0x19ba60: 0xffbf0030
    ctx->pc = 0x19ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19ba64:
    // 0x19ba64: 0x26110940
    ctx->pc = 0x19ba64u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 2368));
label_19ba68:
    // 0x19ba68: 0x8e220004
    ctx->pc = 0x19ba68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_19ba6c:
    // 0x19ba6c: 0x451021
    ctx->pc = 0x19ba6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19ba70:
    // 0x19ba70: 0xae220004
    ctx->pc = 0x19ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_19ba74:
    // 0x19ba74: 0xc0674c2
label_19ba78:
    if (ctx->pc == 0x19BA78u) {
        ctx->pc = 0x19BA78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x19BA7Cu;
        goto label_19ba7c;
    }
    ctx->pc = 0x19BA74u;
    SET_GPR_U32(ctx, 31, 0x19BA7Cu);
    ctx->pc = 0x19BA78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 37));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA7Cu; }
        else if (ctx->pc != 0x19BA7Cu) { ctx->pc = 0x19BA7Cu; }
    }
    if (ctx->pc != 0x19BA7Cu) { return; }
    ctx->pc = 0x19BA7Cu;
label_19ba7c:
    // 0x19ba7c: 0x10400004
label_19ba80:
    if (ctx->pc == 0x19BA80u) {
        ctx->pc = 0x19BA80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BA84u;
        goto label_19ba84;
    }
    ctx->pc = 0x19BA7Cu;
    {
        const bool branch_taken_0x19ba7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BA80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ba7c) {
            ctx->pc = 0x19BA90u;
            goto label_19ba90;
        }
    }
    ctx->pc = 0x19BA84u;
label_19ba84:
    // 0x19ba84: 0x240282d
    ctx->pc = 0x19ba84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19ba88:
    // 0x19ba88: 0x40f809
label_19ba8c:
    if (ctx->pc == 0x19BA8Cu) {
        ctx->pc = 0x19BA8Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BA90u;
        goto label_19ba90;
    }
    ctx->pc = 0x19BA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BA90u);
        ctx->pc = 0x19BA8Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BA48u: goto label_19ba48;
            case 0x19BA4Cu: goto label_19ba4c;
            case 0x19BA50u: goto label_19ba50;
            case 0x19BA54u: goto label_19ba54;
            case 0x19BA58u: goto label_19ba58;
            case 0x19BA5Cu: goto label_19ba5c;
            case 0x19BA60u: goto label_19ba60;
            case 0x19BA64u: goto label_19ba64;
            case 0x19BA68u: goto label_19ba68;
            case 0x19BA6Cu: goto label_19ba6c;
            case 0x19BA70u: goto label_19ba70;
            case 0x19BA74u: goto label_19ba74;
            case 0x19BA78u: goto label_19ba78;
            case 0x19BA7Cu: goto label_19ba7c;
            case 0x19BA80u: goto label_19ba80;
            case 0x19BA84u: goto label_19ba84;
            case 0x19BA88u: goto label_19ba88;
            case 0x19BA8Cu: goto label_19ba8c;
            case 0x19BA90u: goto label_19ba90;
            case 0x19BA94u: goto label_19ba94;
            case 0x19BA98u: goto label_19ba98;
            case 0x19BA9Cu: goto label_19ba9c;
            case 0x19BAA0u: goto label_19baa0;
            case 0x19BAA4u: goto label_19baa4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19BA90u; }
            if (ctx->pc != 0x19BA90u) { return; }
        }
    }
    ctx->pc = 0x19BA90u;
label_19ba90:
    // 0x19ba90: 0xdfbf0030
    ctx->pc = 0x19ba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19ba94:
    // 0x19ba94: 0xdfb20020
    ctx->pc = 0x19ba94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19ba98:
    // 0x19ba98: 0xdfb10010
    ctx->pc = 0x19ba98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ba9c:
    // 0x19ba9c: 0xdfb00000
    ctx->pc = 0x19ba9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19baa0:
    // 0x19baa0: 0x3e00008
label_19baa4:
    if (ctx->pc == 0x19BAA4u) {
        ctx->pc = 0x19BAA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x19BAA8u;
        goto label_fallthrough_0x19baa0;
    }
    ctx->pc = 0x19BAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BAA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BA48u: goto label_19ba48;
            case 0x19BA4Cu: goto label_19ba4c;
            case 0x19BA50u: goto label_19ba50;
            case 0x19BA54u: goto label_19ba54;
            case 0x19BA58u: goto label_19ba58;
            case 0x19BA5Cu: goto label_19ba5c;
            case 0x19BA60u: goto label_19ba60;
            case 0x19BA64u: goto label_19ba64;
            case 0x19BA68u: goto label_19ba68;
            case 0x19BA6Cu: goto label_19ba6c;
            case 0x19BA70u: goto label_19ba70;
            case 0x19BA74u: goto label_19ba74;
            case 0x19BA78u: goto label_19ba78;
            case 0x19BA7Cu: goto label_19ba7c;
            case 0x19BA80u: goto label_19ba80;
            case 0x19BA84u: goto label_19ba84;
            case 0x19BA88u: goto label_19ba88;
            case 0x19BA8Cu: goto label_19ba8c;
            case 0x19BA90u: goto label_19ba90;
            case 0x19BA94u: goto label_19ba94;
            case 0x19BA98u: goto label_19ba98;
            case 0x19BA9Cu: goto label_19ba9c;
            case 0x19BAA0u: goto label_19baa0;
            case 0x19BAA4u: goto label_19baa4;
            default: break;
        }
        return;
    }
label_fallthrough_0x19baa0:
    ctx->pc = 0x19BAA8u;
}
