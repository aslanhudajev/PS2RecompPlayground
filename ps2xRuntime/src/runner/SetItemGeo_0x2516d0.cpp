#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetItemGeo
// Address: 0x2516d0 - 0x2518bc
void SetItemGeo_0x2516d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2516d0u;

    // 0x2516d0: 0x27bdffb0
    ctx->pc = 0x2516d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2516d4: 0xffbf0040
    ctx->pc = 0x2516d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2516d8: 0xffb30030
    ctx->pc = 0x2516d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2516dc: 0xffb20020
    ctx->pc = 0x2516dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2516e0: 0xffb10010
    ctx->pc = 0x2516e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2516e4: 0xffb00000
    ctx->pc = 0x2516e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2516e8: 0x80802d
    ctx->pc = 0x2516e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516ec: 0xa0202d
    ctx->pc = 0x2516ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516f0: 0xc0902d
    ctx->pc = 0x2516f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516f4: 0xe0882d
    ctx->pc = 0x2516f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516f8: 0x16400003
    ctx->pc = 0x2516F8u;
    {
        const bool branch_taken_0x2516f8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x2516FCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2516f8) {
            ctx->pc = 0x251708u;
            goto label_251708;
        }
    }
    ctx->pc = 0x251700u;
    // 0x251700: 0x8e020000
    ctx->pc = 0x251700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251704: 0x24520028
    ctx->pc = 0x251704u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 40));
label_251708:
    // 0x251708: 0x14800003
    ctx->pc = 0x251708u;
    {
        const bool branch_taken_0x251708 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x25170Cu;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 2048));
        if (branch_taken_0x251708) {
            ctx->pc = 0x251718u;
            goto label_251718;
        }
    }
    ctx->pc = 0x251710u;
    // 0x251710: 0x8e020000
    ctx->pc = 0x251710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251714: 0x8c44004c
    ctx->pc = 0x251714u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_251718:
    // 0x251718: 0x8e030000
    ctx->pc = 0x251718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25171c: 0x8c620038
    ctx->pc = 0x25171cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x251720: 0x2228825
    ctx->pc = 0x251720u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x251724: 0x8c620000
    ctx->pc = 0x251724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251728: 0x24030003
    ctx->pc = 0x251728u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x25172c: 0x38420002
    ctx->pc = 0x25172cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x251730: 0x1080002c
    ctx->pc = 0x251730u;
    {
        const bool branch_taken_0x251730 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x251734u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
        if (branch_taken_0x251730) {
            ctx->pc = 0x2517E4u;
            goto label_2517e4;
        }
    }
    ctx->pc = 0x251738u;
    // 0x251738: 0xa20000dc
    ctx->pc = 0x251738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
    // 0x25173c: 0x26050080
    ctx->pc = 0x25173cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 128));
    // 0x251740: 0x240302d
    ctx->pc = 0x251740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251744: 0xc08476a
    ctx->pc = 0x251744u;
    SET_GPR_U32(ctx, 31, 0x25174Cu);
    ctx->pc = 0x251748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25174Cu; }
    }
    if (ctx->pc != 0x25174Cu) { return; }
    ctx->pc = 0x25174Cu;
    // 0x25174c: 0xae020080
    ctx->pc = 0x25174cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x251750: 0x24020001
    ctx->pc = 0x251750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x251754: 0xa60200b8
    ctx->pc = 0x251754u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 184), (uint16_t)GPR_U32(ctx, 2));
    // 0x251758: 0x8e020070
    ctx->pc = 0x251758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x25175c: 0x54400009
    ctx->pc = 0x25175Cu;
    {
        const bool branch_taken_0x25175c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25175c) {
            ctx->pc = 0x251760u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->pc = 0x251784u;
            goto label_251784;
        }
    }
    ctx->pc = 0x251764u;
    // 0x251764: 0x3c020034
    ctx->pc = 0x251764u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x251768: 0x8c44cd9c
    ctx->pc = 0x251768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954396)));
    // 0x25176c: 0x3c05003a
    ctx->pc = 0x25176cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x251770: 0x24a52550
    ctx->pc = 0x251770u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x251774: 0xc0b3ec0
    ctx->pc = 0x251774u;
    SET_GPR_U32(ctx, 31, 0x25177Cu);
    ctx->pc = 0x251778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25177Cu; }
    }
    if (ctx->pc != 0x25177Cu) { return; }
    ctx->pc = 0x25177Cu;
    // 0x25177c: 0x10000003
    ctx->pc = 0x25177Cu;
    {
        const bool branch_taken_0x25177c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251780u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        if (branch_taken_0x25177c) {
            ctx->pc = 0x25178Cu;
            goto label_25178c;
        }
    }
    ctx->pc = 0x251784u;
