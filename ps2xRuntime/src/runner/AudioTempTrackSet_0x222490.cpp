#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTempTrackSet
// Address: 0x222490 - 0x22255c
void AudioTempTrackSet_0x222490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222490u;

    // 0x222490: 0x27bdffa0
    ctx->pc = 0x222490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x222494: 0xffbf0050
    ctx->pc = 0x222494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x222498: 0xffb40040
    ctx->pc = 0x222498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22249c: 0xffb30030
    ctx->pc = 0x22249cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2224a0: 0xffb20020
    ctx->pc = 0x2224a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2224a4: 0xffb10010
    ctx->pc = 0x2224a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2224a8: 0xffb00000
    ctx->pc = 0x2224a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2224ac: 0x80882d
    ctx->pc = 0x2224acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224b0: 0xa0902d
    ctx->pc = 0x2224b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224b4: 0xc0982d
    ctx->pc = 0x2224b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224b8: 0xe0802d
    ctx->pc = 0x2224b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224bc: 0x12000004
    ctx->pc = 0x2224BCu;
    {
        const bool branch_taken_0x2224bc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2224C0u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2224bc) {
            ctx->pc = 0x2224D0u;
            goto label_2224d0;
        }
    }
    ctx->pc = 0x2224C4u;
    // 0x2224c4: 0xc088648
    ctx->pc = 0x2224C4u;
    SET_GPR_U32(ctx, 31, 0x2224CCu);
    ctx->pc = 0x2224C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2224CCu; }
    }
    if (ctx->pc != 0x2224CCu) { return; }
    ctx->pc = 0x2224CCu;
    // 0x2224cc: 0x40402d
    ctx->pc = 0x2224ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2224d0:
    // 0x2224d0: 0x3c03003c
    ctx->pc = 0x2224d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2224d4: 0x9462d600
    ctx->pc = 0x2224d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294956544)));
    // 0x2224d8: 0x24420001
    ctx->pc = 0x2224d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2224dc: 0xa462d600
    ctx->pc = 0x2224dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294956544), (uint16_t)GPR_U32(ctx, 2));
    // 0x2224e0: 0x3042ffff
    ctx->pc = 0x2224e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2224e4: 0x2c424000
    ctx->pc = 0x2224e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 16384));
    // 0x2224e8: 0x14400004
    ctx->pc = 0x2224E8u;
    {
        const bool branch_taken_0x2224e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2224ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2224e8) {
            ctx->pc = 0x2224FCu;
            goto label_2224fc;
        }
    }
    ctx->pc = 0x2224F0u;
    // 0x2224f0: 0x24020001
    ctx->pc = 0x2224f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2224f4: 0xa462d600
    ctx->pc = 0x2224f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294956544), (uint16_t)GPR_U32(ctx, 2));
    // 0x2224f8: 0x3c020032
    ctx->pc = 0x2224f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2224fc:
    // 0x2224fc: 0x2442ff28
    ctx->pc = 0x2224fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967080));
    // 0x222500: 0x24030038
    ctx->pc = 0x222500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 56));
    // 0x222504: 0x2231818
    ctx->pc = 0x222504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222508: 0x621821
    ctx->pc = 0x222508u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22250c: 0x3c020022
    ctx->pc = 0x22250cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x222510: 0x244221e0
    ctx->pc = 0x222510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8672));
    // 0x222514: 0xac620028
    ctx->pc = 0x222514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x222518: 0xac63002c
    ctx->pc = 0x222518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 3));
    // 0x22251c: 0xac720000
    ctx->pc = 0x22251cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x222520: 0xac730008
    ctx->pc = 0x222520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x222524: 0xac70000c
    ctx->pc = 0x222524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
    // 0x222528: 0xac680010
    ctx->pc = 0x222528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 8));
    // 0x22252c: 0xac740004
    ctx->pc = 0x22252cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x222530: 0x3c02003c
    ctx->pc = 0x222530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x222534: 0x9442d600
    ctx->pc = 0x222534u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294956544)));
    // 0x222538: 0xac620014
    ctx->pc = 0x222538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x22253c: 0xdfbf0050
    ctx->pc = 0x22253cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x222540: 0xdfb40040
    ctx->pc = 0x222540u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222544: 0xdfb30030
    ctx->pc = 0x222544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222548: 0xdfb20020
    ctx->pc = 0x222548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22254c: 0xdfb10010
    ctx->pc = 0x22254cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222550: 0xdfb00000
    ctx->pc = 0x222550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222554: 0x3e00008
    ctx->pc = 0x222554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2224D0u: goto label_2224d0;
            case 0x2224FCu: goto label_2224fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22255Cu;
}
