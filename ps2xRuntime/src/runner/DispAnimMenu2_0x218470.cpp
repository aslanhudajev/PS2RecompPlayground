#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DispAnimMenu2
// Address: 0x218470 - 0x21857c
void DispAnimMenu2_0x218470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x218470u;

    // 0x218470: 0x27bdff80
    ctx->pc = 0x218470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x218474: 0xffbf0070
    ctx->pc = 0x218474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x218478: 0xffb60060
    ctx->pc = 0x218478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21847c: 0xffb50050
    ctx->pc = 0x21847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x218480: 0xffb40040
    ctx->pc = 0x218480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x218484: 0xffb30030
    ctx->pc = 0x218484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x218488: 0xffb20020
    ctx->pc = 0x218488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21848c: 0xffb10010
    ctx->pc = 0x21848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x218490: 0xffb00000
    ctx->pc = 0x218490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218494: 0x80982d
    ctx->pc = 0x218494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218498: 0x24150012
    ctx->pc = 0x218498u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 18));
    // 0x21849c: 0x24120003
    ctx->pc = 0x21849cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2184a0: 0x8e640014
    ctx->pc = 0x2184a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2184a4: 0x28820026
    ctx->pc = 0x2184a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 38));
    // 0x2184a8: 0x10400004
    ctx->pc = 0x2184A8u;
    {
        const bool branch_taken_0x2184a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2184ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x2184a8) {
            ctx->pc = 0x2184BCu;
            goto label_2184bc;
        }
    }
    ctx->pc = 0x2184B0u;
    // 0x2184b0: 0x102d
    ctx->pc = 0x2184b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184b4: 0x1000000a
    ctx->pc = 0x2184B4u;
    {
        const bool branch_taken_0x2184b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2184B8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2184b4) {
            ctx->pc = 0x2184E0u;
            goto label_2184e0;
        }
    }
    ctx->pc = 0x2184BCu;
label_2184bc:
    // 0x2184bc: 0x3c02003c
    ctx->pc = 0x2184bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2184c0: 0x51842
    ctx->pc = 0x2184c0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2184c4: 0x8c42d100
    ctx->pc = 0x2184c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955264)));
    // 0x2184c8: 0x628821
    ctx->pc = 0x2184c8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2184cc: 0x225102a
    ctx->pc = 0x2184ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 5)));
    // 0x2184d0: 0xa2880b
    ctx->pc = 0x2184d0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 5));
    // 0x2184d4: 0x224102a
    ctx->pc = 0x2184d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 4)));
    // 0x2184d8: 0x82880a
    ctx->pc = 0x2184d8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 4));
    // 0x2184dc: 0x2251023
    ctx->pc = 0x2184dcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_2184e0:
    // 0x2184e0: 0x40802d
    ctx->pc = 0x2184e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184e4: 0x211102a
    ctx->pc = 0x2184e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x2184e8: 0x1040001a
    ctx->pc = 0x2184E8u;
    {
        const bool branch_taken_0x2184e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2184ECu;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        if (branch_taken_0x2184e8) {
            ctx->pc = 0x218554u;
            goto label_218554;
        }
    }
    ctx->pc = 0x2184F0u;
    // 0x2184f0: 0x24140030
    ctx->pc = 0x2184f0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2184f4: 0x8ec2d100
    ctx->pc = 0x2184f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294955264)));
label_2184f8:
    // 0x2184f8: 0x1602000a
    ctx->pc = 0x2184F8u;
    {
        const bool branch_taken_0x2184f8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2184FCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2184f8) {
            ctx->pc = 0x218524u;
            goto label_218524;
        }
    }
    ctx->pc = 0x218500u;
    // 0x218500: 0x8e670000
    ctx->pc = 0x218500u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x218504: 0x3c0400ff
    ctx->pc = 0x218504u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x218508: 0x3484ff00
    ctx->pc = 0x218508u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x21850c: 0x2a0282d
    ctx->pc = 0x21850cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218510: 0x240302d
    ctx->pc = 0x218510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218514: 0xc0b4724
    ctx->pc = 0x218514u;
    SET_GPR_U32(ctx, 31, 0x21851Cu);
    ctx->pc = 0x218518u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21851Cu; }
    }
    if (ctx->pc != 0x21851Cu) { return; }
    ctx->pc = 0x21851Cu;
    // 0x21851c: 0x10000009
    ctx->pc = 0x21851Cu;
    {
        const bool branch_taken_0x21851c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218520u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x21851c) {
            ctx->pc = 0x218544u;
            goto label_218544;
        }
    }
    ctx->pc = 0x218524u;
label_218524:
    // 0x218524: 0x8e670000
    ctx->pc = 0x218524u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x218528: 0x3c0400ff
    ctx->pc = 0x218528u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x21852c: 0x3484ffff
    ctx->pc = 0x21852cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x218530: 0x2a0282d
    ctx->pc = 0x218530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218534: 0x240302d
    ctx->pc = 0x218534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218538: 0xc0b4724
    ctx->pc = 0x218538u;
    SET_GPR_U32(ctx, 31, 0x218540u);
    ctx->pc = 0x21853Cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218540u; }
    }
    if (ctx->pc != 0x218540u) { return; }
    ctx->pc = 0x218540u;
    // 0x218540: 0x26520001
    ctx->pc = 0x218540u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_218544:
    // 0x218544: 0x26100001
    ctx->pc = 0x218544u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x218548: 0x211102a
    ctx->pc = 0x218548u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x21854c: 0x1440ffea
    ctx->pc = 0x21854Cu;
    {
        const bool branch_taken_0x21854c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x218550u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294955264)));
        if (branch_taken_0x21854c) {
            ctx->pc = 0x2184F8u;
            goto label_2184f8;
        }
    }
    ctx->pc = 0x218554u;
label_218554:
    // 0x218554: 0xdfbf0070
    ctx->pc = 0x218554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218558: 0xdfb60060
    ctx->pc = 0x218558u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21855c: 0xdfb50050
    ctx->pc = 0x21855cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218560: 0xdfb40040
    ctx->pc = 0x218560u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218564: 0xdfb30030
    ctx->pc = 0x218564u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218568: 0xdfb20020
    ctx->pc = 0x218568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21856c: 0xdfb10010
    ctx->pc = 0x21856cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218570: 0xdfb00000
    ctx->pc = 0x218570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218574: 0x3e00008
    ctx->pc = 0x218574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218578u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2184BCu: goto label_2184bc;
            case 0x2184E0u: goto label_2184e0;
            case 0x2184F8u: goto label_2184f8;
            case 0x218524u: goto label_218524;
            case 0x218544u: goto label_218544;
            case 0x218554u: goto label_218554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21857Cu;
}
