#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _slice0
// Address: 0x160680 - 0x160880
void _slice0_0x160680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_slice0");


    ctx->pc = 0x160680u;

    // 0x160680: 0x27bdff30
    ctx->pc = 0x160680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x160684: 0xffb400a0
    ctx->pc = 0x160684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x160688: 0x27a60044
    ctx->pc = 0x160688u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 68));
    // 0x16068c: 0xa0a02d
    ctx->pc = 0x16068cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160690: 0xafa00040
    ctx->pc = 0x160690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x160694: 0xafa00044
    ctx->pc = 0x160694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x160698: 0x280202d
    ctx->pc = 0x160698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16069c: 0x27a50040
    ctx->pc = 0x16069cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1606a0: 0x3a0382d
    ctx->pc = 0x1606a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606a4: 0xffbf00c0
    ctx->pc = 0x1606a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1606a8: 0xffb500b0
    ctx->pc = 0x1606a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x1606ac: 0xffb30090
    ctx->pc = 0x1606acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x1606b0: 0xffb20080
    ctx->pc = 0x1606b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1606b4: 0xffb10070
    ctx->pc = 0x1606b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x1606b8: 0xc058156
    ctx->pc = 0x1606B8u;
    SET_GPR_U32(ctx, 31, 0x1606C0u);
    ctx->pc = 0x1606BCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    ctx->pc = 0x160558u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sliceA0_0x160558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606C0u; }
        else if (ctx->pc != 0x1606C0u) { ctx->pc = 0x1606C0u; }
    }
    if (ctx->pc != 0x1606C0u) { return; }
    ctx->pc = 0x1606C0u;
    // 0x1606c0: 0x14400067
    ctx->pc = 0x1606C0u;
    {
        const bool branch_taken_0x1606c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1606C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x1606c0) {
            ctx->pc = 0x160860u;
            goto label_160860;
        }
    }
    ctx->pc = 0x1606C8u;
    // 0x1606c8: 0x3c120023
    ctx->pc = 0x1606c8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x1606cc: 0xae40a348
    ctx->pc = 0x1606ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943560), GPR_U32(ctx, 0));
    // 0x1606d0: 0x240a82d
    ctx->pc = 0x1606d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606d4: 0x0
    ctx->pc = 0x1606d4u;
    // NOP
label_1606d8:
    // 0x1606d8: 0x8fa20040
    ctx->pc = 0x1606d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1606dc: 0x54102a
    ctx->pc = 0x1606dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
    // 0x1606e0: 0x14400003
    ctx->pc = 0x1606E0u;
    {
        const bool branch_taken_0x1606e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1606E4u;
        SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
        if (branch_taken_0x1606e0) {
            ctx->pc = 0x1606F0u;
            goto label_1606f0;
        }
    }
    ctx->pc = 0x1606E8u;
    // 0x1606e8: 0x1000005c
    ctx->pc = 0x1606E8u;
    {
        const bool branch_taken_0x1606e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1606ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1606e8) {
            ctx->pc = 0x16085Cu;
            goto label_16085c;
        }
    }
    ctx->pc = 0x1606F0u;
label_1606f0:
    // 0x1606f0: 0x24040140
    ctx->pc = 0x1606f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x1606f4: 0x2663a838
    ctx->pc = 0x1606f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4294944824));
    // 0x1606f8: 0x8c620280
    ctx->pc = 0x1606f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x1606fc: 0x442818
    ctx->pc = 0x1606fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x160700: 0xa31021
    ctx->pc = 0x160700u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x160704: 0xc057fe4
    ctx->pc = 0x160704u;
    SET_GPR_U32(ctx, 31, 0x16070Cu);
    ctx->pc = 0x160708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    ctx->pc = 0x15FF90u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitBdecOut_0x15ff90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16070Cu; }
        else if (ctx->pc != 0x16070Cu) { ctx->pc = 0x16070Cu; }
    }
    if (ctx->pc != 0x16070Cu) { return; }
    ctx->pc = 0x16070Cu;
    // 0x16070c: 0x14400003
    ctx->pc = 0x16070Cu;
    {
        const bool branch_taken_0x16070c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160710u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x16070c) {
            ctx->pc = 0x16071Cu;
            goto label_16071c;
        }
    }
    ctx->pc = 0x160714u;
    // 0x160714: 0x10000051
    ctx->pc = 0x160714u;
    {
        const bool branch_taken_0x160714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160718u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x160714) {
            ctx->pc = 0x16085Cu;
            goto label_16085c;
        }
    }
    ctx->pc = 0x16071Cu;
