#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: controls_remove_active_player
// Address: 0x207220 - 0x207320
void controls_remove_active_player_0x207220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207220u;

    // 0x207220: 0x2402ffff
    ctx->pc = 0x207220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207224: 0x14820023
    ctx->pc = 0x207224u;
    {
        const bool branch_taken_0x207224 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x207228u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x207224) {
            ctx->pc = 0x2072B4u;
            goto label_2072b4;
        }
    }
    ctx->pc = 0x20722Cu;
    // 0x20722c: 0x202d
    ctx->pc = 0x20722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207230: 0x3c020031
    ctx->pc = 0x207230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x207234: 0x24450e90
    ctx->pc = 0x207234u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 3728));
    // 0x207238: 0x2403ffff
    ctx->pc = 0x207238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20723c: 0x0
    ctx->pc = 0x20723cu;
    // NOP
label_207240:
    // 0x207240: 0x41080
    ctx->pc = 0x207240u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x207244: 0x451021
    ctx->pc = 0x207244u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x207248: 0xac430000
    ctx->pc = 0x207248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x20724c: 0x24840001
    ctx->pc = 0x20724cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x207250: 0x28820004
    ctx->pc = 0x207250u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x207254: 0x1440fffa
    ctx->pc = 0x207254u;
    {
        const bool branch_taken_0x207254 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x207254) {
            ctx->pc = 0x207240u;
            goto label_207240;
        }
    }
    ctx->pc = 0x20725Cu;
    // 0x20725c: 0x202d
    ctx->pc = 0x20725cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207260: 0x3c02003c
    ctx->pc = 0x207260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x207264: 0x2448b320
    ctx->pc = 0x207264u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294947616));
    // 0x207268: 0x3c02003c
    ctx->pc = 0x207268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20726c: 0x2447b340
    ctx->pc = 0x20726cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294947648));
    // 0x207270: 0x3c020031
    ctx->pc = 0x207270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x207274: 0x24460ea0
    ctx->pc = 0x207274u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 3744));
    // 0x207278: 0x2405ffff
    ctx->pc = 0x207278u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20727c: 0x0
    ctx->pc = 0x20727cu;
    // NOP
label_207280:
    // 0x207280: 0x41880
    ctx->pc = 0x207280u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x207284: 0x681021
    ctx->pc = 0x207284u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x207288: 0xac400000
    ctx->pc = 0x207288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20728c: 0x671021
    ctx->pc = 0x20728cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x207290: 0xac400000
    ctx->pc = 0x207290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x207294: 0x661821
    ctx->pc = 0x207294u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x207298: 0x24840001
    ctx->pc = 0x207298u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20729c: 0x28820008
    ctx->pc = 0x20729cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x2072a0: 0x1440fff7
    ctx->pc = 0x2072A0u;
    {
        const bool branch_taken_0x2072a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2072A4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x2072a0) {
            ctx->pc = 0x207280u;
            goto label_207280;
        }
    }
    ctx->pc = 0x2072A8u;
    // 0x2072a8: 0x3c020031
    ctx->pc = 0x2072a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2072ac: 0x1000001a
    ctx->pc = 0x2072ACu;
    {
        const bool branch_taken_0x2072ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2072B0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 3660), GPR_U32(ctx, 0));
        if (branch_taken_0x2072ac) {
            ctx->pc = 0x207318u;
            goto label_207318;
        }
    }
    ctx->pc = 0x2072B4u;
label_2072b4:
    // 0x2072b4: 0x24630e90
    ctx->pc = 0x2072b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3728));
    // 0x2072b8: 0x41080
    ctx->pc = 0x2072b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2072bc: 0x431021
    ctx->pc = 0x2072bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2072c0: 0x8c430000
    ctx->pc = 0x2072c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2072c4: 0x460000e
    ctx->pc = 0x2072C4u;
    {
        const bool branch_taken_0x2072c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2072C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2072c4) {
            ctx->pc = 0x207300u;
            goto label_207300;
        }
    }
    ctx->pc = 0x2072CCu;
    // 0x2072cc: 0x2442b320
    ctx->pc = 0x2072ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947616));
    // 0x2072d0: 0x31880
    ctx->pc = 0x2072d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2072d4: 0x621021
    ctx->pc = 0x2072d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2072d8: 0xac400000
    ctx->pc = 0x2072d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2072dc: 0x3c02003c
    ctx->pc = 0x2072dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2072e0: 0x2442b340
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947648));
    // 0x2072e4: 0x621021
    ctx->pc = 0x2072e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2072e8: 0xac400000
    ctx->pc = 0x2072e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2072ec: 0x3c020031
    ctx->pc = 0x2072ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2072f0: 0x24420ea0
    ctx->pc = 0x2072f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3744));
    // 0x2072f4: 0x621821
    ctx->pc = 0x2072f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2072f8: 0x2402ffff
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2072fc: 0xac620000
    ctx->pc = 0x2072fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_207300:
    // 0x207300: 0x3c020031
    ctx->pc = 0x207300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x207304: 0x24420e90
    ctx->pc = 0x207304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3728));
    // 0x207308: 0x41880
    ctx->pc = 0x207308u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20730c: 0x621821
    ctx->pc = 0x20730cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207310: 0x2402ffff
    ctx->pc = 0x207310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207314: 0xac620000
    ctx->pc = 0x207314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_207318:
    // 0x207318: 0x8081c5e
    ctx->pc = 0x207318u;
    ctx->pc = 0x207178u;
    controls_set_active_players_0x207178(rdram, ctx, runtime); return;
    ctx->pc = 0x207320u;
}
