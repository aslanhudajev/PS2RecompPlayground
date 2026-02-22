#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _slice0
// Address: 0x122ea0 - 0x1230a0
void _slice0_0x122ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122ea0u;

    // 0x122ea0: 0x27bdff30
    ctx->pc = 0x122ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x122ea4: 0xffb400a0
    ctx->pc = 0x122ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x122ea8: 0x27a60044
    ctx->pc = 0x122ea8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 68));
    // 0x122eac: 0xa0a02d
    ctx->pc = 0x122eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122eb0: 0xafa00040
    ctx->pc = 0x122eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x122eb4: 0xafa00044
    ctx->pc = 0x122eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x122eb8: 0x280202d
    ctx->pc = 0x122eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ebc: 0x27a50040
    ctx->pc = 0x122ebcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x122ec0: 0x3a0382d
    ctx->pc = 0x122ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ec4: 0xffbf00c0
    ctx->pc = 0x122ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x122ec8: 0xffb500b0
    ctx->pc = 0x122ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x122ecc: 0xffb30090
    ctx->pc = 0x122eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x122ed0: 0xffb20080
    ctx->pc = 0x122ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x122ed4: 0xffb10070
    ctx->pc = 0x122ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x122ed8: 0xc048b5e
    ctx->pc = 0x122ED8u;
    SET_GPR_U32(ctx, 31, 0x122EE0u);
    ctx->pc = 0x122EDCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    ctx->pc = 0x122D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sliceA0_0x122d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122EE0u; }
    }
    if (ctx->pc != 0x122EE0u) { return; }
    ctx->pc = 0x122EE0u;
    // 0x122ee0: 0x14400067
    ctx->pc = 0x122EE0u;
    {
        const bool branch_taken_0x122ee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122EE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x122ee0) {
            ctx->pc = 0x123080u;
            goto label_123080;
        }
    }
    ctx->pc = 0x122EE8u;
    // 0x122ee8: 0x3c120017
    ctx->pc = 0x122ee8u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
    // 0x122eec: 0xae401908
    ctx->pc = 0x122eecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6408), GPR_U32(ctx, 0));
    // 0x122ef0: 0x240a82d
    ctx->pc = 0x122ef0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ef4: 0x0
    ctx->pc = 0x122ef4u;
    // NOP
label_122ef8:
    // 0x122ef8: 0x8fa20040
    ctx->pc = 0x122ef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122efc: 0x54102a
    ctx->pc = 0x122efcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
    // 0x122f00: 0x14400003
    ctx->pc = 0x122F00u;
    {
        const bool branch_taken_0x122f00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122F04u;
        SET_GPR_S32(ctx, 19, ((uint32_t)23 << 16));
        if (branch_taken_0x122f00) {
            ctx->pc = 0x122F10u;
            goto label_122f10;
        }
    }
    ctx->pc = 0x122F08u;
    // 0x122f08: 0x1000005c
    ctx->pc = 0x122F08u;
    {
        const bool branch_taken_0x122f08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122F0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122f08) {
            ctx->pc = 0x12307Cu;
            goto label_12307c;
        }
    }
    ctx->pc = 0x122F10u;
label_122f10:
    // 0x122f10: 0x24040140
    ctx->pc = 0x122f10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x122f14: 0x26631df8
    ctx->pc = 0x122f14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 7672));
    // 0x122f18: 0x8c620280
    ctx->pc = 0x122f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x122f1c: 0x442818
    ctx->pc = 0x122f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x122f20: 0xa31021
    ctx->pc = 0x122f20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x122f24: 0xc0489ec
    ctx->pc = 0x122F24u;
    SET_GPR_U32(ctx, 31, 0x122F2Cu);
    ctx->pc = 0x122F28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    ctx->pc = 0x1227B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitBdecOut_0x1227b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F2Cu; }
    }
    if (ctx->pc != 0x122F2Cu) { return; }
    ctx->pc = 0x122F2Cu;
    // 0x122f2c: 0x14400003
    ctx->pc = 0x122F2Cu;
    {
        const bool branch_taken_0x122f2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122F30u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x122f2c) {
            ctx->pc = 0x122F3Cu;
            goto label_122f3c;
        }
    }
    ctx->pc = 0x122F34u;
    // 0x122f34: 0x10000051
    ctx->pc = 0x122F34u;
    {
        const bool branch_taken_0x122f34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122F38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x122f34) {
            ctx->pc = 0x12307Cu;
            goto label_12307c;
        }
    }
    ctx->pc = 0x122F3Cu;
