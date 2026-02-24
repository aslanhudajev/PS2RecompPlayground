#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _PES_packet
// Address: 0x11ecd0 - 0x11f258
void ps2__PES_packet_0x11ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ecd0u;

    // 0x11ecd0: 0x27bdff50
    ctx->pc = 0x11ecd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11ecd4: 0xffb40050
    ctx->pc = 0x11ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11ecd8: 0xffb30040
    ctx->pc = 0x11ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11ecdc: 0xa0a02d
    ctx->pc = 0x11ecdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ece0: 0xffbf00a0
    ctx->pc = 0x11ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x11ece4: 0x80982d
    ctx->pc = 0x11ece4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ece8: 0xffbe0090
    ctx->pc = 0x11ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x11ecec: 0xffb70080
    ctx->pc = 0x11ececu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11ecf0: 0x24050018
    ctx->pc = 0x11ecf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    // 0x11ecf4: 0xffb60070
    ctx->pc = 0x11ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11ecf8: 0xffb50060
    ctx->pc = 0x11ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11ecfc: 0xffb20030
    ctx->pc = 0x11ecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11ed00: 0xffb10020
    ctx->pc = 0x11ed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11ed04: 0xffb00010
    ctx->pc = 0x11ed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11ed08: 0x8e620018
    ctx->pc = 0x11ed08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x11ed0c: 0xc0497e6
    ctx->pc = 0x11ED0Cu;
    SET_GPR_U32(ctx, 31, 0x11ED14u);
    ctx->pc = 0x11ED10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED14u; }
    }
    if (ctx->pc != 0x11ED14u) { return; }
    ctx->pc = 0x11ED14u;
    // 0x11ed14: 0x260202d
    ctx->pc = 0x11ed14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed18: 0xc0497e6
    ctx->pc = 0x11ED18u;
    SET_GPR_U32(ctx, 31, 0x11ED20u);
    ctx->pc = 0x11ED1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED20u; }
    }
    if (ctx->pc != 0x11ED20u) { return; }
    ctx->pc = 0x11ED20u;
    // 0x11ed20: 0x2103c
    ctx->pc = 0x11ed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11ed24: 0x260202d
    ctx->pc = 0x11ed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed28: 0xfe820000
    ctx->pc = 0x11ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x11ed2c: 0xc0497e6
    ctx->pc = 0x11ED2Cu;
    SET_GPR_U32(ctx, 31, 0x11ED34u);
    ctx->pc = 0x11ED30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED34u; }
    }
    if (ctx->pc != 0x11ED34u) { return; }
    ctx->pc = 0x11ED34u;
    // 0x11ed34: 0xde840000
    ctx->pc = 0x11ed34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11ed38: 0x2403ffff
    ctx->pc = 0x11ed38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ed3c: 0xae820008
    ctx->pc = 0x11ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x11ed40: 0x3402bc00
    ctx->pc = 0x11ed40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)48128);
    // 0x11ed44: 0x21638
    ctx->pc = 0x11ed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11ed48: 0x80282d
    ctx->pc = 0x11ed48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed4c: 0xfe830010
    ctx->pc = 0x11ed4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x11ed50: 0x10820117
    ctx->pc = 0x11ED50u;
    {
        const bool branch_taken_0x11ed50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x11ED54u;
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
        if (branch_taken_0x11ed50) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11ED58u;
    // 0x11ed58: 0x3402be00
    ctx->pc = 0x11ed58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)48640);
    // 0x11ed5c: 0x21638
    ctx->pc = 0x11ed5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11ed60: 0x108200f7
    ctx->pc = 0x11ED60u;
    {
        const bool branch_taken_0x11ed60 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11ed60) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11ED68u;
    // 0x11ed68: 0x3402bf00
    ctx->pc = 0x11ed68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)48896);
    // 0x11ed6c: 0x21638
    ctx->pc = 0x11ed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11ed70: 0x108200f3
    ctx->pc = 0x11ED70u;
    {
        const bool branch_taken_0x11ed70 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11ed70) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11ED78u;
    // 0x11ed78: 0x3402f000
    ctx->pc = 0x11ed78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)61440);
    // 0x11ed7c: 0x21638
    ctx->pc = 0x11ed7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11ed80: 0x108200ef
    ctx->pc = 0x11ED80u;
    {
        const bool branch_taken_0x11ed80 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11ed80) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11ED88u;
    // 0x11ed88: 0x3402f100
    ctx->pc = 0x11ed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)61696);
    // 0x11ed8c: 0x21638
    ctx->pc = 0x11ed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11ed90: 0x108200eb
    ctx->pc = 0x11ED90u;
    {
        const bool branch_taken_0x11ed90 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11ed90) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11ED98u;
    // 0x11ed98: 0x3402ff00
    ctx->pc = 0x11ed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)65280);
    // 0x11ed9c: 0x21638
    ctx->pc = 0x11ed9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11eda0: 0x108200e7
    ctx->pc = 0x11EDA0u;
    {
        const bool branch_taken_0x11eda0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11eda0) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11EDA8u;
    // 0x11eda8: 0x3402f200
    ctx->pc = 0x11eda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)61952);
    // 0x11edac: 0x21638
    ctx->pc = 0x11edacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11edb0: 0x108200e3
    ctx->pc = 0x11EDB0u;
    {
        const bool branch_taken_0x11edb0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11edb0) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11EDB8u;
    // 0x11edb8: 0x3402f800
    ctx->pc = 0x11edb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)63488);
    // 0x11edbc: 0x21638
    ctx->pc = 0x11edbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11edc0: 0x108200df
    ctx->pc = 0x11EDC0u;
    {
        const bool branch_taken_0x11edc0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11edc0) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11EDC8u;
    // 0x11edc8: 0x260202d
    ctx->pc = 0x11edc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11edcc: 0xc0497e6
    ctx->pc = 0x11EDCCu;
    SET_GPR_U32(ctx, 31, 0x11EDD4u);
    ctx->pc = 0x11EDD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDD4u; }
    }
    if (ctx->pc != 0x11EDD4u) { return; }
    ctx->pc = 0x11EDD4u;
    // 0x11edd4: 0x260202d
    ctx->pc = 0x11edd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11edd8: 0xc0497e6
    ctx->pc = 0x11EDD8u;
    SET_GPR_U32(ctx, 31, 0x11EDE0u);
    ctx->pc = 0x11EDDCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDE0u; }
    }
    if (ctx->pc != 0x11EDE0u) { return; }
    ctx->pc = 0x11EDE0u;
    // 0x11ede0: 0xae82000c
    ctx->pc = 0x11ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x11ede4: 0x260202d
    ctx->pc = 0x11ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ede8: 0xc0497e6
    ctx->pc = 0x11EDE8u;
    SET_GPR_U32(ctx, 31, 0x11EDF0u);
    ctx->pc = 0x11EDECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDF0u; }
    }
    if (ctx->pc != 0x11EDF0u) { return; }
    ctx->pc = 0x11EDF0u;
    // 0x11edf0: 0x260202d
    ctx->pc = 0x11edf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11edf4: 0xc0497e6
    ctx->pc = 0x11EDF4u;
    SET_GPR_U32(ctx, 31, 0x11EDFCu);
    ctx->pc = 0x11EDF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDFCu; }
    }
    if (ctx->pc != 0x11EDFCu) { return; }
    ctx->pc = 0x11EDFCu;
    // 0x11edfc: 0x40b82d
    ctx->pc = 0x11edfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee00: 0x260202d
    ctx->pc = 0x11ee00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee04: 0xc0497e6
    ctx->pc = 0x11EE04u;
    SET_GPR_U32(ctx, 31, 0x11EE0Cu);
    ctx->pc = 0x11EE08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE0Cu; }
    }
    if (ctx->pc != 0x11EE0Cu) { return; }
    ctx->pc = 0x11EE0Cu;
    // 0x11ee0c: 0xafa20000
    ctx->pc = 0x11ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11ee10: 0x260202d
    ctx->pc = 0x11ee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee14: 0xc0497e6
    ctx->pc = 0x11EE14u;
    SET_GPR_U32(ctx, 31, 0x11EE1Cu);
    ctx->pc = 0x11EE18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE1Cu; }
    }
    if (ctx->pc != 0x11EE1Cu) { return; }
    ctx->pc = 0x11EE1Cu;
    // 0x11ee1c: 0x40f02d
    ctx->pc = 0x11ee1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee20: 0x260202d
    ctx->pc = 0x11ee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee24: 0xc0497e6
    ctx->pc = 0x11EE24u;
    SET_GPR_U32(ctx, 31, 0x11EE2Cu);
    ctx->pc = 0x11EE28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE2Cu; }
    }
    if (ctx->pc != 0x11EE2Cu) { return; }
    ctx->pc = 0x11EE2Cu;
    // 0x11ee2c: 0x40a82d
    ctx->pc = 0x11ee2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee30: 0x260202d
    ctx->pc = 0x11ee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee34: 0xc0497e6
    ctx->pc = 0x11EE34u;
    SET_GPR_U32(ctx, 31, 0x11EE3Cu);
    ctx->pc = 0x11EE38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE3Cu; }
    }
    if (ctx->pc != 0x11EE3Cu) { return; }
    ctx->pc = 0x11EE3Cu;
    // 0x11ee3c: 0xafa20004
    ctx->pc = 0x11ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11ee40: 0x32e30002
    ctx->pc = 0x11ee40u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 23), 2));
    // 0x11ee44: 0xde620018
    ctx->pc = 0x11ee44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x11ee48: 0x2b03c
    ctx->pc = 0x11ee48u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11ee4c: 0x16b03f
    ctx->pc = 0x11ee4cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x11ee50: 0x10600022
    ctx->pc = 0x11EE50u;
    {
        const bool branch_taken_0x11ee50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EE54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x11ee50) {
            ctx->pc = 0x11EEDCu;
            goto label_11eedc;
        }
    }
    ctx->pc = 0x11EE58u;
    // 0x11ee58: 0x260202d
    ctx->pc = 0x11ee58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee5c: 0xc0497e6
    ctx->pc = 0x11EE5Cu;
    SET_GPR_U32(ctx, 31, 0x11EE64u);
    ctx->pc = 0x11EE60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE64u; }
    }
    if (ctx->pc != 0x11EE64u) { return; }
    ctx->pc = 0x11EE64u;
    // 0x11ee64: 0x260202d
    ctx->pc = 0x11ee64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee68: 0xc0497e6
    ctx->pc = 0x11EE68u;
    SET_GPR_U32(ctx, 31, 0x11EE70u);
    ctx->pc = 0x11EE6Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE70u; }
    }
    if (ctx->pc != 0x11EE70u) { return; }
    ctx->pc = 0x11EE70u;
    // 0x11ee70: 0x40802d
    ctx->pc = 0x11ee70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee74: 0xc0497fa
    ctx->pc = 0x11EE74u;
    SET_GPR_U32(ctx, 31, 0x11EE7Cu);
    ctx->pc = 0x11EE78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE7Cu; }
    }
    if (ctx->pc != 0x11EE7Cu) { return; }
    ctx->pc = 0x11EE7Cu;
    // 0x11ee7c: 0x260202d
    ctx->pc = 0x11ee7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee80: 0xc0497e6
    ctx->pc = 0x11EE80u;
    SET_GPR_U32(ctx, 31, 0x11EE88u);
    ctx->pc = 0x11EE84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE88u; }
    }
    if (ctx->pc != 0x11EE88u) { return; }
    ctx->pc = 0x11EE88u;
    // 0x11ee88: 0x40882d
    ctx->pc = 0x11ee88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee8c: 0xc0497fa
    ctx->pc = 0x11EE8Cu;
    SET_GPR_U32(ctx, 31, 0x11EE94u);
    ctx->pc = 0x11EE90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE94u; }
    }
    if (ctx->pc != 0x11EE94u) { return; }
    ctx->pc = 0x11EE94u;
    // 0x11ee94: 0x260202d
    ctx->pc = 0x11ee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee98: 0xc0497e6
    ctx->pc = 0x11EE98u;
    SET_GPR_U32(ctx, 31, 0x11EEA0u);
    ctx->pc = 0x11EE9Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEA0u; }
    }
    if (ctx->pc != 0x11EEA0u) { return; }
    ctx->pc = 0x11EEA0u;
    // 0x11eea0: 0x40902d
    ctx->pc = 0x11eea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eea4: 0xc0497fa
    ctx->pc = 0x11EEA4u;
    SET_GPR_U32(ctx, 31, 0x11EEACu);
    ctx->pc = 0x11EEA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEACu; }
    }
    if (ctx->pc != 0x11EEACu) { return; }
    ctx->pc = 0x11EEACu;
    // 0x11eeac: 0x101780
    ctx->pc = 0x11eeacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 30));
    // 0x11eeb0: 0x118bc0
    ctx->pc = 0x11eeb0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 15));
    // 0x11eeb4: 0x511025
    ctx->pc = 0x11eeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x11eeb8: 0x108082
    ctx->pc = 0x11eeb8u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), 2));
    // 0x11eebc: 0x521025
    ctx->pc = 0x11eebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x11eec0: 0x32100001
    ctx->pc = 0x11eec0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 1));
    // 0x11eec4: 0x2103c
    ctx->pc = 0x11eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11eec8: 0x10803c
    ctx->pc = 0x11eec8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x11eecc: 0x2103e
    ctx->pc = 0x11eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11eed0: 0x2028025
    ctx->pc = 0x11eed0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11eed4: 0xfe900010
    ctx->pc = 0x11eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 16));
    // 0x11eed8: 0x24020003
    ctx->pc = 0x11eed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_11eedc:
    // 0x11eedc: 0x16e20022
    ctx->pc = 0x11EEDCu;
    {
        const bool branch_taken_0x11eedc = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x11EEE0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11eedc) {
            ctx->pc = 0x11EF68u;
            goto label_11ef68;
        }
    }
    ctx->pc = 0x11EEE4u;
    // 0x11eee4: 0x260202d
    ctx->pc = 0x11eee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eee8: 0xc0497e6
    ctx->pc = 0x11EEE8u;
    SET_GPR_U32(ctx, 31, 0x11EEF0u);
    ctx->pc = 0x11EEECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEF0u; }
    }
    if (ctx->pc != 0x11EEF0u) { return; }
    ctx->pc = 0x11EEF0u;
    // 0x11eef0: 0x260202d
    ctx->pc = 0x11eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eef4: 0xc0497e6
    ctx->pc = 0x11EEF4u;
    SET_GPR_U32(ctx, 31, 0x11EEFCu);
    ctx->pc = 0x11EEF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEFCu; }
    }
    if (ctx->pc != 0x11EEFCu) { return; }
    ctx->pc = 0x11EEFCu;
    // 0x11eefc: 0x40802d
    ctx->pc = 0x11eefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef00: 0xc0497fa
    ctx->pc = 0x11EF00u;
    SET_GPR_U32(ctx, 31, 0x11EF08u);
    ctx->pc = 0x11EF04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF08u; }
    }
    if (ctx->pc != 0x11EF08u) { return; }
    ctx->pc = 0x11EF08u;
    // 0x11ef08: 0x260202d
    ctx->pc = 0x11ef08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef0c: 0xc0497e6
    ctx->pc = 0x11EF0Cu;
    SET_GPR_U32(ctx, 31, 0x11EF14u);
    ctx->pc = 0x11EF10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF14u; }
    }
    if (ctx->pc != 0x11EF14u) { return; }
    ctx->pc = 0x11EF14u;
    // 0x11ef14: 0x40882d
    ctx->pc = 0x11ef14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef18: 0xc0497fa
    ctx->pc = 0x11EF18u;
    SET_GPR_U32(ctx, 31, 0x11EF20u);
    ctx->pc = 0x11EF1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF20u; }
    }
    if (ctx->pc != 0x11EF20u) { return; }
    ctx->pc = 0x11EF20u;
    // 0x11ef20: 0x260202d
    ctx->pc = 0x11ef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef24: 0xc0497e6
    ctx->pc = 0x11EF24u;
    SET_GPR_U32(ctx, 31, 0x11EF2Cu);
    ctx->pc = 0x11EF28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF2Cu; }
    }
    if (ctx->pc != 0x11EF2Cu) { return; }
    ctx->pc = 0x11EF2Cu;
    // 0x11ef2c: 0x40902d
    ctx->pc = 0x11ef2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef30: 0xc0497fa
    ctx->pc = 0x11EF30u;
    SET_GPR_U32(ctx, 31, 0x11EF38u);
    ctx->pc = 0x11EF34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF38u; }
    }
    if (ctx->pc != 0x11EF38u) { return; }
    ctx->pc = 0x11EF38u;
    // 0x11ef38: 0x101780
    ctx->pc = 0x11ef38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 30));
    // 0x11ef3c: 0x118bc0
    ctx->pc = 0x11ef3cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 15));
    // 0x11ef40: 0x511025
    ctx->pc = 0x11ef40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x11ef44: 0x108082
    ctx->pc = 0x11ef44u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), 2));
    // 0x11ef48: 0x521025
    ctx->pc = 0x11ef48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x11ef4c: 0x32100001
    ctx->pc = 0x11ef4cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 1));
    // 0x11ef50: 0x2103c
    ctx->pc = 0x11ef50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11ef54: 0x10803c
    ctx->pc = 0x11ef54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x11ef58: 0x2103e
    ctx->pc = 0x11ef58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11ef5c: 0x2028025
    ctx->pc = 0x11ef5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11ef60: 0xfe900018
    ctx->pc = 0x11ef60u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 16));
    // 0x11ef64: 0x8fa20000
    ctx->pc = 0x11ef64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11ef68:
    // 0x11ef68: 0x24100001
    ctx->pc = 0x11ef68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ef6c: 0x14500003
    ctx->pc = 0x11EF6Cu;
    {
        const bool branch_taken_0x11ef6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x11EF70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11ef6c) {
            ctx->pc = 0x11EF7Cu;
            goto label_11ef7c;
        }
    }
    ctx->pc = 0x11EF74u;
    // 0x11ef74: 0xc0497e6
    ctx->pc = 0x11EF74u;
    SET_GPR_U32(ctx, 31, 0x11EF7Cu);
    ctx->pc = 0x11EF78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF7Cu; }
    }
    if (ctx->pc != 0x11EF7Cu) { return; }
    ctx->pc = 0x11EF7Cu;
