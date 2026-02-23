#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DCT_AcIdctShort
// Address: 0x17e810 - 0x17e94c
void DCT_AcIdctShort_0x17e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DCT_AcIdctShort");


    ctx->pc = 0x17e810u;

    // 0x17e810: 0x27bdfd70
    ctx->pc = 0x17e810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x17e814: 0xffb70270
    ctx->pc = 0x17e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 23));
    // 0x17e818: 0xffb40240
    ctx->pc = 0x17e818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 20));
    // 0x17e81c: 0xa0b82d
    ctx->pc = 0x17e81cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e820: 0xffbf0280
    ctx->pc = 0x17e820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
    // 0x17e824: 0x80a02d
    ctx->pc = 0x17e824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e828: 0xffb60260
    ctx->pc = 0x17e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 22));
    // 0x17e82c: 0x282d
    ctx->pc = 0x17e82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e830: 0xffb50250
    ctx->pc = 0x17e830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 21));
    // 0x17e834: 0xffb30230
    ctx->pc = 0x17e834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 19));
    // 0x17e838: 0xffb20220
    ctx->pc = 0x17e838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
    // 0x17e83c: 0xffb10210
    ctx->pc = 0x17e83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 17));
    // 0x17e840: 0xffb00200
    ctx->pc = 0x17e840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x17e844: 0x51900
    ctx->pc = 0x17e844u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
label_17e848:
    // 0x17e848: 0x51180
    ctx->pc = 0x17e848u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 6));
    // 0x17e84c: 0x5d8821
    ctx->pc = 0x17e84cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17e850: 0x748021
    ctx->pc = 0x17e850u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x17e854: 0x24b30001
    ctx->pc = 0x17e854u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17e858: 0x24120007
    ctx->pc = 0x17e858u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 7));
    // 0x17e85c: 0x0
    ctx->pc = 0x17e85cu;
    // NOP
label_17e860:
    // 0x17e860: 0x86040000
    ctx->pc = 0x17e860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e864: 0x2652ffff
    ctx->pc = 0x17e864u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17e868: 0xc052e16
    ctx->pc = 0x17E868u;
    SET_GPR_U32(ctx, 31, 0x17E870u);
    ctx->pc = 0x17E86Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E870u; }
        else if (ctx->pc != 0x17E870u) { ctx->pc = 0x17E870u; }
    }
    if (ctx->pc != 0x17E870u) { return; }
    ctx->pc = 0x17E870u;
    // 0x17e870: 0xfe220000
    ctx->pc = 0x17e870u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x17e874: 0x641fffa
    ctx->pc = 0x17E874u;
    {
        const bool branch_taken_0x17e874 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17E878u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x17e874) {
            ctx->pc = 0x17E860u;
            goto label_17e860;
        }
    }
    ctx->pc = 0x17E87Cu;
    // 0x17e87c: 0x260282d
    ctx->pc = 0x17e87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e880: 0x28a20008
    ctx->pc = 0x17e880u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x17e884: 0x1440fff0
    ctx->pc = 0x17E884u;
    {
        const bool branch_taken_0x17e884 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E888u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x17e884) {
            ctx->pc = 0x17E848u;
            goto label_17e848;
        }
    }
    ctx->pc = 0x17E88Cu;
    // 0x17e88c: 0x3a0202d
    ctx->pc = 0x17e88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e890: 0xc05fa58
    ctx->pc = 0x17E890u;
    SET_GPR_U32(ctx, 31, 0x17E898u);
    ctx->pc = 0x17E894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E960u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_AcIdctDouble_0x17e960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E898u; }
        else if (ctx->pc != 0x17E898u) { ctx->pc = 0x17E898u; }
    }
    if (ctx->pc != 0x17E898u) { return; }
    ctx->pc = 0x17E898u;
    // 0x17e898: 0x241600ff
    ctx->pc = 0x17e898u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 255));
    // 0x17e89c: 0x282d
    ctx->pc = 0x17e89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8a0: 0x2415ff00
    ctx->pc = 0x17e8a0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x17e8a4: 0x2414feff
    ctx->pc = 0x17e8a4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x17e8a8: 0x51980
    ctx->pc = 0x17e8a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
    // 0x17e8ac: 0x0
    ctx->pc = 0x17e8acu;
    // NOP
