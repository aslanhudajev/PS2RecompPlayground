#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DispTexMenu
// Address: 0x2178f8 - 0x217a38
void DispTexMenu_0x2178f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2178f8u;

    // 0x2178f8: 0x27bdff60
    ctx->pc = 0x2178f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2178fc: 0xffbf0090
    ctx->pc = 0x2178fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x217900: 0xffbe0080
    ctx->pc = 0x217900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x217904: 0xffb70070
    ctx->pc = 0x217904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x217908: 0xffb60060
    ctx->pc = 0x217908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21790c: 0xffb50050
    ctx->pc = 0x21790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x217910: 0xffb40040
    ctx->pc = 0x217910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x217914: 0xffb30030
    ctx->pc = 0x217914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x217918: 0xffb20020
    ctx->pc = 0x217918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21791c: 0xffb10010
    ctx->pc = 0x21791cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x217920: 0xffb00000
    ctx->pc = 0x217920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217924: 0x24130003
    ctx->pc = 0x217924u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
    // 0x217928: 0x8c830048
    ctx->pc = 0x217928u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x21792c: 0x2c620026
    ctx->pc = 0x21792cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 38));
    // 0x217930: 0x10400004
    ctx->pc = 0x217930u;
    {
        const bool branch_taken_0x217930 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x217934u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x217930) {
            ctx->pc = 0x217944u;
            goto label_217944;
        }
    }
    ctx->pc = 0x217938u;
    // 0x217938: 0x402d
    ctx->pc = 0x217938u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21793c: 0x10000011
    ctx->pc = 0x21793Cu;
    {
        const bool branch_taken_0x21793c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217940u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21793c) {
            ctx->pc = 0x217984u;
            goto label_217984;
        }
    }
    ctx->pc = 0x217944u;
label_217944:
    // 0x217944: 0x3c03003c
    ctx->pc = 0x217944u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x217948: 0x2463cf90
    ctx->pc = 0x217948u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954896));
    // 0x21794c: 0x3c020032
    ctx->pc = 0x21794cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x217950: 0x8c42f8d0
    ctx->pc = 0x217950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965456)));
    // 0x217954: 0x21080
    ctx->pc = 0x217954u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x217958: 0x431021
    ctx->pc = 0x217958u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21795c: 0x61842
    ctx->pc = 0x21795cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 1));
    // 0x217960: 0x8c420000
    ctx->pc = 0x217960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217964: 0x629021
    ctx->pc = 0x217964u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217968: 0x246102a
    ctx->pc = 0x217968u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 6)));
    // 0x21796c: 0xc2900b
    ctx->pc = 0x21796cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 6));
    // 0x217970: 0x8c840048
    ctx->pc = 0x217970u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x217974: 0x244102b
    ctx->pc = 0x217974u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x217978: 0x50400001
    ctx->pc = 0x217978u;
    {
        const bool branch_taken_0x217978 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x217978) {
            ctx->pc = 0x21797Cu;
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x217980u;
            goto label_217980;
        }
    }
    ctx->pc = 0x217980u;
label_217980:
    // 0x217980: 0x2464023
    ctx->pc = 0x217980u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_217984:
    // 0x217984: 0x100882d
    ctx->pc = 0x217984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217988: 0x232102a
    ctx->pc = 0x217988u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x21798c: 0x1040001e
    ctx->pc = 0x21798Cu;
    {
        const bool branch_taken_0x21798c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x217990u;
        SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x21798c) {
            ctx->pc = 0x217A08u;
            goto label_217a08;
        }
    }
    ctx->pc = 0x217994u;
    // 0x217994: 0x3c02003c
    ctx->pc = 0x217994u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217998: 0x245ecf90
    ctx->pc = 0x217998u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294954896));
    // 0x21799c: 0x3c170032
    ctx->pc = 0x21799cu;
    SET_GPR_U32(ctx, 23, ((uint32_t)50 << 16));
    // 0x2179a0: 0x3c1600ff
    ctx->pc = 0x2179a0u;
    SET_GPR_U32(ctx, 22, ((uint32_t)255 << 16));
    // 0x2179a4: 0x36d6ff00
    ctx->pc = 0x2179a4u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), 65280));
    // 0x2179a8: 0x3c15003a
    ctx->pc = 0x2179a8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x2179ac: 0x0
    ctx->pc = 0x2179acu;
    // NOP
