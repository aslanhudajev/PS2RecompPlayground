#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: showVu1Data
// Address: 0x2bc888 - 0x2bc9d4
void showVu1Data_0x2bc888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bc888u;

    // 0x2bc888: 0x27bdff60
    ctx->pc = 0x2bc888u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bc88c: 0xffbf0090
    ctx->pc = 0x2bc88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bc890: 0xffbe0080
    ctx->pc = 0x2bc890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2bc894: 0xffb70070
    ctx->pc = 0x2bc894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2bc898: 0xffb60060
    ctx->pc = 0x2bc898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2bc89c: 0xffb50050
    ctx->pc = 0x2bc89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2bc8a0: 0xffb40040
    ctx->pc = 0x2bc8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bc8a4: 0xffb30030
    ctx->pc = 0x2bc8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bc8a8: 0xffb20020
    ctx->pc = 0x2bc8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bc8ac: 0xffb10010
    ctx->pc = 0x2bc8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bc8b0: 0xffb00000
    ctx->pc = 0x2bc8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc8b4: 0x80902d
    ctx->pc = 0x2bc8b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8b8: 0x8e42000c
    ctx->pc = 0x2bc8b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2bc8bc: 0x2a8c0
    ctx->pc = 0x2bc8bcu;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2bc8c0: 0x8e540000
    ctx->pc = 0x2bc8c0u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bc8c4: 0x8e820028
    ctx->pc = 0x2bc8c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x2bc8c8: 0x10400037
    ctx->pc = 0x2BC8C8u;
    {
        const bool branch_taken_0x2bc8c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC8CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x2bc8c8) {
            ctx->pc = 0x2BC9A8u;
            goto label_2bc9a8;
        }
    }
    ctx->pc = 0x2BC8D0u;
    // 0x2bc8d0: 0x8c420000
    ctx->pc = 0x2bc8d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc8d4: 0x50400035
    ctx->pc = 0x2BC8D4u;
    {
        const bool branch_taken_0x2bc8d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc8d4) {
            ctx->pc = 0x2BC8D8u;
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->pc = 0x2BC9ACu;
            goto label_2bc9ac;
        }
    }
    ctx->pc = 0x2BC8DCu;
    // 0x2bc8dc: 0xc0ae580
    ctx->pc = 0x2BC8DCu;
    SET_GPR_U32(ctx, 31, 0x2BC8E4u);
    ctx->pc = 0x2BC8E0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B9600u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuResetExprCnt_0x2b9600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC8E4u; }
    }
    if (ctx->pc != 0x2BC8E4u) { return; }
    ctx->pc = 0x2BC8E4u;
    // 0x2bc8e4: 0x8e910024
    ctx->pc = 0x2bc8e4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2bc8e8:
    // 0x2bc8e8: 0x8e220000
    ctx->pc = 0x2bc8e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bc8ec: 0x5040002a
    ctx->pc = 0x2BC8ECu;
    {
        const bool branch_taken_0x2bc8ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc8ec) {
            ctx->pc = 0x2BC8F0u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x2BC998u;
            goto label_2bc998;
        }
    }
    ctx->pc = 0x2BC8F4u;
    // 0x2bc8f4: 0x241e0002
    ctx->pc = 0x2bc8f4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bc8f8: 0x3c17003b
    ctx->pc = 0x2bc8f8u;
    SET_GPR_U32(ctx, 23, ((uint32_t)59 << 16));
    // 0x2bc8fc: 0x3c16003b
    ctx->pc = 0x2bc8fcu;
    SET_GPR_U32(ctx, 22, ((uint32_t)59 << 16));
    // 0x2bc900: 0x8e220004
    ctx->pc = 0x2bc900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bc904: 0x0
    ctx->pc = 0x2bc904u;
    // NOP
label_2bc908:
    // 0x2bc908: 0x2a2102b
    ctx->pc = 0x2bc908u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2bc90c: 0x5440001e
    ctx->pc = 0x2BC90Cu;
    {
        const bool branch_taken_0x2bc90c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bc90c) {
            ctx->pc = 0x2BC910u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
            ctx->pc = 0x2BC988u;
            goto label_2bc988;
        }
    }
    ctx->pc = 0x2BC914u;
    // 0x2bc914: 0x8e220008
    ctx->pc = 0x2bc914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2bc918: 0x3c03ffff
    ctx->pc = 0x2bc918u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2bc91c: 0x3463ffff
    ctx->pc = 0x2bc91cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2bc920: 0x10430003
    ctx->pc = 0x2BC920u;
    {
        const bool branch_taken_0x2bc920 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2BC924u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        if (branch_taken_0x2bc920) {
            ctx->pc = 0x2BC930u;
            goto label_2bc930;
        }
    }
    ctx->pc = 0x2BC928u;
    // 0x2bc928: 0x50400017
    ctx->pc = 0x2BC928u;
    {
        const bool branch_taken_0x2bc928 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc928) {
            ctx->pc = 0x2BC92Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
            ctx->pc = 0x2BC988u;
            goto label_2bc988;
        }
    }
    ctx->pc = 0x2BC930u;
