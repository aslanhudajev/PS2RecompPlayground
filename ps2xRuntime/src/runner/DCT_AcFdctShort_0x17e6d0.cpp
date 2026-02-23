#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DCT_AcFdctShort
// Address: 0x17e6d0 - 0x17e80c
void DCT_AcFdctShort_0x17e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DCT_AcFdctShort");


    ctx->pc = 0x17e6d0u;

    // 0x17e6d0: 0x27bdfd70
    ctx->pc = 0x17e6d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x17e6d4: 0xffb70270
    ctx->pc = 0x17e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 23));
    // 0x17e6d8: 0xffb40240
    ctx->pc = 0x17e6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 20));
    // 0x17e6dc: 0xa0b82d
    ctx->pc = 0x17e6dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6e0: 0xffbf0280
    ctx->pc = 0x17e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
    // 0x17e6e4: 0x80a02d
    ctx->pc = 0x17e6e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6e8: 0xffb60260
    ctx->pc = 0x17e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 22));
    // 0x17e6ec: 0x282d
    ctx->pc = 0x17e6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6f0: 0xffb50250
    ctx->pc = 0x17e6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 21));
    // 0x17e6f4: 0xffb30230
    ctx->pc = 0x17e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 19));
    // 0x17e6f8: 0xffb20220
    ctx->pc = 0x17e6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
    // 0x17e6fc: 0xffb10210
    ctx->pc = 0x17e6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 17));
    // 0x17e700: 0xffb00200
    ctx->pc = 0x17e700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x17e704: 0x51900
    ctx->pc = 0x17e704u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
label_17e708:
    // 0x17e708: 0x51180
    ctx->pc = 0x17e708u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 6));
    // 0x17e70c: 0x5d8821
    ctx->pc = 0x17e70cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17e710: 0x748021
    ctx->pc = 0x17e710u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x17e714: 0x24b30001
    ctx->pc = 0x17e714u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17e718: 0x24120007
    ctx->pc = 0x17e718u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 7));
    // 0x17e71c: 0x0
    ctx->pc = 0x17e71cu;
    // NOP
label_17e720:
    // 0x17e720: 0x86040000
    ctx->pc = 0x17e720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e724: 0x2652ffff
    ctx->pc = 0x17e724u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17e728: 0xc052e16
    ctx->pc = 0x17E728u;
    SET_GPR_U32(ctx, 31, 0x17E730u);
    ctx->pc = 0x17E72Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E730u; }
        else if (ctx->pc != 0x17E730u) { ctx->pc = 0x17E730u; }
    }
    if (ctx->pc != 0x17E730u) { return; }
    ctx->pc = 0x17E730u;
    // 0x17e730: 0xfe220000
    ctx->pc = 0x17e730u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x17e734: 0x641fffa
    ctx->pc = 0x17E734u;
    {
        const bool branch_taken_0x17e734 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17E738u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x17e734) {
            ctx->pc = 0x17E720u;
            goto label_17e720;
        }
    }
    ctx->pc = 0x17E73Cu;
    // 0x17e73c: 0x260282d
    ctx->pc = 0x17e73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e740: 0x28a20008
    ctx->pc = 0x17e740u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x17e744: 0x1440fff0
    ctx->pc = 0x17E744u;
    {
        const bool branch_taken_0x17e744 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E748u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x17e744) {
            ctx->pc = 0x17E708u;
            goto label_17e708;
        }
    }
    ctx->pc = 0x17E74Cu;
    // 0x17e74c: 0x3a0202d
    ctx->pc = 0x17e74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e750: 0xc05fa54
    ctx->pc = 0x17E750u;
    SET_GPR_U32(ctx, 31, 0x17E758u);
    ctx->pc = 0x17E754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E950u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_AcFdctDouble_0x17e950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E758u; }
        else if (ctx->pc != 0x17E758u) { ctx->pc = 0x17E758u; }
    }
    if (ctx->pc != 0x17E758u) { return; }
    ctx->pc = 0x17E758u;
    // 0x17e758: 0x241607ff
    ctx->pc = 0x17e758u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2047));
    // 0x17e75c: 0x282d
    ctx->pc = 0x17e75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e760: 0x2415f800
    ctx->pc = 0x17e760u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x17e764: 0x2414f7ff
    ctx->pc = 0x17e764u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x17e768: 0x51980
    ctx->pc = 0x17e768u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
    // 0x17e76c: 0x0
    ctx->pc = 0x17e76cu;
    // NOP