label_122f3c:
    // 0x122f3c: 0x14400013
    ctx->pc = 0x122F3Cu;
    {
        const bool branch_taken_0x122f3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122F40u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x122f3c) {
            ctx->pc = 0x122F8Cu;
            goto label_122f8c;
        }
    }
    ctx->pc = 0x122F44u;
    // 0x122f44: 0xc048f48
    ctx->pc = 0x122F44u;
    SET_GPR_U32(ctx, 31, 0x122F4Cu);
    ctx->pc = 0x122F48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x123D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x123d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F4Cu; }
    }
    if (ctx->pc != 0x122F4Cu) { return; }
    ctx->pc = 0x122F4Cu;
    // 0x122f4c: 0x10400003
    ctx->pc = 0x122F4Cu;
    {
        const bool branch_taken_0x122f4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x122F50u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 6408)));
        if (branch_taken_0x122f4c) {
            ctx->pc = 0x122F5Cu;
            goto label_122f5c;
        }
    }
    ctx->pc = 0x122F54u;
    // 0x122f54: 0x10400004
    ctx->pc = 0x122F54u;
    {
        const bool branch_taken_0x122f54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x122f54) {
            ctx->pc = 0x122F68u;
            goto label_122f68;
        }
    }
    ctx->pc = 0x122F5Cu;
label_122f5c:
    // 0x122f5c: 0xae401908
    ctx->pc = 0x122f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6408), GPR_U32(ctx, 0));
    // 0x122f60: 0x10000046
    ctx->pc = 0x122F60u;
    {
        const bool branch_taken_0x122f60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122F64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x122f60) {
            ctx->pc = 0x12307Cu;
            goto label_12307c;
        }
    }
    ctx->pc = 0x122F68u;
label_122f68:
    // 0x122f68: 0xc048ad0
    ctx->pc = 0x122F68u;
    SET_GPR_U32(ctx, 31, 0x122F70u);
    ctx->pc = 0x122B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        _mbAddressIncrement_0x122b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F70u; }
    }
    if (ctx->pc != 0x122F70u) { return; }
    ctx->pc = 0x122F70u;
    // 0x122f70: 0x8ea31908
    ctx->pc = 0x122f70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 6408)));
    // 0x122f74: 0x10600004
    ctx->pc = 0x122F74u;
    {
        const bool branch_taken_0x122f74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x122F78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        if (branch_taken_0x122f74) {
            ctx->pc = 0x122F88u;
            goto label_122f88;
        }
    }
    ctx->pc = 0x122F7Cu;
    // 0x122f7c: 0xaea01908
    ctx->pc = 0x122f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6408), GPR_U32(ctx, 0));
    // 0x122f80: 0x1000003e
    ctx->pc = 0x122F80u;
    {
        const bool branch_taken_0x122f80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122F84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x122f80) {
            ctx->pc = 0x12307Cu;
            goto label_12307c;
        }
    }
    ctx->pc = 0x122F88u;
