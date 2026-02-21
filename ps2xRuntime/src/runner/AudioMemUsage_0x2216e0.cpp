#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioMemUsage
// Address: 0x2216e0 - 0x2217a4
void AudioMemUsage_0x2216e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2216e0u;

    // 0x2216e0: 0x27bdff90
    ctx->pc = 0x2216e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2216e4: 0xffbf0060
    ctx->pc = 0x2216e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2216e8: 0xffb50050
    ctx->pc = 0x2216e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2216ec: 0xffb40040
    ctx->pc = 0x2216ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2216f0: 0xffb30030
    ctx->pc = 0x2216f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2216f4: 0xffb20020
    ctx->pc = 0x2216f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2216f8: 0xffb10010
    ctx->pc = 0x2216f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2216fc: 0xffb00000
    ctx->pc = 0x2216fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221700: 0x80802d
    ctx->pc = 0x221700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221704: 0xa0982d
    ctx->pc = 0x221704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221708: 0xc0882d
    ctx->pc = 0x221708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22170c: 0xe0a02d
    ctx->pc = 0x22170cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221710: 0x100902d
    ctx->pc = 0x221710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221714: 0xc088ea4
    ctx->pc = 0x221714u;
    SET_GPR_U32(ctx, 31, 0x22171Cu);
    ctx->pc = 0x221718u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x223A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_mem_query_0x223a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22171Cu; }
    }
    if (ctx->pc != 0x22171Cu) { return; }
    ctx->pc = 0x22171Cu;
    // 0x22171c: 0x12000003
    ctx->pc = 0x22171Cu;
    {
        const bool branch_taken_0x22171c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x221720u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22171c) {
            ctx->pc = 0x22172Cu;
            goto label_22172c;
        }
    }
    ctx->pc = 0x221724u;
    // 0x221724: 0x8c620000
    ctx->pc = 0x221724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221728: 0xae020000
    ctx->pc = 0x221728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22172c:
    // 0x22172c: 0x12200003
    ctx->pc = 0x22172Cu;
    {
        const bool branch_taken_0x22172c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x22172c) {
            ctx->pc = 0x22173Cu;
            goto label_22173c;
        }
    }
    ctx->pc = 0x221734u;
    // 0x221734: 0x8c620004
    ctx->pc = 0x221734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x221738: 0xae220000
    ctx->pc = 0x221738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22173c:
    // 0x22173c: 0x12400003
    ctx->pc = 0x22173Cu;
    {
        const bool branch_taken_0x22173c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x22173c) {
            ctx->pc = 0x22174Cu;
            goto label_22174c;
        }
    }
    ctx->pc = 0x221744u;
    // 0x221744: 0x8c620008
    ctx->pc = 0x221744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x221748: 0xae420000
    ctx->pc = 0x221748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_22174c:
    // 0x22174c: 0x12600003
    ctx->pc = 0x22174Cu;
    {
        const bool branch_taken_0x22174c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x22174c) {
            ctx->pc = 0x22175Cu;
            goto label_22175c;
        }
    }
    ctx->pc = 0x221754u;
    // 0x221754: 0x8c62000c
    ctx->pc = 0x221754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x221758: 0xae620000
    ctx->pc = 0x221758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_22175c:
    // 0x22175c: 0x12800003
    ctx->pc = 0x22175Cu;
    {
        const bool branch_taken_0x22175c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x22175c) {
            ctx->pc = 0x22176Cu;
            goto label_22176c;
        }
    }
    ctx->pc = 0x221764u;
    // 0x221764: 0x8c620010
    ctx->pc = 0x221764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x221768: 0xae820000
    ctx->pc = 0x221768u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_22176c:
    // 0x22176c: 0x12a00004
    ctx->pc = 0x22176Cu;
    {
        const bool branch_taken_0x22176c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x221770u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22176c) {
            ctx->pc = 0x221780u;
            goto label_221780;
        }
    }
    ctx->pc = 0x221774u;
    // 0x221774: 0x8c620014
    ctx->pc = 0x221774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x221778: 0xaea20000
    ctx->pc = 0x221778u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x22177c: 0x102d
    ctx->pc = 0x22177cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221780:
    // 0x221780: 0xdfbf0060
    ctx->pc = 0x221780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x221784: 0xdfb50050
    ctx->pc = 0x221784u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221788: 0xdfb40040
    ctx->pc = 0x221788u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22178c: 0xdfb30030
    ctx->pc = 0x22178cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221790: 0xdfb20020
    ctx->pc = 0x221790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221794: 0xdfb10010
    ctx->pc = 0x221794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221798: 0xdfb00000
    ctx->pc = 0x221798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22179c: 0x3e00008
    ctx->pc = 0x22179Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2217A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22172Cu: goto label_22172c;
            case 0x22173Cu: goto label_22173c;
            case 0x22174Cu: goto label_22174c;
            case 0x22175Cu: goto label_22175c;
            case 0x22176Cu: goto label_22176c;
            case 0x221780u: goto label_221780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2217A4u;
}