label_16071c:
    // 0x16071c: 0x14400013
    ctx->pc = 0x16071Cu;
    {
        const bool branch_taken_0x16071c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160720u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x16071c) {
            ctx->pc = 0x16076Cu;
            goto label_16076c;
        }
    }
    ctx->pc = 0x160724u;
    // 0x160724: 0xc058540
    ctx->pc = 0x160724u;
    SET_GPR_U32(ctx, 31, 0x16072Cu);
    ctx->pc = 0x160728u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x161500u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x161500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16072Cu; }
        else if (ctx->pc != 0x16072Cu) { ctx->pc = 0x16072Cu; }
    }
    if (ctx->pc != 0x16072Cu) { return; }
    ctx->pc = 0x16072Cu;
    // 0x16072c: 0x10400003
    ctx->pc = 0x16072Cu;
    {
        const bool branch_taken_0x16072c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x160730u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294943560)));
        if (branch_taken_0x16072c) {
            ctx->pc = 0x16073Cu;
            goto label_16073c;
        }
    }
    ctx->pc = 0x160734u;
    // 0x160734: 0x10400004
    ctx->pc = 0x160734u;
    {
        const bool branch_taken_0x160734 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x160734) {
            ctx->pc = 0x160748u;
            goto label_160748;
        }
    }
    ctx->pc = 0x16073Cu;
label_16073c:
    // 0x16073c: 0xae40a348
    ctx->pc = 0x16073cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943560), GPR_U32(ctx, 0));
    // 0x160740: 0x10000046
    ctx->pc = 0x160740u;
    {
        const bool branch_taken_0x160740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160744u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x160740) {
            ctx->pc = 0x16085Cu;
            goto label_16085c;
        }
    }
    ctx->pc = 0x160748u;
label_160748:
    // 0x160748: 0xc0580c8
    ctx->pc = 0x160748u;
    SET_GPR_U32(ctx, 31, 0x160750u);
    ctx->pc = 0x160320u;
    {
        const uint32_t __entryPc = ctx->pc;
        _mbAddressIncrement_0x160320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160750u; }
        else if (ctx->pc != 0x160750u) { ctx->pc = 0x160750u; }
    }
    if (ctx->pc != 0x160750u) { return; }
    ctx->pc = 0x160750u;
    // 0x160750: 0x8ea3a348
    ctx->pc = 0x160750u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4294943560)));
    // 0x160754: 0x10600004
    ctx->pc = 0x160754u;
    {
        const bool branch_taken_0x160754 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x160758u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        if (branch_taken_0x160754) {
            ctx->pc = 0x160768u;
            goto label_160768;
        }
    }
    ctx->pc = 0x16075Cu;
    // 0x16075c: 0xaea0a348
    ctx->pc = 0x16075cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294943560), GPR_U32(ctx, 0));
    // 0x160760: 0x1000003e
    ctx->pc = 0x160760u;
    {
        const bool branch_taken_0x160760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160764u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x160760) {
            ctx->pc = 0x16085Cu;
            goto label_16085c;
        }
    }
    ctx->pc = 0x160768u;
label_160768:
    // 0x160768: 0x8fa20040
    ctx->pc = 0x160768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16076c:
    // 0x16076c: 0x54102a
    ctx->pc = 0x16076cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
    // 0x160770: 0x14400006
    ctx->pc = 0x160770u;
    {
        const bool branch_taken_0x160770 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160774u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x160770) {
            ctx->pc = 0x16078Cu;
            goto label_16078c;
        }
    }
    ctx->pc = 0x160778u;
    // 0x160778: 0x3c04002c
    ctx->pc = 0x160778u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16077c: 0xc059112
    ctx->pc = 0x16077Cu;
    SET_GPR_U32(ctx, 31, 0x160784u);
    ctx->pc = 0x160780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937624));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160784u; }
        else if (ctx->pc != 0x160784u) { ctx->pc = 0x160784u; }
    }
    if (ctx->pc != 0x160784u) { return; }
    ctx->pc = 0x160784u;
    // 0x160784: 0x10000035
    ctx->pc = 0x160784u;
    {
        const bool branch_taken_0x160784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160788u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x160784) {
            ctx->pc = 0x16085Cu;
            goto label_16085c;
        }
    }
    ctx->pc = 0x16078Cu;
