#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_encode_blk
// Address: 0x16f5e0 - 0x16f7a8
void adxsje_encode_blk_0x16f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_encode_blk");


    ctx->pc = 0x16f5e0u;

    // 0x16f5e0: 0x27bdff40
    ctx->pc = 0x16f5e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x16f5e4: 0xffb20040
    ctx->pc = 0x16f5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16f5e8: 0x3a0382d
    ctx->pc = 0x16f5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f5ec: 0xffb10030
    ctx->pc = 0x16f5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x16f5f0: 0xffbf00b0
    ctx->pc = 0x16f5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x16f5f4: 0x80882d
    ctx->pc = 0x16f5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f5f8: 0xffbe00a0
    ctx->pc = 0x16f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x16f5fc: 0x26260090
    ctx->pc = 0x16f5fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 144));
    // 0x16f600: 0xffb70090
    ctx->pc = 0x16f600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x16f604: 0x262800d0
    ctx->pc = 0x16f604u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 208));
    // 0x16f608: 0xffb60080
    ctx->pc = 0x16f608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x16f60c: 0xffb50070
    ctx->pc = 0x16f60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x16f610: 0xffb40060
    ctx->pc = 0x16f610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x16f614: 0xffb30050
    ctx->pc = 0x16f614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x16f618: 0xffb00020
    ctx->pc = 0x16f618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16f61c: 0x8e220030
    ctx->pc = 0x16f61cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x16f620: 0x8e23003c
    ctx->pc = 0x16f620u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x16f624: 0x8e240044
    ctx->pc = 0x16f624u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16f628: 0x40282d
    ctx->pc = 0x16f628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f62c: 0x629023
    ctx->pc = 0x16f62cu;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f630: 0xafa60000
    ctx->pc = 0x16f630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x16f634: 0x92102a
    ctx->pc = 0x16f634u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 18)));
    // 0x16f638: 0xafa80004
    ctx->pc = 0x16f638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x16f63c: 0x82900b
    ctx->pc = 0x16f63cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 4));
    // 0x16f640: 0x220202d
    ctx->pc = 0x16f640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f644: 0xc05bbe2
    ctx->pc = 0x16F644u;
    SET_GPR_U32(ctx, 31, 0x16F64Cu);
    ctx->pc = 0x16F648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16EF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_get_pcm_data_0x16ef88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F64Cu; }
        else if (ctx->pc != 0x16F64Cu) { ctx->pc = 0x16F64Cu; }
    }
    if (ctx->pc != 0x16F64Cu) { return; }
    ctx->pc = 0x16F64Cu;
    // 0x16f64c: 0x54400003
    ctx->pc = 0x16F64Cu;
    {
        const bool branch_taken_0x16f64c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16f64c) {
            ctx->pc = 0x16F650u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->pc = 0x16F65Cu;
            goto label_16f65c;
        }
    }
    ctx->pc = 0x16F654u;
    // 0x16f654: 0x10000048
    ctx->pc = 0x16F654u;
    {
        const bool branch_taken_0x16f654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F658u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f654) {
            ctx->pc = 0x16F778u;
            goto label_16f778;
        }
    }
    ctx->pc = 0x16F65Cu;
