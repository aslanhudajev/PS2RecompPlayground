#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_FixAvPlay
// Address: 0x19afe8 - 0x19b08c
void sfply_FixAvPlay_0x19afe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_FixAvPlay");


    ctx->pc = 0x19afe8u;

    // 0x19afe8: 0x27bdffd0
    ctx->pc = 0x19afe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19afec: 0x24030001
    ctx->pc = 0x19afecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19aff0: 0xffb10010
    ctx->pc = 0x19aff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19aff4: 0xffb00000
    ctx->pc = 0x19aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19aff8: 0x80882d
    ctx->pc = 0x19aff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19affc: 0xffbf0020
    ctx->pc = 0x19affcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b000: 0x26300994
    ctx->pc = 0x19b000u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2452));
    // 0x19b004: 0x8e020014
    ctx->pc = 0x19b004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19b008: 0x5443000b
    ctx->pc = 0x19B008u;
    {
        const bool branch_taken_0x19b008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x19b008) {
            ctx->pc = 0x19B00Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x19B038u;
            goto label_19b038;
        }
    }
    ctx->pc = 0x19B010u;
    // 0x19b010: 0xc0648a8
    ctx->pc = 0x19B010u;
    SET_GPR_U32(ctx, 31, 0x19B018u);
    ctx->pc = 0x19B014u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1922A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetWTot_0x1922a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B018u; }
        else if (ctx->pc != 0x19B018u) { ctx->pc = 0x19B018u; }
    }
    if (ctx->pc != 0x19B018u) { return; }
    ctx->pc = 0x19B018u;
    // 0x19b018: 0x54400007
    ctx->pc = 0x19B018u;
    {
        const bool branch_taken_0x19b018 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19b018) {
            ctx->pc = 0x19B01Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x19B038u;
            goto label_19b038;
        }
    }
    ctx->pc = 0x19B020u;
    // 0x19b020: 0x220202d
    ctx->pc = 0x19b020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b024: 0xc0648a2
    ctx->pc = 0x19B024u;
    SET_GPR_U32(ctx, 31, 0x19B02Cu);
    ctx->pc = 0x19B028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x192288u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetRTot_0x192288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B02Cu; }
        else if (ctx->pc != 0x19B02Cu) { ctx->pc = 0x19B02Cu; }
    }
    if (ctx->pc != 0x19B02Cu) { return; }
    ctx->pc = 0x19B02Cu;
    // 0x19b02c: 0x50400001
    ctx->pc = 0x19B02Cu;
    {
        const bool branch_taken_0x19b02c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19b02c) {
            ctx->pc = 0x19B030u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->pc = 0x19B034u;
            goto label_19b034;
        }
    }
    ctx->pc = 0x19B034u;
label_19b034:
    // 0x19b034: 0x8e030018
    ctx->pc = 0x19b034u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19b038:
    // 0x19b038: 0x24020001
    ctx->pc = 0x19b038u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b03c: 0x5462000c
    ctx->pc = 0x19B03Cu;
    {
        const bool branch_taken_0x19b03c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x19b03c) {
            ctx->pc = 0x19B040u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x19B070u;
            goto label_19b070;
        }
    }
    ctx->pc = 0x19B044u;
    // 0x19b044: 0x220202d
    ctx->pc = 0x19b044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b048: 0xc0648a8
    ctx->pc = 0x19B048u;
    SET_GPR_U32(ctx, 31, 0x19B050u);
    ctx->pc = 0x19B04Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1922A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetWTot_0x1922a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B050u; }
        else if (ctx->pc != 0x19B050u) { ctx->pc = 0x19B050u; }
    }
    if (ctx->pc != 0x19B050u) { return; }
    ctx->pc = 0x19B050u;
    // 0x19b050: 0x54400007
    ctx->pc = 0x19B050u;
    {
        const bool branch_taken_0x19b050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19b050) {
            ctx->pc = 0x19B054u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->pc = 0x19B070u;
            goto label_19b070;
        }
    }
    ctx->pc = 0x19B058u;
    // 0x19b058: 0x220202d
    ctx->pc = 0x19b058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b05c: 0xc0648a2
    ctx->pc = 0x19B05Cu;
    SET_GPR_U32(ctx, 31, 0x19B064u);
    ctx->pc = 0x19B060u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x192288u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetRTot_0x192288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B064u; }
        else if (ctx->pc != 0x19B064u) { ctx->pc = 0x19B064u; }
    }
    if (ctx->pc != 0x19B064u) { return; }
    ctx->pc = 0x19B064u;
    // 0x19b064: 0x50400001
    ctx->pc = 0x19B064u;
    {
        const bool branch_taken_0x19b064 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19b064) {
            ctx->pc = 0x19B068u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->pc = 0x19B06Cu;
            goto label_19b06c;
        }
    }
    ctx->pc = 0x19B06Cu;
label_19b06c:
    // 0x19b06c: 0x8e060018
    ctx->pc = 0x19b06cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19b070:
    // 0x19b070: 0x220202d
    ctx->pc = 0x19b070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b074: 0x8e050014
    ctx->pc = 0x19b074u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19b078: 0xdfbf0020
    ctx->pc = 0x19b078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b07c: 0xdfb10010
    ctx->pc = 0x19b07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b080: 0xdfb00000
    ctx->pc = 0x19b080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b084: 0x8067186
    ctx->pc = 0x19B084u;
    ctx->pc = 0x19B088u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19C618u;
    SFSEE_FixAvPlay_0x19c618(rdram, ctx, runtime); return;
    ctx->pc = 0x19B08Cu;
}