label_16078c:
    // 0x16078c: 0x24020001
    ctx->pc = 0x16078cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160790: 0x1462000e
    ctx->pc = 0x160790u;
    {
        const bool branch_taken_0x160790 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x160794u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x160790) {
            ctx->pc = 0x1607CCu;
            goto label_1607cc;
        }
    }
    ctx->pc = 0x160798u;
    // 0x160798: 0x27b00030
    ctx->pc = 0x160798u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
    // 0x16079c: 0x27a40048
    ctx->pc = 0x16079cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 72));
    // 0x1607a0: 0x27a5004c
    ctx->pc = 0x1607a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 76));
    // 0x1607a4: 0x27a60050
    ctx->pc = 0x1607a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1607a8: 0x3a0382d
    ctx->pc = 0x1607a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607ac: 0x220402d
    ctx->pc = 0x1607acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607b0: 0xc058254
    ctx->pc = 0x1607B0u;
    SET_GPR_U32(ctx, 31, 0x1607B8u);
    ctx->pc = 0x1607B4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160950u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decMB0_0x160950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607B8u; }
        else if (ctx->pc != 0x1607B8u) { ctx->pc = 0x1607B8u; }
    }
    if (ctx->pc != 0x1607B8u) { return; }
    ctx->pc = 0x1607B8u;
    // 0x1607b8: 0x1440000c
    ctx->pc = 0x1607B8u;
    {
        const bool branch_taken_0x1607b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1607BCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1607b8) {
            ctx->pc = 0x1607ECu;
            goto label_1607ec;
        }
    }
    ctx->pc = 0x1607C0u;
    // 0x1607c0: 0xae40a348
    ctx->pc = 0x1607c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943560), GPR_U32(ctx, 0));
    // 0x1607c4: 0x10000025
    ctx->pc = 0x1607C4u;
    {
        const bool branch_taken_0x1607c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1607C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1607c4) {
            ctx->pc = 0x16085Cu;
            goto label_16085c;
        }
    }
    ctx->pc = 0x1607CCu;
label_1607cc:
    // 0x1607cc: 0x3a0202d
    ctx->pc = 0x1607ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607d0: 0x27a5004c
    ctx->pc = 0x1607d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 76));
    // 0x1607d4: 0x220302d
    ctx->pc = 0x1607d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607d8: 0xc058220
    ctx->pc = 0x1607D8u;
    SET_GPR_U32(ctx, 31, 0x1607E0u);
    ctx->pc = 0x1607DCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 72));
    ctx->pc = 0x160880u;
    {
        const uint32_t __entryPc = ctx->pc;
        _skipMB0_0x160880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607E0u; }
        else if (ctx->pc != 0x1607E0u) { ctx->pc = 0x1607E0u; }
    }
    if (ctx->pc != 0x1607E0u) { return; }
    ctx->pc = 0x1607E0u;
    // 0x1607e0: 0x1040000b
    ctx->pc = 0x1607E0u;
    {
        const bool branch_taken_0x1607e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1607E4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
        if (branch_taken_0x1607e0) {
            ctx->pc = 0x160810u;
            goto label_160810;
        }
    }
    ctx->pc = 0x1607E8u;
    // 0x1607e8: 0x8fa40040
    ctx->pc = 0x1607e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1607ec:
    // 0x1607ec: 0x220482d
    ctx->pc = 0x1607ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607f0: 0x8fa50044
    ctx->pc = 0x1607f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1607f4: 0x200502d
    ctx->pc = 0x1607f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607f8: 0x8fa60048
    ctx->pc = 0x1607f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1607fc: 0x3a0402d
    ctx->pc = 0x1607fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160800: 0xc057880
    ctx->pc = 0x160800u;
    SET_GPR_U32(ctx, 31, 0x160808u);
    ctx->pc = 0x160804u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->pc = 0x15E200u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionComp0_0x15e200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160808u; }
        else if (ctx->pc != 0x160808u) { ctx->pc = 0x160808u; }
    }
    if (ctx->pc != 0x160808u) { return; }
    ctx->pc = 0x160808u;
    // 0x160808: 0x14400004
    ctx->pc = 0x160808u;
    {
        const bool branch_taken_0x160808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16080Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x160808) {
            ctx->pc = 0x16081Cu;
            goto label_16081c;
        }
    }
    ctx->pc = 0x160810u;