label_17e770:
    // 0x17e770: 0x51100
    ctx->pc = 0x17e770u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x17e774: 0x578821
    ctx->pc = 0x17e774u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x17e778: 0x7d8021
    ctx->pc = 0x17e778u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x17e77c: 0x24b30001
    ctx->pc = 0x17e77cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17e780: 0x24120007
    ctx->pc = 0x17e780u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 7));
    // 0x17e784: 0x0
    ctx->pc = 0x17e784u;
    // NOP
label_17e788:
    // 0x17e788: 0xde040000
    ctx->pc = 0x17e788u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e78c: 0x2652ffff
    ctx->pc = 0x17e78cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17e790: 0x3405ff80
    ctx->pc = 0x17e790u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x17e794: 0x52bbc
    ctx->pc = 0x17e794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x17e798: 0xc052c88
    ctx->pc = 0x17E798u;
    SET_GPR_U32(ctx, 31, 0x17E7A0u);
    ctx->pc = 0x17E79Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7A0u; }
        else if (ctx->pc != 0x17E7A0u) { ctx->pc = 0x17E7A0u; }
    }
    if (ctx->pc != 0x17E7A0u) { return; }
    ctx->pc = 0x17E7A0u;
    // 0x17e7a0: 0xc0540b0
    ctx->pc = 0x17E7A0u;
    SET_GPR_U32(ctx, 31, 0x17E7A8u);
    ctx->pc = 0x17E7A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1502C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        floor_0x1502c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7A8u; }
        else if (ctx->pc != 0x17E7A8u) { ctx->pc = 0x17E7A8u; }
    }
    if (ctx->pc != 0x17E7A8u) { return; }
    ctx->pc = 0x17E7A8u;
    // 0x17e7a8: 0xc052e44
    ctx->pc = 0x17E7A8u;
    SET_GPR_U32(ctx, 31, 0x17E7B0u);
    ctx->pc = 0x17E7ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7B0u; }
        else if (ctx->pc != 0x17E7B0u) { ctx->pc = 0x17E7B0u; }
    }
    if (ctx->pc != 0x17E7B0u) { return; }
    ctx->pc = 0x17E7B0u;
    // 0x17e7b0: 0x28430800
    ctx->pc = 0x17e7b0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2048));
    // 0x17e7b4: 0x2c0202d
    ctx->pc = 0x17e7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7b8: 0x43200b
    ctx->pc = 0x17e7b8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x17e7bc: 0x284102a
    ctx->pc = 0x17e7bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 4)));
    // 0x17e7c0: 0x2a2200a
    ctx->pc = 0x17e7c0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 21));
    // 0x17e7c4: 0xa6240000
    ctx->pc = 0x17e7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17e7c8: 0x641ffef
    ctx->pc = 0x17E7C8u;
    {
        const bool branch_taken_0x17e7c8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17E7CCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x17e7c8) {
            ctx->pc = 0x17E788u;
            goto label_17e788;
        }
    }
    ctx->pc = 0x17E7D0u;
    // 0x17e7d0: 0x260282d
    ctx->pc = 0x17e7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7d4: 0x28a20008
    ctx->pc = 0x17e7d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x17e7d8: 0x5440ffe5
    ctx->pc = 0x17E7D8u;
    {
        const bool branch_taken_0x17e7d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17e7d8) {
            ctx->pc = 0x17E7DCu;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
            ctx->pc = 0x17E770u;
            goto label_17e770;
        }
    }
    ctx->pc = 0x17E7E0u;
    // 0x17e7e0: 0xdfbf0280
    ctx->pc = 0x17e7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x17e7e4: 0xdfb70270
    ctx->pc = 0x17e7e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x17e7e8: 0xdfb60260
    ctx->pc = 0x17e7e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x17e7ec: 0xdfb50250
    ctx->pc = 0x17e7ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x17e7f0: 0xdfb40240
    ctx->pc = 0x17e7f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x17e7f4: 0xdfb30230
    ctx->pc = 0x17e7f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x17e7f8: 0xdfb20220
    ctx->pc = 0x17e7f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x17e7fc: 0xdfb10210
    ctx->pc = 0x17e7fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x17e800: 0xdfb00200
    ctx->pc = 0x17e800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x17e804: 0x3e00008
    ctx->pc = 0x17E804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E808u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E708u: goto label_17e708;
            case 0x17E720u: goto label_17e720;
            case 0x17E770u: goto label_17e770;
            case 0x17E788u: goto label_17e788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E80Cu;
}