label_122f88:
    // 0x122f88: 0x8fa20040
    ctx->pc = 0x122f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_122f8c:
    // 0x122f8c: 0x54102a
    ctx->pc = 0x122f8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
    // 0x122f90: 0x14400006
    ctx->pc = 0x122F90u;
    {
        const bool branch_taken_0x122f90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122F94u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x122f90) {
            ctx->pc = 0x122FACu;
            goto label_122fac;
        }
    }
    ctx->pc = 0x122F98u;
    // 0x122f98: 0x3c040017
    ctx->pc = 0x122f98u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x122f9c: 0xc048006
    ctx->pc = 0x122F9Cu;
    SET_GPR_U32(ctx, 31, 0x122FA4u);
    ctx->pc = 0x122FA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20320));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122FA4u; }
    }
    if (ctx->pc != 0x122FA4u) { return; }
    ctx->pc = 0x122FA4u;
    // 0x122fa4: 0x10000035
    ctx->pc = 0x122FA4u;
    {
        const bool branch_taken_0x122fa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122FA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x122fa4) {
            ctx->pc = 0x12307Cu;
            goto label_12307c;
        }
    }
    ctx->pc = 0x122FACu;
label_122fac:
    // 0x122fac: 0x24020001
    ctx->pc = 0x122facu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x122fb0: 0x1462000e
    ctx->pc = 0x122FB0u;
    {
        const bool branch_taken_0x122fb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x122FB4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x122fb0) {
            ctx->pc = 0x122FECu;
            goto label_122fec;
        }
    }
    ctx->pc = 0x122FB8u;
    // 0x122fb8: 0x27b00030
    ctx->pc = 0x122fb8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
    // 0x122fbc: 0x27a40048
    ctx->pc = 0x122fbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 72));
    // 0x122fc0: 0x27a5004c
    ctx->pc = 0x122fc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 76));
    // 0x122fc4: 0x27a60050
    ctx->pc = 0x122fc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    // 0x122fc8: 0x3a0382d
    ctx->pc = 0x122fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fcc: 0x220402d
    ctx->pc = 0x122fccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fd0: 0xc048c5c
    ctx->pc = 0x122FD0u;
    SET_GPR_U32(ctx, 31, 0x122FD8u);
    ctx->pc = 0x122FD4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x123170u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decMB0_0x123170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122FD8u; }
    }
    if (ctx->pc != 0x122FD8u) { return; }
    ctx->pc = 0x122FD8u;
    // 0x122fd8: 0x1440000c
    ctx->pc = 0x122FD8u;
    {
        const bool branch_taken_0x122fd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122FDCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x122fd8) {
            ctx->pc = 0x12300Cu;
            goto label_12300c;
        }
    }
    ctx->pc = 0x122FE0u;
    // 0x122fe0: 0xae401908
    ctx->pc = 0x122fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6408), GPR_U32(ctx, 0));
    // 0x122fe4: 0x10000025
    ctx->pc = 0x122FE4u;
    {
        const bool branch_taken_0x122fe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122FE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x122fe4) {
            ctx->pc = 0x12307Cu;
            goto label_12307c;
        }
    }
    ctx->pc = 0x122FECu;
label_122fec:
    // 0x122fec: 0x3a0202d
    ctx->pc = 0x122fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ff0: 0x27a5004c
    ctx->pc = 0x122ff0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 76));
    // 0x122ff4: 0x220302d
    ctx->pc = 0x122ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ff8: 0xc048c28
    ctx->pc = 0x122FF8u;
    SET_GPR_U32(ctx, 31, 0x123000u);
    ctx->pc = 0x122FFCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 72));
    ctx->pc = 0x1230A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _skipMB0_0x1230a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123000u; }
    }
    if (ctx->pc != 0x123000u) { return; }
    ctx->pc = 0x123000u;
    // 0x123000: 0x1040000b
    ctx->pc = 0x123000u;
    {
        const bool branch_taken_0x123000 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x123004u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
        if (branch_taken_0x123000) {
            ctx->pc = 0x123030u;
            goto label_123030;
        }
    }
    ctx->pc = 0x123008u;
    // 0x123008: 0x8fa40040
    ctx->pc = 0x123008u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_12300c:
    // 0x12300c: 0x220482d
    ctx->pc = 0x12300cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123010: 0x8fa50044
    ctx->pc = 0x123010u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x123014: 0x200502d
    ctx->pc = 0x123014u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123018: 0x8fa60048
    ctx->pc = 0x123018u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12301c: 0x3a0402d
    ctx->pc = 0x12301cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123020: 0xc048288
    ctx->pc = 0x123020u;
    SET_GPR_U32(ctx, 31, 0x123028u);
    ctx->pc = 0x123024u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->pc = 0x120A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionComp0_0x120a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123028u; }
    }
    if (ctx->pc != 0x123028u) { return; }
    ctx->pc = 0x123028u;
    // 0x123028: 0x14400004
    ctx->pc = 0x123028u;
    {
        const bool branch_taken_0x123028 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12302Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x123028) {
            ctx->pc = 0x12303Cu;
            goto label_12303c;
        }
    }
    ctx->pc = 0x123030u;
