#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _mbAddressIncrement
// Address: 0x2f1498 - 0x2f15a8
void _mbAddressIncrement_0x2f1498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f1498u;

    // 0x2f1498: 0x27bdff60
    ctx->pc = 0x2f1498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2f149c: 0xffbe0080
    ctx->pc = 0x2f149cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2f14a0: 0xffb70070
    ctx->pc = 0x2f14a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2f14a4: 0x241e0022
    ctx->pc = 0x2f14a4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 34));
    // 0x2f14a8: 0xffb60060
    ctx->pc = 0x2f14a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f14ac: 0x24170023
    ctx->pc = 0x2f14acu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 35));
    // 0x2f14b0: 0xffb50050
    ctx->pc = 0x2f14b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f14b4: 0x3c16003a
    ctx->pc = 0x2f14b4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)58 << 16));
    // 0x2f14b8: 0xffb40040
    ctx->pc = 0x2f14b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f14bc: 0x24150001
    ctx->pc = 0x2f14bcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f14c0: 0xffb30030
    ctx->pc = 0x2f14c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f14c4: 0x3c14003a
    ctx->pc = 0x2f14c4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f14c8: 0xffb20020
    ctx->pc = 0x2f14c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f14cc: 0x3c13003c
    ctx->pc = 0x2f14ccu;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x2f14d0: 0xffb10010
    ctx->pc = 0x2f14d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f14d4: 0x2412000f
    ctx->pc = 0x2f14d4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f14d8: 0xffbf0090
    ctx->pc = 0x2f14d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f14dc: 0x882d
    ctx->pc = 0x2f14dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14e0: 0xffb00000
    ctx->pc = 0x2f14e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f14e4: 0x0
    ctx->pc = 0x2f14e4u;
    // NOP
label_2f14e8:
    // 0x2f14e8: 0xc0bc930
    ctx->pc = 0x2F14E8u;
    SET_GPR_U32(ctx, 31, 0x2F14F0u);
    ctx->pc = 0x2F14ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F24C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x2f24c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F14F0u; }
    }
    if (ctx->pc != 0x2F14F0u) { return; }
    ctx->pc = 0x2F14F0u;
    // 0x2f14f0: 0x40802d
    ctx->pc = 0x2f14f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14f4: 0x121e0016
    ctx->pc = 0x2F14F4u;
    {
        const bool branch_taken_0x2f14f4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 30));
        ctx->pc = 0x2F14F8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 35));
        if (branch_taken_0x2f14f4) {
            ctx->pc = 0x2F1550u;
            goto label_2f1550;
        }
    }
    ctx->pc = 0x2F14FCu;
    // 0x2f14fc: 0x10400005
    ctx->pc = 0x2F14FCu;
    {
        const bool branch_taken_0x2f14fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f14fc) {
            ctx->pc = 0x2F1514u;
            goto label_2f1514;
        }
    }
    ctx->pc = 0x2F1504u;
    // 0x2f1504: 0x12000008
    ctx->pc = 0x2F1504u;
    {
        const bool branch_taken_0x2f1504 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f1504) {
            ctx->pc = 0x2F1528u;
            goto label_2f1528;
        }
    }
    ctx->pc = 0x2F150Cu;
    // 0x2f150c: 0x10000017
    ctx->pc = 0x2F150Cu;
    {
        const bool branch_taken_0x2f150c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1510u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x2f150c) {
            ctx->pc = 0x2F156Cu;
            goto label_2f156c;
        }
    }
    ctx->pc = 0x2F1514u;
label_2f1514:
    // 0x2f1514: 0x56170015
    ctx->pc = 0x2F1514u;
    {
        const bool branch_taken_0x2f1514 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 23));
        if (branch_taken_0x2f1514) {
            ctx->pc = 0x2F1518u;
            SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->pc = 0x2F156Cu;
            goto label_2f156c;
        }
    }
    ctx->pc = 0x2F151Cu;
    // 0x2f151c: 0x24020001
    ctx->pc = 0x2f151cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1520: 0x10000013
    ctx->pc = 0x2F1520u;
    {
        const bool branch_taken_0x2f1520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1524u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 33));
        if (branch_taken_0x2f1520) {
            ctx->pc = 0x2F1570u;
            goto label_2f1570;
        }
    }
    ctx->pc = 0x2F1528u;