label_11ef7c:
    // 0x11ef7c: 0x13c00006
    ctx->pc = 0x11EF7Cu;
    {
        const bool branch_taken_0x11ef7c = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EF80u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x11ef7c) {
            ctx->pc = 0x11EF98u;
            goto label_11ef98;
        }
    }
    ctx->pc = 0x11EF84u;
    // 0x11ef84: 0x260202d
    ctx->pc = 0x11ef84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef88: 0x24421790
    ctx->pc = 0x11ef88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6032));
    // 0x11ef8c: 0x3c21021
    ctx->pc = 0x11ef8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x11ef90: 0xc0497e6
    ctx->pc = 0x11EF90u;
    SET_GPR_U32(ctx, 31, 0x11EF98u);
    ctx->pc = 0x11EF94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF98u; }
    }
    if (ctx->pc != 0x11EF98u) { return; }
    ctx->pc = 0x11EF98u;
label_11ef98:
    // 0x11ef98: 0x16b00045
    ctx->pc = 0x11EF98u;
    {
        const bool branch_taken_0x11ef98 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 16));
        ctx->pc = 0x11EF9Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11ef98) {
            ctx->pc = 0x11F0B0u;
            goto label_11f0b0;
        }
    }
    ctx->pc = 0x11EFA0u;
    // 0x11efa0: 0x260202d
    ctx->pc = 0x11efa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efa4: 0xc0497e6
    ctx->pc = 0x11EFA4u;
    SET_GPR_U32(ctx, 31, 0x11EFACu);
    ctx->pc = 0x11EFA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFACu; }
    }
    if (ctx->pc != 0x11EFACu) { return; }
    ctx->pc = 0x11EFACu;
    // 0x11efac: 0x40802d
    ctx->pc = 0x11efacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efb0: 0x260202d
    ctx->pc = 0x11efb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efb4: 0xc0497e6
    ctx->pc = 0x11EFB4u;
    SET_GPR_U32(ctx, 31, 0x11EFBCu);
    ctx->pc = 0x11EFB8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFBCu; }
    }
    if (ctx->pc != 0x11EFBCu) { return; }
    ctx->pc = 0x11EFBCu;
    // 0x11efbc: 0x40f02d
    ctx->pc = 0x11efbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efc0: 0x260202d
    ctx->pc = 0x11efc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efc4: 0xc0497e6
    ctx->pc = 0x11EFC4u;
    SET_GPR_U32(ctx, 31, 0x11EFCCu);
    ctx->pc = 0x11EFC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFCCu; }
    }
    if (ctx->pc != 0x11EFCCu) { return; }
    ctx->pc = 0x11EFCCu;
    // 0x11efcc: 0x40902d
    ctx->pc = 0x11efccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efd0: 0x260202d
    ctx->pc = 0x11efd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efd4: 0xc0497e6
    ctx->pc = 0x11EFD4u;
    SET_GPR_U32(ctx, 31, 0x11EFDCu);
    ctx->pc = 0x11EFD8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFDCu; }
    }
    if (ctx->pc != 0x11EFDCu) { return; }
    ctx->pc = 0x11EFDCu;
    // 0x11efdc: 0x40b82d
    ctx->pc = 0x11efdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efe0: 0x260202d
    ctx->pc = 0x11efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efe4: 0xc0497e6
    ctx->pc = 0x11EFE4u;
    SET_GPR_U32(ctx, 31, 0x11EFECu);
    ctx->pc = 0x11EFE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFECu; }
    }
    if (ctx->pc != 0x11EFECu) { return; }
    ctx->pc = 0x11EFECu;
    // 0x11efec: 0x260202d
    ctx->pc = 0x11efecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eff0: 0xc0497e6
    ctx->pc = 0x11EFF0u;
    SET_GPR_U32(ctx, 31, 0x11EFF8u);
    ctx->pc = 0x11EFF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFF8u; }
    }
    if (ctx->pc != 0x11EFF8u) { return; }
    ctx->pc = 0x11EFF8u;
    // 0x11eff8: 0x1615000a
    ctx->pc = 0x11EFF8u;
    {
        const bool branch_taken_0x11eff8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 21));
        ctx->pc = 0x11EFFCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11eff8) {
            ctx->pc = 0x11F024u;
            goto label_11f024;
        }
    }
    ctx->pc = 0x11F000u;
    // 0x11f000: 0x260202d
    ctx->pc = 0x11f000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f004: 0xc0497e6
    ctx->pc = 0x11F004u;
    SET_GPR_U32(ctx, 31, 0x11F00Cu);
    ctx->pc = 0x11F008u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F00Cu; }
    }
    if (ctx->pc != 0x11F00Cu) { return; }
    ctx->pc = 0x11F00Cu;
    // 0x11f00c: 0x260202d
    ctx->pc = 0x11f00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f010: 0xc0497e6
    ctx->pc = 0x11F010u;
    SET_GPR_U32(ctx, 31, 0x11F018u);
    ctx->pc = 0x11F014u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F018u; }
    }
    if (ctx->pc != 0x11F018u) { return; }
    ctx->pc = 0x11F018u;
    // 0x11f018: 0x260202d
    ctx->pc = 0x11f018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f01c: 0xc0497e6
    ctx->pc = 0x11F01Cu;
    SET_GPR_U32(ctx, 31, 0x11F024u);
    ctx->pc = 0x11F020u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F024u; }
    }
    if (ctx->pc != 0x11F024u) { return; }
    ctx->pc = 0x11F024u;
