#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ChangeEffect
// Address: 0x27a940 - 0x27aa7c
void ChangeEffect_0x27a940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27a940u;

    // 0x27a940: 0x27bdffa0
    ctx->pc = 0x27a940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27a944: 0xffbf0050
    ctx->pc = 0x27a944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27a948: 0xffb40040
    ctx->pc = 0x27a948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27a94c: 0xffb30030
    ctx->pc = 0x27a94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27a950: 0xffb20020
    ctx->pc = 0x27a950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27a954: 0xffb10010
    ctx->pc = 0x27a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27a958: 0xffb00000
    ctx->pc = 0x27a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a95c: 0x240200f0
    ctx->pc = 0x27a95cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27a960: 0x822018
    ctx->pc = 0x27a960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27a964: 0x3c020034
    ctx->pc = 0x27a964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a968: 0x24420eb0
    ctx->pc = 0x27a968u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27a96c: 0x828821
    ctx->pc = 0x27a96cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27a970: 0x2402000c
    ctx->pc = 0x27a970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x27a974: 0xa22818
    ctx->pc = 0x27a974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27a978: 0x3c020034
    ctx->pc = 0x27a978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a97c: 0x24424ab8
    ctx->pc = 0x27a97cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19128));
    // 0x27a980: 0xa29021
    ctx->pc = 0x27a980u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27a984: 0x12400035
    ctx->pc = 0x27A984u;
    {
        const bool branch_taken_0x27a984 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A988u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27a984) {
            ctx->pc = 0x27AA5Cu;
            goto label_27aa5c;
        }
    }
    ctx->pc = 0x27A98Cu;
    // 0x27a98c: 0x8e420000
    ctx->pc = 0x27a98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27a990: 0x10400033
    ctx->pc = 0x27A990u;
    {
        const bool branch_taken_0x27a990 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A994u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x27a990) {
            ctx->pc = 0x27AA60u;
            goto label_27aa60;
        }
    }
    ctx->pc = 0x27A998u;
    // 0x27a998: 0x862400e8
    ctx->pc = 0x27a998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x27a99c: 0x4820006
    ctx->pc = 0x27A99Cu;
    {
        const bool branch_taken_0x27a99c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x27a99c) {
            ctx->pc = 0x27A9A0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->pc = 0x27A9B8u;
            goto label_27a9b8;
        }
    }
    ctx->pc = 0x27A9A4u;
    // 0x27a9a4: 0xc09e964
    ctx->pc = 0x27A9A4u;
    SET_GPR_U32(ctx, 31, 0x27A9ACu);
    ctx->pc = 0x27A9A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9ACu; }
    }
    if (ctx->pc != 0x27A9ACu) { return; }
    ctx->pc = 0x27A9ACu;
    // 0x27a9ac: 0x2402ffff
    ctx->pc = 0x27a9acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a9b0: 0xa62200e8
    ctx->pc = 0x27a9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 232), (uint16_t)GPR_U32(ctx, 2));
    // 0x27a9b4: 0x8e220018
    ctx->pc = 0x27a9b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_27a9b8:
    // 0x27a9b8: 0x8c430000
    ctx->pc = 0x27a9b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a9bc: 0x8c620060
    ctx->pc = 0x27a9bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x27a9c0: 0x30420890
    ctx->pc = 0x27a9c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2192));
    // 0x27a9c4: 0x2629825
    ctx->pc = 0x27a9c4u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x27a9c8: 0x8474006a
    ctx->pc = 0x27a9c8u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x27a9cc: 0x26300018
    ctx->pc = 0x27a9ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 24));
    // 0x27a9d0: 0xc08496c
    ctx->pc = 0x27A9D0u;
    SET_GPR_U32(ctx, 31, 0x27A9D8u);
    ctx->pc = 0x27A9D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9D8u; }
    }
    if (ctx->pc != 0x27A9D8u) { return; }
    ctx->pc = 0x27A9D8u;
    // 0x27a9d8: 0x8e440000
    ctx->pc = 0x27a9d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27a9dc: 0x200282d
    ctx->pc = 0x27a9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9e0: 0x302d
    ctx->pc = 0x27a9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9e4: 0xc08476a
    ctx->pc = 0x27A9E4u;
    SET_GPR_U32(ctx, 31, 0x27A9ECu);
    ctx->pc = 0x27A9E8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9ECu; }
    }
    if (ctx->pc != 0x27A9ECu) { return; }
    ctx->pc = 0x27A9ECu;
    // 0x27a9ec: 0xae220018
    ctx->pc = 0x27a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x27a9f0: 0x8c440000
    ctx->pc = 0x27a9f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a9f4: 0xc0b3f94
    ctx->pc = 0x27A9F4u;
    SET_GPR_U32(ctx, 31, 0x27A9FCu);
    ctx->pc = 0x27A9F8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9FCu; }
    }
    if (ctx->pc != 0x27A9FCu) { return; }
    ctx->pc = 0x27A9FCu;
    // 0x27a9fc: 0x8e240014
    ctx->pc = 0x27a9fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x27aa00: 0x8e450004
    ctx->pc = 0x27aa00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27aa04: 0xc0b4096
    ctx->pc = 0x27AA04u;
    SET_GPR_U32(ctx, 31, 0x27AA0Cu);
    ctx->pc = 0x27AA08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0258u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetZMod_0x2d0258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA0Cu; }
    }
    if (ctx->pc != 0x27AA0Cu) { return; }
    ctx->pc = 0x27AA0Cu;
    // 0x27aa0c: 0x8e240014
    ctx->pc = 0x27aa0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x27aa10: 0x8e450008
    ctx->pc = 0x27aa10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x27aa14: 0xc0b40c0
    ctx->pc = 0x27AA14u;
    SET_GPR_U32(ctx, 31, 0x27AA1Cu);
    ctx->pc = 0x27AA18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA1Cu; }
    }
    if (ctx->pc != 0x27AA1Cu) { return; }
    ctx->pc = 0x27AA1Cu;
    // 0x27aa1c: 0x12800004
    ctx->pc = 0x27AA1Cu;
    {
        const bool branch_taken_0x27aa1c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x27AA20u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27aa1c) {
            ctx->pc = 0x27AA30u;
            goto label_27aa30;
        }
    }
    ctx->pc = 0x27AA24u;
    // 0x27aa24: 0x8e240014
    ctx->pc = 0x27aa24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x27aa28: 0xc0b4156
    ctx->pc = 0x27AA28u;
    SET_GPR_U32(ctx, 31, 0x27AA30u);
    ctx->pc = 0x27AA2Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA30u; }
    }
    if (ctx->pc != 0x27AA30u) { return; }
    ctx->pc = 0x27AA30u;
