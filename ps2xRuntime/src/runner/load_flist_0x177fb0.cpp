#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: load_flist
// Address: 0x177fb0 - 0x1780a0
void load_flist_0x177fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("load_flist");


    ctx->pc = 0x177fb0u;

    // 0x177fb0: 0x27bdff70
    ctx->pc = 0x177fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x177fb4: 0xffb20070
    ctx->pc = 0x177fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x177fb8: 0xffb10060
    ctx->pc = 0x177fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x177fbc: 0xa0902d
    ctx->pc = 0x177fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fc0: 0x80882d
    ctx->pc = 0x177fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fc4: 0xffbf0080
    ctx->pc = 0x177fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x177fc8: 0xffb00050
    ctx->pc = 0x177fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x177fcc: 0x3c05002c
    ctx->pc = 0x177fccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x177fd0: 0x8a220003
    ctx->pc = 0x177fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x177fd4: 0x9a220000
    ctx->pc = 0x177fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x177fd8: 0x82230004
    ctx->pc = 0x177fd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x177fdc: 0xaba20043
    ctx->pc = 0x177fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x177fe0: 0xbba20040
    ctx->pc = 0x177fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x177fe4: 0xa3a30044
    ctx->pc = 0x177fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x177fe8: 0x24a5b470
    ctx->pc = 0x177fe8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947952));
    // 0x177fec: 0xa3a00044
    ctx->pc = 0x177fecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x177ff0: 0xc051442
    ctx->pc = 0x177FF0u;
    SET_GPR_U32(ctx, 31, 0x177FF8u);
    ctx->pc = 0x177FF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x145108u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x145108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FF8u; }
        else if (ctx->pc != 0x177FF8u) { ctx->pc = 0x177FF8u; }
    }
    if (ctx->pc != 0x177FF8u) { return; }
    ctx->pc = 0x177FF8u;
    // 0x177ff8: 0x14400006
    ctx->pc = 0x177FF8u;
    {
        const bool branch_taken_0x177ff8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x177FFCu;
        SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
        if (branch_taken_0x177ff8) {
            ctx->pc = 0x178014u;
            goto label_178014;
        }
    }
    ctx->pc = 0x178000u;
    // 0x178000: 0x26240004
    ctx->pc = 0x178000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4));
    // 0x178004: 0xc05e588
    ctx->pc = 0x178004u;
    SET_GPR_U32(ctx, 31, 0x17800Cu);
    ctx->pc = 0x178008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179620u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_load_flist_0x179620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17800Cu; }
        else if (ctx->pc != 0x17800Cu) { ctx->pc = 0x17800Cu; }
    }
    if (ctx->pc != 0x17800Cu) { return; }
    ctx->pc = 0x17800Cu;
    // 0x17800c: 0x1000001f
    ctx->pc = 0x17800Cu;
    {
        const bool branch_taken_0x17800c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178010u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x17800c) {
            ctx->pc = 0x17808Cu;
            goto label_17808c;
        }
    }
    ctx->pc = 0x178014u;
label_178014:
    // 0x178014: 0x282d
    ctx->pc = 0x178014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178018: 0x2610a028
    ctx->pc = 0x178018u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294942760));
    // 0x17801c: 0x24060080
    ctx->pc = 0x17801cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
    // 0x178020: 0xc050cfe
    ctx->pc = 0x178020u;
    SET_GPR_U32(ctx, 31, 0x178028u);
    ctx->pc = 0x178024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178028u; }
        else if (ctx->pc != 0x178028u) { ctx->pc = 0x178028u; }
    }
    if (ctx->pc != 0x178028u) { return; }
    ctx->pc = 0x178028u;
    // 0x178028: 0x220202d
    ctx->pc = 0x178028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17802c: 0xc05df2c
    ctx->pc = 0x17802Cu;
    SET_GPR_U32(ctx, 31, 0x178034u);
    ctx->pc = 0x178030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_conv_fname_0x177cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178034u; }
        else if (ctx->pc != 0x178034u) { ctx->pc = 0x178034u; }
    }
    if (ctx->pc != 0x178034u) { return; }
    ctx->pc = 0x178034u;
    // 0x178034: 0x200282d
    ctx->pc = 0x178034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178038: 0xc0543c0
    ctx->pc = 0x178038u;
    SET_GPR_U32(ctx, 31, 0x178040u);
    ctx->pc = 0x17803Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdSearchFile_0x150f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178040u; }
        else if (ctx->pc != 0x178040u) { ctx->pc = 0x178040u; }
    }
    if (ctx->pc != 0x178040u) { return; }
    ctx->pc = 0x178040u;
    // 0x178040: 0x1040000c
    ctx->pc = 0x178040u;
    {
        const bool branch_taken_0x178040 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x178044u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x178040) {
            ctx->pc = 0x178074u;
            goto label_178074;
        }
    }
    ctx->pc = 0x178048u;
    // 0x178048: 0x8fa40000
    ctx->pc = 0x178048u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17804c: 0xa3a20031
    ctx->pc = 0x17804cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x178050: 0x240302d
    ctx->pc = 0x178050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178054: 0xa3a00030
    ctx->pc = 0x178054u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x178058: 0x24050002
    ctx->pc = 0x178058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17805c: 0xa3a00032
    ctx->pc = 0x17805cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x178060: 0x27a70030
    ctx->pc = 0x178060u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    // 0x178064: 0xc05470a
    ctx->pc = 0x178064u;
    SET_GPR_U32(ctx, 31, 0x17806Cu);
    ctx->pc = 0x178068u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x151C28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdRead_0x151c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17806Cu; }
        else if (ctx->pc != 0x17806Cu) { ctx->pc = 0x17806Cu; }
    }
    if (ctx->pc != 0x17806Cu) { return; }
    ctx->pc = 0x17806Cu;
    // 0x17806c: 0x14400003
    ctx->pc = 0x17806Cu;
    {
        const bool branch_taken_0x17806c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17806c) {
            ctx->pc = 0x17807Cu;
            goto label_17807c;
        }
    }
    ctx->pc = 0x178074u;
label_178074:
    // 0x178074: 0x10000004
    ctx->pc = 0x178074u;
    {
        const bool branch_taken_0x178074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178078u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178074) {
            ctx->pc = 0x178088u;
            goto label_178088;
        }
    }
    ctx->pc = 0x17807Cu;
label_17807c:
    // 0x17807c: 0xc054502
    ctx->pc = 0x17807Cu;
    SET_GPR_U32(ctx, 31, 0x178084u);
    ctx->pc = 0x178080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x151408u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x151408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178084u; }
        else if (ctx->pc != 0x178084u) { ctx->pc = 0x178084u; }
    }
    if (ctx->pc != 0x178084u) { return; }
    ctx->pc = 0x178084u;
    // 0x178084: 0x24020001
    ctx->pc = 0x178084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_178088:
    // 0x178088: 0xdfbf0080
    ctx->pc = 0x178088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17808c:
    // 0x17808c: 0xdfb20070
    ctx->pc = 0x17808cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178090: 0xdfb10060
    ctx->pc = 0x178090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178094: 0xdfb00050
    ctx->pc = 0x178094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178098: 0x3e00008
    ctx->pc = 0x178098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17809Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178014u: goto label_178014;
            case 0x178074u: goto label_178074;
            case 0x17807Cu: goto label_17807c;
            case 0x178088u: goto label_178088;
            case 0x17808Cu: goto label_17808c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1780A0u;
}