label_11f024:
    // 0x11f024: 0x17d50005
    ctx->pc = 0x11F024u;
    {
        const bool branch_taken_0x11f024 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 21));
        ctx->pc = 0x11F028u;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x11f024) {
            ctx->pc = 0x11F03Cu;
            goto label_11f03c;
        }
    }
    ctx->pc = 0x11F02Cu;
    // 0x11f02c: 0xc048006
    ctx->pc = 0x11F02Cu;
    SET_GPR_U32(ctx, 31, 0x11F034u);
    ctx->pc = 0x11F030u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19424));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F034u; }
    }
    if (ctx->pc != 0x11F034u) { return; }
    ctx->pc = 0x11F034u;
    // 0x11f034: 0x1000007c
    ctx->pc = 0x11F034u;
    {
        const bool branch_taken_0x11f034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F038u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11f034) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F03Cu;
label_11f03c:
    // 0x11f03c: 0x16550003
    ctx->pc = 0x11F03Cu;
    {
        const bool branch_taken_0x11f03c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 21));
        ctx->pc = 0x11F040u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11f03c) {
            ctx->pc = 0x11F04Cu;
            goto label_11f04c;
        }
    }
    ctx->pc = 0x11F044u;
    // 0x11f044: 0xc0497e6
    ctx->pc = 0x11F044u;
    SET_GPR_U32(ctx, 31, 0x11F04Cu);
    ctx->pc = 0x11F048u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F04Cu; }
    }
    if (ctx->pc != 0x11F04Cu) { return; }
    ctx->pc = 0x11F04Cu;