label_27aa30:
    // 0x27aa30: 0x8e240014
    ctx->pc = 0x27aa30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x27aa34: 0x260282d
    ctx->pc = 0x27aa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa38: 0x24060001
    ctx->pc = 0x27aa38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aa3c: 0xdfbf0050
    ctx->pc = 0x27aa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27aa40: 0xdfb40040
    ctx->pc = 0x27aa40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27aa44: 0xdfb30030
    ctx->pc = 0x27aa44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27aa48: 0xdfb20020
    ctx->pc = 0x27aa48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27aa4c: 0xdfb10010
    ctx->pc = 0x27aa4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27aa50: 0xdfb00000
    ctx->pc = 0x27aa50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27aa54: 0x80b41b8
    ctx->pc = 0x27AA54u;
    ctx->pc = 0x27AA58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2D06E0u;
    MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime); return;
    ctx->pc = 0x27AA5Cu;
label_27aa5c:
    // 0x27aa5c: 0xdfbf0050
    ctx->pc = 0x27aa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27aa60:
    // 0x27aa60: 0xdfb40040
    ctx->pc = 0x27aa60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27aa64: 0xdfb30030
    ctx->pc = 0x27aa64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27aa68: 0xdfb20020
    ctx->pc = 0x27aa68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27aa6c: 0xdfb10010
    ctx->pc = 0x27aa6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27aa70: 0xdfb00000
    ctx->pc = 0x27aa70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27aa74: 0x3e00008
    ctx->pc = 0x27AA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AA78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A9B8u: goto label_27a9b8;
            case 0x27AA30u: goto label_27aa30;
            case 0x27AA5Cu: goto label_27aa5c;
            case 0x27AA60u: goto label_27aa60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27AA7Cu;
}
