#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _mbAddressIncrement
// Address: 0x160320 - 0x160430
void _mbAddressIncrement_0x160320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_mbAddressIncrement");


    ctx->pc = 0x160320u;

    // 0x160320: 0x27bdff60
    ctx->pc = 0x160320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x160324: 0xffbe0080
    ctx->pc = 0x160324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x160328: 0xffb70070
    ctx->pc = 0x160328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x16032c: 0x241e0022
    ctx->pc = 0x16032cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 34));
    // 0x160330: 0xffb60060
    ctx->pc = 0x160330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x160334: 0x24170023
    ctx->pc = 0x160334u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 35));
    // 0x160338: 0xffb50050
    ctx->pc = 0x160338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x16033c: 0x3c160023
    ctx->pc = 0x16033cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)35 << 16));
    // 0x160340: 0xffb40040
    ctx->pc = 0x160340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x160344: 0x24150001
    ctx->pc = 0x160344u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160348: 0xffb30030
    ctx->pc = 0x160348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16034c: 0x3c140023
    ctx->pc = 0x16034cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x160350: 0xffb20020
    ctx->pc = 0x160350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x160354: 0x3c13002c
    ctx->pc = 0x160354u;
    SET_GPR_U32(ctx, 19, ((uint32_t)44 << 16));
    // 0x160358: 0xffb10010
    ctx->pc = 0x160358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16035c: 0x2412000f
    ctx->pc = 0x16035cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 15));
    // 0x160360: 0xffbf0090
    ctx->pc = 0x160360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x160364: 0x882d
    ctx->pc = 0x160364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160368: 0xffb00000
    ctx->pc = 0x160368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16036c: 0x0
    ctx->pc = 0x16036cu;
    // NOP
label_160370:
    // 0x160370: 0xc0584d2
    ctx->pc = 0x160370u;
    SET_GPR_U32(ctx, 31, 0x160378u);
    ctx->pc = 0x160374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161348u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x161348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160378u; }
        else if (ctx->pc != 0x160378u) { ctx->pc = 0x160378u; }
    }
    if (ctx->pc != 0x160378u) { return; }
    ctx->pc = 0x160378u;
    // 0x160378: 0x40802d
    ctx->pc = 0x160378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16037c: 0x121e0016
    ctx->pc = 0x16037Cu;
    {
        const bool branch_taken_0x16037c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 30));
        ctx->pc = 0x160380u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 35));
        if (branch_taken_0x16037c) {
            ctx->pc = 0x1603D8u;
            goto label_1603d8;
        }
    }
    ctx->pc = 0x160384u;
    // 0x160384: 0x10400005
    ctx->pc = 0x160384u;
    {
        const bool branch_taken_0x160384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x160384) {
            ctx->pc = 0x16039Cu;
            goto label_16039c;
        }
    }
    ctx->pc = 0x16038Cu;
    // 0x16038c: 0x12000008
    ctx->pc = 0x16038Cu;
    {
        const bool branch_taken_0x16038c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x16038c) {
            ctx->pc = 0x1603B0u;
            goto label_1603b0;
        }
    }
    ctx->pc = 0x160394u;
    // 0x160394: 0x10000017
    ctx->pc = 0x160394u;
    {
        const bool branch_taken_0x160394 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160398u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x160394) {
            ctx->pc = 0x1603F4u;
            goto label_1603f4;
        }
    }
    ctx->pc = 0x16039Cu;
label_16039c:
    // 0x16039c: 0x56170015
    ctx->pc = 0x16039Cu;
    {
        const bool branch_taken_0x16039c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 23));
        if (branch_taken_0x16039c) {
            ctx->pc = 0x1603A0u;
            SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->pc = 0x1603F4u;
            goto label_1603f4;
        }
    }
    ctx->pc = 0x1603A4u;
    // 0x1603a4: 0x24020001
    ctx->pc = 0x1603a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1603a8: 0x10000013
    ctx->pc = 0x1603A8u;
    {
        const bool branch_taken_0x1603a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1603ACu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 33));
        if (branch_taken_0x1603a8) {
            ctx->pc = 0x1603F8u;
            goto label_1603f8;
        }
    }
    ctx->pc = 0x1603B0u;