label_11f04c:
    // 0x11f04c: 0x16f50003
    ctx->pc = 0x11F04Cu;
    {
        const bool branch_taken_0x11f04c = (GPR_U32(ctx, 23) != GPR_U32(ctx, 21));
        ctx->pc = 0x11F050u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11f04c) {
            ctx->pc = 0x11F05Cu;
            goto label_11f05c;
        }
    }
    ctx->pc = 0x11F054u;
    // 0x11f054: 0xc0497e6
    ctx->pc = 0x11F054u;
    SET_GPR_U32(ctx, 31, 0x11F05Cu);
    ctx->pc = 0x11F058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F05Cu; }
    }
    if (ctx->pc != 0x11F05Cu) { return; }
    ctx->pc = 0x11F05Cu;
label_11f05c:
    // 0x11f05c: 0x16350014
    ctx->pc = 0x11F05Cu;
    {
        const bool branch_taken_0x11f05c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 21));
        ctx->pc = 0x11F060u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11f05c) {
            ctx->pc = 0x11F0B0u;
            goto label_11f0b0;
        }
    }
    ctx->pc = 0x11F064u;
    // 0x11f064: 0x260202d
    ctx->pc = 0x11f064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f068: 0xc0497fa
    ctx->pc = 0x11F068u;
    SET_GPR_U32(ctx, 31, 0x11F070u);
    ctx->pc = 0x11F06Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F070u; }
    }
    if (ctx->pc != 0x11F070u) { return; }
    ctx->pc = 0x11F070u;
    // 0x11f070: 0x260202d
    ctx->pc = 0x11f070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f074: 0xc0497e6
    ctx->pc = 0x11F074u;
    SET_GPR_U32(ctx, 31, 0x11F07Cu);
    ctx->pc = 0x11F078u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F07Cu; }
    }
    if (ctx->pc != 0x11F07Cu) { return; }
    ctx->pc = 0x11F07Cu;
    // 0x11f07c: 0x40882d
    ctx->pc = 0x11f07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f080: 0x1220000b
    ctx->pc = 0x11F080u;
    {
        const bool branch_taken_0x11f080 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F084u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11f080) {
            ctx->pc = 0x11F0B0u;
            goto label_11f0b0;
        }
    }
    ctx->pc = 0x11F088u;
    // 0x11f088: 0x260202d
    ctx->pc = 0x11f088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f08c: 0x0
    ctx->pc = 0x11f08cu;
    // NOP