label_160810:
    // 0x160810: 0xae40a348
    ctx->pc = 0x160810u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943560), GPR_U32(ctx, 0));
    // 0x160814: 0x10000011
    ctx->pc = 0x160814u;
    {
        const bool branch_taken_0x160814 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160818u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x160814) {
            ctx->pc = 0x16085Cu;
            goto label_16085c;
        }
    }
    ctx->pc = 0x16081Cu;
label_16081c:
    // 0x16081c: 0x10800005
    ctx->pc = 0x16081Cu;
    {
        const bool branch_taken_0x16081c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x160820u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294944824));
        if (branch_taken_0x16081c) {
            ctx->pc = 0x160834u;
            goto label_160834;
        }
    }
    ctx->pc = 0x160824u;
    // 0x160824: 0x8c440280
    ctx->pc = 0x160824u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x160828: 0xc057c02
    ctx->pc = 0x160828u;
    SET_GPR_U32(ctx, 31, 0x160830u);
    ctx->pc = 0x16082Cu;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x15F008u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doMC_0x15f008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160830u; }
        else if (ctx->pc != 0x160830u) { ctx->pc = 0x160830u; }
    }
    if (ctx->pc != 0x160830u) { return; }
    ctx->pc = 0x160830u;
    // 0x160830: 0x8fa40040
    ctx->pc = 0x160830u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_160834:
    // 0x160834: 0x8fa20044
    ctx->pc = 0x160834u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x160838: 0x2665a838
    ctx->pc = 0x160838u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294944824));
    // 0x16083c: 0x8ca30280
    ctx->pc = 0x16083cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x160840: 0x24840001
    ctx->pc = 0x160840u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x160844: 0x2442ffff
    ctx->pc = 0x160844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x160848: 0xafa40040
    ctx->pc = 0x160848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x16084c: 0x38630001
    ctx->pc = 0x16084cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x160850: 0xafa20044
    ctx->pc = 0x160850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x160854: 0x1000ffa0
    ctx->pc = 0x160854u;
    {
        const bool branch_taken_0x160854 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160858u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 640), GPR_U32(ctx, 3));
        if (branch_taken_0x160854) {
            ctx->pc = 0x1606D8u;
            goto label_1606d8;
        }
    }
    ctx->pc = 0x16085Cu;
label_16085c:
    // 0x16085c: 0xdfbf00c0
    ctx->pc = 0x16085cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_160860:
    // 0x160860: 0xdfb500b0
    ctx->pc = 0x160860u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160864: 0xdfb400a0
    ctx->pc = 0x160864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x160868: 0xdfb30090
    ctx->pc = 0x160868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16086c: 0xdfb20080
    ctx->pc = 0x16086cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160870: 0xdfb10070
    ctx->pc = 0x160870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x160874: 0xdfb00060
    ctx->pc = 0x160874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160878: 0x3e00008
    ctx->pc = 0x160878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16087Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1606D8u: goto label_1606d8;
            case 0x1606F0u: goto label_1606f0;
            case 0x16071Cu: goto label_16071c;
            case 0x16073Cu: goto label_16073c;
            case 0x160748u: goto label_160748;
            case 0x160768u: goto label_160768;
            case 0x16076Cu: goto label_16076c;
            case 0x16078Cu: goto label_16078c;
            case 0x1607CCu: goto label_1607cc;
            case 0x1607ECu: goto label_1607ec;
            case 0x160810u: goto label_160810;
            case 0x16081Cu: goto label_16081c;
            case 0x160834u: goto label_160834;
            case 0x16085Cu: goto label_16085c;
            case 0x160860u: goto label_160860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160880u;
}