label_251784:
    // 0x251784: 0x24020001
    ctx->pc = 0x251784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x251788: 0xa0620052
    ctx->pc = 0x251788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 82), (uint8_t)GPR_U32(ctx, 2));
label_25178c:
    // 0x25178c: 0x8e020080
    ctx->pc = 0x25178cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x251790: 0x8c440000
    ctx->pc = 0x251790u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251794: 0xc0b3f94
    ctx->pc = 0x251794u;
    SET_GPR_U32(ctx, 31, 0x25179Cu);
    ctx->pc = 0x251798u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25179Cu; }
    }
    if (ctx->pc != 0x25179Cu) { return; }
    ctx->pc = 0x25179Cu;
    // 0x25179c: 0x960200d8
    ctx->pc = 0x25179cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2517a0: 0x30420001
    ctx->pc = 0x2517a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2517a4: 0x10400006
    ctx->pc = 0x2517A4u;
    {
        const bool branch_taken_0x2517a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2517A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 128));
        if (branch_taken_0x2517a4) {
            ctx->pc = 0x2517C0u;
            goto label_2517c0;
        }
    }
    ctx->pc = 0x2517ACu;
    // 0x2517ac: 0x960200d8
    ctx->pc = 0x2517acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2517b0: 0x21082
    ctx->pc = 0x2517b0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 2));
    // 0x2517b4: 0x38420001
    ctx->pc = 0x2517b4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2517b8: 0x30420001
    ctx->pc = 0x2517b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2517bc: 0xa20200de
    ctx->pc = 0x2517bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 222), (uint8_t)GPR_U32(ctx, 2));
label_2517c0:
    // 0x2517c0: 0x820500de
    ctx->pc = 0x2517c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 222)));
    // 0x2517c4: 0x24060002
    ctx->pc = 0x2517c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2517c8: 0xdfbf0040
    ctx->pc = 0x2517c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2517cc: 0xdfb30030
    ctx->pc = 0x2517ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2517d0: 0xdfb20020
    ctx->pc = 0x2517d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2517d4: 0xdfb10010
    ctx->pc = 0x2517d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2517d8: 0xdfb00000
    ctx->pc = 0x2517d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2517dc: 0x8084a96
    ctx->pc = 0x2517DCu;
    ctx->pc = 0x2517E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x212A58u;
    AnimateATree_0x212a58(rdram, ctx, runtime); return;
    ctx->pc = 0x2517E4u;
label_2517e4:
    // 0x2517e4: 0xc0944a0
    ctx->pc = 0x2517E4u;
    SET_GPR_U32(ctx, 31, 0x2517ECu);
    ctx->pc = 0x2517E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251280u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemFindMBObjectL1_0x251280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2517ECu; }
    }
    if (ctx->pc != 0x2517ECu) { return; }
    ctx->pc = 0x2517ECu;
    // 0x2517ec: 0x40282d
    ctx->pc = 0x2517ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2517f0: 0x4a30013
    ctx->pc = 0x2517F0u;
    {
        const bool branch_taken_0x2517f0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2517f0) {
            ctx->pc = 0x2517F4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->pc = 0x251840u;
            goto label_251840;
        }
    }
    ctx->pc = 0x2517F8u;
    // 0x2517f8: 0x3c04003b
    ctx->pc = 0x2517f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2517fc: 0x248486a8
    ctx->pc = 0x2517fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936232));
    // 0x251800: 0xc0b492e
    ctx->pc = 0x251800u;
    SET_GPR_U32(ctx, 31, 0x251808u);
    ctx->pc = 0x251804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251808u; }
    }
    if (ctx->pc != 0x251808u) { return; }
    ctx->pc = 0x251808u;
    // 0x251808: 0x8e020070
    ctx->pc = 0x251808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x25180c: 0x54400009
    ctx->pc = 0x25180Cu;
    {
        const bool branch_taken_0x25180c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25180c) {
            ctx->pc = 0x251810u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->pc = 0x251834u;
            goto label_251834;
        }
    }
    ctx->pc = 0x251814u;
    // 0x251814: 0x3c020034
    ctx->pc = 0x251814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x251818: 0x8c44cd9c
    ctx->pc = 0x251818u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954396)));
    // 0x25181c: 0x3c05003a
    ctx->pc = 0x25181cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x251820: 0x24a52550
    ctx->pc = 0x251820u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x251824: 0xc0b3ec0
    ctx->pc = 0x251824u;
    SET_GPR_U32(ctx, 31, 0x25182Cu);
    ctx->pc = 0x251828u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25182Cu; }
    }
    if (ctx->pc != 0x25182Cu) { return; }
    ctx->pc = 0x25182Cu;
    // 0x25182c: 0x1000001b
    ctx->pc = 0x25182Cu;
    {
        const bool branch_taken_0x25182c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251830u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        if (branch_taken_0x25182c) {
            ctx->pc = 0x25189Cu;
            goto label_25189c;
        }
    }
    ctx->pc = 0x251834u;
