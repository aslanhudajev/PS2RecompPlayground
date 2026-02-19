#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayersGiveSecretCoin
// Address: 0x2774e8 - 0x2775cc
void PlayersGiveSecretCoin_0x2774e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2774e8u;

    // 0x2774e8: 0x3c030034
    ctx->pc = 0x2774e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2774ec: 0x2463fc18
    ctx->pc = 0x2774ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966296));
    // 0x2774f0: 0x3c020034
    ctx->pc = 0x2774f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2774f4: 0x8c42e7f4
    ctx->pc = 0x2774f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961140)));
    // 0x2774f8: 0x21080
    ctx->pc = 0x2774f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2774fc: 0x431021
    ctx->pc = 0x2774fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277500: 0x8c460000
    ctx->pc = 0x277500u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277504: 0x4c10003
    ctx->pc = 0x277504u;
    {
        const bool branch_taken_0x277504 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x277508u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x277504) {
            ctx->pc = 0x277514u;
            goto label_277514;
        }
    }
    ctx->pc = 0x27750Cu;
    // 0x27750c: 0x3e00008
    ctx->pc = 0x27750Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277510u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277514u: goto label_277514;
            case 0x277540u: goto label_277540;
            case 0x27756Cu: goto label_27756c;
            case 0x277598u: goto label_277598;
            case 0x2775B8u: goto label_2775b8;
            case 0x2775C4u: goto label_2775c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277514u;
label_277514:
    // 0x277514: 0x282d
    ctx->pc = 0x277514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277518: 0x240b2b00
    ctx->pc = 0x277518u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x27751c: 0x3c020032
    ctx->pc = 0x27751cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x277520: 0x244c1bc0
    ctx->pc = 0x277520u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x277524: 0x240a0001
    ctx->pc = 0x277524u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x277528: 0x24c80200
    ctx->pc = 0x277528u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 512));
    // 0x27752c: 0x3c014270
    ctx->pc = 0x27752cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
    // 0x277530: 0x44810000
    ctx->pc = 0x277530u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x277534: 0x3c020034
    ctx->pc = 0x277534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277538: 0x8c47d31c
    ctx->pc = 0x277538u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294955804)));
    // 0x27753c: 0xab1018
    ctx->pc = 0x27753cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_277540:
    // 0x277540: 0x4c1821
    ctx->pc = 0x277540u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x277544: 0x8c6400fc
    ctx->pc = 0x277544u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x277548: 0x148a0008
    ctx->pc = 0x277548u;
    {
        const bool branch_taken_0x277548 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 10));
        ctx->pc = 0x27754Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x277548) {
            ctx->pc = 0x27756Cu;
            goto label_27756c;
        }
    }
    ctx->pc = 0x277550u;
    // 0x277550: 0x8c620908
    ctx->pc = 0x277550u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2312)));
    // 0x277554: 0x24420001
    ctx->pc = 0x277554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x277558: 0xac620908
    ctx->pc = 0x277558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2312), GPR_U32(ctx, 2));
    // 0x27755c: 0xac680900
    ctx->pc = 0x27755cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2304), GPR_U32(ctx, 8));
    // 0x277560: 0xe4600904
    ctx->pc = 0x277560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2308), bits); }
    // 0x277564: 0x47102a
    ctx->pc = 0x277564u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 7)));
    // 0x277568: 0x82480a
    ctx->pc = 0x277568u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 4));
label_27756c:
    // 0x27756c: 0x28a20004
    ctx->pc = 0x27756cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x277570: 0x1440fff3
    ctx->pc = 0x277570u;
    {
        const bool branch_taken_0x277570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x277574u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x277570) {
            ctx->pc = 0x277540u;
            goto label_277540;
        }
    }
    ctx->pc = 0x277578u;
    // 0x277578: 0x11200012
    ctx->pc = 0x277578u;
    {
        const bool branch_taken_0x277578 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x27757Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x277578) {
            ctx->pc = 0x2775C4u;
            goto label_2775c4;
        }
    }
    ctx->pc = 0x277580u;
    // 0x277580: 0x24082b00
    ctx->pc = 0x277580u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x277584: 0x3c020032
    ctx->pc = 0x277584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x277588: 0x244a1bc0
    ctx->pc = 0x277588u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x27758c: 0x24070001
    ctx->pc = 0x27758cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x277590: 0x24c6fff8
    ctx->pc = 0x277590u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x277594: 0xa81018
    ctx->pc = 0x277594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_277598:
    // 0x277598: 0x4a2021
    ctx->pc = 0x277598u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x27759c: 0x8c8300fc
    ctx->pc = 0x27759cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x2775a0: 0x14670005
    ctx->pc = 0x2775A0u;
    {
        const bool branch_taken_0x2775a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 7));
        ctx->pc = 0x2775A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2775a0) {
            ctx->pc = 0x2775B8u;
            goto label_2775b8;
        }
    }
    ctx->pc = 0x2775A8u;
    // 0x2775a8: 0xc31804
    ctx->pc = 0x2775a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x2775ac: 0x948209a8
    ctx->pc = 0x2775acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2472)));
    // 0x2775b0: 0x431025
    ctx->pc = 0x2775b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2775b4: 0xa48209a8
    ctx->pc = 0x2775b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2472), (uint16_t)GPR_U32(ctx, 2));
label_2775b8:
    // 0x2775b8: 0x28a20004
    ctx->pc = 0x2775b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x2775bc: 0x1440fff6
    ctx->pc = 0x2775BCu;
    {
        const bool branch_taken_0x2775bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2775C0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2775bc) {
            ctx->pc = 0x277598u;
            goto label_277598;
        }
    }
    ctx->pc = 0x2775C4u;
label_2775c4:
    // 0x2775c4: 0x3e00008
    ctx->pc = 0x2775C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2775C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277514u: goto label_277514;
            case 0x277540u: goto label_277540;
            case 0x27756Cu: goto label_27756c;
            case 0x277598u: goto label_277598;
            case 0x2775B8u: goto label_2775b8;
            case 0x2775C4u: goto label_2775c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2775CCu;
}
