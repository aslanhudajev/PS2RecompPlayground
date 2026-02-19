#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayersSetWaveDied
// Address: 0x277268 - 0x277320
void PlayersSetWaveDied_0x277268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x277268u;

    // 0x277268: 0x27bdffc0
    ctx->pc = 0x277268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27726c: 0xffbf0030
    ctx->pc = 0x27726cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x277270: 0xffb20020
    ctx->pc = 0x277270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x277274: 0xffb10010
    ctx->pc = 0x277274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x277278: 0xffb00000
    ctx->pc = 0x277278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27727c: 0xa0902d
    ctx->pc = 0x27727cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277280: 0xc0802d
    ctx->pc = 0x277280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277284: 0x24022b00
    ctx->pc = 0x277284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x277288: 0x822018
    ctx->pc = 0x277288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27728c: 0x3c020032
    ctx->pc = 0x27728cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x277290: 0x24421bc0
    ctx->pc = 0x277290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x277294: 0x828821
    ctx->pc = 0x277294u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x277298: 0xc098940
    ctx->pc = 0x277298u;
    SET_GPR_U32(ctx, 31, 0x2772A0u);
    ctx->pc = 0x27729Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x262500u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldNumLevels_0x262500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2772A0u; }
    }
    if (ctx->pc != 0x2772A0u) { return; }
    ctx->pc = 0x2772A0u;
    // 0x2772a0: 0x2442ffff
    ctx->pc = 0x2772a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2772a4: 0x16020019
    ctx->pc = 0x2772A4u;
    {
        const bool branch_taken_0x2772a4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2772A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2772a4) {
            ctx->pc = 0x27730Cu;
            goto label_27730c;
        }
    }
    ctx->pc = 0x2772ACu;
    // 0x2772ac: 0x8e23000c
    ctx->pc = 0x2772acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2772b0: 0x240200b4
    ctx->pc = 0x2772b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
    // 0x2772b4: 0x622018
    ctx->pc = 0x2772b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2772b8: 0x913021
    ctx->pc = 0x2772b8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2772bc: 0x94c21d8c
    ctx->pc = 0x2772bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 7564)));
    // 0x2772c0: 0x2421007
    ctx->pc = 0x2772c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x2772c4: 0x30420001
    ctx->pc = 0x2772c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2772c8: 0x10400006
    ctx->pc = 0x2772C8u;
    {
        const bool branch_taken_0x2772c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2772CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2772c8) {
            ctx->pc = 0x2772E4u;
            goto label_2772e4;
        }
    }
    ctx->pc = 0x2772D0u;
    // 0x2772d0: 0x2431804
    ctx->pc = 0x2772d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x2772d4: 0x94c21d8e
    ctx->pc = 0x2772d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 7566)));
    // 0x2772d8: 0x431025
    ctx->pc = 0x2772d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2772dc: 0x1000000b
    ctx->pc = 0x2772DCu;
    {
        const bool branch_taken_0x2772dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2772E0u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 7566), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2772dc) {
            ctx->pc = 0x27730Cu;
            goto label_27730c;
        }
    }
    ctx->pc = 0x2772E4u;
label_2772e4:
    // 0x2772e4: 0x8e24000c
    ctx->pc = 0x2772e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2772e8: 0x240200b4
    ctx->pc = 0x2772e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
    // 0x2772ec: 0x821818
    ctx->pc = 0x2772ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2772f0: 0x712021
    ctx->pc = 0x2772f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2772f4: 0x24030001
    ctx->pc = 0x2772f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2772f8: 0x2431804
    ctx->pc = 0x2772f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x2772fc: 0x94821d8c
    ctx->pc = 0x2772fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 7564)));
    // 0x277300: 0x431025
    ctx->pc = 0x277300u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277304: 0xa4821d8c
    ctx->pc = 0x277304u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7564), (uint16_t)GPR_U32(ctx, 2));
    // 0x277308: 0xdfbf0030
    ctx->pc = 0x277308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27730c:
    // 0x27730c: 0xdfb20020
    ctx->pc = 0x27730cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277310: 0xdfb10010
    ctx->pc = 0x277310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277314: 0xdfb00000
    ctx->pc = 0x277314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277318: 0x3e00008
    ctx->pc = 0x277318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27731Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2772E4u: goto label_2772e4;
            case 0x27730Cu: goto label_27730c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277320u;
}
