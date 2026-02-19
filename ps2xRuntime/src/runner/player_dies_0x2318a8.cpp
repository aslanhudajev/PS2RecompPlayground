#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: player_dies
// Address: 0x2318a8 - 0x23193c
void player_dies_0x2318a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2318a8u;

    // 0x2318a8: 0x27bdffd0
    ctx->pc = 0x2318a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2318ac: 0xffbf0020
    ctx->pc = 0x2318acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2318b0: 0xffb10010
    ctx->pc = 0x2318b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2318b4: 0xffb00000
    ctx->pc = 0x2318b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2318b8: 0x80882d
    ctx->pc = 0x2318b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2318bc: 0x24102b00
    ctx->pc = 0x2318bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2318c0: 0x2308018
    ctx->pc = 0x2318c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2318c4: 0x3c020032
    ctx->pc = 0x2318c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2318c8: 0x24421bc0
    ctx->pc = 0x2318c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2318cc: 0xc097b24
    ctx->pc = 0x2318CCu;
    SET_GPR_U32(ctx, 31, 0x2318D4u);
    ctx->pc = 0x2318D0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x25EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerDies_0x25ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318D4u; }
    }
    if (ctx->pc != 0x2318D4u) { return; }
    ctx->pc = 0x2318D4u;
    // 0x2318d4: 0x24020008
    ctx->pc = 0x2318d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2318d8: 0xae0200fc
    ctx->pc = 0x2318d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x2318dc: 0x24020004
    ctx->pc = 0x2318dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2318e0: 0xae0208f8
    ctx->pc = 0x2318e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2296), GPR_U32(ctx, 2));
    // 0x2318e4: 0xae001a10
    ctx->pc = 0x2318e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6672), GPR_U32(ctx, 0));
    // 0x2318e8: 0xae000800
    ctx->pc = 0x2318e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2048), GPR_U32(ctx, 0));
    // 0x2318ec: 0xc08ac94
    ctx->pc = 0x2318ECu;
    SET_GPR_U32(ctx, 31, 0x2318F4u);
    ctx->pc = 0x2318F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B250u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_got_it_0x22b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318F4u; }
    }
    if (ctx->pc != 0x2318F4u) { return; }
    ctx->pc = 0x2318F4u;
    // 0x2318f4: 0x3c030033
    ctx->pc = 0x2318f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x2318f8: 0x8c62c7c4
    ctx->pc = 0x2318f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294952900)));
    // 0x2318fc: 0x1451000b
    ctx->pc = 0x2318FCu;
    {
        const bool branch_taken_0x2318fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x231900u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2318fc) {
            ctx->pc = 0x23192Cu;
            goto label_23192c;
        }
    }
    ctx->pc = 0x231904u;
    // 0x231904: 0x2402ffff
    ctx->pc = 0x231904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231908: 0xac62c7c4
    ctx->pc = 0x231908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952900), GPR_U32(ctx, 2));
    // 0x23190c: 0x3c10003c
    ctx->pc = 0x23190cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x231910: 0x8e041b40
    ctx->pc = 0x231910u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 6976)));
    // 0x231914: 0x10800006
    ctx->pc = 0x231914u;
    {
        const bool branch_taken_0x231914 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x231918u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x231914) {
            ctx->pc = 0x231930u;
            goto label_231930;
        }
    }
    ctx->pc = 0x23191Cu;
    // 0x23191c: 0xc0b0b38
    ctx->pc = 0x23191Cu;
    SET_GPR_U32(ctx, 31, 0x231924u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231924u; }
    }
    if (ctx->pc != 0x231924u) { return; }
    ctx->pc = 0x231924u;
    // 0x231924: 0xae001b40
    ctx->pc = 0x231924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6976), GPR_U32(ctx, 0));
    // 0x231928: 0xdfbf0020
    ctx->pc = 0x231928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23192c:
    // 0x23192c: 0xdfb10010
    ctx->pc = 0x23192cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_231930:
    // 0x231930: 0xdfb00000
    ctx->pc = 0x231930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231934: 0x3e00008
    ctx->pc = 0x231934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231938u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23192Cu: goto label_23192c;
            case 0x231930u: goto label_231930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23193Cu;
}
