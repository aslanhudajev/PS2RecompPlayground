#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kill_got_it
// Address: 0x22b250 - 0x22b334
void kill_got_it_0x22b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22b250u;

    // 0x22b250: 0x27bdff70
    ctx->pc = 0x22b250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22b254: 0xffbf0080
    ctx->pc = 0x22b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22b258: 0xffb70070
    ctx->pc = 0x22b258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22b25c: 0xffb60060
    ctx->pc = 0x22b25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22b260: 0xffb50050
    ctx->pc = 0x22b260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22b264: 0xffb40040
    ctx->pc = 0x22b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22b268: 0xffb30030
    ctx->pc = 0x22b268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22b26c: 0xffb20020
    ctx->pc = 0x22b26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22b270: 0xffb10010
    ctx->pc = 0x22b270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22b274: 0xffb00000
    ctx->pc = 0x22b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b278: 0x80982d
    ctx->pc = 0x22b278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b27c: 0x882d
    ctx->pc = 0x22b27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b280: 0x3c020033
    ctx->pc = 0x22b280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22b284: 0x2457cb70
    ctx->pc = 0x22b284u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294953840));
    // 0x22b288: 0x2412001c
    ctx->pc = 0x22b288u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 28));
    // 0x22b28c: 0x3c020033
    ctx->pc = 0x22b28cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22b290: 0x2456cb74
    ctx->pc = 0x22b290u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294953844));
    // 0x22b294: 0x3c020033
    ctx->pc = 0x22b294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22b298: 0x2455cb84
    ctx->pc = 0x22b298u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294953860));
    // 0x22b29c: 0x3c020033
    ctx->pc = 0x22b29cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22b2a0: 0x2454cb88
    ctx->pc = 0x22b2a0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294953864));
    // 0x22b2a4: 0x2321818
    ctx->pc = 0x22b2a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b2a8:
    // 0x22b2a8: 0x761021
    ctx->pc = 0x22b2a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x22b2ac: 0x8c420000
    ctx->pc = 0x22b2acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b2b0: 0x54530012
    ctx->pc = 0x22B2B0u;
    {
        const bool branch_taken_0x22b2b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x22b2b0) {
            ctx->pc = 0x22B2B4u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x22B2FCu;
            goto label_22b2fc;
        }
    }
    ctx->pc = 0x22B2B8u;
    // 0x22b2b8: 0x771021
    ctx->pc = 0x22b2b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x22b2bc: 0xac400000
    ctx->pc = 0x22b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22b2c0: 0x758021
    ctx->pc = 0x22b2c0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x22b2c4: 0x8e040000
    ctx->pc = 0x22b2c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22b2c8: 0x10800005
    ctx->pc = 0x22B2C8u;
    {
        const bool branch_taken_0x22b2c8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B2CCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22b2c8) {
            ctx->pc = 0x22B2E0u;
            goto label_22b2e0;
        }
    }
    ctx->pc = 0x22B2D0u;
    // 0x22b2d0: 0xc0b0b38
    ctx->pc = 0x22B2D0u;
    SET_GPR_U32(ctx, 31, 0x22B2D8u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B2D8u; }
    }
    if (ctx->pc != 0x22B2D8u) { return; }
    ctx->pc = 0x22B2D8u;
    // 0x22b2d8: 0xae000000
    ctx->pc = 0x22b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x22b2dc: 0x2321018
    ctx->pc = 0x22b2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b2e0:
    // 0x22b2e0: 0x548021
    ctx->pc = 0x22b2e0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x22b2e4: 0x8e040000
    ctx->pc = 0x22b2e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22b2e8: 0x10800004
    ctx->pc = 0x22B2E8u;
    {
        const bool branch_taken_0x22b2e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B2ECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x22b2e8) {
            ctx->pc = 0x22B2FCu;
            goto label_22b2fc;
        }
    }
    ctx->pc = 0x22B2F0u;
    // 0x22b2f0: 0xc0b0b38
    ctx->pc = 0x22B2F0u;
    SET_GPR_U32(ctx, 31, 0x22B2F8u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B2F8u; }
    }
    if (ctx->pc != 0x22B2F8u) { return; }
    ctx->pc = 0x22B2F8u;
    // 0x22b2f8: 0xae000000
    ctx->pc = 0x22b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_22b2fc:
    // 0x22b2fc: 0x2a220018
    ctx->pc = 0x22b2fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 24));
    // 0x22b300: 0x1440ffe9
    ctx->pc = 0x22B300u;
    {
        const bool branch_taken_0x22b300 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22B304u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22b300) {
            ctx->pc = 0x22B2A8u;
            goto label_22b2a8;
        }
    }
    ctx->pc = 0x22B308u;
    // 0x22b308: 0xdfbf0080
    ctx->pc = 0x22b308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b30c: 0xdfb70070
    ctx->pc = 0x22b30cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22b310: 0xdfb60060
    ctx->pc = 0x22b310u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22b314: 0xdfb50050
    ctx->pc = 0x22b314u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22b318: 0xdfb40040
    ctx->pc = 0x22b318u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b31c: 0xdfb30030
    ctx->pc = 0x22b31cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b320: 0xdfb20020
    ctx->pc = 0x22b320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b324: 0xdfb10010
    ctx->pc = 0x22b324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b328: 0xdfb00000
    ctx->pc = 0x22b328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b32c: 0x3e00008
    ctx->pc = 0x22B32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B330u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B2A8u: goto label_22b2a8;
            case 0x22B2E0u: goto label_22b2e0;
            case 0x22B2FCu: goto label_22b2fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B334u;
}
