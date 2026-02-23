#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: next_stack_level
// Address: 0x149320 - 0x1493ac
void next_stack_level_0x149320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("next_stack_level");


    ctx->pc = 0x149320u;

    // 0x149320: 0x27bdffd0
    ctx->pc = 0x149320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149324: 0xffb10010
    ctx->pc = 0x149324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x149328: 0xa0882d
    ctx->pc = 0x149328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14932c: 0xffb00000
    ctx->pc = 0x14932cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x149330: 0xffbf0020
    ctx->pc = 0x149330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x149334: 0xc0534f2
    ctx->pc = 0x149334u;
    SET_GPR_U32(ctx, 31, 0x14933Cu);
    ctx->pc = 0x149338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14D3C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___frame_state_for_0x14d3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14933Cu; }
        else if (ctx->pc != 0x14933Cu) { ctx->pc = 0x14933Cu; }
    }
    if (ctx->pc != 0x14933Cu) { return; }
    ctx->pc = 0x14933Cu;
    // 0x14933c: 0x40802d
    ctx->pc = 0x14933cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149340: 0x56000003
    ctx->pc = 0x149340u;
    {
        const bool branch_taken_0x149340 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x149340) {
            ctx->pc = 0x149344u;
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->pc = 0x149350u;
            goto label_149350;
        }
    }
    ctx->pc = 0x149348u;
    // 0x149348: 0x10000013
    ctx->pc = 0x149348u;
    {
        const bool branch_taken_0x149348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14934Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x149348) {
            ctx->pc = 0x149398u;
            goto label_149398;
        }
    }
    ctx->pc = 0x149350u;
label_149350:
    // 0x149350: 0x2241021
    ctx->pc = 0x149350u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x149354: 0x8043029c
    ctx->pc = 0x149354u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x149358: 0x10600008
    ctx->pc = 0x149358u;
    {
        const bool branch_taken_0x149358 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x14935Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x149358) {
            ctx->pc = 0x14937Cu;
            goto label_14937c;
        }
    }
    ctx->pc = 0x149360u;
    // 0x149360: 0xc052486
    ctx->pc = 0x149360u;
    SET_GPR_U32(ctx, 31, 0x149368u);
    ctx->pc = 0x149364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x149218u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_reg_addr_0x149218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149368u; }
        else if (ctx->pc != 0x149368u) { ctx->pc = 0x149368u; }
    }
    if (ctx->pc != 0x149368u) { return; }
    ctx->pc = 0x149368u;
    // 0x149368: 0xdc430000
    ctx->pc = 0x149368u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14936c: 0x3183c
    ctx->pc = 0x14936cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x149370: 0x3183f
    ctx->pc = 0x149370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x149374: 0x10000003
    ctx->pc = 0x149374u;
    {
        const bool branch_taken_0x149374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x149378u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x149374) {
            ctx->pc = 0x149384u;
            goto label_149384;
        }
    }
    ctx->pc = 0x14937Cu;
label_14937c:
    // 0x14937c: 0x8e220000
    ctx->pc = 0x14937cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149380: 0xae020000
    ctx->pc = 0x149380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_149384:
    // 0x149384: 0x8e030000
    ctx->pc = 0x149384u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149388: 0x200102d
    ctx->pc = 0x149388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14938c: 0x8e040008
    ctx->pc = 0x14938cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x149390: 0x641821
    ctx->pc = 0x149390u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x149394: 0xae030000
    ctx->pc = 0x149394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_149398:
    // 0x149398: 0xdfbf0020
    ctx->pc = 0x149398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14939c: 0xdfb10010
    ctx->pc = 0x14939cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1493a0: 0xdfb00000
    ctx->pc = 0x1493a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1493a4: 0x3e00008
    ctx->pc = 0x1493A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1493A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149350u: goto label_149350;
            case 0x14937Cu: goto label_14937c;
            case 0x149384u: goto label_149384;
            case 0x149398u: goto label_149398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1493ACu;
}