label_11f090:
    // 0x11f090: 0xc0497e6
    ctx->pc = 0x11F090u;
    SET_GPR_U32(ctx, 31, 0x11F098u);
    ctx->pc = 0x11F094u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F098u; }
    }
    if (ctx->pc != 0x11F098u) { return; }
    ctx->pc = 0x11F098u;
    // 0x11f098: 0x26100001
    ctx->pc = 0x11f098u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x11f09c: 0x211102b
    ctx->pc = 0x11f09cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x11f0a0: 0x1440fffb
    ctx->pc = 0x11F0A0u;
    {
        const bool branch_taken_0x11f0a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11F0A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11f0a0) {
            ctx->pc = 0x11F090u;
            goto label_11f090;
        }
    }
    ctx->pc = 0x11F0A8u;
    // 0x11f0a8: 0x10000002
    ctx->pc = 0x11F0A8u;
    {
        const bool branch_taken_0x11f0a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F0ACu;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        if (branch_taken_0x11f0a8) {
            ctx->pc = 0x11F0B4u;
            goto label_11f0b4;
        }
    }
    ctx->pc = 0x11F0B0u;
label_11f0b0:
    // 0x11f0b0: 0xde620018
    ctx->pc = 0x11f0b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_11f0b4:
    // 0x11f0b4: 0x8fa30004
    ctx->pc = 0x11f0b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11f0b8: 0x52102f
    ctx->pc = 0x11f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x11f0bc: 0x21778
    ctx->pc = 0x11f0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x11f0c0: 0x2103f
    ctx->pc = 0x11f0c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11f0c4: 0x622823
    ctx->pc = 0x11f0c4u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f0c8: 0x50a00004
    ctx->pc = 0x11F0C8u;
    {
        const bool branch_taken_0x11f0c8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x11f0c8) {
            ctx->pc = 0x11F0CCu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->pc = 0x11F0DCu;
            goto label_11f0dc;
        }
    }
    ctx->pc = 0x11F0D0u;
    // 0x11f0d0: 0xc04980c
    ctx->pc = 0x11F0D0u;
    SET_GPR_U32(ctx, 31, 0x11F0D8u);
    ctx->pc = 0x11F0D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126030u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x126030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F0D8u; }
    }
    if (ctx->pc != 0x11F0D8u) { return; }
    ctx->pc = 0x11F0D8u;
    // 0x11f0d8: 0x8fa50004
    ctx->pc = 0x11f0d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11f0dc:
    // 0x11f0dc: 0x3404bd00
    ctx->pc = 0x11f0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)48384);
    // 0x11f0e0: 0x42638
    ctx->pc = 0x11f0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x11f0e4: 0x8e820008
    ctx->pc = 0x11f0e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x11f0e8: 0xde830000
    ctx->pc = 0x11f0e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11f0ec: 0x458023
    ctx->pc = 0x11f0ecu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11f0f0: 0x2605fffd
    ctx->pc = 0x11f0f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x11f0f4: 0xae850024
    ctx->pc = 0x11f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x11f0f8: 0x8e620018
    ctx->pc = 0x11f0f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x11f0fc: 0x1464000a
    ctx->pc = 0x11F0FCu;
    {
        const bool branch_taken_0x11f0fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x11F100u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x11f0fc) {
            ctx->pc = 0x11F128u;
            goto label_11f128;
        }
    }
    ctx->pc = 0x11F104u;
    // 0x11f104: 0x260202d
    ctx->pc = 0x11f104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f108: 0xc0497e6
    ctx->pc = 0x11F108u;
    SET_GPR_U32(ctx, 31, 0x11F110u);
    ctx->pc = 0x11F10Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F110u; }
    }
    if (ctx->pc != 0x11F110u) { return; }
    ctx->pc = 0x11F110u;
    // 0x11f110: 0xde830000
    ctx->pc = 0x11f110u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11f114: 0x2103c
    ctx->pc = 0x11f114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11f118: 0x2103e
    ctx->pc = 0x11f118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11f11c: 0x2605fff9
    ctx->pc = 0x11f11cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x11f120: 0x621825
    ctx->pc = 0x11f120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11f124: 0xfe830000
    ctx->pc = 0x11f124u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_11f128:
    // 0x11f128: 0x10a0003f
    ctx->pc = 0x11F128u;
    {
        const bool branch_taken_0x11f128 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F12Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11f128) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F130u;
    // 0x11f130: 0xc04980c
    ctx->pc = 0x11F130u;
    SET_GPR_U32(ctx, 31, 0x11F138u);
    ctx->pc = 0x11F134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126030u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x126030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F138u; }
    }
    if (ctx->pc != 0x11F138u) { return; }
    ctx->pc = 0x11F138u;
    // 0x11f138: 0x1000003b
    ctx->pc = 0x11F138u;
    {
        const bool branch_taken_0x11f138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F13Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11f138) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F140u;