label_2179b0:
    // 0x2179b0: 0x3224ffff
    ctx->pc = 0x2179b0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 65535));
    // 0x2179b4: 0x8ee2f8d0
    ctx->pc = 0x2179b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4294965456)));
    // 0x2179b8: 0x21080
    ctx->pc = 0x2179b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2179bc: 0x5e1021
    ctx->pc = 0x2179bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2179c0: 0x8c420000
    ctx->pc = 0x2179c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2179c4: 0x3c1000ff
    ctx->pc = 0x2179c4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)255 << 16));
    // 0x2179c8: 0x3610ffff
    ctx->pc = 0x2179c8u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 65535));
    // 0x2179cc: 0x2221026
    ctx->pc = 0x2179ccu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2179d0: 0x2c2800a
    ctx->pc = 0x2179d0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 22));
    // 0x2179d4: 0xc0b1b44
    ctx->pc = 0x2179D4u;
    SET_GPR_U32(ctx, 31, 0x2179DCu);
    ctx->pc = 0x2179D8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->pc = 0x2C6D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_GetTextureName_0x2c6d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2179DCu; }
    }
    if (ctx->pc != 0x2179DCu) { return; }
    ctx->pc = 0x2179DCu;
    // 0x2179dc: 0x200202d
    ctx->pc = 0x2179dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179e0: 0x24050001
    ctx->pc = 0x2179e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2179e4: 0x260302d
    ctx->pc = 0x2179e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179e8: 0x26a75c90
    ctx->pc = 0x2179e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 21), 23696));
    // 0x2179ec: 0x220402d
    ctx->pc = 0x2179ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179f0: 0xc0b4724
    ctx->pc = 0x2179F0u;
    SET_GPR_U32(ctx, 31, 0x2179F8u);
    ctx->pc = 0x2179F4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2179F8u; }
    }
    if (ctx->pc != 0x2179F8u) { return; }
    ctx->pc = 0x2179F8u;
    // 0x2179f8: 0x26310001
    ctx->pc = 0x2179f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2179fc: 0x232102a
    ctx->pc = 0x2179fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x217a00: 0x1440ffeb
    ctx->pc = 0x217A00u;
    {
        const bool branch_taken_0x217a00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217A04u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x217a00) {
            ctx->pc = 0x2179B0u;
            goto label_2179b0;
        }
    }
    ctx->pc = 0x217A08u;
label_217a08:
    // 0x217a08: 0xdfbf0090
    ctx->pc = 0x217a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x217a0c: 0xdfbe0080
    ctx->pc = 0x217a0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x217a10: 0xdfb70070
    ctx->pc = 0x217a10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x217a14: 0xdfb60060
    ctx->pc = 0x217a14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x217a18: 0xdfb50050
    ctx->pc = 0x217a18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217a1c: 0xdfb40040
    ctx->pc = 0x217a1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217a20: 0xdfb30030
    ctx->pc = 0x217a20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217a24: 0xdfb20020
    ctx->pc = 0x217a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217a28: 0xdfb10010
    ctx->pc = 0x217a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217a2c: 0xdfb00000
    ctx->pc = 0x217a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a30: 0x3e00008
    ctx->pc = 0x217A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217944u: goto label_217944;
            case 0x217980u: goto label_217980;
            case 0x217984u: goto label_217984;
            case 0x2179B0u: goto label_2179b0;
            case 0x217A08u: goto label_217a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217A38u;
}