label_1603b0:
    // 0x1603b0: 0xc058540
    ctx->pc = 0x1603B0u;
    SET_GPR_U32(ctx, 31, 0x1603B8u);
    ctx->pc = 0x1603B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x161500u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x161500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603B8u; }
        else if (ctx->pc != 0x1603B8u) { ctx->pc = 0x1603B8u; }
    }
    if (ctx->pc != 0x1603B8u) { return; }
    ctx->pc = 0x1603B8u;
    // 0x1603b8: 0x40182d
    ctx->pc = 0x1603b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603bc: 0x8e82aaf0
    ctx->pc = 0x1603bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294945520)));
    // 0x1603c0: 0x10400007
    ctx->pc = 0x1603C0u;
    {
        const bool branch_taken_0x1603c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1603C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294937464));
        if (branch_taken_0x1603c0) {
            ctx->pc = 0x1603E0u;
            goto label_1603e0;
        }
    }
    ctx->pc = 0x1603C8u;
    // 0x1603c8: 0x14720005
    ctx->pc = 0x1603C8u;
    {
        const bool branch_taken_0x1603c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 18));
        if (branch_taken_0x1603c8) {
            ctx->pc = 0x1603E0u;
            goto label_1603e0;
        }
    }
    ctx->pc = 0x1603D0u;
    // 0x1603d0: 0xc05858e
    ctx->pc = 0x1603D0u;
    SET_GPR_U32(ctx, 31, 0x1603D8u);
    ctx->pc = 0x1603D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x161638u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x161638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603D8u; }
        else if (ctx->pc != 0x1603D8u) { ctx->pc = 0x1603D8u; }
    }
    if (ctx->pc != 0x1603D8u) { return; }
    ctx->pc = 0x1603D8u;
label_1603d8:
    // 0x1603d8: 0x10000007
    ctx->pc = 0x1603D8u;
    {
        const bool branch_taken_0x1603d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1603DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1603d8) {
            ctx->pc = 0x1603F8u;
            goto label_1603f8;
        }
    }
    ctx->pc = 0x1603E0u;
label_1603e0:
    // 0x1603e0: 0xc059106
    ctx->pc = 0x1603E0u;
    SET_GPR_U32(ctx, 31, 0x1603E8u);
    ctx->pc = 0x1603E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164418u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x164418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603E8u; }
        else if (ctx->pc != 0x1603E8u) { ctx->pc = 0x1603E8u; }
    }
    if (ctx->pc != 0x1603E8u) { return; }
    ctx->pc = 0x1603E8u;
    // 0x1603e8: 0xaed5a348
    ctx->pc = 0x1603e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294943560), GPR_U32(ctx, 21));
    // 0x1603ec: 0x10000004
    ctx->pc = 0x1603ECu;
    {
        const bool branch_taken_0x1603ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1603F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1603ec) {
            ctx->pc = 0x160400u;
            goto label_160400;
        }
    }
    ctx->pc = 0x1603F4u;
label_1603f4:
    // 0x1603f4: 0x102d
    ctx->pc = 0x1603f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1603f8:
    // 0x1603f8: 0x1440ffdd
    ctx->pc = 0x1603F8u;
    {
        const bool branch_taken_0x1603f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1603FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1603f8) {
            ctx->pc = 0x160370u;
            goto label_160370;
        }
    }
    ctx->pc = 0x160400u;
label_160400:
    // 0x160400: 0xdfbf0090
    ctx->pc = 0x160400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x160404: 0xdfbe0080
    ctx->pc = 0x160404u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160408: 0xdfb70070
    ctx->pc = 0x160408u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16040c: 0xdfb60060
    ctx->pc = 0x16040cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160410: 0xdfb50050
    ctx->pc = 0x160410u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160414: 0xdfb40040
    ctx->pc = 0x160414u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160418: 0xdfb30030
    ctx->pc = 0x160418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16041c: 0xdfb20020
    ctx->pc = 0x16041cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160420: 0xdfb10010
    ctx->pc = 0x160420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160424: 0xdfb00000
    ctx->pc = 0x160424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160428: 0x3e00008
    ctx->pc = 0x160428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16042Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160370u: goto label_160370;
            case 0x16039Cu: goto label_16039c;
            case 0x1603B0u: goto label_1603b0;
            case 0x1603D8u: goto label_1603d8;
            case 0x1603E0u: goto label_1603e0;
            case 0x1603F4u: goto label_1603f4;
            case 0x1603F8u: goto label_1603f8;
            case 0x160400u: goto label_160400;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160430u;
}