label_11f140:
    // 0x11f140: 0x3402bc00
    ctx->pc = 0x11f140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)48128);
    // 0x11f144: 0x21638
    ctx->pc = 0x11f144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f148: 0x10a20019
    ctx->pc = 0x11F148u;
    {
        const bool branch_taken_0x11f148 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x11f148) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F150u;
    // 0x11f150: 0x3402bf00
    ctx->pc = 0x11f150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)48896);
    // 0x11f154: 0x21638
    ctx->pc = 0x11f154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f158: 0x10820017
    ctx->pc = 0x11F158u;
    {
        const bool branch_taken_0x11f158 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11f158) {
            ctx->pc = 0x11F1B8u;
            goto label_11f1b8;
        }
    }
    ctx->pc = 0x11F160u;
    // 0x11f160: 0x3402f000
    ctx->pc = 0x11f160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)61440);
    // 0x11f164: 0x21638
    ctx->pc = 0x11f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f168: 0x10820011
    ctx->pc = 0x11F168u;
    {
        const bool branch_taken_0x11f168 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11f168) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F170u;
    // 0x11f170: 0x3402f100
    ctx->pc = 0x11f170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)61696);
    // 0x11f174: 0x21638
    ctx->pc = 0x11f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f178: 0x1082000d
    ctx->pc = 0x11F178u;
    {
        const bool branch_taken_0x11f178 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11f178) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F180u;
    // 0x11f180: 0x3402ff00
    ctx->pc = 0x11f180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)65280);
    // 0x11f184: 0x21638
    ctx->pc = 0x11f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f188: 0x10820009
    ctx->pc = 0x11F188u;
    {
        const bool branch_taken_0x11f188 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11f188) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F190u;
    // 0x11f190: 0x3402f200
    ctx->pc = 0x11f190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)61952);
    // 0x11f194: 0x21638
    ctx->pc = 0x11f194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f198: 0x10820005
    ctx->pc = 0x11F198u;
    {
        const bool branch_taken_0x11f198 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x11f198) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F1A0u;
    // 0x11f1a0: 0x3402f800
    ctx->pc = 0x11f1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)63488);
    // 0x11f1a4: 0x21638
    ctx->pc = 0x11f1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f1a8: 0x14820015
    ctx->pc = 0x11F1A8u;
    {
        const bool branch_taken_0x11f1a8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x11f1a8) {
            ctx->pc = 0x11F200u;
            goto label_11f200;
        }
    }
    ctx->pc = 0x11F1B0u;