label_2bc930:
    // 0x2bc930: 0x567e0009
    ctx->pc = 0x2BC930u;
    {
        const bool branch_taken_0x2bc930 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 30));
        if (branch_taken_0x2bc930) {
            ctx->pc = 0x2BC934u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 40)));
            ctx->pc = 0x2BC958u;
            goto label_2bc958;
        }
    }
    ctx->pc = 0x2BC938u;
    // 0x2bc938: 0x240202d
    ctx->pc = 0x2bc938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc93c: 0xc0aeed2
    ctx->pc = 0x2BC93Cu;
    SET_GPR_U32(ctx, 31, 0x2BC944u);
    ctx->pc = 0x2BC940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 25232));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC944u; }
    }
    if (ctx->pc != 0x2BC944u) { return; }
    ctx->pc = 0x2BC944u;
    // 0x2bc944: 0x240202d
    ctx->pc = 0x2bc944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc948: 0x26c562c0
    ctx->pc = 0x2bc948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 25280));
    // 0x2bc94c: 0xc0aeed2
    ctx->pc = 0x2BC94Cu;
    SET_GPR_U32(ctx, 31, 0x2BC954u);
    ctx->pc = 0x2BC950u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC954u; }
    }
    if (ctx->pc != 0x2BC954u) { return; }
    ctx->pc = 0x2BC954u;
    // 0x2bc954: 0x8e900028
    ctx->pc = 0x2bc954u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_2bc958:
    // 0x2bc958: 0x8e040000
    ctx->pc = 0x2bc958u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc95c: 0x5080000a
    ctx->pc = 0x2BC95Cu;
    {
        const bool branch_taken_0x2bc95c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc95c) {
            ctx->pc = 0x2BC960u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
            ctx->pc = 0x2BC988u;
            goto label_2bc988;
        }
    }
    ctx->pc = 0x2BC964u;
    // 0x2bc964: 0xc0bf270
    ctx->pc = 0x2BC964u;
    SET_GPR_U32(ctx, 31, 0x2BC96Cu);
    ctx->pc = 0x2BC968u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC96Cu; }
    }
    if (ctx->pc != 0x2BC96Cu) { return; }
    ctx->pc = 0x2BC96Cu;
    // 0x2bc96c: 0x5440fffa
    ctx->pc = 0x2BC96Cu;
    {
        const bool branch_taken_0x2bc96c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bc96c) {
            ctx->pc = 0x2BC970u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
            ctx->pc = 0x2BC958u;
            goto label_2bc958;
        }
    }
    ctx->pc = 0x2BC974u;
    // 0x2bc974: 0x240202d
    ctx->pc = 0x2bc974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc978: 0x200282d
    ctx->pc = 0x2bc978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc97c: 0xc0af204
    ctx->pc = 0x2BC97Cu;
    SET_GPR_U32(ctx, 31, 0x2BC984u);
    ctx->pc = 0x2BC980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BC810u;
    {
        const uint32_t __entryPc = ctx->pc;
        showVu1FuncData_0x2bc810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC984u; }
    }
    if (ctx->pc != 0x2BC984u) { return; }
    ctx->pc = 0x2BC984u;
    // 0x2bc984: 0x2631000c
    ctx->pc = 0x2bc984u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
label_2bc988:
    // 0x2bc988: 0x8e220000
    ctx->pc = 0x2bc988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bc98c: 0x5440ffde
    ctx->pc = 0x2BC98Cu;
    {
        const bool branch_taken_0x2bc98c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bc98c) {
            ctx->pc = 0x2BC990u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x2BC908u;
            goto label_2bc908;
        }
    }
    ctx->pc = 0x2BC994u;
    // 0x2bc994: 0x26730001
    ctx->pc = 0x2bc994u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_2bc998:
    // 0x2bc998: 0x2a620005
    ctx->pc = 0x2bc998u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 5));
    // 0x2bc99c: 0x5440ffd2
    ctx->pc = 0x2BC99Cu;
    {
        const bool branch_taken_0x2bc99c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bc99c) {
            ctx->pc = 0x2BC9A0u;
            SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 20), 36)));
            ctx->pc = 0x2BC8E8u;
            goto label_2bc8e8;
        }
    }
    ctx->pc = 0x2BC9A4u;
    // 0x2bc9a4: 0xdfbf0090
    ctx->pc = 0x2bc9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2bc9a8:
    // 0x2bc9a8: 0xdfbe0080
    ctx->pc = 0x2bc9a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2bc9ac:
    // 0x2bc9ac: 0xdfb70070
    ctx->pc = 0x2bc9acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bc9b0: 0xdfb60060
    ctx->pc = 0x2bc9b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bc9b4: 0xdfb50050
    ctx->pc = 0x2bc9b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc9b8: 0xdfb40040
    ctx->pc = 0x2bc9b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc9bc: 0xdfb30030
    ctx->pc = 0x2bc9bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc9c0: 0xdfb20020
    ctx->pc = 0x2bc9c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc9c4: 0xdfb10010
    ctx->pc = 0x2bc9c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc9c8: 0xdfb00000
    ctx->pc = 0x2bc9c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc9cc: 0x3e00008
    ctx->pc = 0x2BC9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC9D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BC8E8u: goto label_2bc8e8;
            case 0x2BC908u: goto label_2bc908;
            case 0x2BC930u: goto label_2bc930;
            case 0x2BC958u: goto label_2bc958;
            case 0x2BC988u: goto label_2bc988;
            case 0x2BC998u: goto label_2bc998;
            case 0x2BC9A8u: goto label_2bc9a8;
            case 0x2BC9ACu: goto label_2bc9ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BC9D4u;
}
