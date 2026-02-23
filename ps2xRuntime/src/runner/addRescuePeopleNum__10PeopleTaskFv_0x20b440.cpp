#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: addRescuePeopleNum__10PeopleTaskFv
// Address: 0x20b440 - 0x20b4ac
void addRescuePeopleNum__10PeopleTaskFv_0x20b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("addRescuePeopleNum__10PeopleTaskFv");


    ctx->pc = 0x20b440u;

    // 0x20b440: 0x27bdfff0
    ctx->pc = 0x20b440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b444: 0x7fbf0000
    ctx->pc = 0x20b444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20b448: 0x87868d7c
    ctx->pc = 0x20b448u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937980)));
    // 0x20b44c: 0x83858ba8
    ctx->pc = 0x20b44cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x20b450: 0x3c030051
    ctx->pc = 0x20b450u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x20b454: 0x246434a0
    ctx->pc = 0x20b454u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 13472));
    // 0x20b458: 0x3c010050
    ctx->pc = 0x20b458u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20b45c: 0x2403000a
    ctx->pc = 0x20b45cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20b460: 0x24c60001
    ctx->pc = 0x20b460u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x20b464: 0x52840
    ctx->pc = 0x20b464u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x20b468: 0xa7868d7c
    ctx->pc = 0x20b468u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937980), (uint16_t)GPR_U32(ctx, 6));
    // 0x20b46c: 0x852821
    ctx->pc = 0x20b46cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20b470: 0x84a40000
    ctx->pc = 0x20b470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20b474: 0x24840001
    ctx->pc = 0x20b474u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20b478: 0xa4a40000
    ctx->pc = 0x20b478u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x20b47c: 0x8424e504
    ctx->pc = 0x20b47cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20b480: 0x14830005
    ctx->pc = 0x20B480u;
    {
        const bool branch_taken_0x20b480 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x20b480) {
            ctx->pc = 0x20B498u;
            goto label_20b498;
        }
    }
    ctx->pc = 0x20B488u;
    // 0x20b488: 0x8f848bcc
    ctx->pc = 0x20b488u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20b48c: 0x24030002
    ctx->pc = 0x20b48cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b490: 0x10830003
    ctx->pc = 0x20B490u;
    {
        const bool branch_taken_0x20b490 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20b490) {
            ctx->pc = 0x20B4A0u;
            goto label_20b4a0;
        }
    }
    ctx->pc = 0x20B498u;
label_20b498:
    // 0x20b498: 0xc074eac
    ctx->pc = 0x20B498u;
    SET_GPR_U32(ctx, 31, 0x20B4A0u);
    ctx->pc = 0x1D3AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        HFileAddOtherGallery__Fv_0x1d3ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B4A0u; }
        else if (ctx->pc != 0x20B4A0u) { ctx->pc = 0x20B4A0u; }
    }
    if (ctx->pc != 0x20B4A0u) { return; }
    ctx->pc = 0x20B4A0u;
label_20b4a0:
    // 0x20b4a0: 0x7bbf0000
    ctx->pc = 0x20b4a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b4a4: 0x3e00008
    ctx->pc = 0x20B4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B4A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B498u: goto label_20b498;
            case 0x20B4A0u: goto label_20b4a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B4ACu;
}