label_17e8b0:
    // 0x17e8b0: 0x51100
    ctx->pc = 0x17e8b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x17e8b4: 0x578821
    ctx->pc = 0x17e8b4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x17e8b8: 0x7d8021
    ctx->pc = 0x17e8b8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x17e8bc: 0x24b30001
    ctx->pc = 0x17e8bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17e8c0: 0x24120007
    ctx->pc = 0x17e8c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 7));
    // 0x17e8c4: 0x0
    ctx->pc = 0x17e8c4u;
    // NOP
label_17e8c8:
    // 0x17e8c8: 0xde040000
    ctx->pc = 0x17e8c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e8cc: 0x2652ffff
    ctx->pc = 0x17e8ccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17e8d0: 0x3405ff80
    ctx->pc = 0x17e8d0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x17e8d4: 0x52bbc
    ctx->pc = 0x17e8d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x17e8d8: 0xc052c88
    ctx->pc = 0x17E8D8u;
    SET_GPR_U32(ctx, 31, 0x17E8E0u);
    ctx->pc = 0x17E8DCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8E0u; }
        else if (ctx->pc != 0x17E8E0u) { ctx->pc = 0x17E8E0u; }
    }
    if (ctx->pc != 0x17E8E0u) { return; }
    ctx->pc = 0x17E8E0u;
    // 0x17e8e0: 0xc0540b0
    ctx->pc = 0x17E8E0u;
    SET_GPR_U32(ctx, 31, 0x17E8E8u);
    ctx->pc = 0x17E8E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1502C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        floor_0x1502c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8E8u; }
        else if (ctx->pc != 0x17E8E8u) { ctx->pc = 0x17E8E8u; }
    }
    if (ctx->pc != 0x17E8E8u) { return; }
    ctx->pc = 0x17E8E8u;
    // 0x17e8e8: 0xc052e44
    ctx->pc = 0x17E8E8u;
    SET_GPR_U32(ctx, 31, 0x17E8F0u);
    ctx->pc = 0x17E8ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8F0u; }
        else if (ctx->pc != 0x17E8F0u) { ctx->pc = 0x17E8F0u; }
    }
    if (ctx->pc != 0x17E8F0u) { return; }
    ctx->pc = 0x17E8F0u;
    // 0x17e8f0: 0x28430100
    ctx->pc = 0x17e8f0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 256));
    // 0x17e8f4: 0x2c0202d
    ctx->pc = 0x17e8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8f8: 0x43200b
    ctx->pc = 0x17e8f8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x17e8fc: 0x284102a
    ctx->pc = 0x17e8fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 4)));
    // 0x17e900: 0x2a2200a
    ctx->pc = 0x17e900u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 21));
    // 0x17e904: 0xa6240000
    ctx->pc = 0x17e904u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17e908: 0x641ffef
    ctx->pc = 0x17E908u;
    {
        const bool branch_taken_0x17e908 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17E90Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x17e908) {
            ctx->pc = 0x17E8C8u;
            goto label_17e8c8;
        }
    }
    ctx->pc = 0x17E910u;
    // 0x17e910: 0x260282d
    ctx->pc = 0x17e910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e914: 0x28a20008
    ctx->pc = 0x17e914u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x17e918: 0x5440ffe5
    ctx->pc = 0x17E918u;
    {
        const bool branch_taken_0x17e918 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17e918) {
            ctx->pc = 0x17E91Cu;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
            ctx->pc = 0x17E8B0u;
            goto label_17e8b0;
        }
    }
    ctx->pc = 0x17E920u;
    // 0x17e920: 0xdfbf0280
    ctx->pc = 0x17e920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x17e924: 0xdfb70270
    ctx->pc = 0x17e924u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x17e928: 0xdfb60260
    ctx->pc = 0x17e928u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x17e92c: 0xdfb50250
    ctx->pc = 0x17e92cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x17e930: 0xdfb40240
    ctx->pc = 0x17e930u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x17e934: 0xdfb30230
    ctx->pc = 0x17e934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x17e938: 0xdfb20220
    ctx->pc = 0x17e938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x17e93c: 0xdfb10210
    ctx->pc = 0x17e93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x17e940: 0xdfb00200
    ctx->pc = 0x17e940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x17e944: 0x3e00008
    ctx->pc = 0x17E944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E948u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E848u: goto label_17e848;
            case 0x17E860u: goto label_17e860;
            case 0x17E8B0u: goto label_17e8b0;
            case 0x17E8C8u: goto label_17e8c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E94Cu;
}