label_16f65c:
    // 0x16f65c: 0x246102a
    ctx->pc = 0x16f65cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 6)));
    // 0x16f660: 0x10400014
    ctx->pc = 0x16F660u;
    {
        const bool branch_taken_0x16f660 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F664u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 88)));
        if (branch_taken_0x16f660) {
            ctx->pc = 0x16F6B4u;
            goto label_16f6b4;
        }
    }
    ctx->pc = 0x16F668u;
    // 0x16f668: 0x18600012
    ctx->pc = 0x16F668u;
    {
        const bool branch_taken_0x16f668 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16F66Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f668) {
            ctx->pc = 0x16F6B4u;
            goto label_16f6b4;
        }
    }
    ctx->pc = 0x16F670u;
    // 0x16f670: 0x12a040
    ctx->pc = 0x16f670u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 18), 1));
    // 0x16f674: 0x3a0802d
    ctx->pc = 0x16f674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f678:
    // 0x16f678: 0x8e040000
    ctx->pc = 0x16f678u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16f67c: 0x10800007
    ctx->pc = 0x16F67Cu;
    {
        const bool branch_taken_0x16f67c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F680u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        if (branch_taken_0x16f67c) {
            ctx->pc = 0x16F69Cu;
            goto label_16f69c;
        }
    }
    ctx->pc = 0x16F684u;
    // 0x16f684: 0xd23023
    ctx->pc = 0x16f684u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x16f688: 0x63040
    ctx->pc = 0x16f688u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    // 0x16f68c: 0xc050cfe
    ctx->pc = 0x16F68Cu;
    SET_GPR_U32(ctx, 31, 0x16F694u);
    ctx->pc = 0x16F690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F694u; }
        else if (ctx->pc != 0x16F694u) { ctx->pc = 0x16F694u; }
    }
    if (ctx->pc != 0x16F694u) { return; }
    ctx->pc = 0x16F694u;
    // 0x16f694: 0x8e260044
    ctx->pc = 0x16f694u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16f698: 0x8e230058
    ctx->pc = 0x16f698u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_16f69c:
    // 0x16f69c: 0x26730001
    ctx->pc = 0x16f69cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x16f6a0: 0x263102a
    ctx->pc = 0x16f6a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
    // 0x16f6a4: 0x1440fff4
    ctx->pc = 0x16F6A4u;
    {
        const bool branch_taken_0x16f6a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F6A8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x16f6a4) {
            ctx->pc = 0x16F678u;
            goto label_16f678;
        }
    }
    ctx->pc = 0x16F6ACu;
    // 0x16f6ac: 0x10000002
    ctx->pc = 0x16F6ACu;
    {
        const bool branch_taken_0x16f6ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F6B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
        if (branch_taken_0x16f6ac) {
            ctx->pc = 0x16F6B8u;
            goto label_16f6b8;
        }
    }
    ctx->pc = 0x16F6B4u;
label_16f6b4:
    // 0x16f6b4: 0x8e220030
    ctx->pc = 0x16f6b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_16f6b8:
    // 0x16f6b8: 0x902d
    ctx->pc = 0x16f6b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6bc: 0x461021
    ctx->pc = 0x16f6bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16f6c0: 0x1860002c
    ctx->pc = 0x16F6C0u;
    {
        const bool branch_taken_0x16f6c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16F6C4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        if (branch_taken_0x16f6c0) {
            ctx->pc = 0x16F774u;
            goto label_16f774;
        }
    }
    ctx->pc = 0x16F6C8u;
    // 0x16f6c8: 0x26220080
    ctx->pc = 0x16f6c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 128));
    // 0x16f6cc: 0x263e0290
    ctx->pc = 0x16f6ccu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 17), 656));
    // 0x16f6d0: 0xafa20014
    ctx->pc = 0x16f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x16f6d4: 0x26370298
    ctx->pc = 0x16f6d4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 17), 664));
    // 0x16f6d8: 0x27b60010
    ctx->pc = 0x16f6d8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 16));
    // 0x16f6dc: 0x27b50012
    ctx->pc = 0x16f6dcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 18));
    // 0x16f6e0: 0x26340088
    ctx->pc = 0x16f6e0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 136));
    // 0x16f6e4: 0x2633008c
    ctx->pc = 0x16f6e4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 140));
    // 0x16f6e8: 0x240282d
    ctx->pc = 0x16f6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6ec: 0x0
    ctx->pc = 0x16f6ecu;
    // NOP