label_2f1528:
    // 0x2f1528: 0xc0bc99e
    ctx->pc = 0x2F1528u;
    SET_GPR_U32(ctx, 31, 0x2F1530u);
    ctx->pc = 0x2F152Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x2F2678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x2f2678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1530u; }
    }
    if (ctx->pc != 0x2F1530u) { return; }
    ctx->pc = 0x2F1530u;
    // 0x2f1530: 0x40182d
    ctx->pc = 0x2f1530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1534: 0x8e8238f0
    ctx->pc = 0x2f1534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 14576)));
    // 0x2f1538: 0x10400007
    ctx->pc = 0x2F1538u;
    {
        const bool branch_taken_0x2f1538 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F153Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294942624));
        if (branch_taken_0x2f1538) {
            ctx->pc = 0x2F1558u;
            goto label_2f1558;
        }
    }
    ctx->pc = 0x2F1540u;
    // 0x2f1540: 0x14720005
    ctx->pc = 0x2F1540u;
    {
        const bool branch_taken_0x2f1540 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 18));
        if (branch_taken_0x2f1540) {
            ctx->pc = 0x2F1558u;
            goto label_2f1558;
        }
    }
    ctx->pc = 0x2F1548u;
    // 0x2f1548: 0xc0bc9ec
    ctx->pc = 0x2F1548u;
    SET_GPR_U32(ctx, 31, 0x2F1550u);
    ctx->pc = 0x2F154Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x2F27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x2f27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1550u; }
    }
    if (ctx->pc != 0x2F1550u) { return; }
    ctx->pc = 0x2F1550u;
label_2f1550:
    // 0x2f1550: 0x10000007
    ctx->pc = 0x2F1550u;
    {
        const bool branch_taken_0x2f1550 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1554u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f1550) {
            ctx->pc = 0x2F1570u;
            goto label_2f1570;
        }
    }
    ctx->pc = 0x2F1558u;
label_2f1558:
    // 0x2f1558: 0xc0bba4a
    ctx->pc = 0x2F1558u;
    SET_GPR_U32(ctx, 31, 0x2F1560u);
    ctx->pc = 0x2F155Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE928u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x2ee928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1560u; }
    }
    if (ctx->pc != 0x2F1560u) { return; }
    ctx->pc = 0x2F1560u;
    // 0x2f1560: 0xaed53148
    ctx->pc = 0x2f1560u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12616), GPR_U32(ctx, 21));
    // 0x2f1564: 0x10000004
    ctx->pc = 0x2F1564u;
    {
        const bool branch_taken_0x2f1564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1568u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f1564) {
            ctx->pc = 0x2F1578u;
            goto label_2f1578;
        }
    }
    ctx->pc = 0x2F156Cu;
label_2f156c:
    // 0x2f156c: 0x102d
    ctx->pc = 0x2f156cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1570:
    // 0x2f1570: 0x1440ffdd
    ctx->pc = 0x2F1570u;
    {
        const bool branch_taken_0x2f1570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1574u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f1570) {
            ctx->pc = 0x2F14E8u;
            goto label_2f14e8;
        }
    }
    ctx->pc = 0x2F1578u;
label_2f1578:
    // 0x2f1578: 0xdfbf0090
    ctx->pc = 0x2f1578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f157c: 0xdfbe0080
    ctx->pc = 0x2f157cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f1580: 0xdfb70070
    ctx->pc = 0x2f1580u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f1584: 0xdfb60060
    ctx->pc = 0x2f1584u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f1588: 0xdfb50050
    ctx->pc = 0x2f1588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f158c: 0xdfb40040
    ctx->pc = 0x2f158cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1590: 0xdfb30030
    ctx->pc = 0x2f1590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1594: 0xdfb20020
    ctx->pc = 0x2f1594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1598: 0xdfb10010
    ctx->pc = 0x2f1598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f159c: 0xdfb00000
    ctx->pc = 0x2f159cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f15a0: 0x3e00008
    ctx->pc = 0x2F15A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F15A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F14E8u: goto label_2f14e8;
            case 0x2F1514u: goto label_2f1514;
            case 0x2F1528u: goto label_2f1528;
            case 0x2F1550u: goto label_2f1550;
            case 0x2F1558u: goto label_2f1558;
            case 0x2F156Cu: goto label_2f156c;
            case 0x2F1570u: goto label_2f1570;
            case 0x2F1578u: goto label_2f1578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F15A8u;
}