label_123030:
    // 0x123030: 0xae401908
    ctx->pc = 0x123030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6408), GPR_U32(ctx, 0));
    // 0x123034: 0x10000011
    ctx->pc = 0x123034u;
    {
        const bool branch_taken_0x123034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123038u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x123034) {
            ctx->pc = 0x12307Cu;
            goto label_12307c;
        }
    }
    ctx->pc = 0x12303Cu;
label_12303c:
    // 0x12303c: 0x10800005
    ctx->pc = 0x12303Cu;
    {
        const bool branch_taken_0x12303c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x123040u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 7672));
        if (branch_taken_0x12303c) {
            ctx->pc = 0x123054u;
            goto label_123054;
        }
    }
    ctx->pc = 0x123044u;
    // 0x123044: 0x8c440280
    ctx->pc = 0x123044u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x123048: 0xc04860a
    ctx->pc = 0x123048u;
    SET_GPR_U32(ctx, 31, 0x123050u);
    ctx->pc = 0x12304Cu;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x121828u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doMC_0x121828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123050u; }
    }
    if (ctx->pc != 0x123050u) { return; }
    ctx->pc = 0x123050u;
    // 0x123050: 0x8fa40040
    ctx->pc = 0x123050u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123054:
    // 0x123054: 0x8fa20044
    ctx->pc = 0x123054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x123058: 0x26651df8
    ctx->pc = 0x123058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 7672));
    // 0x12305c: 0x8ca30280
    ctx->pc = 0x12305cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x123060: 0x24840001
    ctx->pc = 0x123060u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x123064: 0x2442ffff
    ctx->pc = 0x123064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x123068: 0xafa40040
    ctx->pc = 0x123068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x12306c: 0x38630001
    ctx->pc = 0x12306cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x123070: 0xafa20044
    ctx->pc = 0x123070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x123074: 0x1000ffa0
    ctx->pc = 0x123074u;
    {
        const bool branch_taken_0x123074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123078u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 640), GPR_U32(ctx, 3));
        if (branch_taken_0x123074) {
            ctx->pc = 0x122EF8u;
            goto label_122ef8;
        }
    }
    ctx->pc = 0x12307Cu;
label_12307c:
    // 0x12307c: 0xdfbf00c0
    ctx->pc = 0x12307cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_123080:
    // 0x123080: 0xdfb500b0
    ctx->pc = 0x123080u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x123084: 0xdfb400a0
    ctx->pc = 0x123084u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x123088: 0xdfb30090
    ctx->pc = 0x123088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12308c: 0xdfb20080
    ctx->pc = 0x12308cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x123090: 0xdfb10070
    ctx->pc = 0x123090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123094: 0xdfb00060
    ctx->pc = 0x123094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x123098: 0x3e00008
    ctx->pc = 0x123098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12309Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122EF8u: goto label_122ef8;
            case 0x122F10u: goto label_122f10;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F68u: goto label_122f68;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122FACu: goto label_122fac;
            case 0x122FECu: goto label_122fec;
            case 0x12300Cu: goto label_12300c;
            case 0x123030u: goto label_123030;
            case 0x12303Cu: goto label_12303c;
            case 0x123054u: goto label_123054;
            case 0x12307Cu: goto label_12307c;
            case 0x123080u: goto label_123080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1230A0u;
}