label_16f6f0:
    // 0x16f6f0: 0xc05bc3a
    ctx->pc = 0x16F6F0u;
    SET_GPR_U32(ctx, 31, 0x16F6F8u);
    ctx->pc = 0x16F6F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16F0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_calc_rsig_0x16f0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6F8u; }
        else if (ctx->pc != 0x16F6F8u) { ctx->pc = 0x16F6F8u; }
    }
    if (ctx->pc != 0x16F6F8u) { return; }
    ctx->pc = 0x16F6F8u;
    // 0x16f6f8: 0x128040
    ctx->pc = 0x16f6f8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 1));
    // 0x16f6fc: 0x8fa30014
    ctx->pc = 0x16f6fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16f700: 0x121080
    ctx->pc = 0x16f700u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x16f704: 0x1240c0
    ctx->pc = 0x16f704u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 18), 3));
    // 0x16f708: 0x3d04821
    ctx->pc = 0x16f708u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x16f70c: 0x621021
    ctx->pc = 0x16f70cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f710: 0x2e84021
    ctx->pc = 0x16f710u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
    // 0x16f714: 0x8c430000
    ctx->pc = 0x16f714u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f718: 0x2c0282d
    ctx->pc = 0x16f718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f71c: 0x2a0302d
    ctx->pc = 0x16f71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f720: 0xdc620080
    ctx->pc = 0x16f720u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x16f724: 0x9467007c
    ctx->pc = 0x16f724u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x16f728: 0x8c640088
    ctx->pc = 0x16f728u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16f72c: 0xfd020000
    ctx->pc = 0x16f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x16f730: 0xc05bb06
    ctx->pc = 0x16F730u;
    SET_GPR_U32(ctx, 31, 0x16F738u);
    ctx->pc = 0x16F734u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 7));
    ctx->pc = 0x16EC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        iirflt_get_delay_0x16ec18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F738u; }
        else if (ctx->pc != 0x16F738u) { ctx->pc = 0x16F738u; }
    }
    if (ctx->pc != 0x16F738u) { return; }
    ctx->pc = 0x16F738u;
    // 0x16f738: 0x97a30010
    ctx->pc = 0x16f738u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f73c: 0x2901021
    ctx->pc = 0x16f73cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x16f740: 0x97a40012
    ctx->pc = 0x16f740u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x16f744: 0x2708021
    ctx->pc = 0x16f744u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x16f748: 0xa4430000
    ctx->pc = 0x16f748u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16f74c: 0x240282d
    ctx->pc = 0x16f74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f750: 0xa6040000
    ctx->pc = 0x16f750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x16f754: 0x26520001
    ctx->pc = 0x16f754u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x16f758: 0xc05bcd0
    ctx->pc = 0x16F758u;
    SET_GPR_U32(ctx, 31, 0x16F760u);
    ctx->pc = 0x16F75Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16F340u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_set_rsig_0x16f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F760u; }
        else if (ctx->pc != 0x16F760u) { ctx->pc = 0x16F760u; }
    }
    if (ctx->pc != 0x16F760u) { return; }
    ctx->pc = 0x16F760u;
    // 0x16f760: 0x8e220058
    ctx->pc = 0x16f760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x16f764: 0x242102a
    ctx->pc = 0x16f764u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x16f768: 0x1440ffe1
    ctx->pc = 0x16F768u;
    {
        const bool branch_taken_0x16f768 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F76Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f768) {
            ctx->pc = 0x16F6F0u;
            goto label_16f6f0;
        }
    }
    ctx->pc = 0x16F770u;
    // 0x16f770: 0x8e260044
    ctx->pc = 0x16f770u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_16f774:
    // 0x16f774: 0xc0102d
    ctx->pc = 0x16f774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16f778:
    // 0x16f778: 0xdfbf00b0
    ctx->pc = 0x16f778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16f77c: 0xdfbe00a0
    ctx->pc = 0x16f77cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16f780: 0xdfb70090
    ctx->pc = 0x16f780u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16f784: 0xdfb60080
    ctx->pc = 0x16f784u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f788: 0xdfb50070
    ctx->pc = 0x16f788u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f78c: 0xdfb40060
    ctx->pc = 0x16f78cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f790: 0xdfb30050
    ctx->pc = 0x16f790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f794: 0xdfb20040
    ctx->pc = 0x16f794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f798: 0xdfb10030
    ctx->pc = 0x16f798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f79c: 0xdfb00020
    ctx->pc = 0x16f79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f7a0: 0x3e00008
    ctx->pc = 0x16F7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F7A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F65Cu: goto label_16f65c;
            case 0x16F678u: goto label_16f678;
            case 0x16F69Cu: goto label_16f69c;
            case 0x16F6B4u: goto label_16f6b4;
            case 0x16F6B8u: goto label_16f6b8;
            case 0x16F6F0u: goto label_16f6f0;
            case 0x16F774u: goto label_16f774;
            case 0x16F778u: goto label_16f778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F7A8u;
}
