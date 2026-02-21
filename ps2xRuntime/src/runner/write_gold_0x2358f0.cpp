#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: write_gold
// Address: 0x2358f0 - 0x235a18
void write_gold_0x2358f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2358f0u;

    // 0x2358f0: 0x27bdffc0
    ctx->pc = 0x2358f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2358f4: 0xffbf0030
    ctx->pc = 0x2358f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2358f8: 0xffb10020
    ctx->pc = 0x2358f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2358fc: 0xffb00010
    ctx->pc = 0x2358fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x235900: 0x80882d
    ctx->pc = 0x235900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235904: 0x24032b00
    ctx->pc = 0x235904u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x235908: 0x2231818
    ctx->pc = 0x235908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23590c: 0x3c020032
    ctx->pc = 0x23590cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x235910: 0x24421bc0
    ctx->pc = 0x235910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x235914: 0x628021
    ctx->pc = 0x235914u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235918: 0x3c030033
    ctx->pc = 0x235918u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x23591c: 0x2463c908
    ctx->pc = 0x23591cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953224));
    // 0x235920: 0x24020018
    ctx->pc = 0x235920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x235924: 0x2221018
    ctx->pc = 0x235924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x235928: 0x621821
    ctx->pc = 0x235928u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23592c: 0x8c620010
    ctx->pc = 0x23592cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x235930: 0x10400034
    ctx->pc = 0x235930u;
    {
        const bool branch_taken_0x235930 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x235934u;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x235930) {
            ctx->pc = 0x235A04u;
            goto label_235a04;
        }
    }
    ctx->pc = 0x235938u;
    // 0x235938: 0x8e021a20
    ctx->pc = 0x235938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
    // 0x23593c: 0x3463869f
    ctx->pc = 0x23593cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34463));
    // 0x235940: 0x62102a
    ctx->pc = 0x235940u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x235944: 0x54400001
    ctx->pc = 0x235944u;
    {
        const bool branch_taken_0x235944 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x235944) {
            ctx->pc = 0x235948u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 3));
            ctx->pc = 0x23594Cu;
            goto label_23594c;
        }
    }
    ctx->pc = 0x23594Cu;
label_23594c:
    // 0x23594c: 0x10a00025
    ctx->pc = 0x23594Cu;
    {
        const bool branch_taken_0x23594c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x235950u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23594c) {
            ctx->pc = 0x2359E4u;
            goto label_2359e4;
        }
    }
    ctx->pc = 0x235954u;
    // 0x235954: 0x3c05003a
    ctx->pc = 0x235954u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x235958: 0x24a57990
    ctx->pc = 0x235958u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31120));
    // 0x23595c: 0xc0b6252
    ctx->pc = 0x23595Cu;
    SET_GPR_U32(ctx, 31, 0x235964u);
    ctx->pc = 0x235960u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235964u; }
    }
    if (ctx->pc != 0x235964u) { return; }
    ctx->pc = 0x235964u;
    // 0x235964: 0x3a0202d
    ctx->pc = 0x235964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235968: 0x3c013f80
    ctx->pc = 0x235968u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23596c: 0x44816000
    ctx->pc = 0x23596cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x235970: 0xc080552
    ctx->pc = 0x235970u;
    SET_GPR_U32(ctx, 31, 0x235978u);
    ctx->pc = 0x235974u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235978u; }
    }
    if (ctx->pc != 0x235978u) { return; }
    ctx->pc = 0x235978u;
    // 0x235978: 0x3c040032
    ctx->pc = 0x235978u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x23597c: 0x248415d0
    ctx->pc = 0x23597cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5584));
    // 0x235980: 0x111840
    ctx->pc = 0x235980u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x235984: 0x641821
    ctx->pc = 0x235984u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x235988: 0x94640000
    ctx->pc = 0x235988u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23598c: 0x2442ffc4
    ctx->pc = 0x23598cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x235990: 0x3c030032
    ctx->pc = 0x235990u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x235994: 0x24631550
    ctx->pc = 0x235994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5456));
    // 0x235998: 0x8e070004
    ctx->pc = 0x235998u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23599c: 0x73880
    ctx->pc = 0x23599cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x2359a0: 0xe33821
    ctx->pc = 0x2359a0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2359a4: 0x822023
    ctx->pc = 0x2359a4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2359a8: 0x24050167
    ctx->pc = 0x2359a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 359));
    // 0x2359ac: 0x24060004
    ctx->pc = 0x2359acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2359b0: 0x8ce70000
    ctx->pc = 0x2359b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2359b4: 0xc0804c8
    ctx->pc = 0x2359B4u;
    SET_GPR_U32(ctx, 31, 0x2359BCu);
    ctx->pc = 0x2359B8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2359BCu; }
    }
    if (ctx->pc != 0x2359BCu) { return; }
    ctx->pc = 0x2359BCu;
    // 0x2359bc: 0x3c030033
    ctx->pc = 0x2359bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x2359c0: 0x2463c908
    ctx->pc = 0x2359c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953224));
    // 0x2359c4: 0x24020018
    ctx->pc = 0x2359c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2359c8: 0x2221018
    ctx->pc = 0x2359c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2359cc: 0x621821
    ctx->pc = 0x2359ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2359d0: 0x8c640010
    ctx->pc = 0x2359d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2359d4: 0xc0b0ce8
    ctx->pc = 0x2359D4u;
    SET_GPR_U32(ctx, 31, 0x2359DCu);
    ctx->pc = 0x2359D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2359DCu; }
    }
    if (ctx->pc != 0x2359DCu) { return; }
    ctx->pc = 0x2359DCu;
    // 0x2359dc: 0x1000000a
    ctx->pc = 0x2359DCu;
    {
        const bool branch_taken_0x2359dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2359E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2359dc) {
            ctx->pc = 0x235A08u;
            goto label_235a08;
        }
    }
    ctx->pc = 0x2359E4u;
label_2359e4:
    // 0x2359e4: 0x3c030033
    ctx->pc = 0x2359e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x2359e8: 0x2463c908
    ctx->pc = 0x2359e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953224));
    // 0x2359ec: 0x24020018
    ctx->pc = 0x2359ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2359f0: 0x2221018
    ctx->pc = 0x2359f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2359f4: 0x621821
    ctx->pc = 0x2359f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2359f8: 0x8c640010
    ctx->pc = 0x2359f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2359fc: 0xc0b0ce8
    ctx->pc = 0x2359FCu;
    SET_GPR_U32(ctx, 31, 0x235A04u);
    ctx->pc = 0x235A00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235A04u; }
    }
    if (ctx->pc != 0x235A04u) { return; }
    ctx->pc = 0x235A04u;
label_235a04:
    // 0x235a04: 0xdfbf0030
    ctx->pc = 0x235a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235a08:
    // 0x235a08: 0xdfb10020
    ctx->pc = 0x235a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235a0c: 0xdfb00010
    ctx->pc = 0x235a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235a10: 0x3e00008
    ctx->pc = 0x235A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235A14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23594Cu: goto label_23594c;
            case 0x2359E4u: goto label_2359e4;
            case 0x235A04u: goto label_235a04;
            case 0x235A08u: goto label_235a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x235A18u;
}