label_251834:
    // 0x251834: 0x24020001
    ctx->pc = 0x251834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x251838: 0x10000018
    ctx->pc = 0x251838u;
    {
        const bool branch_taken_0x251838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25183Cu;
        WRITE8(ADD32(GPR_U32(ctx, 3), 82), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x251838) {
            ctx->pc = 0x25189Cu;
            goto label_25189c;
        }
    }
    ctx->pc = 0x251840u;
label_251840:
    // 0x251840: 0x1440000d
    ctx->pc = 0x251840u;
    {
        const bool branch_taken_0x251840 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x251844u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x251840) {
            ctx->pc = 0x251878u;
            goto label_251878;
        }
    }
    ctx->pc = 0x251848u;
    // 0x251848: 0x3c05003a
    ctx->pc = 0x251848u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x25184c: 0x24a52550
    ctx->pc = 0x25184cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x251850: 0x302d
    ctx->pc = 0x251850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251854: 0xc0b2236
    ctx->pc = 0x251854u;
    SET_GPR_U32(ctx, 31, 0x25185Cu);
    ctx->pc = 0x251858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C88D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewObject_0x2c88d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25185Cu; }
    }
    if (ctx->pc != 0x25185Cu) { return; }
    ctx->pc = 0x25185Cu;
    // 0x25185c: 0xae020070
    ctx->pc = 0x25185cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x251860: 0x40202d
    ctx->pc = 0x251860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251864: 0x220282d
    ctx->pc = 0x251864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251868: 0xc0b41b8
    ctx->pc = 0x251868u;
    SET_GPR_U32(ctx, 31, 0x251870u);
    ctx->pc = 0x25186Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251870u; }
    }
    if (ctx->pc != 0x251870u) { return; }
    ctx->pc = 0x251870u;
    // 0x251870: 0x1000000b
    ctx->pc = 0x251870u;
    {
        const bool branch_taken_0x251870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251874u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        if (branch_taken_0x251870) {
            ctx->pc = 0x2518A0u;
            goto label_2518a0;
        }
    }
    ctx->pc = 0x251878u;
label_251878:
    // 0x251878: 0xc0b220e
    ctx->pc = 0x251878u;
    SET_GPR_U32(ctx, 31, 0x251880u);
    ctx->pc = 0x25187Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->pc = 0x2C8838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetObject_0x2c8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251880u; }
    }
    if (ctx->pc != 0x251880u) { return; }
    ctx->pc = 0x251880u;
    // 0x251880: 0x8e030070
    ctx->pc = 0x251880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x251884: 0x24020002
    ctx->pc = 0x251884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x251888: 0xa0620052
    ctx->pc = 0x251888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 82), (uint8_t)GPR_U32(ctx, 2));
    // 0x25188c: 0x8e040070
    ctx->pc = 0x25188cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x251890: 0x220282d
    ctx->pc = 0x251890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251894: 0xc0b41b8
    ctx->pc = 0x251894u;
    SET_GPR_U32(ctx, 31, 0x25189Cu);
    ctx->pc = 0x251898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25189Cu; }
    }
    if (ctx->pc != 0x25189Cu) { return; }
    ctx->pc = 0x25189Cu;
label_25189c:
    // 0x25189c: 0xae000080
    ctx->pc = 0x25189cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2518a0:
    // 0x2518a0: 0xdfbf0040
    ctx->pc = 0x2518a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2518a4: 0xdfb30030
    ctx->pc = 0x2518a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2518a8: 0xdfb20020
    ctx->pc = 0x2518a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2518ac: 0xdfb10010
    ctx->pc = 0x2518acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2518b0: 0xdfb00000
    ctx->pc = 0x2518b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2518b4: 0x3e00008
    ctx->pc = 0x2518B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2518B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x251708u: goto label_251708;
            case 0x251718u: goto label_251718;
            case 0x251784u: goto label_251784;
            case 0x25178Cu: goto label_25178c;
            case 0x2517C0u: goto label_2517c0;
            case 0x2517E4u: goto label_2517e4;
            case 0x251834u: goto label_251834;
            case 0x251840u: goto label_251840;
            case 0x251878u: goto label_251878;
            case 0x25189Cu: goto label_25189c;
            case 0x2518A0u: goto label_2518a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2518BCu;
}