label_11f1b0:
    // 0x11f1b0: 0x3402bf00
    ctx->pc = 0x11f1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)48896);
    // 0x11f1b4: 0x21638
    ctx->pc = 0x11f1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_11f1b8:
    // 0x11f1b8: 0x14a2000a
    ctx->pc = 0x11F1B8u;
    {
        const bool branch_taken_0x11f1b8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x11F1BCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 8)));
        if (branch_taken_0x11f1b8) {
            ctx->pc = 0x11F1E4u;
            goto label_11f1e4;
        }
    }
    ctx->pc = 0x11F1C0u;
    // 0x11f1c0: 0x260202d
    ctx->pc = 0x11f1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1c4: 0xc0497e6
    ctx->pc = 0x11F1C4u;
    SET_GPR_U32(ctx, 31, 0x11F1CCu);
    ctx->pc = 0x11F1C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1CCu; }
    }
    if (ctx->pc != 0x11F1CCu) { return; }
    ctx->pc = 0x11F1CCu;
    // 0x11f1cc: 0x2610fffc
    ctx->pc = 0x11f1ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x11f1d0: 0xde830000
    ctx->pc = 0x11f1d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11f1d4: 0x2103c
    ctx->pc = 0x11f1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11f1d8: 0x2103e
    ctx->pc = 0x11f1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11f1dc: 0x621825
    ctx->pc = 0x11f1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11f1e0: 0xfe830000
    ctx->pc = 0x11f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_11f1e4:
    // 0x11f1e4: 0x12000010
    ctx->pc = 0x11F1E4u;
    {
        const bool branch_taken_0x11f1e4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F1E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11f1e4) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F1ECu;
    // 0x11f1ec: 0x260202d
    ctx->pc = 0x11f1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1f0: 0xc04980c
    ctx->pc = 0x11F1F0u;
    SET_GPR_U32(ctx, 31, 0x11F1F8u);
    ctx->pc = 0x11F1F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126030u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x126030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1F8u; }
    }
    if (ctx->pc != 0x11F1F8u) { return; }
    ctx->pc = 0x11F1F8u;
    // 0x11f1f8: 0x1000000b
    ctx->pc = 0x11F1F8u;
    {
        const bool branch_taken_0x11f1f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F1FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11f1f8) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F200u;
label_11f200:
    // 0x11f200: 0x3402be00
    ctx->pc = 0x11f200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)48640);
    // 0x11f204: 0x21638
    ctx->pc = 0x11f204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f208: 0x14820007
    ctx->pc = 0x11F208u;
    {
        const bool branch_taken_0x11f208 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x11F20Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11f208) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F210u;
    // 0x11f210: 0x8e850008
    ctx->pc = 0x11f210u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x11f214: 0x10a00005
    ctx->pc = 0x11F214u;
    {
        const bool branch_taken_0x11f214 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F218u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x11f214) {
            ctx->pc = 0x11F22Cu;
            goto label_11f22c;
        }
    }
    ctx->pc = 0x11F21Cu;
    // 0x11f21c: 0xc04980c
    ctx->pc = 0x11F21Cu;
    SET_GPR_U32(ctx, 31, 0x11F224u);
    ctx->pc = 0x11F220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126030u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x126030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F224u; }
    }
    if (ctx->pc != 0x11F224u) { return; }
    ctx->pc = 0x11F224u;
    // 0x11f224: 0x24020001
    ctx->pc = 0x11f224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_11f228:
    // 0x11f228: 0xdfbf00a0
    ctx->pc = 0x11f228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_11f22c:
    // 0x11f22c: 0xdfbe0090
    ctx->pc = 0x11f22cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11f230: 0xdfb70080
    ctx->pc = 0x11f230u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11f234: 0xdfb60070
    ctx->pc = 0x11f234u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f238: 0xdfb50060
    ctx->pc = 0x11f238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f23c: 0xdfb40050
    ctx->pc = 0x11f23cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f240: 0xdfb30040
    ctx->pc = 0x11f240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f244: 0xdfb20030
    ctx->pc = 0x11f244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f248: 0xdfb10020
    ctx->pc = 0x11f248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f24c: 0xdfb00010
    ctx->pc = 0x11f24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f250: 0x3e00008
    ctx->pc = 0x11F250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F254u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EEDCu: goto label_11eedc;
            case 0x11EF68u: goto label_11ef68;
            case 0x11EF7Cu: goto label_11ef7c;
            case 0x11EF98u: goto label_11ef98;
            case 0x11F024u: goto label_11f024;
            case 0x11F03Cu: goto label_11f03c;
            case 0x11F04Cu: goto label_11f04c;
            case 0x11F05Cu: goto label_11f05c;
            case 0x11F090u: goto label_11f090;
            case 0x11F0B0u: goto label_11f0b0;
            case 0x11F0B4u: goto label_11f0b4;
            case 0x11F0DCu: goto label_11f0dc;
            case 0x11F128u: goto label_11f128;
            case 0x11F140u: goto label_11f140;
            case 0x11F1B0u: goto label_11f1b0;
            case 0x11F1B8u: goto label_11f1b8;
            case 0x11F1E4u: goto label_11f1e4;
            case 0x11F200u: goto label_11f200;
            case 0x11F228u: goto label_11f228;
            case 0x11F22Cu: goto label_11f22c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F258u;
}
