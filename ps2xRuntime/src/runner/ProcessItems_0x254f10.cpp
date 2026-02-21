#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ProcessItems
// Address: 0x254f10 - 0x257324
void ProcessItems_0x254f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x254f10u;

label_254f10:
    // 0x254f10: 0x27bdfea0
    ctx->pc = 0x254f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966944));
label_254f14:
    // 0x254f14: 0xffbf0140
    ctx->pc = 0x254f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_254f18:
    // 0x254f18: 0xffbe0130
    ctx->pc = 0x254f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
label_254f1c:
    // 0x254f1c: 0xffb70120
    ctx->pc = 0x254f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
label_254f20:
    // 0x254f20: 0xffb60110
    ctx->pc = 0x254f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
label_254f24:
    // 0x254f24: 0xffb50100
    ctx->pc = 0x254f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
label_254f28:
    // 0x254f28: 0xffb400f0
    ctx->pc = 0x254f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
label_254f2c:
    // 0x254f2c: 0xffb300e0
    ctx->pc = 0x254f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
label_254f30:
    // 0x254f30: 0xffb200d0
    ctx->pc = 0x254f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
label_254f34:
    // 0x254f34: 0xffb100c0
    ctx->pc = 0x254f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
label_254f38:
    // 0x254f38: 0xffb000b0
    ctx->pc = 0x254f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
label_254f3c:
    // 0x254f3c: 0xe7b50158
    ctx->pc = 0x254f3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_254f40:
    // 0x254f40: 0xe7b40150
    ctx->pc = 0x254f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_254f44:
    // 0x254f44: 0x3c020031
    ctx->pc = 0x254f44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_254f48:
    // 0x254f48: 0x8c430018
    ctx->pc = 0x254f48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_254f4c:
    // 0x254f4c: 0x34028008
    ctx->pc = 0x254f4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
label_254f50:
    // 0x254f50: 0x14620003
label_254f54:
    if (ctx->pc == 0x254F54u) {
        ctx->pc = 0x254F54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x254F58u;
        goto label_254f58;
    }
    ctx->pc = 0x254F50u;
    {
        const bool branch_taken_0x254f50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x254F54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x254f50) {
            ctx->pc = 0x254F60u;
            goto label_254f60;
        }
    }
    ctx->pc = 0x254F58u;
label_254f58:
    // 0x254f58: 0x10000007
label_254f5c:
    if (ctx->pc == 0x254F5Cu) {
        ctx->pc = 0x254F5Cu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x254F60u;
        goto label_254f60;
    }
    ctx->pc = 0x254F58u;
    {
        const bool branch_taken_0x254f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254F5Cu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x254f58) {
            ctx->pc = 0x254F78u;
            goto label_254f78;
        }
    }
    ctx->pc = 0x254F60u;
label_254f60:
    // 0x254f60: 0x8c430018
    ctx->pc = 0x254f60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_254f64:
    // 0x254f64: 0x24024010
    ctx->pc = 0x254f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_254f68:
    // 0x254f68: 0x14620003
label_254f6c:
    if (ctx->pc == 0x254F6Cu) {
        ctx->pc = 0x254F6Cu;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x254F70u;
        goto label_254f70;
    }
    ctx->pc = 0x254F68u;
    {
        const bool branch_taken_0x254f68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x254F6Cu;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x254f68) {
            ctx->pc = 0x254F78u;
            goto label_254f78;
        }
    }
    ctx->pc = 0x254F70u;
label_254f70:
    // 0x254f70: 0x3c020032
    ctx->pc = 0x254f70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_254f74:
    // 0x254f74: 0x8c5e080c
    ctx->pc = 0x254f74u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_254f78:
    // 0x254f78: 0x3c030034
    ctx->pc = 0x254f78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_254f7c:
    // 0x254f7c: 0x8c62cddc
    ctx->pc = 0x254f7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954460)));
label_254f80:
    // 0x254f80: 0x24420001
    ctx->pc = 0x254f80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_254f84:
    // 0x254f84: 0xac62cddc
    ctx->pc = 0x254f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954460), GPR_U32(ctx, 2));
label_254f88:
    // 0x254f88: 0x3c020034
    ctx->pc = 0x254f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_254f8c:
    // 0x254f8c: 0xac40cdbc
    ctx->pc = 0x254f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954428), GPR_U32(ctx, 0));
label_254f90:
    // 0x254f90: 0x202d
    ctx->pc = 0x254f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254f94:
    // 0x254f94: 0xc08e3b8
label_254f98:
    if (ctx->pc == 0x254F98u) {
        ctx->pc = 0x254F98u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x254F9Cu;
        goto label_254f9c;
    }
    ctx->pc = 0x254F94u;
    SET_GPR_U32(ctx, 31, 0x254F9Cu);
    ctx->pc = 0x254F98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x238EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_enemy_slot_0x238ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254F9Cu; }
    }
    if (ctx->pc != 0x254F9Cu) { return; }
    ctx->pc = 0x254F9Cu;
label_254f9c:
    // 0x254f9c: 0x2402ffff
    ctx->pc = 0x254f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_254fa0:
    // 0x254fa0: 0xafa200a8
    ctx->pc = 0x254fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_254fa4:
    // 0x254fa4: 0xafa000ac
    ctx->pc = 0x254fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_254fa8:
    // 0x254fa8: 0x3c020032
    ctx->pc = 0x254fa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_254fac:
    // 0x254fac: 0x8c420810
    ctx->pc = 0x254facu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
label_254fb0:
    // 0x254fb0: 0x14400004
label_254fb4:
    if (ctx->pc == 0x254FB4u) {
        ctx->pc = 0x254FB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x254FB8u;
        goto label_254fb8;
    }
    ctx->pc = 0x254FB0u;
    {
        const bool branch_taken_0x254fb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254FB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x254fb0) {
            ctx->pc = 0x254FC4u;
            goto label_254fc4;
        }
    }
    ctx->pc = 0x254FB8u;
label_254fb8:
    // 0x254fb8: 0x3c020032
    ctx->pc = 0x254fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_254fbc:
    // 0x254fbc: 0xac400800
    ctx->pc = 0x254fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2048), GPR_U32(ctx, 0));
label_254fc0:
    // 0x254fc0: 0x3c020031
    ctx->pc = 0x254fc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_254fc4:
    // 0x254fc4: 0x8c42002c
    ctx->pc = 0x254fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_254fc8:
    // 0x254fc8: 0x14400003
label_254fcc:
    if (ctx->pc == 0x254FCCu) {
        ctx->pc = 0x254FD0u;
        goto label_254fd0;
    }
    ctx->pc = 0x254FC8u;
    {
        const bool branch_taken_0x254fc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x254fc8) {
            ctx->pc = 0x254FD8u;
            goto label_254fd8;
        }
    }
    ctx->pc = 0x254FD0u;
label_254fd0:
    // 0x254fd0: 0xc089802
label_254fd4:
    if (ctx->pc == 0x254FD4u) {
        ctx->pc = 0x254FD8u;
        goto label_254fd8;
    }
    ctx->pc = 0x254FD0u;
    SET_GPR_U32(ctx, 31, 0x254FD8u);
    ctx->pc = 0x226008u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPlayerVars_0x226008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254FD8u; }
    }
    if (ctx->pc != 0x254FD8u) { return; }
    ctx->pc = 0x254FD8u;
label_254fd8:
    // 0x254fd8: 0x40034800
    ctx->pc = 0x254fd8u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_254fdc:
    // 0x254fdc: 0x3c02003a
    ctx->pc = 0x254fdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_254fe0:
    // 0x254fe0: 0x8c4221d0
    ctx->pc = 0x254fe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
label_254fe4:
    // 0x254fe4: 0xac430118
    ctx->pc = 0x254fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
label_254fe8:
    // 0x254fe8: 0x3c020034
    ctx->pc = 0x254fe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_254fec:
    // 0x254fec: 0x8c52cd94
    ctx->pc = 0x254fecu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
label_254ff0:
    // 0x254ff0: 0x3c020034
    ctx->pc = 0x254ff0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_254ff4:
    // 0x254ff4: 0x8c42cd98
    ctx->pc = 0x254ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
label_254ff8:
    // 0x254ff8: 0x1840012f
label_254ffc:
    if (ctx->pc == 0x254FFCu) {
        ctx->pc = 0x254FFCu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255000u;
        goto label_255000;
    }
    ctx->pc = 0x254FF8u;
    {
        const bool branch_taken_0x254ff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x254FFCu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x254ff8) {
            ctx->pc = 0x2554B8u;
            goto label_2554b8;
        }
    }
    ctx->pc = 0x255000u;
label_255000:
    // 0x255000: 0x24170001
    ctx->pc = 0x255000u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_255004:
    // 0x255004: 0x24130002
    ctx->pc = 0x255004u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
label_255008:
    // 0x255008: 0x3c160031
    ctx->pc = 0x255008u;
    SET_GPR_U32(ctx, 22, ((uint32_t)49 << 16));
label_25500c:
    // 0x25500c: 0x24140008
    ctx->pc = 0x25500cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 8));
label_255010:
    // 0x255010: 0x864200d8
    ctx->pc = 0x255010u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_255014:
    // 0x255014: 0x2403ffff
    ctx->pc = 0x255014u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_255018:
    // 0x255018: 0x50430122
label_25501c:
    if (ctx->pc == 0x25501Cu) {
        ctx->pc = 0x25501Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255020u;
        goto label_255020;
    }
    ctx->pc = 0x255018u;
    {
        const bool branch_taken_0x255018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x255018) {
            ctx->pc = 0x25501Cu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x255020u;
label_255020:
    // 0x255020: 0x8e420000
    ctx->pc = 0x255020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255024:
    // 0x255024: 0x8c500000
    ctx->pc = 0x255024u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255028:
    // 0x255028: 0x5203011e
label_25502c:
    if (ctx->pc == 0x25502Cu) {
        ctx->pc = 0x25502Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255030u;
        goto label_255030;
    }
    ctx->pc = 0x255028u;
    {
        const bool branch_taken_0x255028 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x255028) {
            ctx->pc = 0x25502Cu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x255030u;
label_255030:
    // 0x255030: 0xc094ec2
label_255034:
    if (ctx->pc == 0x255034u) {
        ctx->pc = 0x255034u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255038u;
        goto label_255038;
    }
    ctx->pc = 0x255030u;
    SET_GPR_U32(ctx, 31, 0x255038u);
    ctx->pc = 0x255034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemVisible_0x253b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255038u; }
    }
    if (ctx->pc != 0x255038u) { return; }
    ctx->pc = 0x255038u;
label_255038:
    // 0x255038: 0x13c00006
label_25503c:
    if (ctx->pc == 0x25503Cu) {
        ctx->pc = 0x25503Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255040u;
        goto label_255040;
    }
    ctx->pc = 0x255038u;
    {
        const bool branch_taken_0x255038 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x25503Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x255038) {
            ctx->pc = 0x255054u;
            goto label_255054;
        }
    }
    ctx->pc = 0x255040u;
label_255040:
    // 0x255040: 0x8e420000
    ctx->pc = 0x255040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255044:
    // 0x255044: 0x8c430000
    ctx->pc = 0x255044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255048:
    // 0x255048: 0x2402000a
    ctx->pc = 0x255048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_25504c:
    // 0x25504c: 0x14620007
label_255050:
    if (ctx->pc == 0x255050u) {
        ctx->pc = 0x255054u;
        goto label_255054;
    }
    ctx->pc = 0x25504Cu;
    {
        const bool branch_taken_0x25504c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25504c) {
            ctx->pc = 0x25506Cu;
            goto label_25506c;
        }
    }
    ctx->pc = 0x255054u;
label_255054:
    // 0x255054: 0x12200003
label_255058:
    if (ctx->pc == 0x255058u) {
        ctx->pc = 0x255058u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x25505Cu;
        goto label_25505c;
    }
    ctx->pc = 0x255054u;
    {
        const bool branch_taken_0x255054 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x255058u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        if (branch_taken_0x255054) {
            ctx->pc = 0x255064u;
            goto label_255064;
        }
    }
    ctx->pc = 0x25505Cu;
label_25505c:
    // 0x25505c: 0x10000002
label_255060:
    if (ctx->pc == 0x255060u) {
        ctx->pc = 0x255060u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
        ctx->pc = 0x255064u;
        goto label_255064;
    }
    ctx->pc = 0x25505Cu;
    {
        const bool branch_taken_0x25505c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255060u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
        if (branch_taken_0x25505c) {
            ctx->pc = 0x255068u;
            goto label_255068;
        }
    }
    ctx->pc = 0x255064u;
label_255064:
    // 0x255064: 0x3042bfff
    ctx->pc = 0x255064u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 49151));
label_255068:
    // 0x255068: 0xa64200d8
    ctx->pc = 0x255068u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
label_25506c:
    // 0x25506c: 0x16170006
label_255070:
    if (ctx->pc == 0x255070u) {
        ctx->pc = 0x255070u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255074u;
        goto label_255074;
    }
    ctx->pc = 0x25506Cu;
    {
        const bool branch_taken_0x25506c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 23));
        ctx->pc = 0x255070u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25506c) {
            ctx->pc = 0x255088u;
            goto label_255088;
        }
    }
    ctx->pc = 0x255074u;
label_255074:
    // 0x255074: 0x8e420000
    ctx->pc = 0x255074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255078:
    // 0x255078: 0x8c420004
    ctx->pc = 0x255078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25507c:
    // 0x25507c: 0x38420002
    ctx->pc = 0x25507cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
label_255080:
    // 0x255080: 0x200202d
    ctx->pc = 0x255080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255084:
    // 0x255084: 0x2200b
    ctx->pc = 0x255084u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_255088:
    // 0x255088: 0x824200e1
    ctx->pc = 0x255088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 225)));
label_25508c:
    // 0x25508c: 0x1057000b
label_255090:
    if (ctx->pc == 0x255090u) {
        ctx->pc = 0x255094u;
        goto label_255094;
    }
    ctx->pc = 0x25508Cu;
    {
        const bool branch_taken_0x25508c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 23));
        if (branch_taken_0x25508c) {
            ctx->pc = 0x2550BCu;
            goto label_2550bc;
        }
    }
    ctx->pc = 0x255094u;
label_255094:
    // 0x255094: 0x14530021
label_255098:
    if (ctx->pc == 0x255098u) {
        ctx->pc = 0x25509Cu;
        goto label_25509c;
    }
    ctx->pc = 0x255094u;
    {
        const bool branch_taken_0x255094 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x255094) {
            ctx->pc = 0x25511Cu;
            goto label_25511c;
        }
    }
    ctx->pc = 0x25509Cu;
label_25509c:
    // 0x25509c: 0x14800007
label_2550a0:
    if (ctx->pc == 0x2550A0u) {
        ctx->pc = 0x2550A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967272));
        ctx->pc = 0x2550A4u;
        goto label_2550a4;
    }
    ctx->pc = 0x25509Cu;
    {
        const bool branch_taken_0x25509c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2550A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967272));
        if (branch_taken_0x25509c) {
            ctx->pc = 0x2550BCu;
            goto label_2550bc;
        }
    }
    ctx->pc = 0x2550A4u;
label_2550a4:
    // 0x2550a4: 0x8c620010
    ctx->pc = 0x2550a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2550a8:
    // 0x2550a8: 0x14400004
label_2550ac:
    if (ctx->pc == 0x2550ACu) {
        ctx->pc = 0x2550B0u;
        goto label_2550b0;
    }
    ctx->pc = 0x2550A8u;
    {
        const bool branch_taken_0x2550a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2550a8) {
            ctx->pc = 0x2550BCu;
            goto label_2550bc;
        }
    }
    ctx->pc = 0x2550B0u;
label_2550b0:
    // 0x2550b0: 0x8c62000c
    ctx->pc = 0x2550b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2550b4:
    // 0x2550b4: 0x50400019
label_2550b8:
    if (ctx->pc == 0x2550B8u) {
        ctx->pc = 0x2550B8u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 225)));
        ctx->pc = 0x2550BCu;
        goto label_2550bc;
    }
    ctx->pc = 0x2550B4u;
    {
        const bool branch_taken_0x2550b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2550b4) {
            ctx->pc = 0x2550B8u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 225)));
            ctx->pc = 0x25511Cu;
            goto label_25511c;
        }
    }
    ctx->pc = 0x2550BCu;
label_2550bc:
    // 0x2550bc: 0x12200009
label_2550c0:
    if (ctx->pc == 0x2550C0u) {
        ctx->pc = 0x2550C4u;
        goto label_2550c4;
    }
    ctx->pc = 0x2550BCu;
    {
        const bool branch_taken_0x2550bc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x2550bc) {
            ctx->pc = 0x2550E4u;
            goto label_2550e4;
        }
    }
    ctx->pc = 0x2550C4u;
label_2550c4:
    // 0x2550c4: 0x14800007
label_2550c8:
    if (ctx->pc == 0x2550C8u) {
        ctx->pc = 0x2550C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967272));
        ctx->pc = 0x2550CCu;
        goto label_2550cc;
    }
    ctx->pc = 0x2550C4u;
    {
        const bool branch_taken_0x2550c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2550C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967272));
        if (branch_taken_0x2550c4) {
            ctx->pc = 0x2550E4u;
            goto label_2550e4;
        }
    }
    ctx->pc = 0x2550CCu;
label_2550cc:
    // 0x2550cc: 0x8c620010
    ctx->pc = 0x2550ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2550d0:
    // 0x2550d0: 0x14400004
label_2550d4:
    if (ctx->pc == 0x2550D4u) {
        ctx->pc = 0x2550D8u;
        goto label_2550d8;
    }
    ctx->pc = 0x2550D0u;
    {
        const bool branch_taken_0x2550d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2550d0) {
            ctx->pc = 0x2550E4u;
            goto label_2550e4;
        }
    }
    ctx->pc = 0x2550D8u;
label_2550d8:
    // 0x2550d8: 0x8c62000c
    ctx->pc = 0x2550d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2550dc:
    // 0x2550dc: 0x1040000b
label_2550e0:
    if (ctx->pc == 0x2550E0u) {
        ctx->pc = 0x2550E4u;
        goto label_2550e4;
    }
    ctx->pc = 0x2550DCu;
    {
        const bool branch_taken_0x2550dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2550dc) {
            ctx->pc = 0x25510Cu;
            goto label_25510c;
        }
    }
    ctx->pc = 0x2550E4u;
label_2550e4:
    // 0x2550e4: 0xc09459a
label_2550e8:
    if (ctx->pc == 0x2550E8u) {
        ctx->pc = 0x2550E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2550ECu;
        goto label_2550ec;
    }
    ctx->pc = 0x2550E4u;
    SET_GPR_U32(ctx, 31, 0x2550ECu);
    ctx->pc = 0x2550E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251668u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_item_0x251668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2550ECu; }
    }
    if (ctx->pc != 0x2550ECu) { return; }
    ctx->pc = 0x2550ECu;
label_2550ec:
    // 0x2550ec: 0x104000ec
label_2550f0:
    if (ctx->pc == 0x2550F0u) {
        ctx->pc = 0x2550F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2550F4u;
        goto label_2550f4;
    }
    ctx->pc = 0x2550ECu;
    {
        const bool branch_taken_0x2550ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2550F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2550ec) {
            ctx->pc = 0x2554A0u;
            goto label_2554a0;
        }
    }
    ctx->pc = 0x2550F4u;
label_2550f4:
    // 0x2550f4: 0xa24000e1
    ctx->pc = 0x2550f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 225), (uint8_t)GPR_U32(ctx, 0));
label_2550f8:
    // 0x2550f8: 0x8e440070
    ctx->pc = 0x2550f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2550fc:
    // 0x2550fc: 0xc0b41e4
label_255100:
    if (ctx->pc == 0x255100u) {
        ctx->pc = 0x255100u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255104u;
        goto label_255104;
    }
    ctx->pc = 0x2550FCu;
    SET_GPR_U32(ctx, 31, 0x255104u);
    ctx->pc = 0x255100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255104u; }
    }
    if (ctx->pc != 0x255104u) { return; }
    ctx->pc = 0x255104u;
label_255104:
    // 0x255104: 0x1000001a
label_255108:
    if (ctx->pc == 0x255108u) {
        ctx->pc = 0x255108u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x25510Cu;
        goto label_25510c;
    }
    ctx->pc = 0x255104u;
    {
        const bool branch_taken_0x255104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255108u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        if (branch_taken_0x255104) {
            ctx->pc = 0x255170u;
            goto label_255170;
        }
    }
    ctx->pc = 0x25510Cu;
label_25510c:
    // 0x25510c: 0x53c000e4
label_255110:
    if (ctx->pc == 0x255110u) {
        ctx->pc = 0x255110u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 225), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x255114u;
        goto label_255114;
    }
    ctx->pc = 0x25510Cu;
    {
        const bool branch_taken_0x25510c = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        if (branch_taken_0x25510c) {
            ctx->pc = 0x255110u;
            WRITE8(ADD32(GPR_U32(ctx, 18), 225), (uint8_t)GPR_U32(ctx, 19));
            ctx->pc = 0x2554A0u;
            goto label_2554a0;
        }
    }
    ctx->pc = 0x255114u;
label_255114:
    // 0x255114: 0x100000e3
label_255118:
    if (ctx->pc == 0x255118u) {
        ctx->pc = 0x255118u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x25511Cu;
        goto label_25511c;
    }
    ctx->pc = 0x255114u;
    {
        const bool branch_taken_0x255114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255118u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x255114) {
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x25511Cu;
label_25511c:
    // 0x25511c: 0x544000e1
label_255120:
    if (ctx->pc == 0x255120u) {
        ctx->pc = 0x255120u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255124u;
        goto label_255124;
    }
    ctx->pc = 0x25511Cu;
    {
        const bool branch_taken_0x25511c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25511c) {
            ctx->pc = 0x255120u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x255124u;
label_255124:
    // 0x255124: 0xc09459a
label_255128:
    if (ctx->pc == 0x255128u) {
        ctx->pc = 0x255128u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25512Cu;
        goto label_25512c;
    }
    ctx->pc = 0x255124u;
    SET_GPR_U32(ctx, 31, 0x25512Cu);
    ctx->pc = 0x255128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251668u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_item_0x251668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25512Cu; }
    }
    if (ctx->pc != 0x25512Cu) { return; }
    ctx->pc = 0x25512Cu;
label_25512c:
    // 0x25512c: 0x54400010
label_255130:
    if (ctx->pc == 0x255130u) {
        ctx->pc = 0x255130u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x255134u;
        goto label_255134;
    }
    ctx->pc = 0x25512Cu;
    {
        const bool branch_taken_0x25512c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25512c) {
            ctx->pc = 0x255130u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->pc = 0x255170u;
            goto label_255170;
        }
    }
    ctx->pc = 0x255134u;
label_255134:
    // 0x255134: 0x12200007
label_255138:
    if (ctx->pc == 0x255138u) {
        ctx->pc = 0x255138u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967272));
        ctx->pc = 0x25513Cu;
        goto label_25513c;
    }
    ctx->pc = 0x255134u;
    {
        const bool branch_taken_0x255134 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x255138u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294967272));
        if (branch_taken_0x255134) {
            ctx->pc = 0x255154u;
            goto label_255154;
        }
    }
    ctx->pc = 0x25513Cu;
label_25513c:
    // 0x25513c: 0x8c620010
    ctx->pc = 0x25513cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_255140:
    // 0x255140: 0x54400005
label_255144:
    if (ctx->pc == 0x255144u) {
        ctx->pc = 0x255144u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 225), (uint8_t)GPR_U32(ctx, 23));
        ctx->pc = 0x255148u;
        goto label_255148;
    }
    ctx->pc = 0x255140u;
    {
        const bool branch_taken_0x255140 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x255140) {
            ctx->pc = 0x255144u;
            WRITE8(ADD32(GPR_U32(ctx, 18), 225), (uint8_t)GPR_U32(ctx, 23));
            ctx->pc = 0x255158u;
            goto label_255158;
        }
    }
    ctx->pc = 0x255148u;
label_255148:
    // 0x255148: 0x8c62000c
    ctx->pc = 0x255148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25514c:
    // 0x25514c: 0x50400008
label_255150:
    if (ctx->pc == 0x255150u) {
        ctx->pc = 0x255150u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x255154u;
        goto label_255154;
    }
    ctx->pc = 0x25514Cu;
    {
        const bool branch_taken_0x25514c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25514c) {
            ctx->pc = 0x255150u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->pc = 0x255170u;
            goto label_255170;
        }
    }
    ctx->pc = 0x255154u;
label_255154:
    // 0x255154: 0xa25700e1
    ctx->pc = 0x255154u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 225), (uint8_t)GPR_U32(ctx, 23));
label_255158:
    // 0x255158: 0x8e440070
    ctx->pc = 0x255158u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_25515c:
    // 0x25515c: 0x24050002
    ctx->pc = 0x25515cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_255160:
    // 0x255160: 0xc0b41b8
label_255164:
    if (ctx->pc == 0x255164u) {
        ctx->pc = 0x255164u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255168u;
        goto label_255168;
    }
    ctx->pc = 0x255160u;
    SET_GPR_U32(ctx, 31, 0x255168u);
    ctx->pc = 0x255164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255168u; }
    }
    if (ctx->pc != 0x255168u) { return; }
    ctx->pc = 0x255168u;
label_255168:
    // 0x255168: 0x100000ce
label_25516c:
    if (ctx->pc == 0x25516Cu) {
        ctx->pc = 0x25516Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255170u;
        goto label_255170;
    }
    ctx->pc = 0x255168u;
    {
        const bool branch_taken_0x255168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25516Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x255168) {
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x255170u;
label_255170:
    // 0x255170: 0x30620040
    ctx->pc = 0x255170u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 64));
label_255174:
    // 0x255174: 0x54400011
label_255178:
    if (ctx->pc == 0x255178u) {
        ctx->pc = 0x255178u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
        ctx->pc = 0x25517Cu;
        goto label_25517c;
    }
    ctx->pc = 0x255174u;
    {
        const bool branch_taken_0x255174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x255174) {
            ctx->pc = 0x255178u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
            ctx->pc = 0x2551BCu;
            goto label_2551bc;
        }
    }
    ctx->pc = 0x25517Cu;
label_25517c:
    // 0x25517c: 0x5620000f
label_255180:
    if (ctx->pc == 0x255180u) {
        ctx->pc = 0x255180u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
        ctx->pc = 0x255184u;
        goto label_255184;
    }
    ctx->pc = 0x25517Cu;
    {
        const bool branch_taken_0x25517c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x25517c) {
            ctx->pc = 0x255180u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
            ctx->pc = 0x2551BCu;
            goto label_2551bc;
        }
    }
    ctx->pc = 0x255184u;
label_255184:
    // 0x255184: 0x30620004
    ctx->pc = 0x255184u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
label_255188:
    // 0x255188: 0x50400005
label_25518c:
    if (ctx->pc == 0x25518Cu) {
        ctx->pc = 0x25518Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x255190u;
        goto label_255190;
    }
    ctx->pc = 0x255188u;
    {
        const bool branch_taken_0x255188 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x255188) {
            ctx->pc = 0x25518Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2551A0u;
            goto label_2551a0;
        }
    }
    ctx->pc = 0x255190u;
label_255190:
    // 0x255190: 0x824200dc
    ctx->pc = 0x255190u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_255194:
    // 0x255194: 0x5c400009
label_255198:
    if (ctx->pc == 0x255198u) {
        ctx->pc = 0x255198u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
        ctx->pc = 0x25519Cu;
        goto label_25519c;
    }
    ctx->pc = 0x255194u;
    {
        const bool branch_taken_0x255194 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x255194) {
            ctx->pc = 0x255198u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
            ctx->pc = 0x2551BCu;
            goto label_2551bc;
        }
    }
    ctx->pc = 0x25519Cu;
label_25519c:
    // 0x25519c: 0x8e420000
    ctx->pc = 0x25519cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2551a0:
    // 0x2551a0: 0x8c420000
    ctx->pc = 0x2551a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2551a4:
    // 0x2551a4: 0x545300bf
label_2551a8:
    if (ctx->pc == 0x2551A8u) {
        ctx->pc = 0x2551A8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2551ACu;
        goto label_2551ac;
    }
    ctx->pc = 0x2551A4u;
    {
        const bool branch_taken_0x2551a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x2551a4) {
            ctx->pc = 0x2551A8u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x2551ACu;
label_2551ac:
    // 0x2551ac: 0x824200dc
    ctx->pc = 0x2551acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_2551b0:
    // 0x2551b0: 0x584000bc
label_2551b4:
    if (ctx->pc == 0x2551B4u) {
        ctx->pc = 0x2551B4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2551B8u;
        goto label_2551b8;
    }
    ctx->pc = 0x2551B0u;
    {
        const bool branch_taken_0x2551b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2551b0) {
            ctx->pc = 0x2551B4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x2551B8u;
label_2551b8:
    // 0x2551b8: 0x864200da
    ctx->pc = 0x2551b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
label_2551bc:
    // 0x2551bc: 0x18400005
label_2551c0:
    if (ctx->pc == 0x2551C0u) {
        ctx->pc = 0x2551C0u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
        ctx->pc = 0x2551C4u;
        goto label_2551c4;
    }
    ctx->pc = 0x2551BCu;
    {
        const bool branch_taken_0x2551bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2551C0u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
        if (branch_taken_0x2551bc) {
            ctx->pc = 0x2551D4u;
            goto label_2551d4;
        }
    }
    ctx->pc = 0x2551C4u;
label_2551c4:
    // 0x2551c4: 0x3c020031
    ctx->pc = 0x2551c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2551c8:
    // 0x2551c8: 0x9442ffbc
    ctx->pc = 0x2551c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_2551cc:
    // 0x2551cc: 0x621023
    ctx->pc = 0x2551ccu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2551d0:
    // 0x2551d0: 0xa64200da
    ctx->pc = 0x2551d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 2));
label_2551d4:
    // 0x2551d4: 0x964200d8
    ctx->pc = 0x2551d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_2551d8:
    // 0x2551d8: 0x30420100
    ctx->pc = 0x2551d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
label_2551dc:
    // 0x2551dc: 0x50400009
label_2551e0:
    if (ctx->pc == 0x2551E0u) {
        ctx->pc = 0x2551E0u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x2551E4u;
        goto label_2551e4;
    }
    ctx->pc = 0x2551DCu;
    {
        const bool branch_taken_0x2551dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2551dc) {
            ctx->pc = 0x2551E0u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->pc = 0x255204u;
            goto label_255204;
        }
    }
    ctx->pc = 0x2551E4u;
label_2551e4:
    // 0x2551e4: 0x864200da
    ctx->pc = 0x2551e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
label_2551e8:
    // 0x2551e8: 0x5c400006
label_2551ec:
    if (ctx->pc == 0x2551ECu) {
        ctx->pc = 0x2551ECu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x2551F0u;
        goto label_2551f0;
    }
    ctx->pc = 0x2551E8u;
    {
        const bool branch_taken_0x2551e8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2551e8) {
            ctx->pc = 0x2551ECu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->pc = 0x255204u;
            goto label_255204;
        }
    }
    ctx->pc = 0x2551F0u;
label_2551f0:
    // 0x2551f0: 0x240202d
    ctx->pc = 0x2551f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2551f4:
    // 0x2551f4: 0xc094dcc
label_2551f8:
    if (ctx->pc == 0x2551F8u) {
        ctx->pc = 0x2551F8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2551FCu;
        goto label_2551fc;
    }
    ctx->pc = 0x2551F4u;
    SET_GPR_U32(ctx, 31, 0x2551FCu);
    ctx->pc = 0x2551F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2551FCu; }
    }
    if (ctx->pc != 0x2551FCu) { return; }
    ctx->pc = 0x2551FCu;
label_2551fc:
    // 0x2551fc: 0x100000a9
label_255200:
    if (ctx->pc == 0x255200u) {
        ctx->pc = 0x255200u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255204u;
        goto label_255204;
    }
    ctx->pc = 0x2551FCu;
    {
        const bool branch_taken_0x2551fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255200u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x2551fc) {
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x255204u;
label_255204:
    // 0x255204: 0x30420001
    ctx->pc = 0x255204u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_255208:
    // 0x255208: 0x14400020
label_25520c:
    if (ctx->pc == 0x25520Cu) {
        ctx->pc = 0x25520Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x255210u;
        goto label_255210;
    }
    ctx->pc = 0x255208u;
    {
        const bool branch_taken_0x255208 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25520Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 128)));
        if (branch_taken_0x255208) {
            ctx->pc = 0x25528Cu;
            goto label_25528c;
        }
    }
    ctx->pc = 0x255210u;
label_255210:
    // 0x255210: 0x104000a3
label_255214:
    if (ctx->pc == 0x255214u) {
        ctx->pc = 0x255214u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x255218u;
        goto label_255218;
    }
    ctx->pc = 0x255210u;
    {
        const bool branch_taken_0x255210 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255214u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x255210) {
            ctx->pc = 0x2554A0u;
            goto label_2554a0;
        }
    }
    ctx->pc = 0x255218u;
label_255218:
    // 0x255218: 0x824300dc
    ctx->pc = 0x255218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_25521c:
    // 0x25521c: 0x824400de
    ctx->pc = 0x25521cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_255220:
    // 0x255220: 0x641026
    ctx->pc = 0x255220u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_255224:
    // 0x255224: 0x100302d
    ctx->pc = 0x255224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_255228:
    // 0x255228: 0x2300a
    ctx->pc = 0x255228u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 0));
label_25522c:
    // 0x25522c: 0x60382d
    ctx->pc = 0x25522cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_255230:
    // 0x255230: 0x8e420000
    ctx->pc = 0x255230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255234:
    // 0x255234: 0x8c430000
    ctx->pc = 0x255234u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255238:
    // 0x255238: 0x24020005
    ctx->pc = 0x255238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_25523c:
    // 0x25523c: 0x1462000c
label_255240:
    if (ctx->pc == 0x255240u) {
        ctx->pc = 0x255240u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255244u;
        goto label_255244;
    }
    ctx->pc = 0x25523Cu;
    {
        const bool branch_taken_0x25523c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x255240u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25523c) {
            ctx->pc = 0x255270u;
            goto label_255270;
        }
    }
    ctx->pc = 0x255244u;
label_255244:
    // 0x255244: 0x14e00005
label_255248:
    if (ctx->pc == 0x255248u) {
        ctx->pc = 0x25524Cu;
        goto label_25524c;
    }
    ctx->pc = 0x255244u;
    {
        const bool branch_taken_0x255244 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x255244) {
            ctx->pc = 0x25525Cu;
            goto label_25525c;
        }
    }
    ctx->pc = 0x25524Cu;
label_25524c:
    // 0x25524c: 0x14a80003
label_255250:
    if (ctx->pc == 0x255250u) {
        ctx->pc = 0x255254u;
        goto label_255254;
    }
    ctx->pc = 0x25524Cu;
    {
        const bool branch_taken_0x25524c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 8));
        if (branch_taken_0x25524c) {
            ctx->pc = 0x25525Cu;
            goto label_25525c;
        }
    }
    ctx->pc = 0x255254u;
label_255254:
    // 0x255254: 0x10000005
label_255258:
    if (ctx->pc == 0x255258u) {
        ctx->pc = 0x255258u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25525Cu;
        goto label_25525c;
    }
    ctx->pc = 0x255254u;
    {
        const bool branch_taken_0x255254 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255258u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x255254) {
            ctx->pc = 0x25526Cu;
            goto label_25526c;
        }
    }
    ctx->pc = 0x25525Cu;
label_25525c:
    // 0x25525c: 0x14f30004
label_255260:
    if (ctx->pc == 0x255260u) {
        ctx->pc = 0x255260u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x255264u;
        goto label_255264;
    }
    ctx->pc = 0x25525Cu;
    {
        const bool branch_taken_0x25525c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 19));
        ctx->pc = 0x255260u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25525c) {
            ctx->pc = 0x255270u;
            goto label_255270;
        }
    }
    ctx->pc = 0x255264u;
label_255264:
    // 0x255264: 0x24020003
    ctx->pc = 0x255264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_255268:
    // 0x255268: 0x45280a
    ctx->pc = 0x255268u;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_25526c:
    // 0x25526c: 0x24060001
    ctx->pc = 0x25526cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_255270:
    // 0x255270: 0xc084a96
label_255274:
    if (ctx->pc == 0x255274u) {
        ctx->pc = 0x255274u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x255278u;
        goto label_255278;
    }
    ctx->pc = 0x255270u;
    SET_GPR_U32(ctx, 31, 0x255278u);
    ctx->pc = 0x255274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 128));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255278u; }
    }
    if (ctx->pc != 0x255278u) { return; }
    ctx->pc = 0x255278u;
label_255278:
    // 0x255278: 0x30420003
    ctx->pc = 0x255278u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_25527c:
    // 0x25527c: 0x50400089
label_255280:
    if (ctx->pc == 0x255280u) {
        ctx->pc = 0x255280u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255284u;
        goto label_255284;
    }
    ctx->pc = 0x25527Cu;
    {
        const bool branch_taken_0x25527c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25527c) {
            ctx->pc = 0x255280u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x255284u;
label_255284:
    // 0x255284: 0x10000055
label_255288:
    if (ctx->pc == 0x255288u) {
        ctx->pc = 0x255288u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        ctx->pc = 0x25528Cu;
        goto label_25528c;
    }
    ctx->pc = 0x255284u;
    {
        const bool branch_taken_0x255284 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255288u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        if (branch_taken_0x255284) {
            ctx->pc = 0x2553DCu;
            goto label_2553dc;
        }
    }
    ctx->pc = 0x25528Cu;
label_25528c:
    // 0x25528c: 0x10400055
label_255290:
    if (ctx->pc == 0x255290u) {
        ctx->pc = 0x255290u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x255294u;
        goto label_255294;
    }
    ctx->pc = 0x25528Cu;
    {
        const bool branch_taken_0x25528c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255290u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 132));
        if (branch_taken_0x25528c) {
            ctx->pc = 0x2553E4u;
            goto label_2553e4;
        }
    }
    ctx->pc = 0x255294u;
label_255294:
    // 0x255294: 0x864200da
    ctx->pc = 0x255294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
label_255298:
    // 0x255298: 0x1c400017
label_25529c:
    if (ctx->pc == 0x25529Cu) {
        ctx->pc = 0x25529Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2552A0u;
        goto label_2552a0;
    }
    ctx->pc = 0x255298u;
    {
        const bool branch_taken_0x255298 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x25529Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x255298) {
            ctx->pc = 0x2552F8u;
            goto label_2552f8;
        }
    }
    ctx->pc = 0x2552A0u;
label_2552a0:
    // 0x2552a0: 0x964500d8
    ctx->pc = 0x2552a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_2552a4:
    // 0x2552a4: 0x30a20004
    ctx->pc = 0x2552a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 4));
label_2552a8:
    // 0x2552a8: 0x5040000f
label_2552ac:
    if (ctx->pc == 0x2552ACu) {
        ctx->pc = 0x2552ACu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x2552B0u;
        goto label_2552b0;
    }
    ctx->pc = 0x2552A8u;
    {
        const bool branch_taken_0x2552a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2552a8) {
            ctx->pc = 0x2552ACu;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->pc = 0x2552E8u;
            goto label_2552e8;
        }
    }
    ctx->pc = 0x2552B0u;
label_2552b0:
    // 0x2552b0: 0x924400de
    ctx->pc = 0x2552b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_2552b4:
    // 0x2552b4: 0x24820001
    ctx->pc = 0x2552b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_2552b8:
    // 0x2552b8: 0xa24200de
    ctx->pc = 0x2552b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
label_2552bc:
    // 0x2552bc: 0x21600
    ctx->pc = 0x2552bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2552c0:
    // 0x2552c0: 0x21603
    ctx->pc = 0x2552c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2552c4:
    // 0x2552c4: 0x8603000c
    ctx->pc = 0x2552c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2552c8:
    // 0x2552c8: 0x43102a
    ctx->pc = 0x2552c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_2552cc:
    // 0x2552cc: 0x54400006
label_2552d0:
    if (ctx->pc == 0x2552D0u) {
        ctx->pc = 0x2552D0u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x2552D4u;
        goto label_2552d4;
    }
    ctx->pc = 0x2552CCu;
    {
        const bool branch_taken_0x2552cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2552cc) {
            ctx->pc = 0x2552D0u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->pc = 0x2552E8u;
            goto label_2552e8;
        }
    }
    ctx->pc = 0x2552D4u;
label_2552d4:
    // 0x2552d4: 0x30a20002
    ctx->pc = 0x2552d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 2));
label_2552d8:
    // 0x2552d8: 0x50400002
label_2552dc:
    if (ctx->pc == 0x2552DCu) {
        ctx->pc = 0x2552DCu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2552E0u;
        goto label_2552e0;
    }
    ctx->pc = 0x2552D8u;
    {
        const bool branch_taken_0x2552d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2552d8) {
            ctx->pc = 0x2552DCu;
            WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2552E4u;
            goto label_2552e4;
        }
    }
    ctx->pc = 0x2552E0u;
label_2552e0:
    // 0x2552e0: 0xa24400de
    ctx->pc = 0x2552e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 4));
label_2552e4:
    // 0x2552e4: 0x964300d8
    ctx->pc = 0x2552e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_2552e8:
    // 0x2552e8: 0x30620080
    ctx->pc = 0x2552e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
label_2552ec:
    // 0x2552ec: 0x10400002
label_2552f0:
    if (ctx->pc == 0x2552F0u) {
        ctx->pc = 0x2552F0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65534));
        ctx->pc = 0x2552F4u;
        goto label_2552f4;
    }
    ctx->pc = 0x2552ECu;
    {
        const bool branch_taken_0x2552ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2552F0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65534));
        if (branch_taken_0x2552ec) {
            ctx->pc = 0x2552F8u;
            goto label_2552f8;
        }
    }
    ctx->pc = 0x2552F4u;
label_2552f4:
    // 0x2552f4: 0xa64200d8
    ctx->pc = 0x2552f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
label_2552f8:
    // 0x2552f8: 0x824200dc
    ctx->pc = 0x2552f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_2552fc:
    // 0x2552fc: 0x824500de
    ctx->pc = 0x2552fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_255300:
    // 0x255300: 0x451026
    ctx->pc = 0x255300u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_255304:
    // 0x255304: 0x26440080
    ctx->pc = 0x255304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 128));
label_255308:
    // 0x255308: 0xc084a96
label_25530c:
    if (ctx->pc == 0x25530Cu) {
        ctx->pc = 0x25530Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 0));
        ctx->pc = 0x255310u;
        goto label_255310;
    }
    ctx->pc = 0x255308u;
    SET_GPR_U32(ctx, 31, 0x255310u);
    ctx->pc = 0x25530Cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255310u; }
    }
    if (ctx->pc != 0x255310u) { return; }
    ctx->pc = 0x255310u;
label_255310:
    // 0x255310: 0x30420003
    ctx->pc = 0x255310u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_255314:
    // 0x255314: 0x50400063
label_255318:
    if (ctx->pc == 0x255318u) {
        ctx->pc = 0x255318u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x25531Cu;
        goto label_25531c;
    }
    ctx->pc = 0x255314u;
    {
        const bool branch_taken_0x255314 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x255314) {
            ctx->pc = 0x255318u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x25531Cu;
label_25531c:
    // 0x25531c: 0x964200d8
    ctx->pc = 0x25531cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_255320:
    // 0x255320: 0x30420400
    ctx->pc = 0x255320u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
label_255324:
    // 0x255324: 0x5440002d
label_255328:
    if (ctx->pc == 0x255328u) {
        ctx->pc = 0x255328u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        ctx->pc = 0x25532Cu;
        goto label_25532c;
    }
    ctx->pc = 0x255324u;
    {
        const bool branch_taken_0x255324 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x255324) {
            ctx->pc = 0x255328u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
            ctx->pc = 0x2553DCu;
            goto label_2553dc;
        }
    }
    ctx->pc = 0x25532Cu;
label_25532c:
    // 0x25532c: 0x824200de
    ctx->pc = 0x25532cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_255330:
    // 0x255330: 0x10400004
label_255334:
    if (ctx->pc == 0x255334u) {
        ctx->pc = 0x255334u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x255338u;
        goto label_255338;
    }
    ctx->pc = 0x255330u;
    {
        const bool branch_taken_0x255330 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255334u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x255330) {
            ctx->pc = 0x255344u;
            goto label_255344;
        }
    }
    ctx->pc = 0x255338u;
label_255338:
    // 0x255338: 0x8444004a
    ctx->pc = 0x255338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 74)));
label_25533c:
    // 0x25533c: 0x1000000d
label_255340:
    if (ctx->pc == 0x255340u) {
        ctx->pc = 0x255340u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x255344u;
        goto label_255344;
    }
    ctx->pc = 0x25533Cu;
    {
        const bool branch_taken_0x25533c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255340u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x25533c) {
            ctx->pc = 0x255374u;
            goto label_255374;
        }
    }
    ctx->pc = 0x255344u;
label_255344:
    // 0x255344: 0x84440048
    ctx->pc = 0x255344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_255348:
    // 0x255348: 0x8c420000
    ctx->pc = 0x255348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25534c:
    // 0x25534c: 0x14540009
label_255350:
    if (ctx->pc == 0x255350u) {
        ctx->pc = 0x255350u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x255354u;
        goto label_255354;
    }
    ctx->pc = 0x25534Cu;
    {
        const bool branch_taken_0x25534c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        ctx->pc = 0x255350u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x25534c) {
            ctx->pc = 0x255374u;
            goto label_255374;
        }
    }
    ctx->pc = 0x255354u;
label_255354:
    // 0x255354: 0x44840800
    ctx->pc = 0x255354u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
label_255358:
    // 0x255358: 0x46800860
    ctx->pc = 0x255358u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_25535c:
    // 0x25535c: 0x3c020034
    ctx->pc = 0x25535cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_255360:
    // 0x255360: 0x8c42e7c8
    ctx->pc = 0x255360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_255364:
    // 0x255364: 0xc44000d8
    ctx->pc = 0x255364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255368:
    // 0x255368: 0x46000842
    ctx->pc = 0x255368u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_25536c:
    // 0x25536c: 0x46000824
    ctx->pc = 0x25536cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_255370:
    // 0x255370: 0x44040000
    ctx->pc = 0x255370u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
label_255374:
    // 0x255374: 0x86020010
    ctx->pc = 0x255374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_255378:
    // 0x255378: 0x44820800
    ctx->pc = 0x255378u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_25537c:
    // 0x25537c: 0x46800860
    ctx->pc = 0x25537cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_255380:
    // 0x255380: 0xc600002c
    ctx->pc = 0x255380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255384:
    // 0x255384: 0x46000842
    ctx->pc = 0x255384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_255388:
    // 0x255388: 0x3c013f00
    ctx->pc = 0x255388u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_25538c:
    // 0x25538c: 0x44810000
    ctx->pc = 0x25538cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255390:
    // 0x255390: 0x46000840
    ctx->pc = 0x255390u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255394:
    // 0x255394: 0x46000824
    ctx->pc = 0x255394u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_255398:
    // 0x255398: 0x44050000
    ctx->pc = 0x255398u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
label_25539c:
    // 0x25539c: 0x8e420000
    ctx->pc = 0x25539cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2553a0:
    // 0x2553a0: 0x8c420000
    ctx->pc = 0x2553a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2553a4:
    // 0x2553a4: 0x14540009
label_2553a8:
    if (ctx->pc == 0x2553A8u) {
        ctx->pc = 0x2553A8u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2553ACu;
        goto label_2553ac;
    }
    ctx->pc = 0x2553A4u;
    {
        const bool branch_taken_0x2553a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        ctx->pc = 0x2553A8u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2553a4) {
            ctx->pc = 0x2553CCu;
            goto label_2553cc;
        }
    }
    ctx->pc = 0x2553ACu;
label_2553ac:
    // 0x2553ac: 0x8602000c
    ctx->pc = 0x2553acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2553b0:
    // 0x2553b0: 0x28420005
    ctx->pc = 0x2553b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_2553b4:
    // 0x2553b4: 0x14400005
label_2553b8:
    if (ctx->pc == 0x2553B8u) {
        ctx->pc = 0x2553BCu;
        goto label_2553bc;
    }
    ctx->pc = 0x2553B4u;
    {
        const bool branch_taken_0x2553b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2553b4) {
            ctx->pc = 0x2553CCu;
            goto label_2553cc;
        }
    }
    ctx->pc = 0x2553BCu;
label_2553bc:
    // 0x2553bc: 0x4810003
label_2553c0:
    if (ctx->pc == 0x2553C0u) {
        ctx->pc = 0x2553C4u;
        goto label_2553c4;
    }
    ctx->pc = 0x2553BCu;
    {
        const bool branch_taken_0x2553bc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2553bc) {
            ctx->pc = 0x2553CCu;
            goto label_2553cc;
        }
    }
    ctx->pc = 0x2553C4u;
label_2553c4:
    // 0x2553c4: 0x202d
    ctx->pc = 0x2553c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2553c8:
    // 0x2553c8: 0x282d
    ctx->pc = 0x2553c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2553cc:
    // 0x2553cc: 0xc0944c2
label_2553d0:
    if (ctx->pc == 0x2553D0u) {
        ctx->pc = 0x2553D4u;
        goto label_2553d4;
    }
    ctx->pc = 0x2553CCu;
    SET_GPR_U32(ctx, 31, 0x2553D4u);
    ctx->pc = 0x251308u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetActiveTime_0x251308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2553D4u; }
    }
    if (ctx->pc != 0x2553D4u) { return; }
    ctx->pc = 0x2553D4u;
label_2553d4:
    // 0x2553d4: 0xa64200da
    ctx->pc = 0x2553d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 2));
label_2553d8:
    // 0x2553d8: 0x924200de
    ctx->pc = 0x2553d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_2553dc:
    // 0x2553dc: 0x10000030
label_2553e0:
    if (ctx->pc == 0x2553E0u) {
        ctx->pc = 0x2553E0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 220), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2553E4u;
        goto label_2553e4;
    }
    ctx->pc = 0x2553DCu;
    {
        const bool branch_taken_0x2553dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2553E0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 220), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2553dc) {
            ctx->pc = 0x2554A0u;
            goto label_2554a0;
        }
    }
    ctx->pc = 0x2553E4u;
label_2553e4:
    // 0x2553e4: 0x864200da
    ctx->pc = 0x2553e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
label_2553e8:
    // 0x2553e8: 0x5c40002e
label_2553ec:
    if (ctx->pc == 0x2553ECu) {
        ctx->pc = 0x2553ECu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2553F0u;
        goto label_2553f0;
    }
    ctx->pc = 0x2553E8u;
    {
        const bool branch_taken_0x2553e8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2553e8) {
            ctx->pc = 0x2553ECu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x2553F0u;
label_2553f0:
    // 0x2553f0: 0x964300d8
    ctx->pc = 0x2553f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_2553f4:
    // 0x2553f4: 0x30620004
    ctx->pc = 0x2553f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
label_2553f8:
    // 0x2553f8: 0x10400026
label_2553fc:
    if (ctx->pc == 0x2553FCu) {
        ctx->pc = 0x2553FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
        ctx->pc = 0x255400u;
        goto label_255400;
    }
    ctx->pc = 0x2553F8u;
    {
        const bool branch_taken_0x2553f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2553FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
        if (branch_taken_0x2553f8) {
            ctx->pc = 0x255494u;
            goto label_255494;
        }
    }
    ctx->pc = 0x255400u;
label_255400:
    // 0x255400: 0x824200dc
    ctx->pc = 0x255400u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_255404:
    // 0x255404: 0x10400003
label_255408:
    if (ctx->pc == 0x255408u) {
        ctx->pc = 0x255408u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x25540Cu;
        goto label_25540c;
    }
    ctx->pc = 0x255404u;
    {
        const bool branch_taken_0x255404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255408u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x255404) {
            ctx->pc = 0x255414u;
            goto label_255414;
        }
    }
    ctx->pc = 0x25540Cu;
label_25540c:
    // 0x25540c: 0x14400021
label_255410:
    if (ctx->pc == 0x255410u) {
        ctx->pc = 0x255410u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
        ctx->pc = 0x255414u;
        goto label_255414;
    }
    ctx->pc = 0x25540Cu;
    {
        const bool branch_taken_0x25540c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x255410u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
        if (branch_taken_0x25540c) {
            ctx->pc = 0x255494u;
            goto label_255494;
        }
    }
    ctx->pc = 0x255414u;
label_255414:
    // 0x255414: 0x824200dc
    ctx->pc = 0x255414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_255418:
    // 0x255418: 0x2c420001
    ctx->pc = 0x255418u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_25541c:
    // 0x25541c: 0x10400005
label_255420:
    if (ctx->pc == 0x255420u) {
        ctx->pc = 0x255420u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 220), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x255424u;
        goto label_255424;
    }
    ctx->pc = 0x25541Cu;
    {
        const bool branch_taken_0x25541c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255420u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 220), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x25541c) {
            ctx->pc = 0x255434u;
            goto label_255434;
        }
    }
    ctx->pc = 0x255424u;
label_255424:
    // 0x255424: 0x8e420000
    ctx->pc = 0x255424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255428:
    // 0x255428: 0x8444004a
    ctx->pc = 0x255428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 74)));
label_25542c:
    // 0x25542c: 0x1000000f
label_255430:
    if (ctx->pc == 0x255430u) {
        ctx->pc = 0x255430u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x255434u;
        goto label_255434;
    }
    ctx->pc = 0x25542Cu;
    {
        const bool branch_taken_0x25542c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255430u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x25542c) {
            ctx->pc = 0x25546Cu;
            goto label_25546c;
        }
    }
    ctx->pc = 0x255434u;
label_255434:
    // 0x255434: 0x8e420000
    ctx->pc = 0x255434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255438:
    // 0x255438: 0x84440048
    ctx->pc = 0x255438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_25543c:
    // 0x25543c: 0x8c420000
    ctx->pc = 0x25543cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255440:
    // 0x255440: 0x1454000a
label_255444:
    if (ctx->pc == 0x255444u) {
        ctx->pc = 0x255444u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x255448u;
        goto label_255448;
    }
    ctx->pc = 0x255440u;
    {
        const bool branch_taken_0x255440 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        ctx->pc = 0x255444u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x255440) {
            ctx->pc = 0x25546Cu;
            goto label_25546c;
        }
    }
    ctx->pc = 0x255448u;
label_255448:
    // 0x255448: 0x44840800
    ctx->pc = 0x255448u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
label_25544c:
    // 0x25544c: 0x46800860
    ctx->pc = 0x25544cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_255450:
    // 0x255450: 0x3c020034
    ctx->pc = 0x255450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_255454:
    // 0x255454: 0x8c42e7c8
    ctx->pc = 0x255454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_255458:
    // 0x255458: 0xc44000d8
    ctx->pc = 0x255458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25545c:
    // 0x25545c: 0x46000842
    ctx->pc = 0x25545cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_255460:
    // 0x255460: 0x46000824
    ctx->pc = 0x255460u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_255464:
    // 0x255464: 0x44040000
    ctx->pc = 0x255464u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
label_255468:
    // 0x255468: 0x0
    ctx->pc = 0x255468u;
    // NOP
label_25546c:
    // 0x25546c: 0x4830007
label_255470:
    if (ctx->pc == 0x255470u) {
        ctx->pc = 0x255470u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x255474u;
        goto label_255474;
    }
    ctx->pc = 0x25546Cu;
    {
        const bool branch_taken_0x25546c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x25546c) {
            ctx->pc = 0x255470u;
            WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 4));
            ctx->pc = 0x25548Cu;
            goto label_25548c;
        }
    }
    ctx->pc = 0x255474u;
label_255474:
    // 0x255474: 0x48023
    ctx->pc = 0x255474u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_255478:
    // 0x255478: 0xc0b5c24
label_25547c:
    if (ctx->pc == 0x25547Cu) {
        ctx->pc = 0x25547Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255480u;
        goto label_255480;
    }
    ctx->pc = 0x255478u;
    SET_GPR_U32(ctx, 31, 0x255480u);
    ctx->pc = 0x25547Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255480u; }
    }
    if (ctx->pc != 0x255480u) { return; }
    ctx->pc = 0x255480u;
label_255480:
    // 0x255480: 0x102043
    ctx->pc = 0x255480u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
label_255484:
    // 0x255484: 0x822021
    ctx->pc = 0x255484u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_255488:
    // 0x255488: 0xa64400da
    ctx->pc = 0x255488u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 4));
label_25548c:
    // 0x25548c: 0x964300d8
    ctx->pc = 0x25548cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_255490:
    // 0x255490: 0x30620080
    ctx->pc = 0x255490u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
label_255494:
    // 0x255494: 0x10400002
label_255498:
    if (ctx->pc == 0x255498u) {
        ctx->pc = 0x255498u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65534));
        ctx->pc = 0x25549Cu;
        goto label_25549c;
    }
    ctx->pc = 0x255494u;
    {
        const bool branch_taken_0x255494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255498u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65534));
        if (branch_taken_0x255494) {
            ctx->pc = 0x2554A0u;
            goto label_2554a0;
        }
    }
    ctx->pc = 0x25549Cu;
label_25549c:
    // 0x25549c: 0xa64200d8
    ctx->pc = 0x25549cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
label_2554a0:
    // 0x2554a0: 0x26b50001
    ctx->pc = 0x2554a0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_2554a4:
    // 0x2554a4: 0x3c020034
    ctx->pc = 0x2554a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2554a8:
    // 0x2554a8: 0x8c42cd98
    ctx->pc = 0x2554a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
label_2554ac:
    // 0x2554ac: 0x2a2102a
    ctx->pc = 0x2554acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 2)));
label_2554b0:
    // 0x2554b0: 0x1440fed7
label_2554b4:
    if (ctx->pc == 0x2554B4u) {
        ctx->pc = 0x2554B4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x2554B8u;
        goto label_2554b8;
    }
    ctx->pc = 0x2554B0u;
    {
        const bool branch_taken_0x2554b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2554B4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 272));
        if (branch_taken_0x2554b0) {
            ctx->pc = 0x255010u;
            goto label_255010;
        }
    }
    ctx->pc = 0x2554B8u;
label_2554b8:
    // 0x2554b8: 0x40034800
    ctx->pc = 0x2554b8u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_2554bc:
    // 0x2554bc: 0x3c02003a
    ctx->pc = 0x2554bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2554c0:
    // 0x2554c0: 0x8c4421d0
    ctx->pc = 0x2554c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
label_2554c4:
    // 0x2554c4: 0x8c820118
    ctx->pc = 0x2554c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_2554c8:
    // 0x2554c8: 0x621823
    ctx->pc = 0x2554c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2554cc:
    // 0x2554cc: 0x8c820110
    ctx->pc = 0x2554ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_2554d0:
    // 0x2554d0: 0x621821
    ctx->pc = 0x2554d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2554d4:
    // 0x2554d4: 0xac830110
    ctx->pc = 0x2554d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 3));
label_2554d8:
    // 0x2554d8: 0x8c820114
    ctx->pc = 0x2554d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_2554dc:
    // 0x2554dc: 0x24420001
    ctx->pc = 0x2554dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2554e0:
    // 0x2554e0: 0xac820114
    ctx->pc = 0x2554e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 2));
label_2554e4:
    // 0x2554e4: 0x3c030034
    ctx->pc = 0x2554e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2554e8:
    // 0x2554e8: 0x2402ffff
    ctx->pc = 0x2554e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2554ec:
    // 0x2554ec: 0xac62cdb8
    ctx->pc = 0x2554ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954424), GPR_U32(ctx, 2));
label_2554f0:
    // 0x2554f0: 0x3c020034
    ctx->pc = 0x2554f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2554f4:
    // 0x2554f4: 0x8c52cd94
    ctx->pc = 0x2554f4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
label_2554f8:
    // 0x2554f8: 0x3c020034
    ctx->pc = 0x2554f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2554fc:
    // 0x2554fc: 0x8c42cd98
    ctx->pc = 0x2554fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
label_255500:
    // 0x255500: 0x1840076a
label_255504:
    if (ctx->pc == 0x255504u) {
        ctx->pc = 0x255504u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255508u;
        goto label_255508;
    }
    ctx->pc = 0x255500u;
    {
        const bool branch_taken_0x255500 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x255504u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x255500) {
            ctx->pc = 0x2572ACu;
            goto label_2572ac;
        }
    }
    ctx->pc = 0x255508u;
label_255508:
    // 0x255508: 0x864200d8
    ctx->pc = 0x255508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_25550c:
    // 0x25550c: 0x0
    ctx->pc = 0x25550cu;
    // NOP
label_255510:
    // 0x255510: 0x2410ffff
    ctx->pc = 0x255510u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_255514:
    // 0x255514: 0x1050075e
label_255518:
    if (ctx->pc == 0x255518u) {
        ctx->pc = 0x255518u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 33024));
        ctx->pc = 0x25551Cu;
        goto label_25551c;
    }
    ctx->pc = 0x255514u;
    {
        const bool branch_taken_0x255514 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x255518u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 33024));
        if (branch_taken_0x255514) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x25551Cu;
label_25551c:
    // 0x25551c: 0x5440075d
label_255520:
    if (ctx->pc == 0x255520u) {
        ctx->pc = 0x255520u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255524u;
        goto label_255524;
    }
    ctx->pc = 0x25551Cu;
    {
        const bool branch_taken_0x25551c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25551c) {
            ctx->pc = 0x255520u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255524u;
label_255524:
    // 0x255524: 0x264600c8
    ctx->pc = 0x255524u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 200));
label_255528:
    // 0x255528: 0x26440010
    ctx->pc = 0x255528u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16));
label_25552c:
    // 0x25552c: 0xc080d02
label_255530:
    if (ctx->pc == 0x255530u) {
        ctx->pc = 0x255530u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255534u;
        goto label_255534;
    }
    ctx->pc = 0x25552Cu;
    SET_GPR_U32(ctx, 31, 0x255534u);
    ctx->pc = 0x255530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203408u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjWorldMat_0x203408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255534u; }
    }
    if (ctx->pc != 0x255534u) { return; }
    ctx->pc = 0x255534u;
label_255534:
    // 0x255534: 0x8e420000
    ctx->pc = 0x255534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255538:
    // 0x255538: 0x8c430000
    ctx->pc = 0x255538u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25553c:
    // 0x25553c: 0x50700755
label_255540:
    if (ctx->pc == 0x255540u) {
        ctx->pc = 0x255540u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255544u;
        goto label_255544;
    }
    ctx->pc = 0x25553Cu;
    {
        const bool branch_taken_0x25553c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 16));
        if (branch_taken_0x25553c) {
            ctx->pc = 0x255540u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255544u;
label_255544:
    // 0x255544: 0x824200e1
    ctx->pc = 0x255544u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 225)));
label_255548:
    // 0x255548: 0x54400752
label_25554c:
    if (ctx->pc == 0x25554Cu) {
        ctx->pc = 0x25554Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255550u;
        goto label_255550;
    }
    ctx->pc = 0x255548u;
    {
        const bool branch_taken_0x255548 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x255548) {
            ctx->pc = 0x25554Cu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255550u;
label_255550:
    // 0x255550: 0x24020003
    ctx->pc = 0x255550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_255554:
    // 0x255554: 0x54620006
label_255558:
    if (ctx->pc == 0x255558u) {
        ctx->pc = 0x255558u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x25555Cu;
        goto label_25555c;
    }
    ctx->pc = 0x255554u;
    {
        const bool branch_taken_0x255554 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x255554) {
            ctx->pc = 0x255558u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x255570u;
            goto label_255570;
        }
    }
    ctx->pc = 0x25555Cu;
label_25555c:
    // 0x25555c: 0x824300f7
    ctx->pc = 0x25555cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
label_255560:
    // 0x255560: 0x2402000f
    ctx->pc = 0x255560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
label_255564:
    // 0x255564: 0x5062000f
label_255568:
    if (ctx->pc == 0x255568u) {
        ctx->pc = 0x255568u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x25556Cu;
        goto label_25556c;
    }
    ctx->pc = 0x255564u;
    {
        const bool branch_taken_0x255564 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x255564) {
            ctx->pc = 0x255568u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2555A4u;
            goto label_2555a4;
        }
    }
    ctx->pc = 0x25556Cu;
label_25556c:
    // 0x25556c: 0x8e440000
    ctx->pc = 0x25556cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255570:
    // 0x255570: 0x8c830000
    ctx->pc = 0x255570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_255574:
    // 0x255574: 0x2402000c
    ctx->pc = 0x255574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_255578:
    // 0x255578: 0x54620006
label_25557c:
    if (ctx->pc == 0x25557Cu) {
        ctx->pc = 0x25557Cu;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x255580u;
        goto label_255580;
    }
    ctx->pc = 0x255578u;
    {
        const bool branch_taken_0x255578 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x255578) {
            ctx->pc = 0x25557Cu;
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->pc = 0x255594u;
            goto label_255594;
        }
    }
    ctx->pc = 0x255580u;
label_255580:
    // 0x255580: 0x8c830004
    ctx->pc = 0x255580u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_255584:
    // 0x255584: 0x24020002
    ctx->pc = 0x255584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_255588:
    // 0x255588: 0x50620006
label_25558c:
    if (ctx->pc == 0x25558Cu) {
        ctx->pc = 0x25558Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x255590u;
        goto label_255590;
    }
    ctx->pc = 0x255588u;
    {
        const bool branch_taken_0x255588 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x255588) {
            ctx->pc = 0x25558Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2555A4u;
            goto label_2555a4;
        }
    }
    ctx->pc = 0x255590u;
label_255590:
    // 0x255590: 0xde4200d8
    ctx->pc = 0x255590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 216)));
label_255594:
    // 0x255594: 0x30424040
    ctx->pc = 0x255594u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16448));
label_255598:
    // 0x255598: 0x5040073e
label_25559c:
    if (ctx->pc == 0x25559Cu) {
        ctx->pc = 0x25559Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2555A0u;
        goto label_2555a0;
    }
    ctx->pc = 0x255598u;
    {
        const bool branch_taken_0x255598 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x255598) {
            ctx->pc = 0x25559Cu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x2555A0u;
label_2555a0:
    // 0x2555a0: 0x8e420000
    ctx->pc = 0x2555a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2555a4:
    // 0x2555a4: 0x8c420000
    ctx->pc = 0x2555a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2555a8:
    // 0x2555a8: 0x2443ffff
    ctx->pc = 0x2555a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2555ac:
    // 0x2555ac: 0x2c62000d
    ctx->pc = 0x2555acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 13));
label_2555b0:
    // 0x2555b0: 0x10400737
label_2555b4:
    if (ctx->pc == 0x2555B4u) {
        ctx->pc = 0x2555B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2555B8u;
        goto label_2555b8;
    }
    ctx->pc = 0x2555B0u;
    {
        const bool branch_taken_0x2555b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2555B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2555b0) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x2555B8u;
label_2555b8:
    // 0x2555b8: 0x24428aa0
    ctx->pc = 0x2555b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937248));
label_2555bc:
    // 0x2555bc: 0x31880
    ctx->pc = 0x2555bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2555c0:
    // 0x2555c0: 0x621821
    ctx->pc = 0x2555c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2555c4:
    // 0x2555c4: 0x8c620000
    ctx->pc = 0x2555c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2555c8:
    // 0x2555c8: 0x400008
label_2555cc:
    if (ctx->pc == 0x2555CCu) {
        ctx->pc = 0x2555D0u;
        goto label_2555d0;
    }
    ctx->pc = 0x2555C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254F10u: goto label_254f10;
            case 0x254F14u: goto label_254f14;
            case 0x254F18u: goto label_254f18;
            case 0x254F1Cu: goto label_254f1c;
            case 0x254F20u: goto label_254f20;
            case 0x254F24u: goto label_254f24;
            case 0x254F28u: goto label_254f28;
            case 0x254F2Cu: goto label_254f2c;
            case 0x254F30u: goto label_254f30;
            case 0x254F34u: goto label_254f34;
            case 0x254F38u: goto label_254f38;
            case 0x254F3Cu: goto label_254f3c;
            case 0x254F40u: goto label_254f40;
            case 0x254F44u: goto label_254f44;
            case 0x254F48u: goto label_254f48;
            case 0x254F4Cu: goto label_254f4c;
            case 0x254F50u: goto label_254f50;
            case 0x254F54u: goto label_254f54;
            case 0x254F58u: goto label_254f58;
            case 0x254F5Cu: goto label_254f5c;
            case 0x254F60u: goto label_254f60;
            case 0x254F64u: goto label_254f64;
            case 0x254F68u: goto label_254f68;
            case 0x254F6Cu: goto label_254f6c;
            case 0x254F70u: goto label_254f70;
            case 0x254F74u: goto label_254f74;
            case 0x254F78u: goto label_254f78;
            case 0x254F7Cu: goto label_254f7c;
            case 0x254F80u: goto label_254f80;
            case 0x254F84u: goto label_254f84;
            case 0x254F88u: goto label_254f88;
            case 0x254F8Cu: goto label_254f8c;
            case 0x254F90u: goto label_254f90;
            case 0x254F94u: goto label_254f94;
            case 0x254F98u: goto label_254f98;
            case 0x254F9Cu: goto label_254f9c;
            case 0x254FA0u: goto label_254fa0;
            case 0x254FA4u: goto label_254fa4;
            case 0x254FA8u: goto label_254fa8;
            case 0x254FACu: goto label_254fac;
            case 0x254FB0u: goto label_254fb0;
            case 0x254FB4u: goto label_254fb4;
            case 0x254FB8u: goto label_254fb8;
            case 0x254FBCu: goto label_254fbc;
            case 0x254FC0u: goto label_254fc0;
            case 0x254FC4u: goto label_254fc4;
            case 0x254FC8u: goto label_254fc8;
            case 0x254FCCu: goto label_254fcc;
            case 0x254FD0u: goto label_254fd0;
            case 0x254FD4u: goto label_254fd4;
            case 0x254FD8u: goto label_254fd8;
            case 0x254FDCu: goto label_254fdc;
            case 0x254FE0u: goto label_254fe0;
            case 0x254FE4u: goto label_254fe4;
            case 0x254FE8u: goto label_254fe8;
            case 0x254FECu: goto label_254fec;
            case 0x254FF0u: goto label_254ff0;
            case 0x254FF4u: goto label_254ff4;
            case 0x254FF8u: goto label_254ff8;
            case 0x254FFCu: goto label_254ffc;
            case 0x255000u: goto label_255000;
            case 0x255004u: goto label_255004;
            case 0x255008u: goto label_255008;
            case 0x25500Cu: goto label_25500c;
            case 0x255010u: goto label_255010;
            case 0x255014u: goto label_255014;
            case 0x255018u: goto label_255018;
            case 0x25501Cu: goto label_25501c;
            case 0x255020u: goto label_255020;
            case 0x255024u: goto label_255024;
            case 0x255028u: goto label_255028;
            case 0x25502Cu: goto label_25502c;
            case 0x255030u: goto label_255030;
            case 0x255034u: goto label_255034;
            case 0x255038u: goto label_255038;
            case 0x25503Cu: goto label_25503c;
            case 0x255040u: goto label_255040;
            case 0x255044u: goto label_255044;
            case 0x255048u: goto label_255048;
            case 0x25504Cu: goto label_25504c;
            case 0x255050u: goto label_255050;
            case 0x255054u: goto label_255054;
            case 0x255058u: goto label_255058;
            case 0x25505Cu: goto label_25505c;
            case 0x255060u: goto label_255060;
            case 0x255064u: goto label_255064;
            case 0x255068u: goto label_255068;
            case 0x25506Cu: goto label_25506c;
            case 0x255070u: goto label_255070;
            case 0x255074u: goto label_255074;
            case 0x255078u: goto label_255078;
            case 0x25507Cu: goto label_25507c;
            case 0x255080u: goto label_255080;
            case 0x255084u: goto label_255084;
            case 0x255088u: goto label_255088;
            case 0x25508Cu: goto label_25508c;
            case 0x255090u: goto label_255090;
            case 0x255094u: goto label_255094;
            case 0x255098u: goto label_255098;
            case 0x25509Cu: goto label_25509c;
            case 0x2550A0u: goto label_2550a0;
            case 0x2550A4u: goto label_2550a4;
            case 0x2550A8u: goto label_2550a8;
            case 0x2550ACu: goto label_2550ac;
            case 0x2550B0u: goto label_2550b0;
            case 0x2550B4u: goto label_2550b4;
            case 0x2550B8u: goto label_2550b8;
            case 0x2550BCu: goto label_2550bc;
            case 0x2550C0u: goto label_2550c0;
            case 0x2550C4u: goto label_2550c4;
            case 0x2550C8u: goto label_2550c8;
            case 0x2550CCu: goto label_2550cc;
            case 0x2550D0u: goto label_2550d0;
            case 0x2550D4u: goto label_2550d4;
            case 0x2550D8u: goto label_2550d8;
            case 0x2550DCu: goto label_2550dc;
            case 0x2550E0u: goto label_2550e0;
            case 0x2550E4u: goto label_2550e4;
            case 0x2550E8u: goto label_2550e8;
            case 0x2550ECu: goto label_2550ec;
            case 0x2550F0u: goto label_2550f0;
            case 0x2550F4u: goto label_2550f4;
            case 0x2550F8u: goto label_2550f8;
            case 0x2550FCu: goto label_2550fc;
            case 0x255100u: goto label_255100;
            case 0x255104u: goto label_255104;
            case 0x255108u: goto label_255108;
            case 0x25510Cu: goto label_25510c;
            case 0x255110u: goto label_255110;
            case 0x255114u: goto label_255114;
            case 0x255118u: goto label_255118;
            case 0x25511Cu: goto label_25511c;
            case 0x255120u: goto label_255120;
            case 0x255124u: goto label_255124;
            case 0x255128u: goto label_255128;
            case 0x25512Cu: goto label_25512c;
            case 0x255130u: goto label_255130;
            case 0x255134u: goto label_255134;
            case 0x255138u: goto label_255138;
            case 0x25513Cu: goto label_25513c;
            case 0x255140u: goto label_255140;
            case 0x255144u: goto label_255144;
            case 0x255148u: goto label_255148;
            case 0x25514Cu: goto label_25514c;
            case 0x255150u: goto label_255150;
            case 0x255154u: goto label_255154;
            case 0x255158u: goto label_255158;
            case 0x25515Cu: goto label_25515c;
            case 0x255160u: goto label_255160;
            case 0x255164u: goto label_255164;
            case 0x255168u: goto label_255168;
            case 0x25516Cu: goto label_25516c;
            case 0x255170u: goto label_255170;
            case 0x255174u: goto label_255174;
            case 0x255178u: goto label_255178;
            case 0x25517Cu: goto label_25517c;
            case 0x255180u: goto label_255180;
            case 0x255184u: goto label_255184;
            case 0x255188u: goto label_255188;
            case 0x25518Cu: goto label_25518c;
            case 0x255190u: goto label_255190;
            case 0x255194u: goto label_255194;
            case 0x255198u: goto label_255198;
            case 0x25519Cu: goto label_25519c;
            case 0x2551A0u: goto label_2551a0;
            case 0x2551A4u: goto label_2551a4;
            case 0x2551A8u: goto label_2551a8;
            case 0x2551ACu: goto label_2551ac;
            case 0x2551B0u: goto label_2551b0;
            case 0x2551B4u: goto label_2551b4;
            case 0x2551B8u: goto label_2551b8;
            case 0x2551BCu: goto label_2551bc;
            case 0x2551C0u: goto label_2551c0;
            case 0x2551C4u: goto label_2551c4;
            case 0x2551C8u: goto label_2551c8;
            case 0x2551CCu: goto label_2551cc;
            case 0x2551D0u: goto label_2551d0;
            case 0x2551D4u: goto label_2551d4;
            case 0x2551D8u: goto label_2551d8;
            case 0x2551DCu: goto label_2551dc;
            case 0x2551E0u: goto label_2551e0;
            case 0x2551E4u: goto label_2551e4;
            case 0x2551E8u: goto label_2551e8;
            case 0x2551ECu: goto label_2551ec;
            case 0x2551F0u: goto label_2551f0;
            case 0x2551F4u: goto label_2551f4;
            case 0x2551F8u: goto label_2551f8;
            case 0x2551FCu: goto label_2551fc;
            case 0x255200u: goto label_255200;
            case 0x255204u: goto label_255204;
            case 0x255208u: goto label_255208;
            case 0x25520Cu: goto label_25520c;
            case 0x255210u: goto label_255210;
            case 0x255214u: goto label_255214;
            case 0x255218u: goto label_255218;
            case 0x25521Cu: goto label_25521c;
            case 0x255220u: goto label_255220;
            case 0x255224u: goto label_255224;
            case 0x255228u: goto label_255228;
            case 0x25522Cu: goto label_25522c;
            case 0x255230u: goto label_255230;
            case 0x255234u: goto label_255234;
            case 0x255238u: goto label_255238;
            case 0x25523Cu: goto label_25523c;
            case 0x255240u: goto label_255240;
            case 0x255244u: goto label_255244;
            case 0x255248u: goto label_255248;
            case 0x25524Cu: goto label_25524c;
            case 0x255250u: goto label_255250;
            case 0x255254u: goto label_255254;
            case 0x255258u: goto label_255258;
            case 0x25525Cu: goto label_25525c;
            case 0x255260u: goto label_255260;
            case 0x255264u: goto label_255264;
            case 0x255268u: goto label_255268;
            case 0x25526Cu: goto label_25526c;
            case 0x255270u: goto label_255270;
            case 0x255274u: goto label_255274;
            case 0x255278u: goto label_255278;
            case 0x25527Cu: goto label_25527c;
            case 0x255280u: goto label_255280;
            case 0x255284u: goto label_255284;
            case 0x255288u: goto label_255288;
            case 0x25528Cu: goto label_25528c;
            case 0x255290u: goto label_255290;
            case 0x255294u: goto label_255294;
            case 0x255298u: goto label_255298;
            case 0x25529Cu: goto label_25529c;
            case 0x2552A0u: goto label_2552a0;
            case 0x2552A4u: goto label_2552a4;
            case 0x2552A8u: goto label_2552a8;
            case 0x2552ACu: goto label_2552ac;
            case 0x2552B0u: goto label_2552b0;
            case 0x2552B4u: goto label_2552b4;
            case 0x2552B8u: goto label_2552b8;
            case 0x2552BCu: goto label_2552bc;
            case 0x2552C0u: goto label_2552c0;
            case 0x2552C4u: goto label_2552c4;
            case 0x2552C8u: goto label_2552c8;
            case 0x2552CCu: goto label_2552cc;
            case 0x2552D0u: goto label_2552d0;
            case 0x2552D4u: goto label_2552d4;
            case 0x2552D8u: goto label_2552d8;
            case 0x2552DCu: goto label_2552dc;
            case 0x2552E0u: goto label_2552e0;
            case 0x2552E4u: goto label_2552e4;
            case 0x2552E8u: goto label_2552e8;
            case 0x2552ECu: goto label_2552ec;
            case 0x2552F0u: goto label_2552f0;
            case 0x2552F4u: goto label_2552f4;
            case 0x2552F8u: goto label_2552f8;
            case 0x2552FCu: goto label_2552fc;
            case 0x255300u: goto label_255300;
            case 0x255304u: goto label_255304;
            case 0x255308u: goto label_255308;
            case 0x25530Cu: goto label_25530c;
            case 0x255310u: goto label_255310;
            case 0x255314u: goto label_255314;
            case 0x255318u: goto label_255318;
            case 0x25531Cu: goto label_25531c;
            case 0x255320u: goto label_255320;
            case 0x255324u: goto label_255324;
            case 0x255328u: goto label_255328;
            case 0x25532Cu: goto label_25532c;
            case 0x255330u: goto label_255330;
            case 0x255334u: goto label_255334;
            case 0x255338u: goto label_255338;
            case 0x25533Cu: goto label_25533c;
            case 0x255340u: goto label_255340;
            case 0x255344u: goto label_255344;
            case 0x255348u: goto label_255348;
            case 0x25534Cu: goto label_25534c;
            case 0x255350u: goto label_255350;
            case 0x255354u: goto label_255354;
            case 0x255358u: goto label_255358;
            case 0x25535Cu: goto label_25535c;
            case 0x255360u: goto label_255360;
            case 0x255364u: goto label_255364;
            case 0x255368u: goto label_255368;
            case 0x25536Cu: goto label_25536c;
            case 0x255370u: goto label_255370;
            case 0x255374u: goto label_255374;
            case 0x255378u: goto label_255378;
            case 0x25537Cu: goto label_25537c;
            case 0x255380u: goto label_255380;
            case 0x255384u: goto label_255384;
            case 0x255388u: goto label_255388;
            case 0x25538Cu: goto label_25538c;
            case 0x255390u: goto label_255390;
            case 0x255394u: goto label_255394;
            case 0x255398u: goto label_255398;
            case 0x25539Cu: goto label_25539c;
            case 0x2553A0u: goto label_2553a0;
            case 0x2553A4u: goto label_2553a4;
            case 0x2553A8u: goto label_2553a8;
            case 0x2553ACu: goto label_2553ac;
            case 0x2553B0u: goto label_2553b0;
            case 0x2553B4u: goto label_2553b4;
            case 0x2553B8u: goto label_2553b8;
            case 0x2553BCu: goto label_2553bc;
            case 0x2553C0u: goto label_2553c0;
            case 0x2553C4u: goto label_2553c4;
            case 0x2553C8u: goto label_2553c8;
            case 0x2553CCu: goto label_2553cc;
            case 0x2553D0u: goto label_2553d0;
            case 0x2553D4u: goto label_2553d4;
            case 0x2553D8u: goto label_2553d8;
            case 0x2553DCu: goto label_2553dc;
            case 0x2553E0u: goto label_2553e0;
            case 0x2553E4u: goto label_2553e4;
            case 0x2553E8u: goto label_2553e8;
            case 0x2553ECu: goto label_2553ec;
            case 0x2553F0u: goto label_2553f0;
            case 0x2553F4u: goto label_2553f4;
            case 0x2553F8u: goto label_2553f8;
            case 0x2553FCu: goto label_2553fc;
            case 0x255400u: goto label_255400;
            case 0x255404u: goto label_255404;
            case 0x255408u: goto label_255408;
            case 0x25540Cu: goto label_25540c;
            case 0x255410u: goto label_255410;
            case 0x255414u: goto label_255414;
            case 0x255418u: goto label_255418;
            case 0x25541Cu: goto label_25541c;
            case 0x255420u: goto label_255420;
            case 0x255424u: goto label_255424;
            case 0x255428u: goto label_255428;
            case 0x25542Cu: goto label_25542c;
            case 0x255430u: goto label_255430;
            case 0x255434u: goto label_255434;
            case 0x255438u: goto label_255438;
            case 0x25543Cu: goto label_25543c;
            case 0x255440u: goto label_255440;
            case 0x255444u: goto label_255444;
            case 0x255448u: goto label_255448;
            case 0x25544Cu: goto label_25544c;
            case 0x255450u: goto label_255450;
            case 0x255454u: goto label_255454;
            case 0x255458u: goto label_255458;
            case 0x25545Cu: goto label_25545c;
            case 0x255460u: goto label_255460;
            case 0x255464u: goto label_255464;
            case 0x255468u: goto label_255468;
            case 0x25546Cu: goto label_25546c;
            case 0x255470u: goto label_255470;
            case 0x255474u: goto label_255474;
            case 0x255478u: goto label_255478;
            case 0x25547Cu: goto label_25547c;
            case 0x255480u: goto label_255480;
            case 0x255484u: goto label_255484;
            case 0x255488u: goto label_255488;
            case 0x25548Cu: goto label_25548c;
            case 0x255490u: goto label_255490;
            case 0x255494u: goto label_255494;
            case 0x255498u: goto label_255498;
            case 0x25549Cu: goto label_25549c;
            case 0x2554A0u: goto label_2554a0;
            case 0x2554A4u: goto label_2554a4;
            case 0x2554A8u: goto label_2554a8;
            case 0x2554ACu: goto label_2554ac;
            case 0x2554B0u: goto label_2554b0;
            case 0x2554B4u: goto label_2554b4;
            case 0x2554B8u: goto label_2554b8;
            case 0x2554BCu: goto label_2554bc;
            case 0x2554C0u: goto label_2554c0;
            case 0x2554C4u: goto label_2554c4;
            case 0x2554C8u: goto label_2554c8;
            case 0x2554CCu: goto label_2554cc;
            case 0x2554D0u: goto label_2554d0;
            case 0x2554D4u: goto label_2554d4;
            case 0x2554D8u: goto label_2554d8;
            case 0x2554DCu: goto label_2554dc;
            case 0x2554E0u: goto label_2554e0;
            case 0x2554E4u: goto label_2554e4;
            case 0x2554E8u: goto label_2554e8;
            case 0x2554ECu: goto label_2554ec;
            case 0x2554F0u: goto label_2554f0;
            case 0x2554F4u: goto label_2554f4;
            case 0x2554F8u: goto label_2554f8;
            case 0x2554FCu: goto label_2554fc;
            case 0x255500u: goto label_255500;
            case 0x255504u: goto label_255504;
            case 0x255508u: goto label_255508;
            case 0x25550Cu: goto label_25550c;
            case 0x255510u: goto label_255510;
            case 0x255514u: goto label_255514;
            case 0x255518u: goto label_255518;
            case 0x25551Cu: goto label_25551c;
            case 0x255520u: goto label_255520;
            case 0x255524u: goto label_255524;
            case 0x255528u: goto label_255528;
            case 0x25552Cu: goto label_25552c;
            case 0x255530u: goto label_255530;
            case 0x255534u: goto label_255534;
            case 0x255538u: goto label_255538;
            case 0x25553Cu: goto label_25553c;
            case 0x255540u: goto label_255540;
            case 0x255544u: goto label_255544;
            case 0x255548u: goto label_255548;
            case 0x25554Cu: goto label_25554c;
            case 0x255550u: goto label_255550;
            case 0x255554u: goto label_255554;
            case 0x255558u: goto label_255558;
            case 0x25555Cu: goto label_25555c;
            case 0x255560u: goto label_255560;
            case 0x255564u: goto label_255564;
            case 0x255568u: goto label_255568;
            case 0x25556Cu: goto label_25556c;
            case 0x255570u: goto label_255570;
            case 0x255574u: goto label_255574;
            case 0x255578u: goto label_255578;
            case 0x25557Cu: goto label_25557c;
            case 0x255580u: goto label_255580;
            case 0x255584u: goto label_255584;
            case 0x255588u: goto label_255588;
            case 0x25558Cu: goto label_25558c;
            case 0x255590u: goto label_255590;
            case 0x255594u: goto label_255594;
            case 0x255598u: goto label_255598;
            case 0x25559Cu: goto label_25559c;
            case 0x2555A0u: goto label_2555a0;
            case 0x2555A4u: goto label_2555a4;
            case 0x2555A8u: goto label_2555a8;
            case 0x2555ACu: goto label_2555ac;
            case 0x2555B0u: goto label_2555b0;
            case 0x2555B4u: goto label_2555b4;
            case 0x2555B8u: goto label_2555b8;
            case 0x2555BCu: goto label_2555bc;
            case 0x2555C0u: goto label_2555c0;
            case 0x2555C4u: goto label_2555c4;
            case 0x2555C8u: goto label_2555c8;
            case 0x2555CCu: goto label_2555cc;
            case 0x2555D0u: goto label_2555d0;
            case 0x2555D4u: goto label_2555d4;
            case 0x2555D8u: goto label_2555d8;
            case 0x2555DCu: goto label_2555dc;
            case 0x2555E0u: goto label_2555e0;
            case 0x2555E4u: goto label_2555e4;
            case 0x2555E8u: goto label_2555e8;
            case 0x2555ECu: goto label_2555ec;
            case 0x2555F0u: goto label_2555f0;
            case 0x2555F4u: goto label_2555f4;
            case 0x2555F8u: goto label_2555f8;
            case 0x2555FCu: goto label_2555fc;
            case 0x255600u: goto label_255600;
            case 0x255604u: goto label_255604;
            case 0x255608u: goto label_255608;
            case 0x25560Cu: goto label_25560c;
            case 0x255610u: goto label_255610;
            case 0x255614u: goto label_255614;
            case 0x255618u: goto label_255618;
            case 0x25561Cu: goto label_25561c;
            case 0x255620u: goto label_255620;
            case 0x255624u: goto label_255624;
            case 0x255628u: goto label_255628;
            case 0x25562Cu: goto label_25562c;
            case 0x255630u: goto label_255630;
            case 0x255634u: goto label_255634;
            case 0x255638u: goto label_255638;
            case 0x25563Cu: goto label_25563c;
            case 0x255640u: goto label_255640;
            case 0x255644u: goto label_255644;
            case 0x255648u: goto label_255648;
            case 0x25564Cu: goto label_25564c;
            case 0x255650u: goto label_255650;
            case 0x255654u: goto label_255654;
            case 0x255658u: goto label_255658;
            case 0x25565Cu: goto label_25565c;
            case 0x255660u: goto label_255660;
            case 0x255664u: goto label_255664;
            case 0x255668u: goto label_255668;
            case 0x25566Cu: goto label_25566c;
            case 0x255670u: goto label_255670;
            case 0x255674u: goto label_255674;
            case 0x255678u: goto label_255678;
            case 0x25567Cu: goto label_25567c;
            case 0x255680u: goto label_255680;
            case 0x255684u: goto label_255684;
            case 0x255688u: goto label_255688;
            case 0x25568Cu: goto label_25568c;
            case 0x255690u: goto label_255690;
            case 0x255694u: goto label_255694;
            case 0x255698u: goto label_255698;
            case 0x25569Cu: goto label_25569c;
            case 0x2556A0u: goto label_2556a0;
            case 0x2556A4u: goto label_2556a4;
            case 0x2556A8u: goto label_2556a8;
            case 0x2556ACu: goto label_2556ac;
            case 0x2556B0u: goto label_2556b0;
            case 0x2556B4u: goto label_2556b4;
            case 0x2556B8u: goto label_2556b8;
            case 0x2556BCu: goto label_2556bc;
            case 0x2556C0u: goto label_2556c0;
            case 0x2556C4u: goto label_2556c4;
            case 0x2556C8u: goto label_2556c8;
            case 0x2556CCu: goto label_2556cc;
            case 0x2556D0u: goto label_2556d0;
            case 0x2556D4u: goto label_2556d4;
            case 0x2556D8u: goto label_2556d8;
            case 0x2556DCu: goto label_2556dc;
            case 0x2556E0u: goto label_2556e0;
            case 0x2556E4u: goto label_2556e4;
            case 0x2556E8u: goto label_2556e8;
            case 0x2556ECu: goto label_2556ec;
            case 0x2556F0u: goto label_2556f0;
            case 0x2556F4u: goto label_2556f4;
            case 0x2556F8u: goto label_2556f8;
            case 0x2556FCu: goto label_2556fc;
            case 0x255700u: goto label_255700;
            case 0x255704u: goto label_255704;
            case 0x255708u: goto label_255708;
            case 0x25570Cu: goto label_25570c;
            case 0x255710u: goto label_255710;
            case 0x255714u: goto label_255714;
            case 0x255718u: goto label_255718;
            case 0x25571Cu: goto label_25571c;
            case 0x255720u: goto label_255720;
            case 0x255724u: goto label_255724;
            case 0x255728u: goto label_255728;
            case 0x25572Cu: goto label_25572c;
            case 0x255730u: goto label_255730;
            case 0x255734u: goto label_255734;
            case 0x255738u: goto label_255738;
            case 0x25573Cu: goto label_25573c;
            case 0x255740u: goto label_255740;
            case 0x255744u: goto label_255744;
            case 0x255748u: goto label_255748;
            case 0x25574Cu: goto label_25574c;
            case 0x255750u: goto label_255750;
            case 0x255754u: goto label_255754;
            case 0x255758u: goto label_255758;
            case 0x25575Cu: goto label_25575c;
            case 0x255760u: goto label_255760;
            case 0x255764u: goto label_255764;
            case 0x255768u: goto label_255768;
            case 0x25576Cu: goto label_25576c;
            case 0x255770u: goto label_255770;
            case 0x255774u: goto label_255774;
            case 0x255778u: goto label_255778;
            case 0x25577Cu: goto label_25577c;
            case 0x255780u: goto label_255780;
            case 0x255784u: goto label_255784;
            case 0x255788u: goto label_255788;
            case 0x25578Cu: goto label_25578c;
            case 0x255790u: goto label_255790;
            case 0x255794u: goto label_255794;
            case 0x255798u: goto label_255798;
            case 0x25579Cu: goto label_25579c;
            case 0x2557A0u: goto label_2557a0;
            case 0x2557A4u: goto label_2557a4;
            case 0x2557A8u: goto label_2557a8;
            case 0x2557ACu: goto label_2557ac;
            case 0x2557B0u: goto label_2557b0;
            case 0x2557B4u: goto label_2557b4;
            case 0x2557B8u: goto label_2557b8;
            case 0x2557BCu: goto label_2557bc;
            case 0x2557C0u: goto label_2557c0;
            case 0x2557C4u: goto label_2557c4;
            case 0x2557C8u: goto label_2557c8;
            case 0x2557CCu: goto label_2557cc;
            case 0x2557D0u: goto label_2557d0;
            case 0x2557D4u: goto label_2557d4;
            case 0x2557D8u: goto label_2557d8;
            case 0x2557DCu: goto label_2557dc;
            case 0x2557E0u: goto label_2557e0;
            case 0x2557E4u: goto label_2557e4;
            case 0x2557E8u: goto label_2557e8;
            case 0x2557ECu: goto label_2557ec;
            case 0x2557F0u: goto label_2557f0;
            case 0x2557F4u: goto label_2557f4;
            case 0x2557F8u: goto label_2557f8;
            case 0x2557FCu: goto label_2557fc;
            case 0x255800u: goto label_255800;
            case 0x255804u: goto label_255804;
            case 0x255808u: goto label_255808;
            case 0x25580Cu: goto label_25580c;
            case 0x255810u: goto label_255810;
            case 0x255814u: goto label_255814;
            case 0x255818u: goto label_255818;
            case 0x25581Cu: goto label_25581c;
            case 0x255820u: goto label_255820;
            case 0x255824u: goto label_255824;
            case 0x255828u: goto label_255828;
            case 0x25582Cu: goto label_25582c;
            case 0x255830u: goto label_255830;
            case 0x255834u: goto label_255834;
            case 0x255838u: goto label_255838;
            case 0x25583Cu: goto label_25583c;
            case 0x255840u: goto label_255840;
            case 0x255844u: goto label_255844;
            case 0x255848u: goto label_255848;
            case 0x25584Cu: goto label_25584c;
            case 0x255850u: goto label_255850;
            case 0x255854u: goto label_255854;
            case 0x255858u: goto label_255858;
            case 0x25585Cu: goto label_25585c;
            case 0x255860u: goto label_255860;
            case 0x255864u: goto label_255864;
            case 0x255868u: goto label_255868;
            case 0x25586Cu: goto label_25586c;
            case 0x255870u: goto label_255870;
            case 0x255874u: goto label_255874;
            case 0x255878u: goto label_255878;
            case 0x25587Cu: goto label_25587c;
            case 0x255880u: goto label_255880;
            case 0x255884u: goto label_255884;
            case 0x255888u: goto label_255888;
            case 0x25588Cu: goto label_25588c;
            case 0x255890u: goto label_255890;
            case 0x255894u: goto label_255894;
            case 0x255898u: goto label_255898;
            case 0x25589Cu: goto label_25589c;
            case 0x2558A0u: goto label_2558a0;
            case 0x2558A4u: goto label_2558a4;
            case 0x2558A8u: goto label_2558a8;
            case 0x2558ACu: goto label_2558ac;
            case 0x2558B0u: goto label_2558b0;
            case 0x2558B4u: goto label_2558b4;
            case 0x2558B8u: goto label_2558b8;
            case 0x2558BCu: goto label_2558bc;
            case 0x2558C0u: goto label_2558c0;
            case 0x2558C4u: goto label_2558c4;
            case 0x2558C8u: goto label_2558c8;
            case 0x2558CCu: goto label_2558cc;
            case 0x2558D0u: goto label_2558d0;
            case 0x2558D4u: goto label_2558d4;
            case 0x2558D8u: goto label_2558d8;
            case 0x2558DCu: goto label_2558dc;
            case 0x2558E0u: goto label_2558e0;
            case 0x2558E4u: goto label_2558e4;
            case 0x2558E8u: goto label_2558e8;
            case 0x2558ECu: goto label_2558ec;
            case 0x2558F0u: goto label_2558f0;
            case 0x2558F4u: goto label_2558f4;
            case 0x2558F8u: goto label_2558f8;
            case 0x2558FCu: goto label_2558fc;
            case 0x255900u: goto label_255900;
            case 0x255904u: goto label_255904;
            case 0x255908u: goto label_255908;
            case 0x25590Cu: goto label_25590c;
            case 0x255910u: goto label_255910;
            case 0x255914u: goto label_255914;
            case 0x255918u: goto label_255918;
            case 0x25591Cu: goto label_25591c;
            case 0x255920u: goto label_255920;
            case 0x255924u: goto label_255924;
            case 0x255928u: goto label_255928;
            case 0x25592Cu: goto label_25592c;
            case 0x255930u: goto label_255930;
            case 0x255934u: goto label_255934;
            case 0x255938u: goto label_255938;
            case 0x25593Cu: goto label_25593c;
            case 0x255940u: goto label_255940;
            case 0x255944u: goto label_255944;
            case 0x255948u: goto label_255948;
            case 0x25594Cu: goto label_25594c;
            case 0x255950u: goto label_255950;
            case 0x255954u: goto label_255954;
            case 0x255958u: goto label_255958;
            case 0x25595Cu: goto label_25595c;
            case 0x255960u: goto label_255960;
            case 0x255964u: goto label_255964;
            case 0x255968u: goto label_255968;
            case 0x25596Cu: goto label_25596c;
            case 0x255970u: goto label_255970;
            case 0x255974u: goto label_255974;
            case 0x255978u: goto label_255978;
            case 0x25597Cu: goto label_25597c;
            case 0x255980u: goto label_255980;
            case 0x255984u: goto label_255984;
            case 0x255988u: goto label_255988;
            case 0x25598Cu: goto label_25598c;
            case 0x255990u: goto label_255990;
            case 0x255994u: goto label_255994;
            case 0x255998u: goto label_255998;
            case 0x25599Cu: goto label_25599c;
            case 0x2559A0u: goto label_2559a0;
            case 0x2559A4u: goto label_2559a4;
            case 0x2559A8u: goto label_2559a8;
            case 0x2559ACu: goto label_2559ac;
            case 0x2559B0u: goto label_2559b0;
            case 0x2559B4u: goto label_2559b4;
            case 0x2559B8u: goto label_2559b8;
            case 0x2559BCu: goto label_2559bc;
            case 0x2559C0u: goto label_2559c0;
            case 0x2559C4u: goto label_2559c4;
            case 0x2559C8u: goto label_2559c8;
            case 0x2559CCu: goto label_2559cc;
            case 0x2559D0u: goto label_2559d0;
            case 0x2559D4u: goto label_2559d4;
            case 0x2559D8u: goto label_2559d8;
            case 0x2559DCu: goto label_2559dc;
            case 0x2559E0u: goto label_2559e0;
            case 0x2559E4u: goto label_2559e4;
            case 0x2559E8u: goto label_2559e8;
            case 0x2559ECu: goto label_2559ec;
            case 0x2559F0u: goto label_2559f0;
            case 0x2559F4u: goto label_2559f4;
            case 0x2559F8u: goto label_2559f8;
            case 0x2559FCu: goto label_2559fc;
            case 0x255A00u: goto label_255a00;
            case 0x255A04u: goto label_255a04;
            case 0x255A08u: goto label_255a08;
            case 0x255A0Cu: goto label_255a0c;
            case 0x255A10u: goto label_255a10;
            case 0x255A14u: goto label_255a14;
            case 0x255A18u: goto label_255a18;
            case 0x255A1Cu: goto label_255a1c;
            case 0x255A20u: goto label_255a20;
            case 0x255A24u: goto label_255a24;
            case 0x255A28u: goto label_255a28;
            case 0x255A2Cu: goto label_255a2c;
            case 0x255A30u: goto label_255a30;
            case 0x255A34u: goto label_255a34;
            case 0x255A38u: goto label_255a38;
            case 0x255A3Cu: goto label_255a3c;
            case 0x255A40u: goto label_255a40;
            case 0x255A44u: goto label_255a44;
            case 0x255A48u: goto label_255a48;
            case 0x255A4Cu: goto label_255a4c;
            case 0x255A50u: goto label_255a50;
            case 0x255A54u: goto label_255a54;
            case 0x255A58u: goto label_255a58;
            case 0x255A5Cu: goto label_255a5c;
            case 0x255A60u: goto label_255a60;
            case 0x255A64u: goto label_255a64;
            case 0x255A68u: goto label_255a68;
            case 0x255A6Cu: goto label_255a6c;
            case 0x255A70u: goto label_255a70;
            case 0x255A74u: goto label_255a74;
            case 0x255A78u: goto label_255a78;
            case 0x255A7Cu: goto label_255a7c;
            case 0x255A80u: goto label_255a80;
            case 0x255A84u: goto label_255a84;
            case 0x255A88u: goto label_255a88;
            case 0x255A8Cu: goto label_255a8c;
            case 0x255A90u: goto label_255a90;
            case 0x255A94u: goto label_255a94;
            case 0x255A98u: goto label_255a98;
            case 0x255A9Cu: goto label_255a9c;
            case 0x255AA0u: goto label_255aa0;
            case 0x255AA4u: goto label_255aa4;
            case 0x255AA8u: goto label_255aa8;
            case 0x255AACu: goto label_255aac;
            case 0x255AB0u: goto label_255ab0;
            case 0x255AB4u: goto label_255ab4;
            case 0x255AB8u: goto label_255ab8;
            case 0x255ABCu: goto label_255abc;
            case 0x255AC0u: goto label_255ac0;
            case 0x255AC4u: goto label_255ac4;
            case 0x255AC8u: goto label_255ac8;
            case 0x255ACCu: goto label_255acc;
            case 0x255AD0u: goto label_255ad0;
            case 0x255AD4u: goto label_255ad4;
            case 0x255AD8u: goto label_255ad8;
            case 0x255ADCu: goto label_255adc;
            case 0x255AE0u: goto label_255ae0;
            case 0x255AE4u: goto label_255ae4;
            case 0x255AE8u: goto label_255ae8;
            case 0x255AECu: goto label_255aec;
            case 0x255AF0u: goto label_255af0;
            case 0x255AF4u: goto label_255af4;
            case 0x255AF8u: goto label_255af8;
            case 0x255AFCu: goto label_255afc;
            case 0x255B00u: goto label_255b00;
            case 0x255B04u: goto label_255b04;
            case 0x255B08u: goto label_255b08;
            case 0x255B0Cu: goto label_255b0c;
            case 0x255B10u: goto label_255b10;
            case 0x255B14u: goto label_255b14;
            case 0x255B18u: goto label_255b18;
            case 0x255B1Cu: goto label_255b1c;
            case 0x255B20u: goto label_255b20;
            case 0x255B24u: goto label_255b24;
            case 0x255B28u: goto label_255b28;
            case 0x255B2Cu: goto label_255b2c;
            case 0x255B30u: goto label_255b30;
            case 0x255B34u: goto label_255b34;
            case 0x255B38u: goto label_255b38;
            case 0x255B3Cu: goto label_255b3c;
            case 0x255B40u: goto label_255b40;
            case 0x255B44u: goto label_255b44;
            case 0x255B48u: goto label_255b48;
            case 0x255B4Cu: goto label_255b4c;
            case 0x255B50u: goto label_255b50;
            case 0x255B54u: goto label_255b54;
            case 0x255B58u: goto label_255b58;
            case 0x255B5Cu: goto label_255b5c;
            case 0x255B60u: goto label_255b60;
            case 0x255B64u: goto label_255b64;
            case 0x255B68u: goto label_255b68;
            case 0x255B6Cu: goto label_255b6c;
            case 0x255B70u: goto label_255b70;
            case 0x255B74u: goto label_255b74;
            case 0x255B78u: goto label_255b78;
            case 0x255B7Cu: goto label_255b7c;
            case 0x255B80u: goto label_255b80;
            case 0x255B84u: goto label_255b84;
            case 0x255B88u: goto label_255b88;
            case 0x255B8Cu: goto label_255b8c;
            case 0x255B90u: goto label_255b90;
            case 0x255B94u: goto label_255b94;
            case 0x255B98u: goto label_255b98;
            case 0x255B9Cu: goto label_255b9c;
            case 0x255BA0u: goto label_255ba0;
            case 0x255BA4u: goto label_255ba4;
            case 0x255BA8u: goto label_255ba8;
            case 0x255BACu: goto label_255bac;
            case 0x255BB0u: goto label_255bb0;
            case 0x255BB4u: goto label_255bb4;
            case 0x255BB8u: goto label_255bb8;
            case 0x255BBCu: goto label_255bbc;
            case 0x255BC0u: goto label_255bc0;
            case 0x255BC4u: goto label_255bc4;
            case 0x255BC8u: goto label_255bc8;
            case 0x255BCCu: goto label_255bcc;
            case 0x255BD0u: goto label_255bd0;
            case 0x255BD4u: goto label_255bd4;
            case 0x255BD8u: goto label_255bd8;
            case 0x255BDCu: goto label_255bdc;
            case 0x255BE0u: goto label_255be0;
            case 0x255BE4u: goto label_255be4;
            case 0x255BE8u: goto label_255be8;
            case 0x255BECu: goto label_255bec;
            case 0x255BF0u: goto label_255bf0;
            case 0x255BF4u: goto label_255bf4;
            case 0x255BF8u: goto label_255bf8;
            case 0x255BFCu: goto label_255bfc;
            case 0x255C00u: goto label_255c00;
            case 0x255C04u: goto label_255c04;
            case 0x255C08u: goto label_255c08;
            case 0x255C0Cu: goto label_255c0c;
            case 0x255C10u: goto label_255c10;
            case 0x255C14u: goto label_255c14;
            case 0x255C18u: goto label_255c18;
            case 0x255C1Cu: goto label_255c1c;
            case 0x255C20u: goto label_255c20;
            case 0x255C24u: goto label_255c24;
            case 0x255C28u: goto label_255c28;
            case 0x255C2Cu: goto label_255c2c;
            case 0x255C30u: goto label_255c30;
            case 0x255C34u: goto label_255c34;
            case 0x255C38u: goto label_255c38;
            case 0x255C3Cu: goto label_255c3c;
            case 0x255C40u: goto label_255c40;
            case 0x255C44u: goto label_255c44;
            case 0x255C48u: goto label_255c48;
            case 0x255C4Cu: goto label_255c4c;
            case 0x255C50u: goto label_255c50;
            case 0x255C54u: goto label_255c54;
            case 0x255C58u: goto label_255c58;
            case 0x255C5Cu: goto label_255c5c;
            case 0x255C60u: goto label_255c60;
            case 0x255C64u: goto label_255c64;
            case 0x255C68u: goto label_255c68;
            case 0x255C6Cu: goto label_255c6c;
            case 0x255C70u: goto label_255c70;
            case 0x255C74u: goto label_255c74;
            case 0x255C78u: goto label_255c78;
            case 0x255C7Cu: goto label_255c7c;
            case 0x255C80u: goto label_255c80;
            case 0x255C84u: goto label_255c84;
            case 0x255C88u: goto label_255c88;
            case 0x255C8Cu: goto label_255c8c;
            case 0x255C90u: goto label_255c90;
            case 0x255C94u: goto label_255c94;
            case 0x255C98u: goto label_255c98;
            case 0x255C9Cu: goto label_255c9c;
            case 0x255CA0u: goto label_255ca0;
            case 0x255CA4u: goto label_255ca4;
            case 0x255CA8u: goto label_255ca8;
            case 0x255CACu: goto label_255cac;
            case 0x255CB0u: goto label_255cb0;
            case 0x255CB4u: goto label_255cb4;
            case 0x255CB8u: goto label_255cb8;
            case 0x255CBCu: goto label_255cbc;
            case 0x255CC0u: goto label_255cc0;
            case 0x255CC4u: goto label_255cc4;
            case 0x255CC8u: goto label_255cc8;
            case 0x255CCCu: goto label_255ccc;
            case 0x255CD0u: goto label_255cd0;
            case 0x255CD4u: goto label_255cd4;
            case 0x255CD8u: goto label_255cd8;
            case 0x255CDCu: goto label_255cdc;
            case 0x255CE0u: goto label_255ce0;
            case 0x255CE4u: goto label_255ce4;
            case 0x255CE8u: goto label_255ce8;
            case 0x255CECu: goto label_255cec;
            case 0x255CF0u: goto label_255cf0;
            case 0x255CF4u: goto label_255cf4;
            case 0x255CF8u: goto label_255cf8;
            case 0x255CFCu: goto label_255cfc;
            case 0x255D00u: goto label_255d00;
            case 0x255D04u: goto label_255d04;
            case 0x255D08u: goto label_255d08;
            case 0x255D0Cu: goto label_255d0c;
            case 0x255D10u: goto label_255d10;
            case 0x255D14u: goto label_255d14;
            case 0x255D18u: goto label_255d18;
            case 0x255D1Cu: goto label_255d1c;
            case 0x255D20u: goto label_255d20;
            case 0x255D24u: goto label_255d24;
            case 0x255D28u: goto label_255d28;
            case 0x255D2Cu: goto label_255d2c;
            case 0x255D30u: goto label_255d30;
            case 0x255D34u: goto label_255d34;
            case 0x255D38u: goto label_255d38;
            case 0x255D3Cu: goto label_255d3c;
            case 0x255D40u: goto label_255d40;
            case 0x255D44u: goto label_255d44;
            case 0x255D48u: goto label_255d48;
            case 0x255D4Cu: goto label_255d4c;
            case 0x255D50u: goto label_255d50;
            case 0x255D54u: goto label_255d54;
            case 0x255D58u: goto label_255d58;
            case 0x255D5Cu: goto label_255d5c;
            case 0x255D60u: goto label_255d60;
            case 0x255D64u: goto label_255d64;
            case 0x255D68u: goto label_255d68;
            case 0x255D6Cu: goto label_255d6c;
            case 0x255D70u: goto label_255d70;
            case 0x255D74u: goto label_255d74;
            case 0x255D78u: goto label_255d78;
            case 0x255D7Cu: goto label_255d7c;
            case 0x255D80u: goto label_255d80;
            case 0x255D84u: goto label_255d84;
            case 0x255D88u: goto label_255d88;
            case 0x255D8Cu: goto label_255d8c;
            case 0x255D90u: goto label_255d90;
            case 0x255D94u: goto label_255d94;
            case 0x255D98u: goto label_255d98;
            case 0x255D9Cu: goto label_255d9c;
            case 0x255DA0u: goto label_255da0;
            case 0x255DA4u: goto label_255da4;
            case 0x255DA8u: goto label_255da8;
            case 0x255DACu: goto label_255dac;
            case 0x255DB0u: goto label_255db0;
            case 0x255DB4u: goto label_255db4;
            case 0x255DB8u: goto label_255db8;
            case 0x255DBCu: goto label_255dbc;
            case 0x255DC0u: goto label_255dc0;
            case 0x255DC4u: goto label_255dc4;
            case 0x255DC8u: goto label_255dc8;
            case 0x255DCCu: goto label_255dcc;
            case 0x255DD0u: goto label_255dd0;
            case 0x255DD4u: goto label_255dd4;
            case 0x255DD8u: goto label_255dd8;
            case 0x255DDCu: goto label_255ddc;
            case 0x255DE0u: goto label_255de0;
            case 0x255DE4u: goto label_255de4;
            case 0x255DE8u: goto label_255de8;
            case 0x255DECu: goto label_255dec;
            case 0x255DF0u: goto label_255df0;
            case 0x255DF4u: goto label_255df4;
            case 0x255DF8u: goto label_255df8;
            case 0x255DFCu: goto label_255dfc;
            case 0x255E00u: goto label_255e00;
            case 0x255E04u: goto label_255e04;
            case 0x255E08u: goto label_255e08;
            case 0x255E0Cu: goto label_255e0c;
            case 0x255E10u: goto label_255e10;
            case 0x255E14u: goto label_255e14;
            case 0x255E18u: goto label_255e18;
            case 0x255E1Cu: goto label_255e1c;
            case 0x255E20u: goto label_255e20;
            case 0x255E24u: goto label_255e24;
            case 0x255E28u: goto label_255e28;
            case 0x255E2Cu: goto label_255e2c;
            case 0x255E30u: goto label_255e30;
            case 0x255E34u: goto label_255e34;
            case 0x255E38u: goto label_255e38;
            case 0x255E3Cu: goto label_255e3c;
            case 0x255E40u: goto label_255e40;
            case 0x255E44u: goto label_255e44;
            case 0x255E48u: goto label_255e48;
            case 0x255E4Cu: goto label_255e4c;
            case 0x255E50u: goto label_255e50;
            case 0x255E54u: goto label_255e54;
            case 0x255E58u: goto label_255e58;
            case 0x255E5Cu: goto label_255e5c;
            case 0x255E60u: goto label_255e60;
            case 0x255E64u: goto label_255e64;
            case 0x255E68u: goto label_255e68;
            case 0x255E6Cu: goto label_255e6c;
            case 0x255E70u: goto label_255e70;
            case 0x255E74u: goto label_255e74;
            case 0x255E78u: goto label_255e78;
            case 0x255E7Cu: goto label_255e7c;
            case 0x255E80u: goto label_255e80;
            case 0x255E84u: goto label_255e84;
            case 0x255E88u: goto label_255e88;
            case 0x255E8Cu: goto label_255e8c;
            case 0x255E90u: goto label_255e90;
            case 0x255E94u: goto label_255e94;
            case 0x255E98u: goto label_255e98;
            case 0x255E9Cu: goto label_255e9c;
            case 0x255EA0u: goto label_255ea0;
            case 0x255EA4u: goto label_255ea4;
            case 0x255EA8u: goto label_255ea8;
            case 0x255EACu: goto label_255eac;
            case 0x255EB0u: goto label_255eb0;
            case 0x255EB4u: goto label_255eb4;
            case 0x255EB8u: goto label_255eb8;
            case 0x255EBCu: goto label_255ebc;
            case 0x255EC0u: goto label_255ec0;
            case 0x255EC4u: goto label_255ec4;
            case 0x255EC8u: goto label_255ec8;
            case 0x255ECCu: goto label_255ecc;
            case 0x255ED0u: goto label_255ed0;
            case 0x255ED4u: goto label_255ed4;
            case 0x255ED8u: goto label_255ed8;
            case 0x255EDCu: goto label_255edc;
            case 0x255EE0u: goto label_255ee0;
            case 0x255EE4u: goto label_255ee4;
            case 0x255EE8u: goto label_255ee8;
            case 0x255EECu: goto label_255eec;
            case 0x255EF0u: goto label_255ef0;
            case 0x255EF4u: goto label_255ef4;
            case 0x255EF8u: goto label_255ef8;
            case 0x255EFCu: goto label_255efc;
            case 0x255F00u: goto label_255f00;
            case 0x255F04u: goto label_255f04;
            case 0x255F08u: goto label_255f08;
            case 0x255F0Cu: goto label_255f0c;
            case 0x255F10u: goto label_255f10;
            case 0x255F14u: goto label_255f14;
            case 0x255F18u: goto label_255f18;
            case 0x255F1Cu: goto label_255f1c;
            case 0x255F20u: goto label_255f20;
            case 0x255F24u: goto label_255f24;
            case 0x255F28u: goto label_255f28;
            case 0x255F2Cu: goto label_255f2c;
            case 0x255F30u: goto label_255f30;
            case 0x255F34u: goto label_255f34;
            case 0x255F38u: goto label_255f38;
            case 0x255F3Cu: goto label_255f3c;
            case 0x255F40u: goto label_255f40;
            case 0x255F44u: goto label_255f44;
            case 0x255F48u: goto label_255f48;
            case 0x255F4Cu: goto label_255f4c;
            case 0x255F50u: goto label_255f50;
            case 0x255F54u: goto label_255f54;
            case 0x255F58u: goto label_255f58;
            case 0x255F5Cu: goto label_255f5c;
            case 0x255F60u: goto label_255f60;
            case 0x255F64u: goto label_255f64;
            case 0x255F68u: goto label_255f68;
            case 0x255F6Cu: goto label_255f6c;
            case 0x255F70u: goto label_255f70;
            case 0x255F74u: goto label_255f74;
            case 0x255F78u: goto label_255f78;
            case 0x255F7Cu: goto label_255f7c;
            case 0x255F80u: goto label_255f80;
            case 0x255F84u: goto label_255f84;
            case 0x255F88u: goto label_255f88;
            case 0x255F8Cu: goto label_255f8c;
            case 0x255F90u: goto label_255f90;
            case 0x255F94u: goto label_255f94;
            case 0x255F98u: goto label_255f98;
            case 0x255F9Cu: goto label_255f9c;
            case 0x255FA0u: goto label_255fa0;
            case 0x255FA4u: goto label_255fa4;
            case 0x255FA8u: goto label_255fa8;
            case 0x255FACu: goto label_255fac;
            case 0x255FB0u: goto label_255fb0;
            case 0x255FB4u: goto label_255fb4;
            case 0x255FB8u: goto label_255fb8;
            case 0x255FBCu: goto label_255fbc;
            case 0x255FC0u: goto label_255fc0;
            case 0x255FC4u: goto label_255fc4;
            case 0x255FC8u: goto label_255fc8;
            case 0x255FCCu: goto label_255fcc;
            case 0x255FD0u: goto label_255fd0;
            case 0x255FD4u: goto label_255fd4;
            case 0x255FD8u: goto label_255fd8;
            case 0x255FDCu: goto label_255fdc;
            case 0x255FE0u: goto label_255fe0;
            case 0x255FE4u: goto label_255fe4;
            case 0x255FE8u: goto label_255fe8;
            case 0x255FECu: goto label_255fec;
            case 0x255FF0u: goto label_255ff0;
            case 0x255FF4u: goto label_255ff4;
            case 0x255FF8u: goto label_255ff8;
            case 0x255FFCu: goto label_255ffc;
            case 0x256000u: goto label_256000;
            case 0x256004u: goto label_256004;
            case 0x256008u: goto label_256008;
            case 0x25600Cu: goto label_25600c;
            case 0x256010u: goto label_256010;
            case 0x256014u: goto label_256014;
            case 0x256018u: goto label_256018;
            case 0x25601Cu: goto label_25601c;
            case 0x256020u: goto label_256020;
            case 0x256024u: goto label_256024;
            case 0x256028u: goto label_256028;
            case 0x25602Cu: goto label_25602c;
            case 0x256030u: goto label_256030;
            case 0x256034u: goto label_256034;
            case 0x256038u: goto label_256038;
            case 0x25603Cu: goto label_25603c;
            case 0x256040u: goto label_256040;
            case 0x256044u: goto label_256044;
            case 0x256048u: goto label_256048;
            case 0x25604Cu: goto label_25604c;
            case 0x256050u: goto label_256050;
            case 0x256054u: goto label_256054;
            case 0x256058u: goto label_256058;
            case 0x25605Cu: goto label_25605c;
            case 0x256060u: goto label_256060;
            case 0x256064u: goto label_256064;
            case 0x256068u: goto label_256068;
            case 0x25606Cu: goto label_25606c;
            case 0x256070u: goto label_256070;
            case 0x256074u: goto label_256074;
            case 0x256078u: goto label_256078;
            case 0x25607Cu: goto label_25607c;
            case 0x256080u: goto label_256080;
            case 0x256084u: goto label_256084;
            case 0x256088u: goto label_256088;
            case 0x25608Cu: goto label_25608c;
            case 0x256090u: goto label_256090;
            case 0x256094u: goto label_256094;
            case 0x256098u: goto label_256098;
            case 0x25609Cu: goto label_25609c;
            case 0x2560A0u: goto label_2560a0;
            case 0x2560A4u: goto label_2560a4;
            case 0x2560A8u: goto label_2560a8;
            case 0x2560ACu: goto label_2560ac;
            case 0x2560B0u: goto label_2560b0;
            case 0x2560B4u: goto label_2560b4;
            case 0x2560B8u: goto label_2560b8;
            case 0x2560BCu: goto label_2560bc;
            case 0x2560C0u: goto label_2560c0;
            case 0x2560C4u: goto label_2560c4;
            case 0x2560C8u: goto label_2560c8;
            case 0x2560CCu: goto label_2560cc;
            case 0x2560D0u: goto label_2560d0;
            case 0x2560D4u: goto label_2560d4;
            case 0x2560D8u: goto label_2560d8;
            case 0x2560DCu: goto label_2560dc;
            case 0x2560E0u: goto label_2560e0;
            case 0x2560E4u: goto label_2560e4;
            case 0x2560E8u: goto label_2560e8;
            case 0x2560ECu: goto label_2560ec;
            case 0x2560F0u: goto label_2560f0;
            case 0x2560F4u: goto label_2560f4;
            case 0x2560F8u: goto label_2560f8;
            case 0x2560FCu: goto label_2560fc;
            case 0x256100u: goto label_256100;
            case 0x256104u: goto label_256104;
            case 0x256108u: goto label_256108;
            case 0x25610Cu: goto label_25610c;
            case 0x256110u: goto label_256110;
            case 0x256114u: goto label_256114;
            case 0x256118u: goto label_256118;
            case 0x25611Cu: goto label_25611c;
            case 0x256120u: goto label_256120;
            case 0x256124u: goto label_256124;
            case 0x256128u: goto label_256128;
            case 0x25612Cu: goto label_25612c;
            case 0x256130u: goto label_256130;
            case 0x256134u: goto label_256134;
            case 0x256138u: goto label_256138;
            case 0x25613Cu: goto label_25613c;
            case 0x256140u: goto label_256140;
            case 0x256144u: goto label_256144;
            case 0x256148u: goto label_256148;
            case 0x25614Cu: goto label_25614c;
            case 0x256150u: goto label_256150;
            case 0x256154u: goto label_256154;
            case 0x256158u: goto label_256158;
            case 0x25615Cu: goto label_25615c;
            case 0x256160u: goto label_256160;
            case 0x256164u: goto label_256164;
            case 0x256168u: goto label_256168;
            case 0x25616Cu: goto label_25616c;
            case 0x256170u: goto label_256170;
            case 0x256174u: goto label_256174;
            case 0x256178u: goto label_256178;
            case 0x25617Cu: goto label_25617c;
            case 0x256180u: goto label_256180;
            case 0x256184u: goto label_256184;
            case 0x256188u: goto label_256188;
            case 0x25618Cu: goto label_25618c;
            case 0x256190u: goto label_256190;
            case 0x256194u: goto label_256194;
            case 0x256198u: goto label_256198;
            case 0x25619Cu: goto label_25619c;
            case 0x2561A0u: goto label_2561a0;
            case 0x2561A4u: goto label_2561a4;
            case 0x2561A8u: goto label_2561a8;
            case 0x2561ACu: goto label_2561ac;
            case 0x2561B0u: goto label_2561b0;
            case 0x2561B4u: goto label_2561b4;
            case 0x2561B8u: goto label_2561b8;
            case 0x2561BCu: goto label_2561bc;
            case 0x2561C0u: goto label_2561c0;
            case 0x2561C4u: goto label_2561c4;
            case 0x2561C8u: goto label_2561c8;
            case 0x2561CCu: goto label_2561cc;
            case 0x2561D0u: goto label_2561d0;
            case 0x2561D4u: goto label_2561d4;
            case 0x2561D8u: goto label_2561d8;
            case 0x2561DCu: goto label_2561dc;
            case 0x2561E0u: goto label_2561e0;
            case 0x2561E4u: goto label_2561e4;
            case 0x2561E8u: goto label_2561e8;
            case 0x2561ECu: goto label_2561ec;
            case 0x2561F0u: goto label_2561f0;
            case 0x2561F4u: goto label_2561f4;
            case 0x2561F8u: goto label_2561f8;
            case 0x2561FCu: goto label_2561fc;
            case 0x256200u: goto label_256200;
            case 0x256204u: goto label_256204;
            case 0x256208u: goto label_256208;
            case 0x25620Cu: goto label_25620c;
            case 0x256210u: goto label_256210;
            case 0x256214u: goto label_256214;
            case 0x256218u: goto label_256218;
            case 0x25621Cu: goto label_25621c;
            case 0x256220u: goto label_256220;
            case 0x256224u: goto label_256224;
            case 0x256228u: goto label_256228;
            case 0x25622Cu: goto label_25622c;
            case 0x256230u: goto label_256230;
            case 0x256234u: goto label_256234;
            case 0x256238u: goto label_256238;
            case 0x25623Cu: goto label_25623c;
            case 0x256240u: goto label_256240;
            case 0x256244u: goto label_256244;
            case 0x256248u: goto label_256248;
            case 0x25624Cu: goto label_25624c;
            case 0x256250u: goto label_256250;
            case 0x256254u: goto label_256254;
            case 0x256258u: goto label_256258;
            case 0x25625Cu: goto label_25625c;
            case 0x256260u: goto label_256260;
            case 0x256264u: goto label_256264;
            case 0x256268u: goto label_256268;
            case 0x25626Cu: goto label_25626c;
            case 0x256270u: goto label_256270;
            case 0x256274u: goto label_256274;
            case 0x256278u: goto label_256278;
            case 0x25627Cu: goto label_25627c;
            case 0x256280u: goto label_256280;
            case 0x256284u: goto label_256284;
            case 0x256288u: goto label_256288;
            case 0x25628Cu: goto label_25628c;
            case 0x256290u: goto label_256290;
            case 0x256294u: goto label_256294;
            case 0x256298u: goto label_256298;
            case 0x25629Cu: goto label_25629c;
            case 0x2562A0u: goto label_2562a0;
            case 0x2562A4u: goto label_2562a4;
            case 0x2562A8u: goto label_2562a8;
            case 0x2562ACu: goto label_2562ac;
            case 0x2562B0u: goto label_2562b0;
            case 0x2562B4u: goto label_2562b4;
            case 0x2562B8u: goto label_2562b8;
            case 0x2562BCu: goto label_2562bc;
            case 0x2562C0u: goto label_2562c0;
            case 0x2562C4u: goto label_2562c4;
            case 0x2562C8u: goto label_2562c8;
            case 0x2562CCu: goto label_2562cc;
            case 0x2562D0u: goto label_2562d0;
            case 0x2562D4u: goto label_2562d4;
            case 0x2562D8u: goto label_2562d8;
            case 0x2562DCu: goto label_2562dc;
            case 0x2562E0u: goto label_2562e0;
            case 0x2562E4u: goto label_2562e4;
            case 0x2562E8u: goto label_2562e8;
            case 0x2562ECu: goto label_2562ec;
            case 0x2562F0u: goto label_2562f0;
            case 0x2562F4u: goto label_2562f4;
            case 0x2562F8u: goto label_2562f8;
            case 0x2562FCu: goto label_2562fc;
            case 0x256300u: goto label_256300;
            case 0x256304u: goto label_256304;
            case 0x256308u: goto label_256308;
            case 0x25630Cu: goto label_25630c;
            case 0x256310u: goto label_256310;
            case 0x256314u: goto label_256314;
            case 0x256318u: goto label_256318;
            case 0x25631Cu: goto label_25631c;
            case 0x256320u: goto label_256320;
            case 0x256324u: goto label_256324;
            case 0x256328u: goto label_256328;
            case 0x25632Cu: goto label_25632c;
            case 0x256330u: goto label_256330;
            case 0x256334u: goto label_256334;
            case 0x256338u: goto label_256338;
            case 0x25633Cu: goto label_25633c;
            case 0x256340u: goto label_256340;
            case 0x256344u: goto label_256344;
            case 0x256348u: goto label_256348;
            case 0x25634Cu: goto label_25634c;
            case 0x256350u: goto label_256350;
            case 0x256354u: goto label_256354;
            case 0x256358u: goto label_256358;
            case 0x25635Cu: goto label_25635c;
            case 0x256360u: goto label_256360;
            case 0x256364u: goto label_256364;
            case 0x256368u: goto label_256368;
            case 0x25636Cu: goto label_25636c;
            case 0x256370u: goto label_256370;
            case 0x256374u: goto label_256374;
            case 0x256378u: goto label_256378;
            case 0x25637Cu: goto label_25637c;
            case 0x256380u: goto label_256380;
            case 0x256384u: goto label_256384;
            case 0x256388u: goto label_256388;
            case 0x25638Cu: goto label_25638c;
            case 0x256390u: goto label_256390;
            case 0x256394u: goto label_256394;
            case 0x256398u: goto label_256398;
            case 0x25639Cu: goto label_25639c;
            case 0x2563A0u: goto label_2563a0;
            case 0x2563A4u: goto label_2563a4;
            case 0x2563A8u: goto label_2563a8;
            case 0x2563ACu: goto label_2563ac;
            case 0x2563B0u: goto label_2563b0;
            case 0x2563B4u: goto label_2563b4;
            case 0x2563B8u: goto label_2563b8;
            case 0x2563BCu: goto label_2563bc;
            case 0x2563C0u: goto label_2563c0;
            case 0x2563C4u: goto label_2563c4;
            case 0x2563C8u: goto label_2563c8;
            case 0x2563CCu: goto label_2563cc;
            case 0x2563D0u: goto label_2563d0;
            case 0x2563D4u: goto label_2563d4;
            case 0x2563D8u: goto label_2563d8;
            case 0x2563DCu: goto label_2563dc;
            case 0x2563E0u: goto label_2563e0;
            case 0x2563E4u: goto label_2563e4;
            case 0x2563E8u: goto label_2563e8;
            case 0x2563ECu: goto label_2563ec;
            case 0x2563F0u: goto label_2563f0;
            case 0x2563F4u: goto label_2563f4;
            case 0x2563F8u: goto label_2563f8;
            case 0x2563FCu: goto label_2563fc;
            case 0x256400u: goto label_256400;
            case 0x256404u: goto label_256404;
            case 0x256408u: goto label_256408;
            case 0x25640Cu: goto label_25640c;
            case 0x256410u: goto label_256410;
            case 0x256414u: goto label_256414;
            case 0x256418u: goto label_256418;
            case 0x25641Cu: goto label_25641c;
            case 0x256420u: goto label_256420;
            case 0x256424u: goto label_256424;
            case 0x256428u: goto label_256428;
            case 0x25642Cu: goto label_25642c;
            case 0x256430u: goto label_256430;
            case 0x256434u: goto label_256434;
            case 0x256438u: goto label_256438;
            case 0x25643Cu: goto label_25643c;
            case 0x256440u: goto label_256440;
            case 0x256444u: goto label_256444;
            case 0x256448u: goto label_256448;
            case 0x25644Cu: goto label_25644c;
            case 0x256450u: goto label_256450;
            case 0x256454u: goto label_256454;
            case 0x256458u: goto label_256458;
            case 0x25645Cu: goto label_25645c;
            case 0x256460u: goto label_256460;
            case 0x256464u: goto label_256464;
            case 0x256468u: goto label_256468;
            case 0x25646Cu: goto label_25646c;
            case 0x256470u: goto label_256470;
            case 0x256474u: goto label_256474;
            case 0x256478u: goto label_256478;
            case 0x25647Cu: goto label_25647c;
            case 0x256480u: goto label_256480;
            case 0x256484u: goto label_256484;
            case 0x256488u: goto label_256488;
            case 0x25648Cu: goto label_25648c;
            case 0x256490u: goto label_256490;
            case 0x256494u: goto label_256494;
            case 0x256498u: goto label_256498;
            case 0x25649Cu: goto label_25649c;
            case 0x2564A0u: goto label_2564a0;
            case 0x2564A4u: goto label_2564a4;
            case 0x2564A8u: goto label_2564a8;
            case 0x2564ACu: goto label_2564ac;
            case 0x2564B0u: goto label_2564b0;
            case 0x2564B4u: goto label_2564b4;
            case 0x2564B8u: goto label_2564b8;
            case 0x2564BCu: goto label_2564bc;
            case 0x2564C0u: goto label_2564c0;
            case 0x2564C4u: goto label_2564c4;
            case 0x2564C8u: goto label_2564c8;
            case 0x2564CCu: goto label_2564cc;
            case 0x2564D0u: goto label_2564d0;
            case 0x2564D4u: goto label_2564d4;
            case 0x2564D8u: goto label_2564d8;
            case 0x2564DCu: goto label_2564dc;
            case 0x2564E0u: goto label_2564e0;
            case 0x2564E4u: goto label_2564e4;
            case 0x2564E8u: goto label_2564e8;
            case 0x2564ECu: goto label_2564ec;
            case 0x2564F0u: goto label_2564f0;
            case 0x2564F4u: goto label_2564f4;
            case 0x2564F8u: goto label_2564f8;
            case 0x2564FCu: goto label_2564fc;
            case 0x256500u: goto label_256500;
            case 0x256504u: goto label_256504;
            case 0x256508u: goto label_256508;
            case 0x25650Cu: goto label_25650c;
            case 0x256510u: goto label_256510;
            case 0x256514u: goto label_256514;
            case 0x256518u: goto label_256518;
            case 0x25651Cu: goto label_25651c;
            case 0x256520u: goto label_256520;
            case 0x256524u: goto label_256524;
            case 0x256528u: goto label_256528;
            case 0x25652Cu: goto label_25652c;
            case 0x256530u: goto label_256530;
            case 0x256534u: goto label_256534;
            case 0x256538u: goto label_256538;
            case 0x25653Cu: goto label_25653c;
            case 0x256540u: goto label_256540;
            case 0x256544u: goto label_256544;
            case 0x256548u: goto label_256548;
            case 0x25654Cu: goto label_25654c;
            case 0x256550u: goto label_256550;
            case 0x256554u: goto label_256554;
            case 0x256558u: goto label_256558;
            case 0x25655Cu: goto label_25655c;
            case 0x256560u: goto label_256560;
            case 0x256564u: goto label_256564;
            case 0x256568u: goto label_256568;
            case 0x25656Cu: goto label_25656c;
            case 0x256570u: goto label_256570;
            case 0x256574u: goto label_256574;
            case 0x256578u: goto label_256578;
            case 0x25657Cu: goto label_25657c;
            case 0x256580u: goto label_256580;
            case 0x256584u: goto label_256584;
            case 0x256588u: goto label_256588;
            case 0x25658Cu: goto label_25658c;
            case 0x256590u: goto label_256590;
            case 0x256594u: goto label_256594;
            case 0x256598u: goto label_256598;
            case 0x25659Cu: goto label_25659c;
            case 0x2565A0u: goto label_2565a0;
            case 0x2565A4u: goto label_2565a4;
            case 0x2565A8u: goto label_2565a8;
            case 0x2565ACu: goto label_2565ac;
            case 0x2565B0u: goto label_2565b0;
            case 0x2565B4u: goto label_2565b4;
            case 0x2565B8u: goto label_2565b8;
            case 0x2565BCu: goto label_2565bc;
            case 0x2565C0u: goto label_2565c0;
            case 0x2565C4u: goto label_2565c4;
            case 0x2565C8u: goto label_2565c8;
            case 0x2565CCu: goto label_2565cc;
            case 0x2565D0u: goto label_2565d0;
            case 0x2565D4u: goto label_2565d4;
            case 0x2565D8u: goto label_2565d8;
            case 0x2565DCu: goto label_2565dc;
            case 0x2565E0u: goto label_2565e0;
            case 0x2565E4u: goto label_2565e4;
            case 0x2565E8u: goto label_2565e8;
            case 0x2565ECu: goto label_2565ec;
            case 0x2565F0u: goto label_2565f0;
            case 0x2565F4u: goto label_2565f4;
            case 0x2565F8u: goto label_2565f8;
            case 0x2565FCu: goto label_2565fc;
            case 0x256600u: goto label_256600;
            case 0x256604u: goto label_256604;
            case 0x256608u: goto label_256608;
            case 0x25660Cu: goto label_25660c;
            case 0x256610u: goto label_256610;
            case 0x256614u: goto label_256614;
            case 0x256618u: goto label_256618;
            case 0x25661Cu: goto label_25661c;
            case 0x256620u: goto label_256620;
            case 0x256624u: goto label_256624;
            case 0x256628u: goto label_256628;
            case 0x25662Cu: goto label_25662c;
            case 0x256630u: goto label_256630;
            case 0x256634u: goto label_256634;
            case 0x256638u: goto label_256638;
            case 0x25663Cu: goto label_25663c;
            case 0x256640u: goto label_256640;
            case 0x256644u: goto label_256644;
            case 0x256648u: goto label_256648;
            case 0x25664Cu: goto label_25664c;
            case 0x256650u: goto label_256650;
            case 0x256654u: goto label_256654;
            case 0x256658u: goto label_256658;
            case 0x25665Cu: goto label_25665c;
            case 0x256660u: goto label_256660;
            case 0x256664u: goto label_256664;
            case 0x256668u: goto label_256668;
            case 0x25666Cu: goto label_25666c;
            case 0x256670u: goto label_256670;
            case 0x256674u: goto label_256674;
            case 0x256678u: goto label_256678;
            case 0x25667Cu: goto label_25667c;
            case 0x256680u: goto label_256680;
            case 0x256684u: goto label_256684;
            case 0x256688u: goto label_256688;
            case 0x25668Cu: goto label_25668c;
            case 0x256690u: goto label_256690;
            case 0x256694u: goto label_256694;
            case 0x256698u: goto label_256698;
            case 0x25669Cu: goto label_25669c;
            case 0x2566A0u: goto label_2566a0;
            case 0x2566A4u: goto label_2566a4;
            case 0x2566A8u: goto label_2566a8;
            case 0x2566ACu: goto label_2566ac;
            case 0x2566B0u: goto label_2566b0;
            case 0x2566B4u: goto label_2566b4;
            case 0x2566B8u: goto label_2566b8;
            case 0x2566BCu: goto label_2566bc;
            case 0x2566C0u: goto label_2566c0;
            case 0x2566C4u: goto label_2566c4;
            case 0x2566C8u: goto label_2566c8;
            case 0x2566CCu: goto label_2566cc;
            case 0x2566D0u: goto label_2566d0;
            case 0x2566D4u: goto label_2566d4;
            case 0x2566D8u: goto label_2566d8;
            case 0x2566DCu: goto label_2566dc;
            case 0x2566E0u: goto label_2566e0;
            case 0x2566E4u: goto label_2566e4;
            case 0x2566E8u: goto label_2566e8;
            case 0x2566ECu: goto label_2566ec;
            case 0x2566F0u: goto label_2566f0;
            case 0x2566F4u: goto label_2566f4;
            case 0x2566F8u: goto label_2566f8;
            case 0x2566FCu: goto label_2566fc;
            case 0x256700u: goto label_256700;
            case 0x256704u: goto label_256704;
            case 0x256708u: goto label_256708;
            case 0x25670Cu: goto label_25670c;
            case 0x256710u: goto label_256710;
            case 0x256714u: goto label_256714;
            case 0x256718u: goto label_256718;
            case 0x25671Cu: goto label_25671c;
            case 0x256720u: goto label_256720;
            case 0x256724u: goto label_256724;
            case 0x256728u: goto label_256728;
            case 0x25672Cu: goto label_25672c;
            case 0x256730u: goto label_256730;
            case 0x256734u: goto label_256734;
            case 0x256738u: goto label_256738;
            case 0x25673Cu: goto label_25673c;
            case 0x256740u: goto label_256740;
            case 0x256744u: goto label_256744;
            case 0x256748u: goto label_256748;
            case 0x25674Cu: goto label_25674c;
            case 0x256750u: goto label_256750;
            case 0x256754u: goto label_256754;
            case 0x256758u: goto label_256758;
            case 0x25675Cu: goto label_25675c;
            case 0x256760u: goto label_256760;
            case 0x256764u: goto label_256764;
            case 0x256768u: goto label_256768;
            case 0x25676Cu: goto label_25676c;
            case 0x256770u: goto label_256770;
            case 0x256774u: goto label_256774;
            case 0x256778u: goto label_256778;
            case 0x25677Cu: goto label_25677c;
            case 0x256780u: goto label_256780;
            case 0x256784u: goto label_256784;
            case 0x256788u: goto label_256788;
            case 0x25678Cu: goto label_25678c;
            case 0x256790u: goto label_256790;
            case 0x256794u: goto label_256794;
            case 0x256798u: goto label_256798;
            case 0x25679Cu: goto label_25679c;
            case 0x2567A0u: goto label_2567a0;
            case 0x2567A4u: goto label_2567a4;
            case 0x2567A8u: goto label_2567a8;
            case 0x2567ACu: goto label_2567ac;
            case 0x2567B0u: goto label_2567b0;
            case 0x2567B4u: goto label_2567b4;
            case 0x2567B8u: goto label_2567b8;
            case 0x2567BCu: goto label_2567bc;
            case 0x2567C0u: goto label_2567c0;
            case 0x2567C4u: goto label_2567c4;
            case 0x2567C8u: goto label_2567c8;
            case 0x2567CCu: goto label_2567cc;
            case 0x2567D0u: goto label_2567d0;
            case 0x2567D4u: goto label_2567d4;
            case 0x2567D8u: goto label_2567d8;
            case 0x2567DCu: goto label_2567dc;
            case 0x2567E0u: goto label_2567e0;
            case 0x2567E4u: goto label_2567e4;
            case 0x2567E8u: goto label_2567e8;
            case 0x2567ECu: goto label_2567ec;
            case 0x2567F0u: goto label_2567f0;
            case 0x2567F4u: goto label_2567f4;
            case 0x2567F8u: goto label_2567f8;
            case 0x2567FCu: goto label_2567fc;
            case 0x256800u: goto label_256800;
            case 0x256804u: goto label_256804;
            case 0x256808u: goto label_256808;
            case 0x25680Cu: goto label_25680c;
            case 0x256810u: goto label_256810;
            case 0x256814u: goto label_256814;
            case 0x256818u: goto label_256818;
            case 0x25681Cu: goto label_25681c;
            case 0x256820u: goto label_256820;
            case 0x256824u: goto label_256824;
            case 0x256828u: goto label_256828;
            case 0x25682Cu: goto label_25682c;
            case 0x256830u: goto label_256830;
            case 0x256834u: goto label_256834;
            case 0x256838u: goto label_256838;
            case 0x25683Cu: goto label_25683c;
            case 0x256840u: goto label_256840;
            case 0x256844u: goto label_256844;
            case 0x256848u: goto label_256848;
            case 0x25684Cu: goto label_25684c;
            case 0x256850u: goto label_256850;
            case 0x256854u: goto label_256854;
            case 0x256858u: goto label_256858;
            case 0x25685Cu: goto label_25685c;
            case 0x256860u: goto label_256860;
            case 0x256864u: goto label_256864;
            case 0x256868u: goto label_256868;
            case 0x25686Cu: goto label_25686c;
            case 0x256870u: goto label_256870;
            case 0x256874u: goto label_256874;
            case 0x256878u: goto label_256878;
            case 0x25687Cu: goto label_25687c;
            case 0x256880u: goto label_256880;
            case 0x256884u: goto label_256884;
            case 0x256888u: goto label_256888;
            case 0x25688Cu: goto label_25688c;
            case 0x256890u: goto label_256890;
            case 0x256894u: goto label_256894;
            case 0x256898u: goto label_256898;
            case 0x25689Cu: goto label_25689c;
            case 0x2568A0u: goto label_2568a0;
            case 0x2568A4u: goto label_2568a4;
            case 0x2568A8u: goto label_2568a8;
            case 0x2568ACu: goto label_2568ac;
            case 0x2568B0u: goto label_2568b0;
            case 0x2568B4u: goto label_2568b4;
            case 0x2568B8u: goto label_2568b8;
            case 0x2568BCu: goto label_2568bc;
            case 0x2568C0u: goto label_2568c0;
            case 0x2568C4u: goto label_2568c4;
            case 0x2568C8u: goto label_2568c8;
            case 0x2568CCu: goto label_2568cc;
            case 0x2568D0u: goto label_2568d0;
            case 0x2568D4u: goto label_2568d4;
            case 0x2568D8u: goto label_2568d8;
            case 0x2568DCu: goto label_2568dc;
            case 0x2568E0u: goto label_2568e0;
            case 0x2568E4u: goto label_2568e4;
            case 0x2568E8u: goto label_2568e8;
            case 0x2568ECu: goto label_2568ec;
            case 0x2568F0u: goto label_2568f0;
            case 0x2568F4u: goto label_2568f4;
            case 0x2568F8u: goto label_2568f8;
            case 0x2568FCu: goto label_2568fc;
            case 0x256900u: goto label_256900;
            case 0x256904u: goto label_256904;
            case 0x256908u: goto label_256908;
            case 0x25690Cu: goto label_25690c;
            case 0x256910u: goto label_256910;
            case 0x256914u: goto label_256914;
            case 0x256918u: goto label_256918;
            case 0x25691Cu: goto label_25691c;
            case 0x256920u: goto label_256920;
            case 0x256924u: goto label_256924;
            case 0x256928u: goto label_256928;
            case 0x25692Cu: goto label_25692c;
            case 0x256930u: goto label_256930;
            case 0x256934u: goto label_256934;
            case 0x256938u: goto label_256938;
            case 0x25693Cu: goto label_25693c;
            case 0x256940u: goto label_256940;
            case 0x256944u: goto label_256944;
            case 0x256948u: goto label_256948;
            case 0x25694Cu: goto label_25694c;
            case 0x256950u: goto label_256950;
            case 0x256954u: goto label_256954;
            case 0x256958u: goto label_256958;
            case 0x25695Cu: goto label_25695c;
            case 0x256960u: goto label_256960;
            case 0x256964u: goto label_256964;
            case 0x256968u: goto label_256968;
            case 0x25696Cu: goto label_25696c;
            case 0x256970u: goto label_256970;
            case 0x256974u: goto label_256974;
            case 0x256978u: goto label_256978;
            case 0x25697Cu: goto label_25697c;
            case 0x256980u: goto label_256980;
            case 0x256984u: goto label_256984;
            case 0x256988u: goto label_256988;
            case 0x25698Cu: goto label_25698c;
            case 0x256990u: goto label_256990;
            case 0x256994u: goto label_256994;
            case 0x256998u: goto label_256998;
            case 0x25699Cu: goto label_25699c;
            case 0x2569A0u: goto label_2569a0;
            case 0x2569A4u: goto label_2569a4;
            case 0x2569A8u: goto label_2569a8;
            case 0x2569ACu: goto label_2569ac;
            case 0x2569B0u: goto label_2569b0;
            case 0x2569B4u: goto label_2569b4;
            case 0x2569B8u: goto label_2569b8;
            case 0x2569BCu: goto label_2569bc;
            case 0x2569C0u: goto label_2569c0;
            case 0x2569C4u: goto label_2569c4;
            case 0x2569C8u: goto label_2569c8;
            case 0x2569CCu: goto label_2569cc;
            case 0x2569D0u: goto label_2569d0;
            case 0x2569D4u: goto label_2569d4;
            case 0x2569D8u: goto label_2569d8;
            case 0x2569DCu: goto label_2569dc;
            case 0x2569E0u: goto label_2569e0;
            case 0x2569E4u: goto label_2569e4;
            case 0x2569E8u: goto label_2569e8;
            case 0x2569ECu: goto label_2569ec;
            case 0x2569F0u: goto label_2569f0;
            case 0x2569F4u: goto label_2569f4;
            case 0x2569F8u: goto label_2569f8;
            case 0x2569FCu: goto label_2569fc;
            case 0x256A00u: goto label_256a00;
            case 0x256A04u: goto label_256a04;
            case 0x256A08u: goto label_256a08;
            case 0x256A0Cu: goto label_256a0c;
            case 0x256A10u: goto label_256a10;
            case 0x256A14u: goto label_256a14;
            case 0x256A18u: goto label_256a18;
            case 0x256A1Cu: goto label_256a1c;
            case 0x256A20u: goto label_256a20;
            case 0x256A24u: goto label_256a24;
            case 0x256A28u: goto label_256a28;
            case 0x256A2Cu: goto label_256a2c;
            case 0x256A30u: goto label_256a30;
            case 0x256A34u: goto label_256a34;
            case 0x256A38u: goto label_256a38;
            case 0x256A3Cu: goto label_256a3c;
            case 0x256A40u: goto label_256a40;
            case 0x256A44u: goto label_256a44;
            case 0x256A48u: goto label_256a48;
            case 0x256A4Cu: goto label_256a4c;
            case 0x256A50u: goto label_256a50;
            case 0x256A54u: goto label_256a54;
            case 0x256A58u: goto label_256a58;
            case 0x256A5Cu: goto label_256a5c;
            case 0x256A60u: goto label_256a60;
            case 0x256A64u: goto label_256a64;
            case 0x256A68u: goto label_256a68;
            case 0x256A6Cu: goto label_256a6c;
            case 0x256A70u: goto label_256a70;
            case 0x256A74u: goto label_256a74;
            case 0x256A78u: goto label_256a78;
            case 0x256A7Cu: goto label_256a7c;
            case 0x256A80u: goto label_256a80;
            case 0x256A84u: goto label_256a84;
            case 0x256A88u: goto label_256a88;
            case 0x256A8Cu: goto label_256a8c;
            case 0x256A90u: goto label_256a90;
            case 0x256A94u: goto label_256a94;
            case 0x256A98u: goto label_256a98;
            case 0x256A9Cu: goto label_256a9c;
            case 0x256AA0u: goto label_256aa0;
            case 0x256AA4u: goto label_256aa4;
            case 0x256AA8u: goto label_256aa8;
            case 0x256AACu: goto label_256aac;
            case 0x256AB0u: goto label_256ab0;
            case 0x256AB4u: goto label_256ab4;
            case 0x256AB8u: goto label_256ab8;
            case 0x256ABCu: goto label_256abc;
            case 0x256AC0u: goto label_256ac0;
            case 0x256AC4u: goto label_256ac4;
            case 0x256AC8u: goto label_256ac8;
            case 0x256ACCu: goto label_256acc;
            case 0x256AD0u: goto label_256ad0;
            case 0x256AD4u: goto label_256ad4;
            case 0x256AD8u: goto label_256ad8;
            case 0x256ADCu: goto label_256adc;
            case 0x256AE0u: goto label_256ae0;
            case 0x256AE4u: goto label_256ae4;
            case 0x256AE8u: goto label_256ae8;
            case 0x256AECu: goto label_256aec;
            case 0x256AF0u: goto label_256af0;
            case 0x256AF4u: goto label_256af4;
            case 0x256AF8u: goto label_256af8;
            case 0x256AFCu: goto label_256afc;
            case 0x256B00u: goto label_256b00;
            case 0x256B04u: goto label_256b04;
            case 0x256B08u: goto label_256b08;
            case 0x256B0Cu: goto label_256b0c;
            case 0x256B10u: goto label_256b10;
            case 0x256B14u: goto label_256b14;
            case 0x256B18u: goto label_256b18;
            case 0x256B1Cu: goto label_256b1c;
            case 0x256B20u: goto label_256b20;
            case 0x256B24u: goto label_256b24;
            case 0x256B28u: goto label_256b28;
            case 0x256B2Cu: goto label_256b2c;
            case 0x256B30u: goto label_256b30;
            case 0x256B34u: goto label_256b34;
            case 0x256B38u: goto label_256b38;
            case 0x256B3Cu: goto label_256b3c;
            case 0x256B40u: goto label_256b40;
            case 0x256B44u: goto label_256b44;
            case 0x256B48u: goto label_256b48;
            case 0x256B4Cu: goto label_256b4c;
            case 0x256B50u: goto label_256b50;
            case 0x256B54u: goto label_256b54;
            case 0x256B58u: goto label_256b58;
            case 0x256B5Cu: goto label_256b5c;
            case 0x256B60u: goto label_256b60;
            case 0x256B64u: goto label_256b64;
            case 0x256B68u: goto label_256b68;
            case 0x256B6Cu: goto label_256b6c;
            case 0x256B70u: goto label_256b70;
            case 0x256B74u: goto label_256b74;
            case 0x256B78u: goto label_256b78;
            case 0x256B7Cu: goto label_256b7c;
            case 0x256B80u: goto label_256b80;
            case 0x256B84u: goto label_256b84;
            case 0x256B88u: goto label_256b88;
            case 0x256B8Cu: goto label_256b8c;
            case 0x256B90u: goto label_256b90;
            case 0x256B94u: goto label_256b94;
            case 0x256B98u: goto label_256b98;
            case 0x256B9Cu: goto label_256b9c;
            case 0x256BA0u: goto label_256ba0;
            case 0x256BA4u: goto label_256ba4;
            case 0x256BA8u: goto label_256ba8;
            case 0x256BACu: goto label_256bac;
            case 0x256BB0u: goto label_256bb0;
            case 0x256BB4u: goto label_256bb4;
            case 0x256BB8u: goto label_256bb8;
            case 0x256BBCu: goto label_256bbc;
            case 0x256BC0u: goto label_256bc0;
            case 0x256BC4u: goto label_256bc4;
            case 0x256BC8u: goto label_256bc8;
            case 0x256BCCu: goto label_256bcc;
            case 0x256BD0u: goto label_256bd0;
            case 0x256BD4u: goto label_256bd4;
            case 0x256BD8u: goto label_256bd8;
            case 0x256BDCu: goto label_256bdc;
            case 0x256BE0u: goto label_256be0;
            case 0x256BE4u: goto label_256be4;
            case 0x256BE8u: goto label_256be8;
            case 0x256BECu: goto label_256bec;
            case 0x256BF0u: goto label_256bf0;
            case 0x256BF4u: goto label_256bf4;
            case 0x256BF8u: goto label_256bf8;
            case 0x256BFCu: goto label_256bfc;
            case 0x256C00u: goto label_256c00;
            case 0x256C04u: goto label_256c04;
            case 0x256C08u: goto label_256c08;
            case 0x256C0Cu: goto label_256c0c;
            case 0x256C10u: goto label_256c10;
            case 0x256C14u: goto label_256c14;
            case 0x256C18u: goto label_256c18;
            case 0x256C1Cu: goto label_256c1c;
            case 0x256C20u: goto label_256c20;
            case 0x256C24u: goto label_256c24;
            case 0x256C28u: goto label_256c28;
            case 0x256C2Cu: goto label_256c2c;
            case 0x256C30u: goto label_256c30;
            case 0x256C34u: goto label_256c34;
            case 0x256C38u: goto label_256c38;
            case 0x256C3Cu: goto label_256c3c;
            case 0x256C40u: goto label_256c40;
            case 0x256C44u: goto label_256c44;
            case 0x256C48u: goto label_256c48;
            case 0x256C4Cu: goto label_256c4c;
            case 0x256C50u: goto label_256c50;
            case 0x256C54u: goto label_256c54;
            case 0x256C58u: goto label_256c58;
            case 0x256C5Cu: goto label_256c5c;
            case 0x256C60u: goto label_256c60;
            case 0x256C64u: goto label_256c64;
            case 0x256C68u: goto label_256c68;
            case 0x256C6Cu: goto label_256c6c;
            case 0x256C70u: goto label_256c70;
            case 0x256C74u: goto label_256c74;
            case 0x256C78u: goto label_256c78;
            case 0x256C7Cu: goto label_256c7c;
            case 0x256C80u: goto label_256c80;
            case 0x256C84u: goto label_256c84;
            case 0x256C88u: goto label_256c88;
            case 0x256C8Cu: goto label_256c8c;
            case 0x256C90u: goto label_256c90;
            case 0x256C94u: goto label_256c94;
            case 0x256C98u: goto label_256c98;
            case 0x256C9Cu: goto label_256c9c;
            case 0x256CA0u: goto label_256ca0;
            case 0x256CA4u: goto label_256ca4;
            case 0x256CA8u: goto label_256ca8;
            case 0x256CACu: goto label_256cac;
            case 0x256CB0u: goto label_256cb0;
            case 0x256CB4u: goto label_256cb4;
            case 0x256CB8u: goto label_256cb8;
            case 0x256CBCu: goto label_256cbc;
            case 0x256CC0u: goto label_256cc0;
            case 0x256CC4u: goto label_256cc4;
            case 0x256CC8u: goto label_256cc8;
            case 0x256CCCu: goto label_256ccc;
            case 0x256CD0u: goto label_256cd0;
            case 0x256CD4u: goto label_256cd4;
            case 0x256CD8u: goto label_256cd8;
            case 0x256CDCu: goto label_256cdc;
            case 0x256CE0u: goto label_256ce0;
            case 0x256CE4u: goto label_256ce4;
            case 0x256CE8u: goto label_256ce8;
            case 0x256CECu: goto label_256cec;
            case 0x256CF0u: goto label_256cf0;
            case 0x256CF4u: goto label_256cf4;
            case 0x256CF8u: goto label_256cf8;
            case 0x256CFCu: goto label_256cfc;
            case 0x256D00u: goto label_256d00;
            case 0x256D04u: goto label_256d04;
            case 0x256D08u: goto label_256d08;
            case 0x256D0Cu: goto label_256d0c;
            case 0x256D10u: goto label_256d10;
            case 0x256D14u: goto label_256d14;
            case 0x256D18u: goto label_256d18;
            case 0x256D1Cu: goto label_256d1c;
            case 0x256D20u: goto label_256d20;
            case 0x256D24u: goto label_256d24;
            case 0x256D28u: goto label_256d28;
            case 0x256D2Cu: goto label_256d2c;
            case 0x256D30u: goto label_256d30;
            case 0x256D34u: goto label_256d34;
            case 0x256D38u: goto label_256d38;
            case 0x256D3Cu: goto label_256d3c;
            case 0x256D40u: goto label_256d40;
            case 0x256D44u: goto label_256d44;
            case 0x256D48u: goto label_256d48;
            case 0x256D4Cu: goto label_256d4c;
            case 0x256D50u: goto label_256d50;
            case 0x256D54u: goto label_256d54;
            case 0x256D58u: goto label_256d58;
            case 0x256D5Cu: goto label_256d5c;
            case 0x256D60u: goto label_256d60;
            case 0x256D64u: goto label_256d64;
            case 0x256D68u: goto label_256d68;
            case 0x256D6Cu: goto label_256d6c;
            case 0x256D70u: goto label_256d70;
            case 0x256D74u: goto label_256d74;
            case 0x256D78u: goto label_256d78;
            case 0x256D7Cu: goto label_256d7c;
            case 0x256D80u: goto label_256d80;
            case 0x256D84u: goto label_256d84;
            case 0x256D88u: goto label_256d88;
            case 0x256D8Cu: goto label_256d8c;
            case 0x256D90u: goto label_256d90;
            case 0x256D94u: goto label_256d94;
            case 0x256D98u: goto label_256d98;
            case 0x256D9Cu: goto label_256d9c;
            case 0x256DA0u: goto label_256da0;
            case 0x256DA4u: goto label_256da4;
            case 0x256DA8u: goto label_256da8;
            case 0x256DACu: goto label_256dac;
            case 0x256DB0u: goto label_256db0;
            case 0x256DB4u: goto label_256db4;
            case 0x256DB8u: goto label_256db8;
            case 0x256DBCu: goto label_256dbc;
            case 0x256DC0u: goto label_256dc0;
            case 0x256DC4u: goto label_256dc4;
            case 0x256DC8u: goto label_256dc8;
            case 0x256DCCu: goto label_256dcc;
            case 0x256DD0u: goto label_256dd0;
            case 0x256DD4u: goto label_256dd4;
            case 0x256DD8u: goto label_256dd8;
            case 0x256DDCu: goto label_256ddc;
            case 0x256DE0u: goto label_256de0;
            case 0x256DE4u: goto label_256de4;
            case 0x256DE8u: goto label_256de8;
            case 0x256DECu: goto label_256dec;
            case 0x256DF0u: goto label_256df0;
            case 0x256DF4u: goto label_256df4;
            case 0x256DF8u: goto label_256df8;
            case 0x256DFCu: goto label_256dfc;
            case 0x256E00u: goto label_256e00;
            case 0x256E04u: goto label_256e04;
            case 0x256E08u: goto label_256e08;
            case 0x256E0Cu: goto label_256e0c;
            case 0x256E10u: goto label_256e10;
            case 0x256E14u: goto label_256e14;
            case 0x256E18u: goto label_256e18;
            case 0x256E1Cu: goto label_256e1c;
            case 0x256E20u: goto label_256e20;
            case 0x256E24u: goto label_256e24;
            case 0x256E28u: goto label_256e28;
            case 0x256E2Cu: goto label_256e2c;
            case 0x256E30u: goto label_256e30;
            case 0x256E34u: goto label_256e34;
            case 0x256E38u: goto label_256e38;
            case 0x256E3Cu: goto label_256e3c;
            case 0x256E40u: goto label_256e40;
            case 0x256E44u: goto label_256e44;
            case 0x256E48u: goto label_256e48;
            case 0x256E4Cu: goto label_256e4c;
            case 0x256E50u: goto label_256e50;
            case 0x256E54u: goto label_256e54;
            case 0x256E58u: goto label_256e58;
            case 0x256E5Cu: goto label_256e5c;
            case 0x256E60u: goto label_256e60;
            case 0x256E64u: goto label_256e64;
            case 0x256E68u: goto label_256e68;
            case 0x256E6Cu: goto label_256e6c;
            case 0x256E70u: goto label_256e70;
            case 0x256E74u: goto label_256e74;
            case 0x256E78u: goto label_256e78;
            case 0x256E7Cu: goto label_256e7c;
            case 0x256E80u: goto label_256e80;
            case 0x256E84u: goto label_256e84;
            case 0x256E88u: goto label_256e88;
            case 0x256E8Cu: goto label_256e8c;
            case 0x256E90u: goto label_256e90;
            case 0x256E94u: goto label_256e94;
            case 0x256E98u: goto label_256e98;
            case 0x256E9Cu: goto label_256e9c;
            case 0x256EA0u: goto label_256ea0;
            case 0x256EA4u: goto label_256ea4;
            case 0x256EA8u: goto label_256ea8;
            case 0x256EACu: goto label_256eac;
            case 0x256EB0u: goto label_256eb0;
            case 0x256EB4u: goto label_256eb4;
            case 0x256EB8u: goto label_256eb8;
            case 0x256EBCu: goto label_256ebc;
            case 0x256EC0u: goto label_256ec0;
            case 0x256EC4u: goto label_256ec4;
            case 0x256EC8u: goto label_256ec8;
            case 0x256ECCu: goto label_256ecc;
            case 0x256ED0u: goto label_256ed0;
            case 0x256ED4u: goto label_256ed4;
            case 0x256ED8u: goto label_256ed8;
            case 0x256EDCu: goto label_256edc;
            case 0x256EE0u: goto label_256ee0;
            case 0x256EE4u: goto label_256ee4;
            case 0x256EE8u: goto label_256ee8;
            case 0x256EECu: goto label_256eec;
            case 0x256EF0u: goto label_256ef0;
            case 0x256EF4u: goto label_256ef4;
            case 0x256EF8u: goto label_256ef8;
            case 0x256EFCu: goto label_256efc;
            case 0x256F00u: goto label_256f00;
            case 0x256F04u: goto label_256f04;
            case 0x256F08u: goto label_256f08;
            case 0x256F0Cu: goto label_256f0c;
            case 0x256F10u: goto label_256f10;
            case 0x256F14u: goto label_256f14;
            case 0x256F18u: goto label_256f18;
            case 0x256F1Cu: goto label_256f1c;
            case 0x256F20u: goto label_256f20;
            case 0x256F24u: goto label_256f24;
            case 0x256F28u: goto label_256f28;
            case 0x256F2Cu: goto label_256f2c;
            case 0x256F30u: goto label_256f30;
            case 0x256F34u: goto label_256f34;
            case 0x256F38u: goto label_256f38;
            case 0x256F3Cu: goto label_256f3c;
            case 0x256F40u: goto label_256f40;
            case 0x256F44u: goto label_256f44;
            case 0x256F48u: goto label_256f48;
            case 0x256F4Cu: goto label_256f4c;
            case 0x256F50u: goto label_256f50;
            case 0x256F54u: goto label_256f54;
            case 0x256F58u: goto label_256f58;
            case 0x256F5Cu: goto label_256f5c;
            case 0x256F60u: goto label_256f60;
            case 0x256F64u: goto label_256f64;
            case 0x256F68u: goto label_256f68;
            case 0x256F6Cu: goto label_256f6c;
            case 0x256F70u: goto label_256f70;
            case 0x256F74u: goto label_256f74;
            case 0x256F78u: goto label_256f78;
            case 0x256F7Cu: goto label_256f7c;
            case 0x256F80u: goto label_256f80;
            case 0x256F84u: goto label_256f84;
            case 0x256F88u: goto label_256f88;
            case 0x256F8Cu: goto label_256f8c;
            case 0x256F90u: goto label_256f90;
            case 0x256F94u: goto label_256f94;
            case 0x256F98u: goto label_256f98;
            case 0x256F9Cu: goto label_256f9c;
            case 0x256FA0u: goto label_256fa0;
            case 0x256FA4u: goto label_256fa4;
            case 0x256FA8u: goto label_256fa8;
            case 0x256FACu: goto label_256fac;
            case 0x256FB0u: goto label_256fb0;
            case 0x256FB4u: goto label_256fb4;
            case 0x256FB8u: goto label_256fb8;
            case 0x256FBCu: goto label_256fbc;
            case 0x256FC0u: goto label_256fc0;
            case 0x256FC4u: goto label_256fc4;
            case 0x256FC8u: goto label_256fc8;
            case 0x256FCCu: goto label_256fcc;
            case 0x256FD0u: goto label_256fd0;
            case 0x256FD4u: goto label_256fd4;
            case 0x256FD8u: goto label_256fd8;
            case 0x256FDCu: goto label_256fdc;
            case 0x256FE0u: goto label_256fe0;
            case 0x256FE4u: goto label_256fe4;
            case 0x256FE8u: goto label_256fe8;
            case 0x256FECu: goto label_256fec;
            case 0x256FF0u: goto label_256ff0;
            case 0x256FF4u: goto label_256ff4;
            case 0x256FF8u: goto label_256ff8;
            case 0x256FFCu: goto label_256ffc;
            case 0x257000u: goto label_257000;
            case 0x257004u: goto label_257004;
            case 0x257008u: goto label_257008;
            case 0x25700Cu: goto label_25700c;
            case 0x257010u: goto label_257010;
            case 0x257014u: goto label_257014;
            case 0x257018u: goto label_257018;
            case 0x25701Cu: goto label_25701c;
            case 0x257020u: goto label_257020;
            case 0x257024u: goto label_257024;
            case 0x257028u: goto label_257028;
            case 0x25702Cu: goto label_25702c;
            case 0x257030u: goto label_257030;
            case 0x257034u: goto label_257034;
            case 0x257038u: goto label_257038;
            case 0x25703Cu: goto label_25703c;
            case 0x257040u: goto label_257040;
            case 0x257044u: goto label_257044;
            case 0x257048u: goto label_257048;
            case 0x25704Cu: goto label_25704c;
            case 0x257050u: goto label_257050;
            case 0x257054u: goto label_257054;
            case 0x257058u: goto label_257058;
            case 0x25705Cu: goto label_25705c;
            case 0x257060u: goto label_257060;
            case 0x257064u: goto label_257064;
            case 0x257068u: goto label_257068;
            case 0x25706Cu: goto label_25706c;
            case 0x257070u: goto label_257070;
            case 0x257074u: goto label_257074;
            case 0x257078u: goto label_257078;
            case 0x25707Cu: goto label_25707c;
            case 0x257080u: goto label_257080;
            case 0x257084u: goto label_257084;
            case 0x257088u: goto label_257088;
            case 0x25708Cu: goto label_25708c;
            case 0x257090u: goto label_257090;
            case 0x257094u: goto label_257094;
            case 0x257098u: goto label_257098;
            case 0x25709Cu: goto label_25709c;
            case 0x2570A0u: goto label_2570a0;
            case 0x2570A4u: goto label_2570a4;
            case 0x2570A8u: goto label_2570a8;
            case 0x2570ACu: goto label_2570ac;
            case 0x2570B0u: goto label_2570b0;
            case 0x2570B4u: goto label_2570b4;
            case 0x2570B8u: goto label_2570b8;
            case 0x2570BCu: goto label_2570bc;
            case 0x2570C0u: goto label_2570c0;
            case 0x2570C4u: goto label_2570c4;
            case 0x2570C8u: goto label_2570c8;
            case 0x2570CCu: goto label_2570cc;
            case 0x2570D0u: goto label_2570d0;
            case 0x2570D4u: goto label_2570d4;
            case 0x2570D8u: goto label_2570d8;
            case 0x2570DCu: goto label_2570dc;
            case 0x2570E0u: goto label_2570e0;
            case 0x2570E4u: goto label_2570e4;
            case 0x2570E8u: goto label_2570e8;
            case 0x2570ECu: goto label_2570ec;
            case 0x2570F0u: goto label_2570f0;
            case 0x2570F4u: goto label_2570f4;
            case 0x2570F8u: goto label_2570f8;
            case 0x2570FCu: goto label_2570fc;
            case 0x257100u: goto label_257100;
            case 0x257104u: goto label_257104;
            case 0x257108u: goto label_257108;
            case 0x25710Cu: goto label_25710c;
            case 0x257110u: goto label_257110;
            case 0x257114u: goto label_257114;
            case 0x257118u: goto label_257118;
            case 0x25711Cu: goto label_25711c;
            case 0x257120u: goto label_257120;
            case 0x257124u: goto label_257124;
            case 0x257128u: goto label_257128;
            case 0x25712Cu: goto label_25712c;
            case 0x257130u: goto label_257130;
            case 0x257134u: goto label_257134;
            case 0x257138u: goto label_257138;
            case 0x25713Cu: goto label_25713c;
            case 0x257140u: goto label_257140;
            case 0x257144u: goto label_257144;
            case 0x257148u: goto label_257148;
            case 0x25714Cu: goto label_25714c;
            case 0x257150u: goto label_257150;
            case 0x257154u: goto label_257154;
            case 0x257158u: goto label_257158;
            case 0x25715Cu: goto label_25715c;
            case 0x257160u: goto label_257160;
            case 0x257164u: goto label_257164;
            case 0x257168u: goto label_257168;
            case 0x25716Cu: goto label_25716c;
            case 0x257170u: goto label_257170;
            case 0x257174u: goto label_257174;
            case 0x257178u: goto label_257178;
            case 0x25717Cu: goto label_25717c;
            case 0x257180u: goto label_257180;
            case 0x257184u: goto label_257184;
            case 0x257188u: goto label_257188;
            case 0x25718Cu: goto label_25718c;
            case 0x257190u: goto label_257190;
            case 0x257194u: goto label_257194;
            case 0x257198u: goto label_257198;
            case 0x25719Cu: goto label_25719c;
            case 0x2571A0u: goto label_2571a0;
            case 0x2571A4u: goto label_2571a4;
            case 0x2571A8u: goto label_2571a8;
            case 0x2571ACu: goto label_2571ac;
            case 0x2571B0u: goto label_2571b0;
            case 0x2571B4u: goto label_2571b4;
            case 0x2571B8u: goto label_2571b8;
            case 0x2571BCu: goto label_2571bc;
            case 0x2571C0u: goto label_2571c0;
            case 0x2571C4u: goto label_2571c4;
            case 0x2571C8u: goto label_2571c8;
            case 0x2571CCu: goto label_2571cc;
            case 0x2571D0u: goto label_2571d0;
            case 0x2571D4u: goto label_2571d4;
            case 0x2571D8u: goto label_2571d8;
            case 0x2571DCu: goto label_2571dc;
            case 0x2571E0u: goto label_2571e0;
            case 0x2571E4u: goto label_2571e4;
            case 0x2571E8u: goto label_2571e8;
            case 0x2571ECu: goto label_2571ec;
            case 0x2571F0u: goto label_2571f0;
            case 0x2571F4u: goto label_2571f4;
            case 0x2571F8u: goto label_2571f8;
            case 0x2571FCu: goto label_2571fc;
            case 0x257200u: goto label_257200;
            case 0x257204u: goto label_257204;
            case 0x257208u: goto label_257208;
            case 0x25720Cu: goto label_25720c;
            case 0x257210u: goto label_257210;
            case 0x257214u: goto label_257214;
            case 0x257218u: goto label_257218;
            case 0x25721Cu: goto label_25721c;
            case 0x257220u: goto label_257220;
            case 0x257224u: goto label_257224;
            case 0x257228u: goto label_257228;
            case 0x25722Cu: goto label_25722c;
            case 0x257230u: goto label_257230;
            case 0x257234u: goto label_257234;
            case 0x257238u: goto label_257238;
            case 0x25723Cu: goto label_25723c;
            case 0x257240u: goto label_257240;
            case 0x257244u: goto label_257244;
            case 0x257248u: goto label_257248;
            case 0x25724Cu: goto label_25724c;
            case 0x257250u: goto label_257250;
            case 0x257254u: goto label_257254;
            case 0x257258u: goto label_257258;
            case 0x25725Cu: goto label_25725c;
            case 0x257260u: goto label_257260;
            case 0x257264u: goto label_257264;
            case 0x257268u: goto label_257268;
            case 0x25726Cu: goto label_25726c;
            case 0x257270u: goto label_257270;
            case 0x257274u: goto label_257274;
            case 0x257278u: goto label_257278;
            case 0x25727Cu: goto label_25727c;
            case 0x257280u: goto label_257280;
            case 0x257284u: goto label_257284;
            case 0x257288u: goto label_257288;
            case 0x25728Cu: goto label_25728c;
            case 0x257290u: goto label_257290;
            case 0x257294u: goto label_257294;
            case 0x257298u: goto label_257298;
            case 0x25729Cu: goto label_25729c;
            case 0x2572A0u: goto label_2572a0;
            case 0x2572A4u: goto label_2572a4;
            case 0x2572A8u: goto label_2572a8;
            case 0x2572ACu: goto label_2572ac;
            case 0x2572B0u: goto label_2572b0;
            case 0x2572B4u: goto label_2572b4;
            case 0x2572B8u: goto label_2572b8;
            case 0x2572BCu: goto label_2572bc;
            case 0x2572C0u: goto label_2572c0;
            case 0x2572C4u: goto label_2572c4;
            case 0x2572C8u: goto label_2572c8;
            case 0x2572CCu: goto label_2572cc;
            case 0x2572D0u: goto label_2572d0;
            case 0x2572D4u: goto label_2572d4;
            case 0x2572D8u: goto label_2572d8;
            case 0x2572DCu: goto label_2572dc;
            case 0x2572E0u: goto label_2572e0;
            case 0x2572E4u: goto label_2572e4;
            case 0x2572E8u: goto label_2572e8;
            case 0x2572ECu: goto label_2572ec;
            case 0x2572F0u: goto label_2572f0;
            case 0x2572F4u: goto label_2572f4;
            case 0x2572F8u: goto label_2572f8;
            case 0x2572FCu: goto label_2572fc;
            case 0x257300u: goto label_257300;
            case 0x257304u: goto label_257304;
            case 0x257308u: goto label_257308;
            case 0x25730Cu: goto label_25730c;
            case 0x257310u: goto label_257310;
            case 0x257314u: goto label_257314;
            case 0x257318u: goto label_257318;
            case 0x25731Cu: goto label_25731c;
            case 0x257320u: goto label_257320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2555D0u;
label_2555d0:
    // 0x2555d0: 0x86420100
    ctx->pc = 0x2555d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
label_2555d4:
    // 0x2555d4: 0x18400005
label_2555d8:
    if (ctx->pc == 0x2555D8u) {
        ctx->pc = 0x2555D8u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->pc = 0x2555DCu;
        goto label_2555dc;
    }
    ctx->pc = 0x2555D4u;
    {
        const bool branch_taken_0x2555d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2555D8u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
        if (branch_taken_0x2555d4) {
            ctx->pc = 0x2555ECu;
            goto label_2555ec;
        }
    }
    ctx->pc = 0x2555DCu;
label_2555dc:
    // 0x2555dc: 0x3c020031
    ctx->pc = 0x2555dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2555e0:
    // 0x2555e0: 0x9442ffbc
    ctx->pc = 0x2555e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_2555e4:
    // 0x2555e4: 0x621023
    ctx->pc = 0x2555e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2555e8:
    // 0x2555e8: 0xa6420100
    ctx->pc = 0x2555e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 256), (uint16_t)GPR_U32(ctx, 2));
label_2555ec:
    // 0x2555ec: 0x8e420000
    ctx->pc = 0x2555ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2555f0:
    // 0x2555f0: 0x8c430004
    ctx->pc = 0x2555f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2555f4:
    // 0x2555f4: 0x24020004
    ctx->pc = 0x2555f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2555f8:
    // 0x2555f8: 0x10620725
label_2555fc:
    if (ctx->pc == 0x2555FCu) {
        ctx->pc = 0x2555FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x255600u;
        goto label_255600;
    }
    ctx->pc = 0x2555F8u;
    {
        const bool branch_taken_0x2555f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2555FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x2555f8) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x255600u;
label_255600:
    // 0x255600: 0x54620724
label_255604:
    if (ctx->pc == 0x255604u) {
        ctx->pc = 0x255604u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255608u;
        goto label_255608;
    }
    ctx->pc = 0x255600u;
    {
        const bool branch_taken_0x255600 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x255600) {
            ctx->pc = 0x255604u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255608u;
label_255608:
    // 0x255608: 0x964200d8
    ctx->pc = 0x255608u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_25560c:
    // 0x25560c: 0x30420800
    ctx->pc = 0x25560cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
label_255610:
    // 0x255610: 0x50400720
label_255614:
    if (ctx->pc == 0x255614u) {
        ctx->pc = 0x255614u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255618u;
        goto label_255618;
    }
    ctx->pc = 0x255610u;
    {
        const bool branch_taken_0x255610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x255610) {
            ctx->pc = 0x255614u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255618u;
label_255618:
    // 0x255618: 0x3c100034
    ctx->pc = 0x255618u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
label_25561c:
    // 0x25561c: 0x44800800
    ctx->pc = 0x25561cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_255620:
    // 0x255620: 0xc600fbb4
    ctx->pc = 0x255620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294966196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255624:
    // 0x255624: 0x46010032
    ctx->pc = 0x255624u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255628:
    // 0x255628: 0x0
    ctx->pc = 0x255628u;
    // NOP
label_25562c:
    // 0x25562c: 0x45030719
label_255630:
    if (ctx->pc == 0x255630u) {
        ctx->pc = 0x255630u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255634u;
        goto label_255634;
    }
    ctx->pc = 0x25562Cu;
    {
        const bool branch_taken_0x25562c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25562c) {
            ctx->pc = 0x255630u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255634u;
label_255634:
    // 0x255634: 0x46000834
    ctx->pc = 0x255634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255638:
    // 0x255638: 0x45000021
label_25563c:
    if (ctx->pc == 0x25563Cu) {
        ctx->pc = 0x255640u;
        goto label_255640;
    }
    ctx->pc = 0x255638u;
    {
        const bool branch_taken_0x255638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255638) {
            ctx->pc = 0x2556C0u;
            goto label_2556c0;
        }
    }
    ctx->pc = 0x255640u;
label_255640:
    // 0x255640: 0xc093fd2
label_255644:
    if (ctx->pc == 0x255644u) {
        ctx->pc = 0x255644u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255648u;
        goto label_255648;
    }
    ctx->pc = 0x255640u;
    SET_GPR_U32(ctx, 31, 0x255648u);
    ctx->pc = 0x255644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24FF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindLookoutParam_0x24ff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255648u; }
    }
    if (ctx->pc != 0x255648u) { return; }
    ctx->pc = 0x255648u;
label_255648:
    // 0x255648: 0x1040001d
label_25564c:
    if (ctx->pc == 0x25564Cu) {
        ctx->pc = 0x25564Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x255650u;
        goto label_255650;
    }
    ctx->pc = 0x255648u;
    {
        const bool branch_taken_0x255648 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25564Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x255648) {
            ctx->pc = 0x2556C0u;
            goto label_2556c0;
        }
    }
    ctx->pc = 0x255650u;
label_255650:
    // 0x255650: 0xc454ffa4
    ctx->pc = 0x255650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_255654:
    // 0x255654: 0xc600fbb4
    ctx->pc = 0x255654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294966196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255658:
    // 0x255658: 0x4600a501
    ctx->pc = 0x255658u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_25565c:
    // 0x25565c: 0x3c013fe0
    ctx->pc = 0x25565cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16352 << 16));
label_255660:
    // 0x255660: 0x44810000
    ctx->pc = 0x255660u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255664:
    // 0x255664: 0x4600a500
    ctx->pc = 0x255664u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_255668:
    // 0x255668: 0x3c02003a
    ctx->pc = 0x255668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_25566c:
    // 0x25566c: 0x244324c0
    ctx->pc = 0x25566cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9408));
label_255670:
    // 0x255670: 0xc64c0040
    ctx->pc = 0x255670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_255674:
    // 0x255674: 0xc44024c0
    ctx->pc = 0x255674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255678:
    // 0x255678: 0x46006301
    ctx->pc = 0x255678u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_25567c:
    // 0x25567c: 0xe7ac0030
    ctx->pc = 0x25567cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_255680:
    // 0x255680: 0xc6400044
    ctx->pc = 0x255680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255684:
    // 0x255684: 0xc4610004
    ctx->pc = 0x255684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255688:
    // 0x255688: 0x46010001
    ctx->pc = 0x255688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25568c:
    // 0x25568c: 0xe7a00034
    ctx->pc = 0x25568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_255690:
    // 0x255690: 0xc64d0048
    ctx->pc = 0x255690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_255694:
    // 0x255694: 0xc4600008
    ctx->pc = 0x255694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255698:
    // 0x255698: 0x46006b41
    ctx->pc = 0x255698u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_25569c:
    // 0x25569c: 0xc0b5c34
label_2556a0:
    if (ctx->pc == 0x2556A0u) {
        ctx->pc = 0x2556A0u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x2556A4u;
        goto label_2556a4;
    }
    ctx->pc = 0x25569Cu;
    SET_GPR_U32(ctx, 31, 0x2556A4u);
    ctx->pc = 0x2556A0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556A4u; }
    }
    if (ctx->pc != 0x2556A4u) { return; }
    ctx->pc = 0x2556A4u;
label_2556a4:
    // 0x2556a4: 0x3c014170
    ctx->pc = 0x2556a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
label_2556a8:
    // 0x2556a8: 0x44810800
    ctx->pc = 0x2556a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2556ac:
    // 0x2556ac: 0x4601a502
    ctx->pc = 0x2556acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_2556b0:
    // 0x2556b0: 0x4600a034
    ctx->pc = 0x2556b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2556b4:
    // 0x2556b4: 0x0
    ctx->pc = 0x2556b4u;
    // NOP
label_2556b8:
    // 0x2556b8: 0x450306f6
label_2556bc:
    if (ctx->pc == 0x2556BCu) {
        ctx->pc = 0x2556BCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2556C0u;
        goto label_2556c0;
    }
    ctx->pc = 0x2556B8u;
    {
        const bool branch_taken_0x2556b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2556b8) {
            ctx->pc = 0x2556BCu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x2556C0u;
label_2556c0:
    // 0x2556c0: 0xc0b40f8
label_2556c4:
    if (ctx->pc == 0x2556C4u) {
        ctx->pc = 0x2556C4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->pc = 0x2556C8u;
        goto label_2556c8;
    }
    ctx->pc = 0x2556C0u;
    SET_GPR_U32(ctx, 31, 0x2556C8u);
    ctx->pc = 0x2556C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    ctx->pc = 0x2D03E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeGetAlpha_0x2d03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556C8u; }
    }
    if (ctx->pc != 0x2556C8u) { return; }
    ctx->pc = 0x2556C8u;
label_2556c8:
    // 0x2556c8: 0x2445fff8
    ctx->pc = 0x2556c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967288));
label_2556cc:
    // 0x2556cc: 0x5ca0062c
label_2556d0:
    if (ctx->pc == 0x2556D0u) {
        ctx->pc = 0x2556D0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->pc = 0x2556D4u;
        goto label_2556d4;
    }
    ctx->pc = 0x2556CCu;
    {
        const bool branch_taken_0x2556cc = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2556cc) {
            ctx->pc = 0x2556D0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
            ctx->pc = 0x256F80u;
            goto label_256f80;
        }
    }
    ctx->pc = 0x2556D4u;
label_2556d4:
    // 0x2556d4: 0x282d
    ctx->pc = 0x2556d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2556d8:
    // 0x2556d8: 0x964200d8
    ctx->pc = 0x2556d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_2556dc:
    // 0x2556dc: 0x3042f7ff
    ctx->pc = 0x2556dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 63487));
label_2556e0:
    // 0x2556e0: 0xa64200d8
    ctx->pc = 0x2556e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
label_2556e4:
    // 0x2556e4: 0x10000626
label_2556e8:
    if (ctx->pc == 0x2556E8u) {
        ctx->pc = 0x2556E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->pc = 0x2556ECu;
        goto label_2556ec;
    }
    ctx->pc = 0x2556E4u;
    {
        const bool branch_taken_0x2556e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2556E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
        if (branch_taken_0x2556e4) {
            ctx->pc = 0x256F80u;
            goto label_256f80;
        }
    }
    ctx->pc = 0x2556ECu;
label_2556ec:
    // 0x2556ec: 0x40034800
    ctx->pc = 0x2556ecu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_2556f0:
    // 0x2556f0: 0x3c02003a
    ctx->pc = 0x2556f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2556f4:
    // 0x2556f4: 0x8c4221d0
    ctx->pc = 0x2556f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
label_2556f8:
    // 0x2556f8: 0xac430128
    ctx->pc = 0x2556f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
label_2556fc:
    // 0x2556fc: 0x964200d8
    ctx->pc = 0x2556fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_255700:
    // 0x255700: 0x30424000
    ctx->pc = 0x255700u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
label_255704:
    // 0x255704: 0x21400
    ctx->pc = 0x255704u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_255708:
    // 0x255708: 0x28403
    ctx->pc = 0x255708u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_25570c:
    // 0x25570c: 0x3c020031
    ctx->pc = 0x25570cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_255710:
    // 0x255710: 0x8c43fff0
    ctx->pc = 0x255710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
label_255714:
    // 0x255714: 0x28620002
    ctx->pc = 0x255714u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
label_255718:
    // 0x255718: 0x14400087
label_25571c:
    if (ctx->pc == 0x25571Cu) {
        ctx->pc = 0x25571Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x255720u;
        goto label_255720;
    }
    ctx->pc = 0x255718u;
    {
        const bool branch_taken_0x255718 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25571Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x255718) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x255720u;
label_255720:
    // 0x255720: 0x24020002
    ctx->pc = 0x255720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_255724:
    // 0x255724: 0x10620084
label_255728:
    if (ctx->pc == 0x255728u) {
        ctx->pc = 0x25572Cu;
        goto label_25572c;
    }
    ctx->pc = 0x255724u;
    {
        const bool branch_taken_0x255724 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x255724) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x25572Cu;
label_25572c:
    // 0x25572c: 0x82220006
    ctx->pc = 0x25572cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_255730:
    // 0x255730: 0x18400081
label_255734:
    if (ctx->pc == 0x255734u) {
        ctx->pc = 0x255734u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x255738u;
        goto label_255738;
    }
    ctx->pc = 0x255730u;
    {
        const bool branch_taken_0x255730 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x255734u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x255730) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x255738u;
label_255738:
    // 0x255738: 0x864300f0
    ctx->pc = 0x255738u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 240)));
label_25573c:
    // 0x25573c: 0x1062007e
label_255740:
    if (ctx->pc == 0x255740u) {
        ctx->pc = 0x255740u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x255744u;
        goto label_255744;
    }
    ctx->pc = 0x25573Cu;
    {
        const bool branch_taken_0x25573c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x255740u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x25573c) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x255744u;
label_255744:
    // 0x255744: 0x82230007
    ctx->pc = 0x255744u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_255748:
    // 0x255748: 0x14620007
label_25574c:
    if (ctx->pc == 0x25574Cu) {
        ctx->pc = 0x25574Cu;
        SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x255750u;
        goto label_255750;
    }
    ctx->pc = 0x255748u;
    {
        const bool branch_taken_0x255748 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25574Cu;
        SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        if (branch_taken_0x255748) {
            ctx->pc = 0x255768u;
            goto label_255768;
        }
    }
    ctx->pc = 0x255750u;
label_255750:
    // 0x255750: 0x240202d
    ctx->pc = 0x255750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255754:
    // 0x255754: 0x2405000f
    ctx->pc = 0x255754u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
label_255758:
    // 0x255758: 0xc094fa6
label_25575c:
    if (ctx->pc == 0x25575Cu) {
        ctx->pc = 0x25575Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255760u;
        goto label_255760;
    }
    ctx->pc = 0x255758u;
    SET_GPR_U32(ctx, 31, 0x255760u);
    ctx->pc = 0x25575Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253E98u;
    {
        const uint32_t __entryPc = ctx->pc;
        generate_single_0x253e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255760u; }
    }
    if (ctx->pc != 0x255760u) { return; }
    ctx->pc = 0x255760u;
label_255760:
    // 0x255760: 0x10000075
label_255764:
    if (ctx->pc == 0x255764u) {
        ctx->pc = 0x255768u;
        goto label_255768;
    }
    ctx->pc = 0x255760u;
    {
        const bool branch_taken_0x255760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x255760) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x255768u;
label_255768:
    // 0x255768: 0x82220002
    ctx->pc = 0x255768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_25576c:
    // 0x25576c: 0x54102a
    ctx->pc = 0x25576cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
label_255770:
    // 0x255770: 0x10400071
label_255774:
    if (ctx->pc == 0x255774u) {
        ctx->pc = 0x255774u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255778u;
        goto label_255778;
    }
    ctx->pc = 0x255770u;
    {
        const bool branch_taken_0x255770 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255774u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x255770) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x255778u;
label_255778:
    // 0x255778: 0xc094e70
label_25577c:
    if (ctx->pc == 0x25577Cu) {
        ctx->pc = 0x25577Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255780u;
        goto label_255780;
    }
    ctx->pc = 0x255778u;
    SET_GPR_U32(ctx, 31, 0x255780u);
    ctx->pc = 0x25577Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2539C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemPos_0x2539c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255780u; }
    }
    if (ctx->pc != 0x255780u) { return; }
    ctx->pc = 0x255780u;
label_255780:
    // 0x255780: 0x240202d
    ctx->pc = 0x255780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255784:
    // 0x255784: 0x3a0282d
    ctx->pc = 0x255784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_255788:
    // 0x255788: 0x280302d
    ctx->pc = 0x255788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25578c:
    // 0x25578c: 0xc094f5e
label_255790:
    if (ctx->pc == 0x255790u) {
        ctx->pc = 0x255790u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255794u;
        goto label_255794;
    }
    ctx->pc = 0x25578Cu;
    SET_GPR_U32(ctx, 31, 0x255794u);
    ctx->pc = 0x255790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        generate_now_0x253d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255794u; }
    }
    if (ctx->pc != 0x255794u) { return; }
    ctx->pc = 0x255794u;
label_255794:
    // 0x255794: 0x10400068
label_255798:
    if (ctx->pc == 0x255798u) {
        ctx->pc = 0x255798u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25579Cu;
        goto label_25579c;
    }
    ctx->pc = 0x255794u;
    {
        const bool branch_taken_0x255794 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255798u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x255794) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x25579Cu;
label_25579c:
    // 0x25579c: 0x8e420000
    ctx->pc = 0x25579cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2557a0:
    // 0x2557a0: 0xc454000c
    ctx->pc = 0x2557a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2557a4:
    // 0x2557a4: 0xc094e78
label_2557a8:
    if (ctx->pc == 0x2557A8u) {
        ctx->pc = 0x2557A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2557ACu;
        goto label_2557ac;
    }
    ctx->pc = 0x2557A4u;
    SET_GPR_U32(ctx, 31, 0x2557ACu);
    ctx->pc = 0x2557A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2539E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemDir_0x2539e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2557ACu; }
    }
    if (ctx->pc != 0x2557ACu) { return; }
    ctx->pc = 0x2557ACu;
label_2557ac:
    // 0x2557ac: 0x82230007
    ctx->pc = 0x2557acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2557b0:
    // 0x2557b0: 0x2402000c
    ctx->pc = 0x2557b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_2557b4:
    // 0x2557b4: 0x14620009
label_2557b8:
    if (ctx->pc == 0x2557B8u) {
        ctx->pc = 0x2557B8u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2557BCu;
        goto label_2557bc;
    }
    ctx->pc = 0x2557B4u;
    {
        const bool branch_taken_0x2557b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2557B8u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2557b4) {
            ctx->pc = 0x2557DCu;
            goto label_2557dc;
        }
    }
    ctx->pc = 0x2557BCu;
label_2557bc:
    // 0x2557bc: 0x82220004
    ctx->pc = 0x2557bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_2557c0:
    // 0x2557c0: 0x28420003
    ctx->pc = 0x2557c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
label_2557c4:
    // 0x2557c4: 0x14400005
label_2557c8:
    if (ctx->pc == 0x2557C8u) {
        ctx->pc = 0x2557C8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2557CCu;
        goto label_2557cc;
    }
    ctx->pc = 0x2557C4u;
    {
        const bool branch_taken_0x2557c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2557C8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
        if (branch_taken_0x2557c4) {
            ctx->pc = 0x2557DCu;
            goto label_2557dc;
        }
    }
    ctx->pc = 0x2557CCu;
label_2557cc:
    // 0x2557cc: 0x2462fffd
    ctx->pc = 0x2557ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967293));
label_2557d0:
    // 0x2557d0: 0xa2220004
    ctx->pc = 0x2557d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_2557d4:
    // 0x2557d4: 0xa220000a
    ctx->pc = 0x2557d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
label_2557d8:
    // 0x2557d8: 0x240affff
    ctx->pc = 0x2557d8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2557dc:
    // 0x2557dc: 0x3a0202d
    ctx->pc = 0x2557dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2557e0:
    // 0x2557e0: 0x86250000
    ctx->pc = 0x2557e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2557e4:
    // 0x2557e4: 0x82260006
    ctx->pc = 0x2557e4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_2557e8:
    // 0x2557e8: 0x27a70010
    ctx->pc = 0x2557e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
label_2557ec:
    // 0x2557ec: 0x4600a306
    ctx->pc = 0x2557ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2557f0:
    // 0x2557f0: 0x82280007
    ctx->pc = 0x2557f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2557f4:
    // 0x2557f4: 0x240482d
    ctx->pc = 0x2557f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2557f8:
    // 0x2557f8: 0xc08e53c
label_2557fc:
    if (ctx->pc == 0x2557FCu) {
        ctx->pc = 0x2557FCu;
        if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 10, GPR_U32(ctx, 0));
        ctx->pc = 0x255800u;
        goto label_255800;
    }
    ctx->pc = 0x2557F8u;
    SET_GPR_U32(ctx, 31, 0x255800u);
    ctx->pc = 0x2557FCu;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 10, GPR_U32(ctx, 0));
    ctx->pc = 0x2394F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        generate_enemy_0x2394f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255800u; }
    }
    if (ctx->pc != 0x255800u) { return; }
    ctx->pc = 0x255800u;
label_255800:
    // 0x255800: 0x40982d
    ctx->pc = 0x255800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255804:
    // 0x255804: 0x660004c
label_255808:
    if (ctx->pc == 0x255808u) {
        ctx->pc = 0x255808u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
        ctx->pc = 0x25580Cu;
        goto label_25580c;
    }
    ctx->pc = 0x255804u;
    {
        const bool branch_taken_0x255804 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x255808u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x255804) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x25580Cu;
label_25580c:
    // 0x25580c: 0x2631818
    ctx->pc = 0x25580cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_255810:
    // 0x255810: 0x3c020033
    ctx->pc = 0x255810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_255814:
    // 0x255814: 0x2442dfd0
    ctx->pc = 0x255814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
label_255818:
    // 0x255818: 0x628021
    ctx->pc = 0x255818u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25581c:
    // 0x25581c: 0x240202d
    ctx->pc = 0x25581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255820:
    // 0x255820: 0xc094f88
label_255824:
    if (ctx->pc == 0x255824u) {
        ctx->pc = 0x255824u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255828u;
        goto label_255828;
    }
    ctx->pc = 0x255820u;
    SET_GPR_U32(ctx, 31, 0x255828u);
    ctx->pc = 0x255824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        did_generate_0x253e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255828u; }
    }
    if (ctx->pc != 0x255828u) { return; }
    ctx->pc = 0x255828u;
label_255828:
    // 0x255828: 0xa60002ec
    ctx->pc = 0x255828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 748), (uint16_t)GPR_U32(ctx, 0));
label_25582c:
    // 0x25582c: 0xc6210010
    ctx->pc = 0x25582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255830:
    // 0x255830: 0xc600026c
    ctx->pc = 0x255830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255834:
    // 0x255834: 0x46000840
    ctx->pc = 0x255834u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255838:
    // 0x255838: 0x3c014049
    ctx->pc = 0x255838u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
label_25583c:
    // 0x25583c: 0x34210fdb
    ctx->pc = 0x25583cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_255840:
    // 0x255840: 0x44810000
    ctx->pc = 0x255840u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255844:
    // 0x255844: 0x46010034
    ctx->pc = 0x255844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255848:
    // 0x255848: 0x0
    ctx->pc = 0x255848u;
    // NOP
label_25584c:
    // 0x25584c: 0x45000006
label_255850:
    if (ctx->pc == 0x255850u) {
        ctx->pc = 0x255850u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        ctx->pc = 0x255854u;
        goto label_255854;
    }
    ctx->pc = 0x25584Cu;
    {
        const bool branch_taken_0x25584c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255850u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x25584c) {
            ctx->pc = 0x255868u;
            goto label_255868;
        }
    }
    ctx->pc = 0x255854u;
label_255854:
    // 0x255854: 0x3c0140c9
    ctx->pc = 0x255854u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
label_255858:
    // 0x255858: 0x34210fdb
    ctx->pc = 0x255858u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_25585c:
    // 0x25585c: 0x44810000
    ctx->pc = 0x25585cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255860:
    // 0x255860: 0x1000000d
label_255864:
    if (ctx->pc == 0x255864u) {
        ctx->pc = 0x255864u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x255868u;
        goto label_255868;
    }
    ctx->pc = 0x255860u;
    {
        const bool branch_taken_0x255860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255864u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x255860) {
            ctx->pc = 0x255898u;
            goto label_255898;
        }
    }
    ctx->pc = 0x255868u;
label_255868:
    // 0x255868: 0xc6010260
    ctx->pc = 0x255868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25586c:
    // 0x25586c: 0x3c01c049
    ctx->pc = 0x25586cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
label_255870:
    // 0x255870: 0x34210fdb
    ctx->pc = 0x255870u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_255874:
    // 0x255874: 0x44810000
    ctx->pc = 0x255874u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255878:
    // 0x255878: 0x46000836
    ctx->pc = 0x255878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25587c:
    // 0x25587c: 0x0
    ctx->pc = 0x25587cu;
    // NOP
label_255880:
    // 0x255880: 0x45020006
label_255884:
    if (ctx->pc == 0x255884u) {
        ctx->pc = 0x255884u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        ctx->pc = 0x255888u;
        goto label_255888;
    }
    ctx->pc = 0x255880u;
    {
        const bool branch_taken_0x255880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255880) {
            ctx->pc = 0x255884u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
            ctx->pc = 0x25589Cu;
            goto label_25589c;
        }
    }
    ctx->pc = 0x255888u;
label_255888:
    // 0x255888: 0x3c0140c9
    ctx->pc = 0x255888u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
label_25588c:
    // 0x25588c: 0x34210fdb
    ctx->pc = 0x25588cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_255890:
    // 0x255890: 0x44810000
    ctx->pc = 0x255890u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255894:
    // 0x255894: 0x46000840
    ctx->pc = 0x255894u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255898:
    // 0x255898: 0xe6010260
    ctx->pc = 0x255898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
label_25589c:
    // 0x25589c: 0xe6010264
    ctx->pc = 0x25589cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
label_2558a0:
    // 0x2558a0: 0xc6000040
    ctx->pc = 0x2558a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2558a4:
    // 0x2558a4: 0xe6000300
    ctx->pc = 0x2558a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
label_2558a8:
    // 0x2558a8: 0xc6000044
    ctx->pc = 0x2558a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2558ac:
    // 0x2558ac: 0xe6000304
    ctx->pc = 0x2558acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
label_2558b0:
    // 0x2558b0: 0xc6000048
    ctx->pc = 0x2558b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2558b4:
    // 0x2558b4: 0xe6000308
    ctx->pc = 0x2558b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
label_2558b8:
    // 0x2558b8: 0xae000254
    ctx->pc = 0x2558b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 0));
label_2558bc:
    // 0x2558bc: 0xe6010258
    ctx->pc = 0x2558bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
label_2558c0:
    // 0x2558c0: 0xae00025c
    ctx->pc = 0x2558c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
label_2558c4:
    // 0x2558c4: 0x82230007
    ctx->pc = 0x2558c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2558c8:
    // 0x2558c8: 0x2402000c
    ctx->pc = 0x2558c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_2558cc:
    // 0x2558cc: 0x14620006
label_2558d0:
    if (ctx->pc == 0x2558D0u) {
        ctx->pc = 0x2558D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2558D4u;
        goto label_2558d4;
    }
    ctx->pc = 0x2558CCu;
    {
        const bool branch_taken_0x2558cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2558D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x2558cc) {
            ctx->pc = 0x2558E8u;
            goto label_2558e8;
        }
    }
    ctx->pc = 0x2558D4u;
label_2558d4:
    // 0x2558d4: 0x220202d
    ctx->pc = 0x2558d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2558d8:
    // 0x2558d8: 0xc095008
label_2558dc:
    if (ctx->pc == 0x2558DCu) {
        ctx->pc = 0x2558DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2558E0u;
        goto label_2558e0;
    }
    ctx->pc = 0x2558D8u;
    SET_GPR_U32(ctx, 31, 0x2558E0u);
    ctx->pc = 0x2558DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x254020u;
    {
        const uint32_t __entryPc = ctx->pc;
        place_logic12_0x254020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2558E0u; }
    }
    if (ctx->pc != 0x2558E0u) { return; }
    ctx->pc = 0x2558E0u;
label_2558e0:
    // 0x2558e0: 0x10000015
label_2558e4:
    if (ctx->pc == 0x2558E4u) {
        ctx->pc = 0x2558E8u;
        goto label_2558e8;
    }
    ctx->pc = 0x2558E0u;
    {
        const bool branch_taken_0x2558e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2558e0) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x2558E8u;
label_2558e8:
    // 0x2558e8: 0x54620006
label_2558ec:
    if (ctx->pc == 0x2558ECu) {
        ctx->pc = 0x2558ECu;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
        ctx->pc = 0x2558F0u;
        goto label_2558f0;
    }
    ctx->pc = 0x2558E8u;
    {
        const bool branch_taken_0x2558e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2558e8) {
            ctx->pc = 0x2558ECu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->pc = 0x255904u;
            goto label_255904;
        }
    }
    ctx->pc = 0x2558F0u;
label_2558f0:
    // 0x2558f0: 0x220202d
    ctx->pc = 0x2558f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2558f4:
    // 0x2558f4: 0xc0950d0
label_2558f8:
    if (ctx->pc == 0x2558F8u) {
        ctx->pc = 0x2558F8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2558FCu;
        goto label_2558fc;
    }
    ctx->pc = 0x2558F4u;
    SET_GPR_U32(ctx, 31, 0x2558FCu);
    ctx->pc = 0x2558F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x254340u;
    {
        const uint32_t __entryPc = ctx->pc;
        place_logic13_0x254340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2558FCu; }
    }
    if (ctx->pc != 0x2558FCu) { return; }
    ctx->pc = 0x2558FCu;
label_2558fc:
    // 0x2558fc: 0x1000000e
label_255900:
    if (ctx->pc == 0x255900u) {
        ctx->pc = 0x255904u;
        goto label_255904;
    }
    ctx->pc = 0x2558FCu;
    {
        const bool branch_taken_0x2558fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2558fc) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x255904u;
label_255904:
    // 0x255904: 0x2402000e
    ctx->pc = 0x255904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
label_255908:
    // 0x255908: 0x54620006
label_25590c:
    if (ctx->pc == 0x25590Cu) {
        ctx->pc = 0x25590Cu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x255910u;
        goto label_255910;
    }
    ctx->pc = 0x255908u;
    {
        const bool branch_taken_0x255908 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x255908) {
            ctx->pc = 0x25590Cu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->pc = 0x255924u;
            goto label_255924;
        }
    }
    ctx->pc = 0x255910u;
label_255910:
    // 0x255910: 0x220202d
    ctx->pc = 0x255910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255914:
    // 0x255914: 0xc0950ee
label_255918:
    if (ctx->pc == 0x255918u) {
        ctx->pc = 0x255918u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25591Cu;
        goto label_25591c;
    }
    ctx->pc = 0x255914u;
    SET_GPR_U32(ctx, 31, 0x25591Cu);
    ctx->pc = 0x255918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2543B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        place_logic14_0x2543b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25591Cu; }
    }
    if (ctx->pc != 0x25591Cu) { return; }
    ctx->pc = 0x25591Cu;
label_25591c:
    // 0x25591c: 0x10000006
label_255920:
    if (ctx->pc == 0x255920u) {
        ctx->pc = 0x255924u;
        goto label_255924;
    }
    ctx->pc = 0x25591Cu;
    {
        const bool branch_taken_0x25591c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25591c) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x255924u;
label_255924:
    // 0x255924: 0x24420001
    ctx->pc = 0x255924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_255928:
    // 0x255928: 0xa2220002
    ctx->pc = 0x255928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_25592c:
    // 0x25592c: 0x92220004
    ctx->pc = 0x25592cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_255930:
    // 0x255930: 0x24420001
    ctx->pc = 0x255930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_255934:
    // 0x255934: 0xa2220004
    ctx->pc = 0x255934u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_255938:
    // 0x255938: 0x40034800
    ctx->pc = 0x255938u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_25593c:
    // 0x25593c: 0x3c02003a
    ctx->pc = 0x25593cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_255940:
    // 0x255940: 0x8c4421d0
    ctx->pc = 0x255940u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
label_255944:
    // 0x255944: 0x8c820128
    ctx->pc = 0x255944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_255948:
    // 0x255948: 0x621823
    ctx->pc = 0x255948u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25594c:
    // 0x25594c: 0x8c820120
    ctx->pc = 0x25594cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 288)));
label_255950:
    // 0x255950: 0x621821
    ctx->pc = 0x255950u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_255954:
    // 0x255954: 0xac830120
    ctx->pc = 0x255954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 3));
label_255958:
    // 0x255958: 0x8c820124
    ctx->pc = 0x255958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_25595c:
    // 0x25595c: 0x24420001
    ctx->pc = 0x25595cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_255960:
    // 0x255960: 0x1000064b
label_255964:
    if (ctx->pc == 0x255964u) {
        ctx->pc = 0x255964u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 2));
        ctx->pc = 0x255968u;
        goto label_255968;
    }
    ctx->pc = 0x255960u;
    {
        const bool branch_taken_0x255960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255964u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 2));
        if (branch_taken_0x255960) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x255968u;
label_255968:
    // 0x255968: 0x3c020032
    ctx->pc = 0x255968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_25596c:
    // 0x25596c: 0x8c4207f8
    ctx->pc = 0x25596cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
label_255970:
    // 0x255970: 0x10400006
label_255974:
    if (ctx->pc == 0x255974u) {
        ctx->pc = 0x255974u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x255978u;
        goto label_255978;
    }
    ctx->pc = 0x255970u;
    {
        const bool branch_taken_0x255970 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255974u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x255970) {
            ctx->pc = 0x25598Cu;
            goto label_25598c;
        }
    }
    ctx->pc = 0x255978u;
label_255978:
    // 0x255978: 0xa24000dc
    ctx->pc = 0x255978u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 220), (uint8_t)GPR_U32(ctx, 0));
label_25597c:
    // 0x25597c: 0xa24000de
    ctx->pc = 0x25597cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 0));
label_255980:
    // 0x255980: 0xa6400092
    ctx->pc = 0x255980u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 0));
label_255984:
    // 0x255984: 0x100004bd
label_255988:
    if (ctx->pc == 0x255988u) {
        ctx->pc = 0x255988u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x25598Cu;
        goto label_25598c;
    }
    ctx->pc = 0x255984u;
    {
        const bool branch_taken_0x255984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255988u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x255984) {
            ctx->pc = 0x256C7Cu;
            goto label_256c7c;
        }
    }
    ctx->pc = 0x25598Cu;
label_25598c:
    // 0x25598c: 0xde4200d8
    ctx->pc = 0x25598cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 216)));
label_255990:
    // 0x255990: 0x3403ffff
    ctx->pc = 0x255990u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
label_255994:
    // 0x255994: 0x3183c
    ctx->pc = 0x255994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_255998:
    // 0x255998: 0x431024
    ctx->pc = 0x255998u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25599c:
    // 0x25599c: 0x34038000
    ctx->pc = 0x25599cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
label_2559a0:
    // 0x2559a0: 0x31c78
    ctx->pc = 0x2559a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
label_2559a4:
    // 0x2559a4: 0x544304b6
label_2559a8:
    if (ctx->pc == 0x2559A8u) {
        ctx->pc = 0x2559A8u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x2559ACu;
        goto label_2559ac;
    }
    ctx->pc = 0x2559A4u;
    {
        const bool branch_taken_0x2559a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2559a4) {
            ctx->pc = 0x2559A8u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->pc = 0x256C80u;
            goto label_256c80;
        }
    }
    ctx->pc = 0x2559ACu;
label_2559ac:
    // 0x2559ac: 0x8e420000
    ctx->pc = 0x2559acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2559b0:
    // 0x2559b0: 0x8c430004
    ctx->pc = 0x2559b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2559b4:
    // 0x2559b4: 0x24020004
    ctx->pc = 0x2559b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2559b8:
    // 0x2559b8: 0x546204b1
label_2559bc:
    if (ctx->pc == 0x2559BCu) {
        ctx->pc = 0x2559BCu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x2559C0u;
        goto label_2559c0;
    }
    ctx->pc = 0x2559B8u;
    {
        const bool branch_taken_0x2559b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2559b8) {
            ctx->pc = 0x2559BCu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->pc = 0x256C80u;
            goto label_256c80;
        }
    }
    ctx->pc = 0x2559C0u;
label_2559c0:
    // 0x2559c0: 0x3c020034
    ctx->pc = 0x2559c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2559c4:
    // 0x2559c4: 0x2442eb60
    ctx->pc = 0x2559c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
label_2559c8:
    // 0x2559c8: 0xc4430140
    ctx->pc = 0x2559c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2559cc:
    // 0x2559cc: 0xc6400040
    ctx->pc = 0x2559ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2559d0:
    // 0x2559d0: 0x460018c1
    ctx->pc = 0x2559d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2559d4:
    // 0x2559d4: 0xe7a30030
    ctx->pc = 0x2559d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2559d8:
    // 0x2559d8: 0xc4420144
    ctx->pc = 0x2559d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2559dc:
    // 0x2559dc: 0xc6400044
    ctx->pc = 0x2559dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2559e0:
    // 0x2559e0: 0x46001081
    ctx->pc = 0x2559e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2559e4:
    // 0x2559e4: 0xe7a20034
    ctx->pc = 0x2559e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2559e8:
    // 0x2559e8: 0xc4400148
    ctx->pc = 0x2559e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2559ec:
    // 0x2559ec: 0xc6410048
    ctx->pc = 0x2559ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2559f0:
    // 0x2559f0: 0x46010001
    ctx->pc = 0x2559f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2559f4:
    // 0x2559f4: 0xe7a00038
    ctx->pc = 0x2559f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2559f8:
    // 0x2559f8: 0x46031b02
    ctx->pc = 0x2559f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2559fc:
    // 0x2559fc: 0x46021082
    ctx->pc = 0x2559fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_255a00:
    // 0x255a00: 0x46026300
    ctx->pc = 0x255a00u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_255a04:
    // 0x255a04: 0x46000002
    ctx->pc = 0x255a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_255a08:
    // 0x255a08: 0x46006300
    ctx->pc = 0x255a08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_255a0c:
    // 0x255a0c: 0x0
    ctx->pc = 0x255a0cu;
    // NOP
label_255a10:
    // 0x255a10: 0x0
    ctx->pc = 0x255a10u;
    // NOP
label_255a14:
    // 0x255a14: 0x460c0044
    ctx->pc = 0x255a14u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_255a18:
    // 0x255a18: 0x46010832
    ctx->pc = 0x255a18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255a1c:
    // 0x255a1c: 0x45010004
label_255a20:
    if (ctx->pc == 0x255A20u) {
        ctx->pc = 0x255A24u;
        goto label_255a24;
    }
    ctx->pc = 0x255A1Cu;
    {
        const bool branch_taken_0x255a1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255a1c) {
            ctx->pc = 0x255A30u;
            goto label_255a30;
        }
    }
    ctx->pc = 0x255A24u;
label_255a24:
    // 0x255a24: 0xc0ba284
label_255a28:
    if (ctx->pc == 0x255A28u) {
        ctx->pc = 0x255A2Cu;
        goto label_255a2c;
    }
    ctx->pc = 0x255A24u;
    SET_GPR_U32(ctx, 31, 0x255A2Cu);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A2Cu; }
    }
    if (ctx->pc != 0x255A2Cu) { return; }
    ctx->pc = 0x255A2Cu;
label_255a2c:
    // 0x255a2c: 0x46000046
    ctx->pc = 0x255a2cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255a30:
    // 0x255a30: 0x3c014220
    ctx->pc = 0x255a30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16928 << 16));
label_255a34:
    // 0x255a34: 0x44810000
    ctx->pc = 0x255a34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255a38:
    // 0x255a38: 0x46000834
    ctx->pc = 0x255a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255a3c:
    // 0x255a3c: 0x0
    ctx->pc = 0x255a3cu;
    // NOP
label_255a40:
    // 0x255a40: 0x4502048f
label_255a44:
    if (ctx->pc == 0x255A44u) {
        ctx->pc = 0x255A44u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x255A48u;
        goto label_255a48;
    }
    ctx->pc = 0x255A40u;
    {
        const bool branch_taken_0x255a40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255a40) {
            ctx->pc = 0x255A44u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->pc = 0x256C80u;
            goto label_256c80;
        }
    }
    ctx->pc = 0x255A48u;
label_255a48:
    // 0x255a48: 0xc097fc6
label_255a4c:
    if (ctx->pc == 0x255A4Cu) {
        ctx->pc = 0x255A4Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x255A50u;
        goto label_255a50;
    }
    ctx->pc = 0x255A48u;
    SET_GPR_U32(ctx, 31, 0x255A50u);
    ctx->pc = 0x255A4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x25FF18u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTentacle_0x25ff18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A50u; }
    }
    if (ctx->pc != 0x255A50u) { return; }
    ctx->pc = 0x255A50u;
label_255a50:
    // 0x255a50: 0x1000048b
label_255a54:
    if (ctx->pc == 0x255A54u) {
        ctx->pc = 0x255A54u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x255A58u;
        goto label_255a58;
    }
    ctx->pc = 0x255A50u;
    {
        const bool branch_taken_0x255a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255A54u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        if (branch_taken_0x255a50) {
            ctx->pc = 0x256C80u;
            goto label_256c80;
        }
    }
    ctx->pc = 0x255A58u;
label_255a58:
    // 0x255a58: 0x824200dc
    ctx->pc = 0x255a58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_255a5c:
    // 0x255a5c: 0x54400060
label_255a60:
    if (ctx->pc == 0x255A60u) {
        ctx->pc = 0x255A60u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 252)));
        ctx->pc = 0x255A64u;
        goto label_255a64;
    }
    ctx->pc = 0x255A5Cu;
    {
        const bool branch_taken_0x255a5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x255a5c) {
            ctx->pc = 0x255A60u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 252)));
            ctx->pc = 0x255BE0u;
            goto label_255be0;
        }
    }
    ctx->pc = 0x255A64u;
label_255a64:
    // 0x255a64: 0x864200f2
    ctx->pc = 0x255a64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 242)));
label_255a68:
    // 0x255a68: 0x1840005c
label_255a6c:
    if (ctx->pc == 0x255A6Cu) {
        ctx->pc = 0x255A6Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        ctx->pc = 0x255A70u;
        goto label_255a70;
    }
    ctx->pc = 0x255A68u;
    {
        const bool branch_taken_0x255a68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x255A6Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x255a68) {
            ctx->pc = 0x255BDCu;
            goto label_255bdc;
        }
    }
    ctx->pc = 0x255A70u;
label_255a70:
    // 0x255a70: 0xafa00030
    ctx->pc = 0x255a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_255a74:
    // 0x255a74: 0xc64000f4
    ctx->pc = 0x255a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255a78:
    // 0x255a78: 0xe7a00034
    ctx->pc = 0x255a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_255a7c:
    // 0x255a7c: 0xafa00038
    ctx->pc = 0x255a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_255a80:
    // 0x255a80: 0x964200f2
    ctx->pc = 0x255a80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 242)));
label_255a84:
    // 0x255a84: 0x9463ffbc
    ctx->pc = 0x255a84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_255a88:
    // 0x255a88: 0x431023
    ctx->pc = 0x255a88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_255a8c:
    // 0x255a8c: 0xa64200f2
    ctx->pc = 0x255a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 2));
label_255a90:
    // 0x255a90: 0x21400
    ctx->pc = 0x255a90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_255a94:
    // 0x255a94: 0x5c400003
label_255a98:
    if (ctx->pc == 0x255A98u) {
        ctx->pc = 0x255A98u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 242)));
        ctx->pc = 0x255A9Cu;
        goto label_255a9c;
    }
    ctx->pc = 0x255A94u;
    {
        const bool branch_taken_0x255a94 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x255a94) {
            ctx->pc = 0x255A98u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 242)));
            ctx->pc = 0x255AA4u;
            goto label_255aa4;
        }
    }
    ctx->pc = 0x255A9Cu;
label_255a9c:
    // 0x255a9c: 0x10000049
label_255aa0:
    if (ctx->pc == 0x255AA0u) {
        ctx->pc = 0x255AA0u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x255AA4u;
        goto label_255aa4;
    }
    ctx->pc = 0x255A9Cu;
    {
        const bool branch_taken_0x255a9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255AA0u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x255a9c) {
            ctx->pc = 0x255BC4u;
            goto label_255bc4;
        }
    }
    ctx->pc = 0x255AA4u;
label_255aa4:
    // 0x255aa4: 0x24420004
    ctx->pc = 0x255aa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
label_255aa8:
    // 0x255aa8: 0x30420008
    ctx->pc = 0x255aa8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_255aac:
    // 0x255aac: 0x3c013d56
    ctx->pc = 0x255aacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15702 << 16));
label_255ab0:
    // 0x255ab0: 0x34217750
    ctx->pc = 0x255ab0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30544));
label_255ab4:
    // 0x255ab4: 0x44810000
    ctx->pc = 0x255ab4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255ab8:
    // 0x255ab8: 0x10400004
label_255abc:
    if (ctx->pc == 0x255ABCu) {
        ctx->pc = 0x255ABCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x255AC0u;
        goto label_255ac0;
    }
    ctx->pc = 0x255AB8u;
    {
        const bool branch_taken_0x255ab8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255ABCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x255ab8) {
            ctx->pc = 0x255ACCu;
            goto label_255acc;
        }
    }
    ctx->pc = 0x255AC0u;
label_255ac0:
    // 0x255ac0: 0x3c01bd56
    ctx->pc = 0x255ac0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48470 << 16));
label_255ac4:
    // 0x255ac4: 0x34217750
    ctx->pc = 0x255ac4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30544));
label_255ac8:
    // 0x255ac8: 0x44810000
    ctx->pc = 0x255ac8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255acc:
    // 0x255acc: 0x46000840
    ctx->pc = 0x255accu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255ad0:
    // 0x255ad0: 0x3c014049
    ctx->pc = 0x255ad0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
label_255ad4:
    // 0x255ad4: 0x34210fdb
    ctx->pc = 0x255ad4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_255ad8:
    // 0x255ad8: 0x44810000
    ctx->pc = 0x255ad8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255adc:
    // 0x255adc: 0x46010034
    ctx->pc = 0x255adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255ae0:
    // 0x255ae0: 0x0
    ctx->pc = 0x255ae0u;
    // NOP
label_255ae4:
    // 0x255ae4: 0x45000006
label_255ae8:
    if (ctx->pc == 0x255AE8u) {
        ctx->pc = 0x255AE8u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->pc = 0x255AECu;
        goto label_255aec;
    }
    ctx->pc = 0x255AE4u;
    {
        const bool branch_taken_0x255ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255AE8u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        if (branch_taken_0x255ae4) {
            ctx->pc = 0x255B00u;
            goto label_255b00;
        }
    }
    ctx->pc = 0x255AECu;
label_255aec:
    // 0x255aec: 0x3c0140c9
    ctx->pc = 0x255aecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
label_255af0:
    // 0x255af0: 0x34210fdb
    ctx->pc = 0x255af0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_255af4:
    // 0x255af4: 0x44810000
    ctx->pc = 0x255af4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255af8:
    // 0x255af8: 0x1000000d
label_255afc:
    if (ctx->pc == 0x255AFCu) {
        ctx->pc = 0x255AFCu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x255B00u;
        goto label_255b00;
    }
    ctx->pc = 0x255AF8u;
    {
        const bool branch_taken_0x255af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255AFCu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x255af8) {
            ctx->pc = 0x255B30u;
            goto label_255b30;
        }
    }
    ctx->pc = 0x255B00u;
label_255b00:
    // 0x255b00: 0xc7a10030
    ctx->pc = 0x255b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255b04:
    // 0x255b04: 0x3c01c049
    ctx->pc = 0x255b04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
label_255b08:
    // 0x255b08: 0x34210fdb
    ctx->pc = 0x255b08u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_255b0c:
    // 0x255b0c: 0x44810000
    ctx->pc = 0x255b0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255b10:
    // 0x255b10: 0x46000836
    ctx->pc = 0x255b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255b14:
    // 0x255b14: 0x0
    ctx->pc = 0x255b14u;
    // NOP
label_255b18:
    // 0x255b18: 0x45020005
label_255b1c:
    if (ctx->pc == 0x255B1Cu) {
        ctx->pc = 0x255B1Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x255B20u;
        goto label_255b20;
    }
    ctx->pc = 0x255B18u;
    {
        const bool branch_taken_0x255b18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255b18) {
            ctx->pc = 0x255B1Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x255B30u;
            goto label_255b30;
        }
    }
    ctx->pc = 0x255B20u;
label_255b20:
    // 0x255b20: 0x3c0140c9
    ctx->pc = 0x255b20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
label_255b24:
    // 0x255b24: 0x34210fdb
    ctx->pc = 0x255b24u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_255b28:
    // 0x255b28: 0x44810000
    ctx->pc = 0x255b28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255b2c:
    // 0x255b2c: 0x46000800
    ctx->pc = 0x255b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255b30:
    // 0x255b30: 0xe7a00030
    ctx->pc = 0x255b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_255b34:
    // 0x255b34: 0x964200f2
    ctx->pc = 0x255b34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 242)));
label_255b38:
    // 0x255b38: 0x30420008
    ctx->pc = 0x255b38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_255b3c:
    // 0x255b3c: 0x3c01bd8e
    ctx->pc = 0x255b3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48526 << 16));
label_255b40:
    // 0x255b40: 0x3421fa36
    ctx->pc = 0x255b40u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
label_255b44:
    // 0x255b44: 0x44810000
    ctx->pc = 0x255b44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255b48:
    // 0x255b48: 0x10400004
label_255b4c:
    if (ctx->pc == 0x255B4Cu) {
        ctx->pc = 0x255B4Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x255B50u;
        goto label_255b50;
    }
    ctx->pc = 0x255B48u;
    {
        const bool branch_taken_0x255b48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255B4Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x255b48) {
            ctx->pc = 0x255B5Cu;
            goto label_255b5c;
        }
    }
    ctx->pc = 0x255B50u;
label_255b50:
    // 0x255b50: 0x3c013d8e
    ctx->pc = 0x255b50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15758 << 16));
label_255b54:
    // 0x255b54: 0x3421fa36
    ctx->pc = 0x255b54u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
label_255b58:
    // 0x255b58: 0x44810000
    ctx->pc = 0x255b58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255b5c:
    // 0x255b5c: 0x46000840
    ctx->pc = 0x255b5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255b60:
    // 0x255b60: 0x3c014049
    ctx->pc = 0x255b60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
label_255b64:
    // 0x255b64: 0x34210fdb
    ctx->pc = 0x255b64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_255b68:
    // 0x255b68: 0x44810000
    ctx->pc = 0x255b68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255b6c:
    // 0x255b6c: 0x46010034
    ctx->pc = 0x255b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255b70:
    // 0x255b70: 0x0
    ctx->pc = 0x255b70u;
    // NOP
label_255b74:
    // 0x255b74: 0x45000006
label_255b78:
    if (ctx->pc == 0x255B78u) {
        ctx->pc = 0x255B78u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x255B7Cu;
        goto label_255b7c;
    }
    ctx->pc = 0x255B74u;
    {
        const bool branch_taken_0x255b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255B78u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        if (branch_taken_0x255b74) {
            ctx->pc = 0x255B90u;
            goto label_255b90;
        }
    }
    ctx->pc = 0x255B7Cu;
label_255b7c:
    // 0x255b7c: 0x3c0140c9
    ctx->pc = 0x255b7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
label_255b80:
    // 0x255b80: 0x34210fdb
    ctx->pc = 0x255b80u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_255b84:
    // 0x255b84: 0x44810000
    ctx->pc = 0x255b84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255b88:
    // 0x255b88: 0x1000000d
label_255b8c:
    if (ctx->pc == 0x255B8Cu) {
        ctx->pc = 0x255B8Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x255B90u;
        goto label_255b90;
    }
    ctx->pc = 0x255B88u;
    {
        const bool branch_taken_0x255b88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255B8Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x255b88) {
            ctx->pc = 0x255BC0u;
            goto label_255bc0;
        }
    }
    ctx->pc = 0x255B90u;
label_255b90:
    // 0x255b90: 0xc7a10034
    ctx->pc = 0x255b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255b94:
    // 0x255b94: 0x3c01c049
    ctx->pc = 0x255b94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
label_255b98:
    // 0x255b98: 0x34210fdb
    ctx->pc = 0x255b98u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_255b9c:
    // 0x255b9c: 0x44810000
    ctx->pc = 0x255b9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255ba0:
    // 0x255ba0: 0x46000836
    ctx->pc = 0x255ba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255ba4:
    // 0x255ba4: 0x0
    ctx->pc = 0x255ba4u;
    // NOP
label_255ba8:
    // 0x255ba8: 0x45020005
label_255bac:
    if (ctx->pc == 0x255BACu) {
        ctx->pc = 0x255BACu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x255BB0u;
        goto label_255bb0;
    }
    ctx->pc = 0x255BA8u;
    {
        const bool branch_taken_0x255ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255ba8) {
            ctx->pc = 0x255BACu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x255BC0u;
            goto label_255bc0;
        }
    }
    ctx->pc = 0x255BB0u;
label_255bb0:
    // 0x255bb0: 0x3c0140c9
    ctx->pc = 0x255bb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
label_255bb4:
    // 0x255bb4: 0x34210fdb
    ctx->pc = 0x255bb4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_255bb8:
    // 0x255bb8: 0x44810000
    ctx->pc = 0x255bb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255bbc:
    // 0x255bbc: 0x46000800
    ctx->pc = 0x255bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255bc0:
    // 0x255bc0: 0xe7a00034
    ctx->pc = 0x255bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_255bc4:
    // 0x255bc4: 0x26500010
    ctx->pc = 0x255bc4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 16));
label_255bc8:
    // 0x255bc8: 0x200202d
    ctx->pc = 0x255bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255bcc:
    // 0x255bcc: 0xc0b5ae8
label_255bd0:
    if (ctx->pc == 0x255BD0u) {
        ctx->pc = 0x255BD0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x255BD4u;
        goto label_255bd4;
    }
    ctx->pc = 0x255BCCu;
    SET_GPR_U32(ctx, 31, 0x255BD4u);
    ctx->pc = 0x255BD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255BD4u; }
    }
    if (ctx->pc != 0x255BD4u) { return; }
    ctx->pc = 0x255BD4u;
label_255bd4:
    // 0x255bd4: 0xc080ce2
label_255bd8:
    if (ctx->pc == 0x255BD8u) {
        ctx->pc = 0x255BD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255BDCu;
        goto label_255bdc;
    }
    ctx->pc = 0x255BD4u;
    SET_GPR_U32(ctx, 31, 0x255BDCu);
    ctx->pc = 0x255BD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255BDCu; }
    }
    if (ctx->pc != 0x255BDCu) { return; }
    ctx->pc = 0x255BDCu;
label_255bdc:
    // 0x255bdc: 0x8e4400fc
    ctx->pc = 0x255bdcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 252)));
label_255be0:
    // 0x255be0: 0x50800038
label_255be4:
    if (ctx->pc == 0x255BE4u) {
        ctx->pc = 0x255BE4u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x255BE8u;
        goto label_255be8;
    }
    ctx->pc = 0x255BE0u;
    {
        const bool branch_taken_0x255be0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x255be0) {
            ctx->pc = 0x255BE4u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->pc = 0x255CC4u;
            goto label_255cc4;
        }
    }
    ctx->pc = 0x255BE8u;
label_255be8:
    // 0x255be8: 0x8e420080
    ctx->pc = 0x255be8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_255bec:
    // 0x255bec: 0x50400035
label_255bf0:
    if (ctx->pc == 0x255BF0u) {
        ctx->pc = 0x255BF0u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x255BF4u;
        goto label_255bf4;
    }
    ctx->pc = 0x255BECu;
    {
        const bool branch_taken_0x255bec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x255bec) {
            ctx->pc = 0x255BF0u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->pc = 0x255CC4u;
            goto label_255cc4;
        }
    }
    ctx->pc = 0x255BF4u;
label_255bf4:
    // 0x255bf4: 0x8e420000
    ctx->pc = 0x255bf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255bf8:
    // 0x255bf8: 0x8c430004
    ctx->pc = 0x255bf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_255bfc:
    // 0x255bfc: 0x2402002c
    ctx->pc = 0x255bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
label_255c00:
    // 0x255c00: 0x10620030
label_255c04:
    if (ctx->pc == 0x255C04u) {
        ctx->pc = 0x255C04u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x255C08u;
        goto label_255c08;
    }
    ctx->pc = 0x255C00u;
    {
        const bool branch_taken_0x255c00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x255C04u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        if (branch_taken_0x255c00) {
            ctx->pc = 0x255CC4u;
            goto label_255cc4;
        }
    }
    ctx->pc = 0x255C08u;
label_255c08:
    // 0x255c08: 0x28620002
    ctx->pc = 0x255c08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
label_255c0c:
    // 0x255c0c: 0x10400028
label_255c10:
    if (ctx->pc == 0x255C10u) {
        ctx->pc = 0x255C10u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x255C14u;
        goto label_255c14;
    }
    ctx->pc = 0x255C0Cu;
    {
        const bool branch_taken_0x255c0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255C10u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 112)));
        if (branch_taken_0x255c0c) {
            ctx->pc = 0x255CB0u;
            goto label_255cb0;
        }
    }
    ctx->pc = 0x255C14u;
label_255c14:
    // 0x255c14: 0x14600006
label_255c18:
    if (ctx->pc == 0x255C18u) {
        ctx->pc = 0x255C18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x255C1Cu;
        goto label_255c1c;
    }
    ctx->pc = 0x255C14u;
    {
        const bool branch_taken_0x255c14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x255C18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 132));
        if (branch_taken_0x255c14) {
            ctx->pc = 0x255C30u;
            goto label_255c30;
        }
    }
    ctx->pc = 0x255C1Cu;
label_255c1c:
    // 0x255c1c: 0x3c013e4c
    ctx->pc = 0x255c1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
label_255c20:
    // 0x255c20: 0x3421cccd
    ctx->pc = 0x255c20u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_255c24:
    // 0x255c24: 0x4481a000
    ctx->pc = 0x255c24u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_255c28:
    // 0x255c28: 0x1000001a
label_255c2c:
    if (ctx->pc == 0x255C2Cu) {
        ctx->pc = 0x255C2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255C30u;
        goto label_255c30;
    }
    ctx->pc = 0x255C28u;
    {
        const bool branch_taken_0x255c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255C2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x255c28) {
            ctx->pc = 0x255C94u;
            goto label_255c94;
        }
    }
    ctx->pc = 0x255C30u;
label_255c30:
    // 0x255c30: 0x84830010
    ctx->pc = 0x255c30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
label_255c34:
    // 0x255c34: 0x28620002
    ctx->pc = 0x255c34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
label_255c38:
    // 0x255c38: 0x14400013
label_255c3c:
    if (ctx->pc == 0x255C3Cu) {
        ctx->pc = 0x255C40u;
        goto label_255c40;
    }
    ctx->pc = 0x255C38u;
    {
        const bool branch_taken_0x255c38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x255c38) {
            ctx->pc = 0x255C88u;
            goto label_255c88;
        }
    }
    ctx->pc = 0x255C40u;
label_255c40:
    // 0x255c40: 0xc4810018
    ctx->pc = 0x255c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255c44:
    // 0x255c44: 0x3c013f80
    ctx->pc = 0x255c44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_255c48:
    // 0x255c48: 0x44810000
    ctx->pc = 0x255c48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255c4c:
    // 0x255c4c: 0x46000d00
    ctx->pc = 0x255c4cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255c50:
    // 0x255c50: 0x44830000
    ctx->pc = 0x255c50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_255c54:
    // 0x255c54: 0x46800020
    ctx->pc = 0x255c54u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_255c58:
    // 0x255c58: 0x0
    ctx->pc = 0x255c58u;
    // NOP
label_255c5c:
    // 0x255c5c: 0x0
    ctx->pc = 0x255c5cu;
    // NOP
label_255c60:
    // 0x255c60: 0x4600a503
    ctx->pc = 0x255c60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
label_255c64:
    // 0x255c64: 0x3c013f4c
    ctx->pc = 0x255c64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
label_255c68:
    // 0x255c68: 0x3421cccd
    ctx->pc = 0x255c68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_255c6c:
    // 0x255c6c: 0x44810000
    ctx->pc = 0x255c6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255c70:
    // 0x255c70: 0x4600a502
    ctx->pc = 0x255c70u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_255c74:
    // 0x255c74: 0x3c013e4c
    ctx->pc = 0x255c74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
label_255c78:
    // 0x255c78: 0x3421cccd
    ctx->pc = 0x255c78u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_255c7c:
    // 0x255c7c: 0x44810000
    ctx->pc = 0x255c7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255c80:
    // 0x255c80: 0x10000003
label_255c84:
    if (ctx->pc == 0x255C84u) {
        ctx->pc = 0x255C84u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x255C88u;
        goto label_255c88;
    }
    ctx->pc = 0x255C80u;
    {
        const bool branch_taken_0x255c80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255C84u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x255c80) {
            ctx->pc = 0x255C90u;
            goto label_255c90;
        }
    }
    ctx->pc = 0x255C88u;
label_255c88:
    // 0x255c88: 0x3c013f80
    ctx->pc = 0x255c88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_255c8c:
    // 0x255c8c: 0x4481a000
    ctx->pc = 0x255c8cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_255c90:
    // 0x255c90: 0x200202d
    ctx->pc = 0x255c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255c94:
    // 0x255c94: 0x24050008
    ctx->pc = 0x255c94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
label_255c98:
    // 0x255c98: 0xc0b41b8
label_255c9c:
    if (ctx->pc == 0x255C9Cu) {
        ctx->pc = 0x255C9Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255CA0u;
        goto label_255ca0;
    }
    ctx->pc = 0x255C98u;
    SET_GPR_U32(ctx, 31, 0x255CA0u);
    ctx->pc = 0x255C9Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255CA0u; }
    }
    if (ctx->pc != 0x255CA0u) { return; }
    ctx->pc = 0x255CA0u;
label_255ca0:
    // 0x255ca0: 0xe6140040
    ctx->pc = 0x255ca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_255ca4:
    // 0x255ca4: 0xe6140044
    ctx->pc = 0x255ca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_255ca8:
    // 0x255ca8: 0x10000005
label_255cac:
    if (ctx->pc == 0x255CACu) {
        ctx->pc = 0x255CACu;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->pc = 0x255CB0u;
        goto label_255cb0;
    }
    ctx->pc = 0x255CA8u;
    {
        const bool branch_taken_0x255ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255CACu;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        if (branch_taken_0x255ca8) {
            ctx->pc = 0x255CC0u;
            goto label_255cc0;
        }
    }
    ctx->pc = 0x255CB0u;
label_255cb0:
    // 0x255cb0: 0x200202d
    ctx->pc = 0x255cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255cb4:
    // 0x255cb4: 0x24050008
    ctx->pc = 0x255cb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
label_255cb8:
    // 0x255cb8: 0xc0b41e4
label_255cbc:
    if (ctx->pc == 0x255CBCu) {
        ctx->pc = 0x255CBCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255CC0u;
        goto label_255cc0;
    }
    ctx->pc = 0x255CB8u;
    SET_GPR_U32(ctx, 31, 0x255CC0u);
    ctx->pc = 0x255CBCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255CC0u; }
    }
    if (ctx->pc != 0x255CC0u) { return; }
    ctx->pc = 0x255CC0u;
label_255cc0:
    // 0x255cc0: 0x824300dc
    ctx->pc = 0x255cc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_255cc4:
    // 0x255cc4: 0x24020002
    ctx->pc = 0x255cc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_255cc8:
    // 0x255cc8: 0x54620572
label_255ccc:
    if (ctx->pc == 0x255CCCu) {
        ctx->pc = 0x255CCCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255CD0u;
        goto label_255cd0;
    }
    ctx->pc = 0x255CC8u;
    {
        const bool branch_taken_0x255cc8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x255cc8) {
            ctx->pc = 0x255CCCu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255CD0u;
label_255cd0:
    // 0x255cd0: 0x8e420000
    ctx->pc = 0x255cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255cd4:
    // 0x255cd4: 0x8c430004
    ctx->pc = 0x255cd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_255cd8:
    // 0x255cd8: 0x2402002c
    ctx->pc = 0x255cd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
label_255cdc:
    // 0x255cdc: 0x54620019
label_255ce0:
    if (ctx->pc == 0x255CE0u) {
        ctx->pc = 0x255CE0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 252)));
        ctx->pc = 0x255CE4u;
        goto label_255ce4;
    }
    ctx->pc = 0x255CDCu;
    {
        const bool branch_taken_0x255cdc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x255cdc) {
            ctx->pc = 0x255CE0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 252)));
            ctx->pc = 0x255D44u;
            goto label_255d44;
        }
    }
    ctx->pc = 0x255CE4u;
label_255ce4:
    // 0x255ce4: 0x3c020034
    ctx->pc = 0x255ce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_255ce8:
    // 0x255ce8: 0x8c42e7c8
    ctx->pc = 0x255ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_255cec:
    // 0x255cec: 0xc45400dc
    ctx->pc = 0x255cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_255cf0:
    // 0x255cf0: 0x3c014248
    ctx->pc = 0x255cf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
label_255cf4:
    // 0x255cf4: 0x44810000
    ctx->pc = 0x255cf4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255cf8:
    // 0x255cf8: 0x4600a502
    ctx->pc = 0x255cf8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_255cfc:
    // 0x255cfc: 0x240202d
    ctx->pc = 0x255cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255d00:
    // 0x255d00: 0xc094e70
label_255d04:
    if (ctx->pc == 0x255D04u) {
        ctx->pc = 0x255D04u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255D08u;
        goto label_255d08;
    }
    ctx->pc = 0x255D00u;
    SET_GPR_U32(ctx, 31, 0x255D08u);
    ctx->pc = 0x255D04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2539C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemPos_0x2539c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255D08u; }
    }
    if (ctx->pc != 0x255D08u) { return; }
    ctx->pc = 0x255D08u;
label_255d08:
    // 0x255d08: 0x26440010
    ctx->pc = 0x255d08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16));
label_255d0c:
    // 0x255d0c: 0x4600a306
    ctx->pc = 0x255d0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_255d10:
    // 0x255d10: 0xc09f8f8
label_255d14:
    if (ctx->pc == 0x255D14u) {
        ctx->pc = 0x255D14u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x255D18u;
        goto label_255d18;
    }
    ctx->pc = 0x255D10u;
    SET_GPR_U32(ctx, 31, 0x255D18u);
    ctx->pc = 0x255D14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 29));
    ctx->pc = 0x27E3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartExplosion_0x27e3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255D18u; }
    }
    if (ctx->pc != 0x255D18u) { return; }
    ctx->pc = 0x255D18u;
label_255d18:
    // 0x255d18: 0xc097fb8
label_255d1c:
    if (ctx->pc == 0x255D1Cu) {
        ctx->pc = 0x255D1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255D20u;
        goto label_255d20;
    }
    ctx->pc = 0x255D18u;
    SET_GPR_U32(ctx, 31, 0x255D20u);
    ctx->pc = 0x255D1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25FEE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioBarrelExplode_0x25fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255D20u; }
    }
    if (ctx->pc != 0x255D20u) { return; }
    ctx->pc = 0x255D20u;
label_255d20:
    // 0x255d20: 0x240202d
    ctx->pc = 0x255d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255d24:
    // 0x255d24: 0xc094dcc
label_255d28:
    if (ctx->pc == 0x255D28u) {
        ctx->pc = 0x255D28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255D2Cu;
        goto label_255d2c;
    }
    ctx->pc = 0x255D24u;
    SET_GPR_U32(ctx, 31, 0x255D2Cu);
    ctx->pc = 0x255D28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255D2Cu; }
    }
    if (ctx->pc != 0x255D2Cu) { return; }
    ctx->pc = 0x255D2Cu;
label_255d2c:
    // 0x255d2c: 0x24040089
    ctx->pc = 0x255d2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 137));
label_255d30:
    // 0x255d30: 0x2405ffff
    ctx->pc = 0x255d30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_255d34:
    // 0x255d34: 0xc0a3a1c
label_255d38:
    if (ctx->pc == 0x255D38u) {
        ctx->pc = 0x255D38u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255D3Cu;
        goto label_255d3c;
    }
    ctx->pc = 0x255D34u;
    SET_GPR_U32(ctx, 31, 0x255D3Cu);
    ctx->pc = 0x255D38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255D3Cu; }
    }
    if (ctx->pc != 0x255D3Cu) { return; }
    ctx->pc = 0x255D3Cu;
label_255d3c:
    // 0x255d3c: 0x1000000d
label_255d40:
    if (ctx->pc == 0x255D40u) {
        ctx->pc = 0x255D40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255D44u;
        goto label_255d44;
    }
    ctx->pc = 0x255D3Cu;
    {
        const bool branch_taken_0x255d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255D40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x255d3c) {
            ctx->pc = 0x255D74u;
            goto label_255d74;
        }
    }
    ctx->pc = 0x255D44u;
label_255d44:
    // 0x255d44: 0x1440000b
label_255d48:
    if (ctx->pc == 0x255D48u) {
        ctx->pc = 0x255D48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255D4Cu;
        goto label_255d4c;
    }
    ctx->pc = 0x255D44u;
    {
        const bool branch_taken_0x255d44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x255D48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x255d44) {
            ctx->pc = 0x255D74u;
            goto label_255d74;
        }
    }
    ctx->pc = 0x255D4Cu;
label_255d4c:
    // 0x255d4c: 0x8e420000
    ctx->pc = 0x255d4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255d50:
    // 0x255d50: 0x8c430004
    ctx->pc = 0x255d50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_255d54:
    // 0x255d54: 0x2402002b
    ctx->pc = 0x255d54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_255d58:
    // 0x255d58: 0x10620006
label_255d5c:
    if (ctx->pc == 0x255D5Cu) {
        ctx->pc = 0x255D5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x255D60u;
        goto label_255d60;
    }
    ctx->pc = 0x255D58u;
    {
        const bool branch_taken_0x255d58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x255D5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x255d58) {
            ctx->pc = 0x255D74u;
            goto label_255d74;
        }
    }
    ctx->pc = 0x255D60u;
label_255d60:
    // 0x255d60: 0x10620003
label_255d64:
    if (ctx->pc == 0x255D64u) {
        ctx->pc = 0x255D64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255D68u;
        goto label_255d68;
    }
    ctx->pc = 0x255D60u;
    {
        const bool branch_taken_0x255d60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x255D64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x255d60) {
            ctx->pc = 0x255D70u;
            goto label_255d70;
        }
    }
    ctx->pc = 0x255D68u;
label_255d68:
    // 0x255d68: 0xc094dcc
label_255d6c:
    if (ctx->pc == 0x255D6Cu) {
        ctx->pc = 0x255D6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255D70u;
        goto label_255d70;
    }
    ctx->pc = 0x255D68u;
    SET_GPR_U32(ctx, 31, 0x255D70u);
    ctx->pc = 0x255D6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255D70u; }
    }
    if (ctx->pc != 0x255D70u) { return; }
    ctx->pc = 0x255D70u;
label_255d70:
    // 0x255d70: 0x202d
    ctx->pc = 0x255d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255d74:
    // 0x255d74: 0x3c020033
    ctx->pc = 0x255d74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_255d78:
    // 0x255d78: 0x2447dfd0
    ctx->pc = 0x255d78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294959056));
label_255d7c:
    // 0x255d7c: 0x240603b0
    ctx->pc = 0x255d7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 944));
label_255d80:
    // 0x255d80: 0x2405ffff
    ctx->pc = 0x255d80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_255d84:
    // 0x255d84: 0x3c0147c3
    ctx->pc = 0x255d84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
label_255d88:
    // 0x255d88: 0x34215000
    ctx->pc = 0x255d88u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
label_255d8c:
    // 0x255d8c: 0x44810000
    ctx->pc = 0x255d8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255d90:
    // 0x255d90: 0x861018
    ctx->pc = 0x255d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_255d94:
    // 0x255d94: 0x0
    ctx->pc = 0x255d94u;
    // NOP
label_255d98:
    // 0x255d98: 0x471821
    ctx->pc = 0x255d98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_255d9c:
    // 0x255d9c: 0x8c620354
    ctx->pc = 0x255d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 852)));
label_255da0:
    // 0x255da0: 0x14440004
label_255da4:
    if (ctx->pc == 0x255DA4u) {
        ctx->pc = 0x255DA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x255DA8u;
        goto label_255da8;
    }
    ctx->pc = 0x255DA0u;
    {
        const bool branch_taken_0x255da0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x255DA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x255da0) {
            ctx->pc = 0x255DB4u;
            goto label_255db4;
        }
    }
    ctx->pc = 0x255DA8u;
label_255da8:
    // 0x255da8: 0xac600350
    ctx->pc = 0x255da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 848), GPR_U32(ctx, 0));
label_255dac:
    // 0x255dac: 0xac650354
    ctx->pc = 0x255dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 852), GPR_U32(ctx, 5));
label_255db0:
    // 0x255db0: 0xe4600358
    ctx->pc = 0x255db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 856), bits); }
label_255db4:
    // 0x255db4: 0x28820019
    ctx->pc = 0x255db4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 25));
label_255db8:
    // 0x255db8: 0x1440fff7
label_255dbc:
    if (ctx->pc == 0x255DBCu) {
        ctx->pc = 0x255DBCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x255DC0u;
        goto label_255dc0;
    }
    ctx->pc = 0x255DB8u;
    {
        const bool branch_taken_0x255db8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x255DBCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x255db8) {
            ctx->pc = 0x255D98u;
            goto label_255d98;
        }
    }
    ctx->pc = 0x255DC0u;
label_255dc0:
    // 0x255dc0: 0x10000534
label_255dc4:
    if (ctx->pc == 0x255DC4u) {
        ctx->pc = 0x255DC4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255DC8u;
        goto label_255dc8;
    }
    ctx->pc = 0x255DC0u;
    {
        const bool branch_taken_0x255dc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255DC4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x255dc0) {
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255DC8u;
label_255dc8:
    // 0x255dc8: 0x865100f0
    ctx->pc = 0x255dc8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 240)));
label_255dcc:
    // 0x255dcc: 0x6200530
label_255dd0:
    if (ctx->pc == 0x255DD0u) {
        ctx->pc = 0x255DD0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x255DD4u;
        goto label_255dd4;
    }
    ctx->pc = 0x255DCCu;
    {
        const bool branch_taken_0x255dcc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x255DD0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x255dcc) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x255DD4u;
label_255dd4:
    // 0x255dd4: 0x3c020031
    ctx->pc = 0x255dd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_255dd8:
    // 0x255dd8: 0x8c430018
    ctx->pc = 0x255dd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_255ddc:
    // 0x255ddc: 0x30628000
    ctx->pc = 0x255ddcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
label_255de0:
    // 0x255de0: 0x10400005
label_255de4:
    if (ctx->pc == 0x255DE4u) {
        ctx->pc = 0x255DE4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32774));
        ctx->pc = 0x255DE8u;
        goto label_255de8;
    }
    ctx->pc = 0x255DE0u;
    {
        const bool branch_taken_0x255de0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255DE4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32774));
        if (branch_taken_0x255de0) {
            ctx->pc = 0x255DF8u;
            goto label_255df8;
        }
    }
    ctx->pc = 0x255DE8u;
label_255de8:
    // 0x255de8: 0x10620003
label_255dec:
    if (ctx->pc == 0x255DECu) {
        ctx->pc = 0x255DECu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32771));
        ctx->pc = 0x255DF0u;
        goto label_255df0;
    }
    ctx->pc = 0x255DE8u;
    {
        const bool branch_taken_0x255de8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x255DECu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32771));
        if (branch_taken_0x255de8) {
            ctx->pc = 0x255DF8u;
            goto label_255df8;
        }
    }
    ctx->pc = 0x255DF0u;
label_255df0:
    // 0x255df0: 0x54620528
label_255df4:
    if (ctx->pc == 0x255DF4u) {
        ctx->pc = 0x255DF4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255DF8u;
        goto label_255df8;
    }
    ctx->pc = 0x255DF0u;
    {
        const bool branch_taken_0x255df0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x255df0) {
            ctx->pc = 0x255DF4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255DF8u;
label_255df8:
    // 0x255df8: 0x3c020034
    ctx->pc = 0x255df8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_255dfc:
    // 0x255dfc: 0x8c42e81c
    ctx->pc = 0x255dfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961180)));
label_255e00:
    // 0x255e00: 0x10400523
label_255e04:
    if (ctx->pc == 0x255E04u) {
        ctx->pc = 0x255E04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x255E08u;
        goto label_255e08;
    }
    ctx->pc = 0x255E00u;
    {
        const bool branch_taken_0x255e00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255E04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x255e00) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x255E08u;
label_255e08:
    // 0x255e08: 0x8c42fff0
    ctx->pc = 0x255e08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
label_255e0c:
    // 0x255e0c: 0x10400520
label_255e10:
    if (ctx->pc == 0x255E10u) {
        ctx->pc = 0x255E10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x255E14u;
        goto label_255e14;
    }
    ctx->pc = 0x255E0Cu;
    {
        const bool branch_taken_0x255e0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255E10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
        if (branch_taken_0x255e0c) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x255E14u;
label_255e14:
    // 0x255e14: 0xc64000e8
    ctx->pc = 0x255e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255e18:
    // 0x255e18: 0x3c014080
    ctx->pc = 0x255e18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
label_255e1c:
    // 0x255e1c: 0x44816000
    ctx->pc = 0x255e1cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_255e20:
    // 0x255e20: 0xc0b1084
label_255e24:
    if (ctx->pc == 0x255E24u) {
        ctx->pc = 0x255E24u;
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->pc = 0x255E28u;
        goto label_255e28;
    }
    ctx->pc = 0x255E20u;
    SET_GPR_U32(ctx, 31, 0x255E28u);
    ctx->pc = 0x255E24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x2C4210u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldSphereVisible_0x2c4210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255E28u; }
    }
    if (ctx->pc != 0x255E28u) { return; }
    ctx->pc = 0x255E28u;
label_255e28:
    // 0x255e28: 0x10400519
label_255e2c:
    if (ctx->pc == 0x255E2Cu) {
        ctx->pc = 0x255E2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x255E30u;
        goto label_255e30;
    }
    ctx->pc = 0x255E28u;
    {
        const bool branch_taken_0x255e28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255E2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x255e28) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x255E30u;
label_255e30:
    // 0x255e30: 0x864300f0
    ctx->pc = 0x255e30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 240)));
label_255e34:
    // 0x255e34: 0x14620007
label_255e38:
    if (ctx->pc == 0x255E38u) {
        ctx->pc = 0x255E38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x255E3Cu;
        goto label_255e3c;
    }
    ctx->pc = 0x255E34u;
    {
        const bool branch_taken_0x255e34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x255E38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x255e34) {
            ctx->pc = 0x255E54u;
            goto label_255e54;
        }
    }
    ctx->pc = 0x255E3Cu;
label_255e3c:
    // 0x255e3c: 0x3c020031
    ctx->pc = 0x255e3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_255e40:
    // 0x255e40: 0x8c420030
    ctx->pc = 0x255e40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_255e44:
    // 0x255e44: 0x28420002
    ctx->pc = 0x255e44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_255e48:
    // 0x255e48: 0x54400512
label_255e4c:
    if (ctx->pc == 0x255E4Cu) {
        ctx->pc = 0x255E4Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255E50u;
        goto label_255e50;
    }
    ctx->pc = 0x255E48u;
    {
        const bool branch_taken_0x255e48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x255e48) {
            ctx->pc = 0x255E4Cu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255E50u;
label_255e50:
    // 0x255e50: 0x3c020034
    ctx->pc = 0x255e50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_255e54:
    // 0x255e54: 0x2442eb60
    ctx->pc = 0x255e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
label_255e58:
    // 0x255e58: 0xc4430140
    ctx->pc = 0x255e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_255e5c:
    // 0x255e5c: 0xc6400040
    ctx->pc = 0x255e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255e60:
    // 0x255e60: 0x460018c1
    ctx->pc = 0x255e60u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_255e64:
    // 0x255e64: 0xe7a30040
    ctx->pc = 0x255e64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_255e68:
    // 0x255e68: 0xc4420144
    ctx->pc = 0x255e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_255e6c:
    // 0x255e6c: 0xc6400044
    ctx->pc = 0x255e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255e70:
    // 0x255e70: 0x46001081
    ctx->pc = 0x255e70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_255e74:
    // 0x255e74: 0xe7a20044
    ctx->pc = 0x255e74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_255e78:
    // 0x255e78: 0xc4400148
    ctx->pc = 0x255e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255e7c:
    // 0x255e7c: 0xc6410048
    ctx->pc = 0x255e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255e80:
    // 0x255e80: 0x46010001
    ctx->pc = 0x255e80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_255e84:
    // 0x255e84: 0xe7a00048
    ctx->pc = 0x255e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_255e88:
    // 0x255e88: 0x46031b02
    ctx->pc = 0x255e88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_255e8c:
    // 0x255e8c: 0x46021082
    ctx->pc = 0x255e8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_255e90:
    // 0x255e90: 0x46026300
    ctx->pc = 0x255e90u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_255e94:
    // 0x255e94: 0x46000002
    ctx->pc = 0x255e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_255e98:
    // 0x255e98: 0x46006300
    ctx->pc = 0x255e98u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_255e9c:
    // 0x255e9c: 0x0
    ctx->pc = 0x255e9cu;
    // NOP
label_255ea0:
    // 0x255ea0: 0x0
    ctx->pc = 0x255ea0u;
    // NOP
label_255ea4:
    // 0x255ea4: 0x460c0044
    ctx->pc = 0x255ea4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_255ea8:
    // 0x255ea8: 0x46010832
    ctx->pc = 0x255ea8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255eac:
    // 0x255eac: 0x45010004
label_255eb0:
    if (ctx->pc == 0x255EB0u) {
        ctx->pc = 0x255EB4u;
        goto label_255eb4;
    }
    ctx->pc = 0x255EACu;
    {
        const bool branch_taken_0x255eac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255eac) {
            ctx->pc = 0x255EC0u;
            goto label_255ec0;
        }
    }
    ctx->pc = 0x255EB4u;
label_255eb4:
    // 0x255eb4: 0xc0ba284
label_255eb8:
    if (ctx->pc == 0x255EB8u) {
        ctx->pc = 0x255EBCu;
        goto label_255ebc;
    }
    ctx->pc = 0x255EB4u;
    SET_GPR_U32(ctx, 31, 0x255EBCu);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255EBCu; }
    }
    if (ctx->pc != 0x255EBCu) { return; }
    ctx->pc = 0x255EBCu;
label_255ebc:
    // 0x255ebc: 0x46000046
    ctx->pc = 0x255ebcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255ec0:
    // 0x255ec0: 0x3c014248
    ctx->pc = 0x255ec0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
label_255ec4:
    // 0x255ec4: 0x44810000
    ctx->pc = 0x255ec4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255ec8:
    // 0x255ec8: 0x46010034
    ctx->pc = 0x255ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255ecc:
    // 0x255ecc: 0x0
    ctx->pc = 0x255eccu;
    // NOP
label_255ed0:
    // 0x255ed0: 0x450304f0
label_255ed4:
    if (ctx->pc == 0x255ED4u) {
        ctx->pc = 0x255ED4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255ED8u;
        goto label_255ed8;
    }
    ctx->pc = 0x255ED0u;
    {
        const bool branch_taken_0x255ed0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255ed0) {
            ctx->pc = 0x255ED4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255ED8u;
label_255ed8:
    // 0x255ed8: 0x2622ffe3
    ctx->pc = 0x255ed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967267));
label_255edc:
    // 0x255edc: 0x2c420002
    ctx->pc = 0x255edcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_255ee0:
    // 0x255ee0: 0x14400005
label_255ee4:
    if (ctx->pc == 0x255EE4u) {
        ctx->pc = 0x255EE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x255EE8u;
        goto label_255ee8;
    }
    ctx->pc = 0x255EE0u;
    {
        const bool branch_taken_0x255ee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x255EE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x255ee0) {
            ctx->pc = 0x255EF8u;
            goto label_255ef8;
        }
    }
    ctx->pc = 0x255EE8u;
label_255ee8:
    // 0x255ee8: 0x24020020
    ctx->pc = 0x255ee8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_255eec:
    // 0x255eec: 0x1622001e
label_255ef0:
    if (ctx->pc == 0x255EF0u) {
        ctx->pc = 0x255EF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255EF4u;
        goto label_255ef4;
    }
    ctx->pc = 0x255EECu;
    {
        const bool branch_taken_0x255eec = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x255EF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x255eec) {
            ctx->pc = 0x255F68u;
            goto label_255f68;
        }
    }
    ctx->pc = 0x255EF4u;
label_255ef4:
    // 0x255ef4: 0x3c020032
    ctx->pc = 0x255ef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_255ef8:
    // 0x255ef8: 0xc44e07fc
    ctx->pc = 0x255ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_255efc:
    // 0x255efc: 0x3c013f80
    ctx->pc = 0x255efcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_255f00:
    // 0x255f00: 0x44810000
    ctx->pc = 0x255f00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_255f04:
    // 0x255f04: 0x46007032
    ctx->pc = 0x255f04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255f08:
    // 0x255f08: 0x0
    ctx->pc = 0x255f08u;
    // NOP
label_255f0c:
    // 0x255f0c: 0x45030007
label_255f10:
    if (ctx->pc == 0x255F10u) {
        ctx->pc = 0x255F10u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 248)));
        ctx->pc = 0x255F14u;
        goto label_255f14;
    }
    ctx->pc = 0x255F0Cu;
    {
        const bool branch_taken_0x255f0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255f0c) {
            ctx->pc = 0x255F10u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 248)));
            ctx->pc = 0x255F2Cu;
            goto label_255f2c;
        }
    }
    ctx->pc = 0x255F14u;
label_255f14:
    // 0x255f14: 0x8e440070
    ctx->pc = 0x255f14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_255f18:
    // 0x255f18: 0x10800003
label_255f1c:
    if (ctx->pc == 0x255F1Cu) {
        ctx->pc = 0x255F1Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x255F20u;
        goto label_255f20;
    }
    ctx->pc = 0x255F18u;
    {
        const bool branch_taken_0x255f18 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x255F1Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[14]);
        if (branch_taken_0x255f18) {
            ctx->pc = 0x255F28u;
            goto label_255f28;
        }
    }
    ctx->pc = 0x255F20u;
label_255f20:
    // 0x255f20: 0xc0b41ae
label_255f24:
    if (ctx->pc == 0x255F24u) {
        ctx->pc = 0x255F24u;
        ctx->f[13] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x255F28u;
        goto label_255f28;
    }
    ctx->pc = 0x255F20u;
    SET_GPR_U32(ctx, 31, 0x255F28u);
    ctx->pc = 0x255F24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x2D06B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetScale_0x2d06b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255F28u; }
    }
    if (ctx->pc != 0x255F28u) { return; }
    ctx->pc = 0x255F28u;
label_255f28:
    // 0x255f28: 0x8e4200f8
    ctx->pc = 0x255f28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_255f2c:
    // 0x255f2c: 0x30420001
    ctx->pc = 0x255f2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_255f30:
    // 0x255f30: 0x504004d8
label_255f34:
    if (ctx->pc == 0x255F34u) {
        ctx->pc = 0x255F34u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255F38u;
        goto label_255f38;
    }
    ctx->pc = 0x255F30u;
    {
        const bool branch_taken_0x255f30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x255f30) {
            ctx->pc = 0x255F34u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255F38u;
label_255f38:
    // 0x255f38: 0x964300d8
    ctx->pc = 0x255f38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_255f3c:
    // 0x255f3c: 0x30620001
    ctx->pc = 0x255f3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_255f40:
    // 0x255f40: 0x54400006
label_255f44:
    if (ctx->pc == 0x255F44u) {
        ctx->pc = 0x255F44u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
        ctx->pc = 0x255F48u;
        goto label_255f48;
    }
    ctx->pc = 0x255F40u;
    {
        const bool branch_taken_0x255f40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x255f40) {
            ctx->pc = 0x255F44u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
            ctx->pc = 0x255F5Cu;
            goto label_255f5c;
        }
    }
    ctx->pc = 0x255F48u;
label_255f48:
    // 0x255f48: 0x34620001
    ctx->pc = 0x255f48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
label_255f4c:
    // 0x255f4c: 0xa64200d8
    ctx->pc = 0x255f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
label_255f50:
    // 0x255f50: 0x24020001
    ctx->pc = 0x255f50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_255f54:
    // 0x255f54: 0x100004ce
label_255f58:
    if (ctx->pc == 0x255F58u) {
        ctx->pc = 0x255F58u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x255F5Cu;
        goto label_255f5c;
    }
    ctx->pc = 0x255F54u;
    {
        const bool branch_taken_0x255f54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x255F58u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x255f54) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x255F5Cu;
label_255f5c:
    // 0x255f5c: 0x5c4004cd
label_255f60:
    if (ctx->pc == 0x255F60u) {
        ctx->pc = 0x255F60u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x255F64u;
        goto label_255f64;
    }
    ctx->pc = 0x255F5Cu;
    {
        const bool branch_taken_0x255f5c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x255f5c) {
            ctx->pc = 0x255F60u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x255F64u;
label_255f64:
    // 0x255f64: 0x240202d
    ctx->pc = 0x255f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255f68:
    // 0x255f68: 0xc094e70
label_255f6c:
    if (ctx->pc == 0x255F6Cu) {
        ctx->pc = 0x255F6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255F70u;
        goto label_255f70;
    }
    ctx->pc = 0x255F68u;
    SET_GPR_U32(ctx, 31, 0x255F70u);
    ctx->pc = 0x255F6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2539C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemPos_0x2539c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255F70u; }
    }
    if (ctx->pc != 0x255F70u) { return; }
    ctx->pc = 0x255F70u;
label_255f70:
    // 0x255f70: 0x240202d
    ctx->pc = 0x255f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255f74:
    // 0x255f74: 0xc094e78
label_255f78:
    if (ctx->pc == 0x255F78u) {
        ctx->pc = 0x255F78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x255F7Cu;
        goto label_255f7c;
    }
    ctx->pc = 0x255F74u;
    SET_GPR_U32(ctx, 31, 0x255F7Cu);
    ctx->pc = 0x255F78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2539E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemDir_0x2539e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255F7Cu; }
    }
    if (ctx->pc != 0x255F7Cu) { return; }
    ctx->pc = 0x255F7Cu;
label_255f7c:
    // 0x255f7c: 0x24020020
    ctx->pc = 0x255f7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_255f80:
    // 0x255f80: 0x1222000d
label_255f84:
    if (ctx->pc == 0x255F84u) {
        ctx->pc = 0x255F84u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255F88u;
        goto label_255f88;
    }
    ctx->pc = 0x255F80u;
    {
        const bool branch_taken_0x255f80 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x255F84u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x255f80) {
            ctx->pc = 0x255FB8u;
            goto label_255fb8;
        }
    }
    ctx->pc = 0x255F88u;
label_255f88:
    // 0x255f88: 0x2a220021
    ctx->pc = 0x255f88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 33));
label_255f8c:
    // 0x255f8c: 0x10400005
label_255f90:
    if (ctx->pc == 0x255F90u) {
        ctx->pc = 0x255F90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x255F94u;
        goto label_255f94;
    }
    ctx->pc = 0x255F8Cu;
    {
        const bool branch_taken_0x255f8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x255F90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x255f8c) {
            ctx->pc = 0x255FA4u;
            goto label_255fa4;
        }
    }
    ctx->pc = 0x255F94u;
label_255f94:
    // 0x255f94: 0x12220009
label_255f98:
    if (ctx->pc == 0x255F98u) {
        ctx->pc = 0x255F98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x255F9Cu;
        goto label_255f9c;
    }
    ctx->pc = 0x255F94u;
    {
        const bool branch_taken_0x255f94 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x255F98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x255f94) {
            ctx->pc = 0x255FBCu;
            goto label_255fbc;
        }
    }
    ctx->pc = 0x255F9Cu;
label_255f9c:
    // 0x255f9c: 0x1000000b
label_255fa0:
    if (ctx->pc == 0x255FA0u) {
        ctx->pc = 0x255FA4u;
        goto label_255fa4;
    }
    ctx->pc = 0x255F9Cu;
    {
        const bool branch_taken_0x255f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x255f9c) {
            ctx->pc = 0x255FCCu;
            goto label_255fcc;
        }
    }
    ctx->pc = 0x255FA4u;
label_255fa4:
    // 0x255fa4: 0x24020021
    ctx->pc = 0x255fa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
label_255fa8:
    // 0x255fa8: 0x12220004
label_255fac:
    if (ctx->pc == 0x255FACu) {
        ctx->pc = 0x255FACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x255FB0u;
        goto label_255fb0;
    }
    ctx->pc = 0x255FA8u;
    {
        const bool branch_taken_0x255fa8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x255FACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x255fa8) {
            ctx->pc = 0x255FBCu;
            goto label_255fbc;
        }
    }
    ctx->pc = 0x255FB0u;
label_255fb0:
    // 0x255fb0: 0x10000006
label_255fb4:
    if (ctx->pc == 0x255FB4u) {
        ctx->pc = 0x255FB8u;
        goto label_255fb8;
    }
    ctx->pc = 0x255FB0u;
    {
        const bool branch_taken_0x255fb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x255fb0) {
            ctx->pc = 0x255FCCu;
            goto label_255fcc;
        }
    }
    ctx->pc = 0x255FB8u;
label_255fb8:
    // 0x255fb8: 0x24040007
    ctx->pc = 0x255fb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
label_255fbc:
    // 0x255fbc: 0x282d
    ctx->pc = 0x255fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255fc0:
    // 0x255fc0: 0xc0a4f50
label_255fc4:
    if (ctx->pc == 0x255FC4u) {
        ctx->pc = 0x255FC4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x255FC8u;
        goto label_255fc8;
    }
    ctx->pc = 0x255FC0u;
    SET_GPR_U32(ctx, 31, 0x255FC8u);
    ctx->pc = 0x255FC4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x293D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNewInst_0x293d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255FC8u; }
    }
    if (ctx->pc != 0x255FC8u) { return; }
    ctx->pc = 0x255FC8u;
label_255fc8:
    // 0x255fc8: 0x40802d
    ctx->pc = 0x255fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255fcc:
    // 0x255fcc: 0x12000016
label_255fd0:
    if (ctx->pc == 0x255FD0u) {
        ctx->pc = 0x255FD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255FD4u;
        goto label_255fd4;
    }
    ctx->pc = 0x255FCCu;
    {
        const bool branch_taken_0x255fcc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x255FD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x255fcc) {
            ctx->pc = 0x256028u;
            goto label_256028;
        }
    }
    ctx->pc = 0x255FD4u;
label_255fd4:
    // 0x255fd4: 0xc094dcc
label_255fd8:
    if (ctx->pc == 0x255FD8u) {
        ctx->pc = 0x255FD8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255FDCu;
        goto label_255fdc;
    }
    ctx->pc = 0x255FD4u;
    SET_GPR_U32(ctx, 31, 0x255FDCu);
    ctx->pc = 0x255FD8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255FDCu; }
    }
    if (ctx->pc != 0x255FDCu) { return; }
    ctx->pc = 0x255FDCu;
label_255fdc:
    // 0x255fdc: 0xc681000c
    ctx->pc = 0x255fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255fe0:
    // 0x255fe0: 0x44800000
    ctx->pc = 0x255fe0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_255fe4:
    // 0x255fe4: 0x46010034
    ctx->pc = 0x255fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255fe8:
    // 0x255fe8: 0x0
    ctx->pc = 0x255fe8u;
    // NOP
label_255fec:
    // 0x255fec: 0x45000005
label_255ff0:
    if (ctx->pc == 0x255FF0u) {
        ctx->pc = 0x255FF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x255FF4u;
        goto label_255ff4;
    }
    ctx->pc = 0x255FECu;
    {
        const bool branch_taken_0x255fec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255FF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x255fec) {
            ctx->pc = 0x256004u;
            goto label_256004;
        }
    }
    ctx->pc = 0x255FF4u;
label_255ff4:
    // 0x255ff4: 0x8c42e7c8
    ctx->pc = 0x255ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_255ff8:
    // 0x255ff8: 0xc44000b4
    ctx->pc = 0x255ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255ffc:
    // 0x255ffc: 0x46000802
    ctx->pc = 0x255ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_256000:
    // 0x256000: 0xe6000b58
    ctx->pc = 0x256000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2904), bits); }
label_256004:
    // 0x256004: 0x86840012
    ctx->pc = 0x256004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_256008:
    // 0x256008: 0x48004a1
label_25600c:
    if (ctx->pc == 0x25600Cu) {
        ctx->pc = 0x25600Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x256010u;
        goto label_256010;
    }
    ctx->pc = 0x256008u;
    {
        const bool branch_taken_0x256008 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25600Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x256008) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256010u;
label_256010:
    // 0x256010: 0x24020110
    ctx->pc = 0x256010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
label_256014:
    // 0x256014: 0x821018
    ctx->pc = 0x256014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_256018:
    // 0x256018: 0x8c63cd94
    ctx->pc = 0x256018u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294954388)));
label_25601c:
    // 0x25601c: 0x431021
    ctx->pc = 0x25601cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_256020:
    // 0x256020: 0x1000049b
label_256024:
    if (ctx->pc == 0x256024u) {
        ctx->pc = 0x256024u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2900), GPR_U32(ctx, 2));
        ctx->pc = 0x256028u;
        goto label_256028;
    }
    ctx->pc = 0x256020u;
    {
        const bool branch_taken_0x256020 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256024u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2900), GPR_U32(ctx, 2));
        if (branch_taken_0x256020) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256028u;
label_256028:
    // 0x256028: 0x3a0202d
    ctx->pc = 0x256028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25602c:
    // 0x25602c: 0x220282d
    ctx->pc = 0x25602cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256030:
    // 0x256030: 0x82860002
    ctx->pc = 0x256030u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_256034:
    // 0x256034: 0x27a70010
    ctx->pc = 0x256034u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
label_256038:
    // 0x256038: 0x3c013f80
    ctx->pc = 0x256038u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_25603c:
    // 0x25603c: 0x44816000
    ctx->pc = 0x25603cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_256040:
    // 0x256040: 0x82880003
    ctx->pc = 0x256040u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_256044:
    // 0x256044: 0x482d
    ctx->pc = 0x256044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256048:
    // 0x256048: 0xc08e53c
label_25604c:
    if (ctx->pc == 0x25604Cu) {
        ctx->pc = 0x25604Cu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x256050u;
        goto label_256050;
    }
    ctx->pc = 0x256048u;
    SET_GPR_U32(ctx, 31, 0x256050u);
    ctx->pc = 0x25604Cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2394F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        generate_enemy_0x2394f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256050u; }
    }
    if (ctx->pc != 0x256050u) { return; }
    ctx->pc = 0x256050u;
label_256050:
    // 0x256050: 0x40202d
    ctx->pc = 0x256050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256054:
    // 0x256054: 0x480006d
label_256058:
    if (ctx->pc == 0x256058u) {
        ctx->pc = 0x256058u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
        ctx->pc = 0x25605Cu;
        goto label_25605c;
    }
    ctx->pc = 0x256054u;
    {
        const bool branch_taken_0x256054 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x256058u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x256054) {
            ctx->pc = 0x25620Cu;
            goto label_25620c;
        }
    }
    ctx->pc = 0x25605Cu;
label_25605c:
    // 0x25605c: 0x831818
    ctx->pc = 0x25605cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_256060:
    // 0x256060: 0x3c020033
    ctx->pc = 0x256060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_256064:
    // 0x256064: 0x2442dfd0
    ctx->pc = 0x256064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
label_256068:
    // 0x256068: 0x629821
    ctx->pc = 0x256068u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25606c:
    // 0x25606c: 0x24020001
    ctx->pc = 0x25606cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_256070:
    // 0x256070: 0xa66202ec
    ctx->pc = 0x256070u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 748), (uint16_t)GPR_U32(ctx, 2));
label_256074:
    // 0x256074: 0xa66202e8
    ctx->pc = 0x256074u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 744), (uint16_t)GPR_U32(ctx, 2));
label_256078:
    // 0x256078: 0xc7ac0010
    ctx->pc = 0x256078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25607c:
    // 0x25607c: 0xc0ba04a
label_256080:
    if (ctx->pc == 0x256080u) {
        ctx->pc = 0x256080u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x256084u;
        goto label_256084;
    }
    ctx->pc = 0x25607Cu;
    SET_GPR_U32(ctx, 31, 0x256084u);
    ctx->pc = 0x256080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256084u; }
    }
    if (ctx->pc != 0x256084u) { return; }
    ctx->pc = 0x256084u;
label_256084:
    // 0x256084: 0x46000046
    ctx->pc = 0x256084u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_256088:
    // 0x256088: 0x3c014049
    ctx->pc = 0x256088u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
label_25608c:
    // 0x25608c: 0x34210fdb
    ctx->pc = 0x25608cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_256090:
    // 0x256090: 0x44810000
    ctx->pc = 0x256090u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_256094:
    // 0x256094: 0x46010034
    ctx->pc = 0x256094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_256098:
    // 0x256098: 0x0
    ctx->pc = 0x256098u;
    // NOP
label_25609c:
    // 0x25609c: 0x45000006
label_2560a0:
    if (ctx->pc == 0x2560A0u) {
        ctx->pc = 0x2560A0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 608), bits); }
        ctx->pc = 0x2560A4u;
        goto label_2560a4;
    }
    ctx->pc = 0x25609Cu;
    {
        const bool branch_taken_0x25609c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2560A0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 608), bits); }
        if (branch_taken_0x25609c) {
            ctx->pc = 0x2560B8u;
            goto label_2560b8;
        }
    }
    ctx->pc = 0x2560A4u;
label_2560a4:
    // 0x2560a4: 0x3c0140c9
    ctx->pc = 0x2560a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
label_2560a8:
    // 0x2560a8: 0x34210fdb
    ctx->pc = 0x2560a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_2560ac:
    // 0x2560ac: 0x44810000
    ctx->pc = 0x2560acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2560b0:
    // 0x2560b0: 0x1000000d
label_2560b4:
    if (ctx->pc == 0x2560B4u) {
        ctx->pc = 0x2560B4u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2560B8u;
        goto label_2560b8;
    }
    ctx->pc = 0x2560B0u;
    {
        const bool branch_taken_0x2560b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2560B4u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2560b0) {
            ctx->pc = 0x2560E8u;
            goto label_2560e8;
        }
    }
    ctx->pc = 0x2560B8u;
label_2560b8:
    // 0x2560b8: 0xc6610260
    ctx->pc = 0x2560b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2560bc:
    // 0x2560bc: 0x3c01c049
    ctx->pc = 0x2560bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
label_2560c0:
    // 0x2560c0: 0x34210fdb
    ctx->pc = 0x2560c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_2560c4:
    // 0x2560c4: 0x44810000
    ctx->pc = 0x2560c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2560c8:
    // 0x2560c8: 0x46000836
    ctx->pc = 0x2560c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2560cc:
    // 0x2560cc: 0x0
    ctx->pc = 0x2560ccu;
    // NOP
label_2560d0:
    // 0x2560d0: 0x45020005
label_2560d4:
    if (ctx->pc == 0x2560D4u) {
        ctx->pc = 0x2560D4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2560D8u;
        goto label_2560d8;
    }
    ctx->pc = 0x2560D0u;
    {
        const bool branch_taken_0x2560d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2560d0) {
            ctx->pc = 0x2560D4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2560E8u;
            goto label_2560e8;
        }
    }
    ctx->pc = 0x2560D8u;
label_2560d8:
    // 0x2560d8: 0x3c0140c9
    ctx->pc = 0x2560d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
label_2560dc:
    // 0x2560dc: 0x34210fdb
    ctx->pc = 0x2560dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_2560e0:
    // 0x2560e0: 0x44810000
    ctx->pc = 0x2560e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2560e4:
    // 0x2560e4: 0x46000800
    ctx->pc = 0x2560e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2560e8:
    // 0x2560e8: 0xe6600260
    ctx->pc = 0x2560e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 608), bits); }
label_2560ec:
    // 0x2560ec: 0xe6600264
    ctx->pc = 0x2560ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 612), bits); }
label_2560f0:
    // 0x2560f0: 0xe6600258
    ctx->pc = 0x2560f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 600), bits); }
label_2560f4:
    // 0x2560f4: 0x27b10050
    ctx->pc = 0x2560f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 80));
label_2560f8:
    // 0x2560f8: 0x220202d
    ctx->pc = 0x2560f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2560fc:
    // 0x2560fc: 0xc0b5ae8
label_256100:
    if (ctx->pc == 0x256100u) {
        ctx->pc = 0x256100u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 596));
        ctx->pc = 0x256104u;
        goto label_256104;
    }
    ctx->pc = 0x2560FCu;
    SET_GPR_U32(ctx, 31, 0x256104u);
    ctx->pc = 0x256100u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 596));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256104u; }
    }
    if (ctx->pc != 0x256104u) { return; }
    ctx->pc = 0x256104u;
label_256104:
    // 0x256104: 0x26700010
    ctx->pc = 0x256104u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 16));
label_256108:
    // 0x256108: 0x220202d
    ctx->pc = 0x256108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25610c:
    // 0x25610c: 0xc0b549e
label_256110:
    if (ctx->pc == 0x256110u) {
        ctx->pc = 0x256110u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256114u;
        goto label_256114;
    }
    ctx->pc = 0x25610Cu;
    SET_GPR_U32(ctx, 31, 0x256114u);
    ctx->pc = 0x256110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256114u; }
    }
    if (ctx->pc != 0x256114u) { return; }
    ctx->pc = 0x256114u;
label_256114:
    // 0x256114: 0xc080ce2
label_256118:
    if (ctx->pc == 0x256118u) {
        ctx->pc = 0x256118u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25611Cu;
        goto label_25611c;
    }
    ctx->pc = 0x256114u;
    SET_GPR_U32(ctx, 31, 0x25611Cu);
    ctx->pc = 0x256118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25611Cu; }
    }
    if (ctx->pc != 0x25611Cu) { return; }
    ctx->pc = 0x25611Cu;
label_25611c:
    // 0x25611c: 0xc6600040
    ctx->pc = 0x25611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_256120:
    // 0x256120: 0xe6600300
    ctx->pc = 0x256120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 768), bits); }
label_256124:
    // 0x256124: 0xc6600044
    ctx->pc = 0x256124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_256128:
    // 0x256128: 0xe6600304
    ctx->pc = 0x256128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 772), bits); }
label_25612c:
    // 0x25612c: 0xc6600048
    ctx->pc = 0x25612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_256130:
    // 0x256130: 0xe6600308
    ctx->pc = 0x256130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 776), bits); }
label_256134:
    // 0x256134: 0x8e620000
    ctx->pc = 0x256134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_256138:
    // 0x256138: 0x2442ffe2
    ctx->pc = 0x256138u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
label_25613c:
    // 0x25613c: 0x2c420002
    ctx->pc = 0x25613cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_256140:
    // 0x256140: 0x14400006
label_256144:
    if (ctx->pc == 0x256144u) {
        ctx->pc = 0x256144u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->pc = 0x256148u;
        goto label_256148;
    }
    ctx->pc = 0x256140u;
    {
        const bool branch_taken_0x256140 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x256144u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        if (branch_taken_0x256140) {
            ctx->pc = 0x25615Cu;
            goto label_25615c;
        }
    }
    ctx->pc = 0x256148u;
label_256148:
    // 0x256148: 0x14400005
label_25614c:
    if (ctx->pc == 0x25614Cu) {
        ctx->pc = 0x25614Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
        ctx->pc = 0x256150u;
        goto label_256150;
    }
    ctx->pc = 0x256148u;
    {
        const bool branch_taken_0x256148 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25614Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
        if (branch_taken_0x256148) {
            ctx->pc = 0x256160u;
            goto label_256160;
        }
    }
    ctx->pc = 0x256150u;
label_256150:
    // 0x256150: 0x24020006
    ctx->pc = 0x256150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_256154:
    // 0x256154: 0x10000005
label_256158:
    if (ctx->pc == 0x256158u) {
        ctx->pc = 0x256158u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x25615Cu;
        goto label_25615c;
    }
    ctx->pc = 0x256154u;
    {
        const bool branch_taken_0x256154 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256158u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 2));
        if (branch_taken_0x256154) {
            ctx->pc = 0x25616Cu;
            goto label_25616c;
        }
    }
    ctx->pc = 0x25615Cu;
label_25615c:
    // 0x25615c: 0x28420004
    ctx->pc = 0x25615cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
label_256160:
    // 0x256160: 0x10400002
label_256164:
    if (ctx->pc == 0x256164u) {
        ctx->pc = 0x256164u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x256168u;
        goto label_256168;
    }
    ctx->pc = 0x256160u;
    {
        const bool branch_taken_0x256160 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256164u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x256160) {
            ctx->pc = 0x25616Cu;
            goto label_25616c;
        }
    }
    ctx->pc = 0x256168u;
label_256168:
    // 0x256168: 0xae620220
    ctx->pc = 0x256168u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 544), GPR_U32(ctx, 2));
label_25616c:
    // 0x25616c: 0x8e630000
    ctx->pc = 0x25616cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_256170:
    // 0x256170: 0x2402001e
    ctx->pc = 0x256170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_256174:
    // 0x256174: 0x54620005
label_256178:
    if (ctx->pc == 0x256178u) {
        ctx->pc = 0x256178u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x25617Cu;
        goto label_25617c;
    }
    ctx->pc = 0x256174u;
    {
        const bool branch_taken_0x256174 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x256174) {
            ctx->pc = 0x256178u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x25618Cu;
            goto label_25618c;
        }
    }
    ctx->pc = 0x25617Cu;
label_25617c:
    // 0x25617c: 0x3c01447a
    ctx->pc = 0x25617cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
label_256180:
    // 0x256180: 0x44810000
    ctx->pc = 0x256180u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_256184:
    // 0x256184: 0x1000000a
label_256188:
    if (ctx->pc == 0x256188u) {
        ctx->pc = 0x256188u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 788), bits); }
        ctx->pc = 0x25618Cu;
        goto label_25618c;
    }
    ctx->pc = 0x256184u;
    {
        const bool branch_taken_0x256184 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256188u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 788), bits); }
        if (branch_taken_0x256184) {
            ctx->pc = 0x2561B0u;
            goto label_2561b0;
        }
    }
    ctx->pc = 0x25618Cu;
label_25618c:
    // 0x25618c: 0x44800000
    ctx->pc = 0x25618cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_256190:
    // 0x256190: 0x46010034
    ctx->pc = 0x256190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_256194:
    // 0x256194: 0x0
    ctx->pc = 0x256194u;
    // NOP
label_256198:
    // 0x256198: 0x45000005
label_25619c:
    if (ctx->pc == 0x25619Cu) {
        ctx->pc = 0x25619Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x2561A0u;
        goto label_2561a0;
    }
    ctx->pc = 0x256198u;
    {
        const bool branch_taken_0x256198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25619Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x256198) {
            ctx->pc = 0x2561B0u;
            goto label_2561b0;
        }
    }
    ctx->pc = 0x2561A0u;
label_2561a0:
    // 0x2561a0: 0x8c42e7c8
    ctx->pc = 0x2561a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_2561a4:
    // 0x2561a4: 0xc44000b4
    ctx->pc = 0x2561a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2561a8:
    // 0x2561a8: 0x46000802
    ctx->pc = 0x2561a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2561ac:
    // 0x2561ac: 0xe6600314
    ctx->pc = 0x2561acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 788), bits); }
label_2561b0:
    // 0x2561b0: 0x86830010
    ctx->pc = 0x2561b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
label_2561b4:
    // 0x2561b4: 0x1860000c
label_2561b8:
    if (ctx->pc == 0x2561B8u) {
        ctx->pc = 0x2561B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2561BCu;
        goto label_2561bc;
    }
    ctx->pc = 0x2561B4u;
    {
        const bool branch_taken_0x2561b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2561B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2561b4) {
            ctx->pc = 0x2561E8u;
            goto label_2561e8;
        }
    }
    ctx->pc = 0x2561BCu;
label_2561bc:
    // 0x2561bc: 0x54620003
label_2561c0:
    if (ctx->pc == 0x2561C0u) {
        ctx->pc = 0x2561C0u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x2561C4u;
        goto label_2561c4;
    }
    ctx->pc = 0x2561BCu;
    {
        const bool branch_taken_0x2561bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2561bc) {
            ctx->pc = 0x2561C0u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->pc = 0x2561CCu;
            goto label_2561cc;
        }
    }
    ctx->pc = 0x2561C4u;
label_2561c4:
    // 0x2561c4: 0x10000008
label_2561c8:
    if (ctx->pc == 0x2561C8u) {
        ctx->pc = 0x2561C8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 908), GPR_U32(ctx, 0));
        ctx->pc = 0x2561CCu;
        goto label_2561cc;
    }
    ctx->pc = 0x2561C4u;
    {
        const bool branch_taken_0x2561c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2561C8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 908), GPR_U32(ctx, 0));
        if (branch_taken_0x2561c4) {
            ctx->pc = 0x2561E8u;
            goto label_2561e8;
        }
    }
    ctx->pc = 0x2561CCu;
label_2561cc:
    // 0x2561cc: 0x44820000
    ctx->pc = 0x2561ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2561d0:
    // 0x2561d0: 0x46800020
    ctx->pc = 0x2561d0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2561d4:
    // 0x2561d4: 0x3c013dcc
    ctx->pc = 0x2561d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
label_2561d8:
    // 0x2561d8: 0x3421cccd
    ctx->pc = 0x2561d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_2561dc:
    // 0x2561dc: 0x44810800
    ctx->pc = 0x2561dcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2561e0:
    // 0x2561e0: 0x46010002
    ctx->pc = 0x2561e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2561e4:
    // 0x2561e4: 0xe660038c
    ctx->pc = 0x2561e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 908), bits); }
label_2561e8:
    // 0x2561e8: 0x86840012
    ctx->pc = 0x2561e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_2561ec:
    // 0x2561ec: 0x480037a
label_2561f0:
    if (ctx->pc == 0x2561F0u) {
        ctx->pc = 0x2561F0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x2561F4u;
        goto label_2561f4;
    }
    ctx->pc = 0x2561ECu;
    {
        const bool branch_taken_0x2561ec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2561F0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2561ec) {
            ctx->pc = 0x256FD8u;
            goto label_256fd8;
        }
    }
    ctx->pc = 0x2561F4u;
label_2561f4:
    // 0x2561f4: 0x24020110
    ctx->pc = 0x2561f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
label_2561f8:
    // 0x2561f8: 0x821018
    ctx->pc = 0x2561f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2561fc:
    // 0x2561fc: 0x8c63cd94
    ctx->pc = 0x2561fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294954388)));
label_256200:
    // 0x256200: 0x431021
    ctx->pc = 0x256200u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_256204:
    // 0x256204: 0x10000374
label_256208:
    if (ctx->pc == 0x256208u) {
        ctx->pc = 0x256208u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 920), GPR_U32(ctx, 2));
        ctx->pc = 0x25620Cu;
        goto label_25620c;
    }
    ctx->pc = 0x256204u;
    {
        const bool branch_taken_0x256204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256208u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 920), GPR_U32(ctx, 2));
        if (branch_taken_0x256204) {
            ctx->pc = 0x256FD8u;
            goto label_256fd8;
        }
    }
    ctx->pc = 0x25620Cu;
label_25620c:
    // 0x25620c: 0x2882ff9e
    ctx->pc = 0x25620cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4294967198));
label_256210:
    // 0x256210: 0x54400372
label_256214:
    if (ctx->pc == 0x256214u) {
        ctx->pc = 0x256214u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256218u;
        goto label_256218;
    }
    ctx->pc = 0x256210u;
    {
        const bool branch_taken_0x256210 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256210) {
            ctx->pc = 0x256214u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x256FDCu;
            goto label_256fdc;
        }
    }
    ctx->pc = 0x256218u;
label_256218:
    // 0x256218: 0x82820002
    ctx->pc = 0x256218u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_25621c:
    // 0x25621c: 0x28420004
    ctx->pc = 0x25621cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
label_256220:
    // 0x256220: 0x10400005
label_256224:
    if (ctx->pc == 0x256224u) {
        ctx->pc = 0x256224u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x256228u;
        goto label_256228;
    }
    ctx->pc = 0x256220u;
    {
        const bool branch_taken_0x256220 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256224u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x256220) {
            ctx->pc = 0x256238u;
            goto label_256238;
        }
    }
    ctx->pc = 0x256228u;
label_256228:
    // 0x256228: 0x8c42fff0
    ctx->pc = 0x256228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
label_25622c:
    // 0x25622c: 0x28420002
    ctx->pc = 0x25622cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_256230:
    // 0x256230: 0x5440036a
label_256234:
    if (ctx->pc == 0x256234u) {
        ctx->pc = 0x256234u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256238u;
        goto label_256238;
    }
    ctx->pc = 0x256230u;
    {
        const bool branch_taken_0x256230 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256230) {
            ctx->pc = 0x256234u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x256FDCu;
            goto label_256fdc;
        }
    }
    ctx->pc = 0x256238u;
label_256238:
    // 0x256238: 0x2402fffb
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
label_25623c:
    // 0x25623c: 0x1482000b
label_256240:
    if (ctx->pc == 0x256240u) {
        ctx->pc = 0x256240u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        ctx->pc = 0x256244u;
        goto label_256244;
    }
    ctx->pc = 0x25623Cu;
    {
        const bool branch_taken_0x25623c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x256240u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x25623c) {
            ctx->pc = 0x25626Cu;
            goto label_25626c;
        }
    }
    ctx->pc = 0x256244u;
label_256244:
    // 0x256244: 0x2442d440
    ctx->pc = 0x256244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956096));
label_256248:
    // 0x256248: 0x111880
    ctx->pc = 0x256248u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_25624c:
    // 0x25624c: 0x621821
    ctx->pc = 0x25624cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_256250:
    // 0x256250: 0x3c04003b
    ctx->pc = 0x256250u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_256254:
    // 0x256254: 0x24848a38
    ctx->pc = 0x256254u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937144));
label_256258:
    // 0x256258: 0x8c650000
    ctx->pc = 0x256258u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25625c:
    // 0x25625c: 0xc0b492e
label_256260:
    if (ctx->pc == 0x256260u) {
        ctx->pc = 0x256260u;
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->pc = 0x256264u;
        goto label_256264;
    }
    ctx->pc = 0x25625Cu;
    SET_GPR_U32(ctx, 31, 0x256264u);
    ctx->pc = 0x256260u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256264u; }
    }
    if (ctx->pc != 0x256264u) { return; }
    ctx->pc = 0x256264u;
label_256264:
    // 0x256264: 0x1000035d
label_256268:
    if (ctx->pc == 0x256268u) {
        ctx->pc = 0x256268u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25626Cu;
        goto label_25626c;
    }
    ctx->pc = 0x256264u;
    {
        const bool branch_taken_0x256264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256268u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x256264) {
            ctx->pc = 0x256FDCu;
            goto label_256fdc;
        }
    }
    ctx->pc = 0x25626Cu;
label_25626c:
    // 0x25626c: 0x2442d440
    ctx->pc = 0x25626cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956096));
label_256270:
    // 0x256270: 0x112880
    ctx->pc = 0x256270u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 2));
label_256274:
    // 0x256274: 0xa22821
    ctx->pc = 0x256274u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_256278:
    // 0x256278: 0x3c020033
    ctx->pc = 0x256278u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_25627c:
    // 0x25627c: 0x244249d8
    ctx->pc = 0x25627cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18904));
label_256280:
    // 0x256280: 0x41827
    ctx->pc = 0x256280u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_256284:
    // 0x256284: 0x31880
    ctx->pc = 0x256284u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_256288:
    // 0x256288: 0x621821
    ctx->pc = 0x256288u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25628c:
    // 0x25628c: 0x3c04003b
    ctx->pc = 0x25628cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_256290:
    // 0x256290: 0x24848a68
    ctx->pc = 0x256290u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937192));
label_256294:
    // 0x256294: 0x8ca50000
    ctx->pc = 0x256294u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_256298:
    // 0x256298: 0x82860003
    ctx->pc = 0x256298u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_25629c:
    // 0x25629c: 0xc0b492e
label_2562a0:
    if (ctx->pc == 0x2562A0u) {
        ctx->pc = 0x2562A0u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x2562A4u;
        goto label_2562a4;
    }
    ctx->pc = 0x25629Cu;
    SET_GPR_U32(ctx, 31, 0x2562A4u);
    ctx->pc = 0x2562A0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2562A4u; }
    }
    if (ctx->pc != 0x2562A4u) { return; }
    ctx->pc = 0x2562A4u;
label_2562a4:
    // 0x2562a4: 0x1000034d
label_2562a8:
    if (ctx->pc == 0x2562A8u) {
        ctx->pc = 0x2562A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2562ACu;
        goto label_2562ac;
    }
    ctx->pc = 0x2562A4u;
    {
        const bool branch_taken_0x2562a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2562A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2562a4) {
            ctx->pc = 0x256FDCu;
            goto label_256fdc;
        }
    }
    ctx->pc = 0x2562ACu;
label_2562ac:
    // 0x2562ac: 0x982d
    ctx->pc = 0x2562acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2562b0:
    // 0x2562b0: 0x8e420000
    ctx->pc = 0x2562b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2562b4:
    // 0x2562b4: 0x8c540004
    ctx->pc = 0x2562b4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2562b8:
    // 0x2562b8: 0x964200d8
    ctx->pc = 0x2562b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_2562bc:
    // 0x2562bc: 0x30420400
    ctx->pc = 0x2562bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
label_2562c0:
    // 0x2562c0: 0x144003f3
label_2562c4:
    if (ctx->pc == 0x2562C4u) {
        ctx->pc = 0x2562C4u;
        SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        ctx->pc = 0x2562C8u;
        goto label_2562c8;
    }
    ctx->pc = 0x2562C0u;
    {
        const bool branch_taken_0x2562c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2562C4u;
        SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        if (branch_taken_0x2562c0) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x2562C8u;
label_2562c8:
    // 0x2562c8: 0x86420100
    ctx->pc = 0x2562c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
label_2562cc:
    // 0x2562cc: 0x18400005
label_2562d0:
    if (ctx->pc == 0x2562D0u) {
        ctx->pc = 0x2562D0u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->pc = 0x2562D4u;
        goto label_2562d4;
    }
    ctx->pc = 0x2562CCu;
    {
        const bool branch_taken_0x2562cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2562D0u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
        if (branch_taken_0x2562cc) {
            ctx->pc = 0x2562E4u;
            goto label_2562e4;
        }
    }
    ctx->pc = 0x2562D4u;
label_2562d4:
    // 0x2562d4: 0x3c020031
    ctx->pc = 0x2562d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2562d8:
    // 0x2562d8: 0x9442ffbc
    ctx->pc = 0x2562d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_2562dc:
    // 0x2562dc: 0x621023
    ctx->pc = 0x2562dcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2562e0:
    // 0x2562e0: 0xa6420100
    ctx->pc = 0x2562e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 256), (uint16_t)GPR_U32(ctx, 2));
label_2562e4:
    // 0x2562e4: 0x964200f4
    ctx->pc = 0x2562e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
label_2562e8:
    // 0x2562e8: 0x30420040
    ctx->pc = 0x2562e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
label_2562ec:
    // 0x2562ec: 0x10400027
label_2562f0:
    if (ctx->pc == 0x2562F0u) {
        ctx->pc = 0x2562F0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->pc = 0x2562F4u;
        goto label_2562f4;
    }
    ctx->pc = 0x2562ECu;
    {
        const bool branch_taken_0x2562ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2562F0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 240)));
        if (branch_taken_0x2562ec) {
            ctx->pc = 0x25638Cu;
            goto label_25638c;
        }
    }
    ctx->pc = 0x2562F4u;
label_2562f4:
    // 0x2562f4: 0x824400f6
    ctx->pc = 0x2562f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 246)));
label_2562f8:
    // 0x2562f8: 0x28820064
    ctx->pc = 0x2562f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 100));
label_2562fc:
    // 0x2562fc: 0x5040000d
label_256300:
    if (ctx->pc == 0x256300u) {
        ctx->pc = 0x256300u;
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 246)));
        ctx->pc = 0x256304u;
        goto label_256304;
    }
    ctx->pc = 0x2562FCu;
    {
        const bool branch_taken_0x2562fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2562fc) {
            ctx->pc = 0x256300u;
            SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 246)));
            ctx->pc = 0x256334u;
            goto label_256334;
        }
    }
    ctx->pc = 0x256304u;
label_256304:
    // 0x256304: 0x924200e2
    ctx->pc = 0x256304u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 226)));
label_256308:
    // 0x256308: 0x10400017
label_25630c:
    if (ctx->pc == 0x25630Cu) {
        ctx->pc = 0x256310u;
        goto label_256310;
    }
    ctx->pc = 0x256308u;
    {
        const bool branch_taken_0x256308 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256308) {
            ctx->pc = 0x256368u;
            goto label_256368;
        }
    }
    ctx->pc = 0x256310u;
label_256310:
    // 0x256310: 0xc09dbb2
label_256314:
    if (ctx->pc == 0x256314u) {
        ctx->pc = 0x256318u;
        goto label_256318;
    }
    ctx->pc = 0x256310u;
    SET_GPR_U32(ctx, 31, 0x256318u);
    ctx->pc = 0x276EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnyPlayerHasAllCrystals_0x276ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256318u; }
    }
    if (ctx->pc != 0x256318u) { return; }
    ctx->pc = 0x256318u;
label_256318:
    // 0x256318: 0x14400013
label_25631c:
    if (ctx->pc == 0x25631Cu) {
        ctx->pc = 0x256320u;
        goto label_256320;
    }
    ctx->pc = 0x256318u;
    {
        const bool branch_taken_0x256318 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256318) {
            ctx->pc = 0x256368u;
            goto label_256368;
        }
    }
    ctx->pc = 0x256320u;
label_256320:
    // 0x256320: 0x924400e2
    ctx->pc = 0x256320u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 226)));
label_256324:
    // 0x256324: 0xc09d9a0
label_256328:
    if (ctx->pc == 0x256328u) {
        ctx->pc = 0x256328u;
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 246)));
        ctx->pc = 0x25632Cu;
        goto label_25632c;
    }
    ctx->pc = 0x256324u;
    SET_GPR_U32(ctx, 31, 0x25632Cu);
    ctx->pc = 0x256328u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 246)));
    ctx->pc = 0x276680u;
    {
        const uint32_t __entryPc = ctx->pc;
        TowerNeedCrystalsMsg_0x276680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25632Cu; }
    }
    if (ctx->pc != 0x25632Cu) { return; }
    ctx->pc = 0x25632Cu;
label_25632c:
    // 0x25632c: 0x1000000e
label_256330:
    if (ctx->pc == 0x256330u) {
        ctx->pc = 0x256330u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 226), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256334u;
        goto label_256334;
    }
    ctx->pc = 0x25632Cu;
    {
        const bool branch_taken_0x25632c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256330u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 226), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x25632c) {
            ctx->pc = 0x256368u;
            goto label_256368;
        }
    }
    ctx->pc = 0x256334u;
label_256334:
    // 0x256334: 0x924200e2
    ctx->pc = 0x256334u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 226)));
label_256338:
    // 0x256338: 0x1040000b
label_25633c:
    if (ctx->pc == 0x25633Cu) {
        ctx->pc = 0x25633Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967195));
        ctx->pc = 0x256340u;
        goto label_256340;
    }
    ctx->pc = 0x256338u;
    {
        const bool branch_taken_0x256338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25633Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967195));
        if (branch_taken_0x256338) {
            ctx->pc = 0x256368u;
            goto label_256368;
        }
    }
    ctx->pc = 0x256340u;
label_256340:
    // 0x256340: 0xc09dc5e
label_256344:
    if (ctx->pc == 0x256344u) {
        ctx->pc = 0x256344u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256348u;
        goto label_256348;
    }
    ctx->pc = 0x256340u;
    SET_GPR_U32(ctx, 31, 0x256348u);
    ctx->pc = 0x256344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x277178u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnyPlayerHasAllGargItems_0x277178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256348u; }
    }
    if (ctx->pc != 0x256348u) { return; }
    ctx->pc = 0x256348u;
label_256348:
    // 0x256348: 0x14400007
label_25634c:
    if (ctx->pc == 0x25634Cu) {
        ctx->pc = 0x25634Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
        ctx->pc = 0x256350u;
        goto label_256350;
    }
    ctx->pc = 0x256348u;
    {
        const bool branch_taken_0x256348 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25634Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
        if (branch_taken_0x256348) {
            ctx->pc = 0x256368u;
            goto label_256368;
        }
    }
    ctx->pc = 0x256350u;
label_256350:
    // 0x256350: 0x50400005
label_256354:
    if (ctx->pc == 0x256354u) {
        ctx->pc = 0x256354u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 226), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256358u;
        goto label_256358;
    }
    ctx->pc = 0x256350u;
    {
        const bool branch_taken_0x256350 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256350) {
            ctx->pc = 0x256354u;
            WRITE8(ADD32(GPR_U32(ctx, 18), 226), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x256368u;
            goto label_256368;
        }
    }
    ctx->pc = 0x256358u;
label_256358:
    // 0x256358: 0x924400e2
    ctx->pc = 0x256358u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 226)));
label_25635c:
    // 0x25635c: 0xc09d9d6
label_256360:
    if (ctx->pc == 0x256360u) {
        ctx->pc = 0x256360u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256364u;
        goto label_256364;
    }
    ctx->pc = 0x25635Cu;
    SET_GPR_U32(ctx, 31, 0x256364u);
    ctx->pc = 0x256360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x276758u;
    {
        const uint32_t __entryPc = ctx->pc;
        TowerNeedGargItemsMsg_0x276758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256364u; }
    }
    if (ctx->pc != 0x256364u) { return; }
    ctx->pc = 0x256364u;
label_256364:
    // 0x256364: 0xa24000e2
    ctx->pc = 0x256364u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 226), (uint8_t)GPR_U32(ctx, 0));
label_256368:
    // 0x256368: 0x12400008
label_25636c:
    if (ctx->pc == 0x25636Cu) {
        ctx->pc = 0x25636Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256370u;
        goto label_256370;
    }
    ctx->pc = 0x256368u;
    {
        const bool branch_taken_0x256368 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x25636Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x256368) {
            ctx->pc = 0x25638Cu;
            goto label_25638c;
        }
    }
    ctx->pc = 0x256370u;
label_256370:
    // 0x256370: 0x924200e2
    ctx->pc = 0x256370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 226)));
label_256374:
    // 0x256374: 0xa06200e2
    ctx->pc = 0x256374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 226), (uint8_t)GPR_U32(ctx, 2));
label_256378:
    // 0x256378: 0x8c6300f8
    ctx->pc = 0x256378u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 248)));
label_25637c:
    // 0x25637c: 0x0
    ctx->pc = 0x25637cu;
    // NOP
label_256380:
    // 0x256380: 0x0
    ctx->pc = 0x256380u;
    // NOP
label_256384:
    // 0x256384: 0x1460fffa
label_256388:
    if (ctx->pc == 0x256388u) {
        ctx->pc = 0x25638Cu;
        goto label_25638c;
    }
    ctx->pc = 0x256384u;
    {
        const bool branch_taken_0x256384 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x256384) {
            ctx->pc = 0x256370u;
            goto label_256370;
        }
    }
    ctx->pc = 0x25638Cu;
label_25638c:
    // 0x25638c: 0x924200e2
    ctx->pc = 0x25638cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 226)));
label_256390:
    // 0x256390: 0x50400022
label_256394:
    if (ctx->pc == 0x256394u) {
        ctx->pc = 0x256394u;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
        ctx->pc = 0x256398u;
        goto label_256398;
    }
    ctx->pc = 0x256390u;
    {
        const bool branch_taken_0x256390 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256390) {
            ctx->pc = 0x256394u;
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
            ctx->pc = 0x25641Cu;
            goto label_25641c;
        }
    }
    ctx->pc = 0x256398u;
label_256398:
    // 0x256398: 0x964200f4
    ctx->pc = 0x256398u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
label_25639c:
    // 0x25639c: 0x30420100
    ctx->pc = 0x25639cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
label_2563a0:
    // 0x2563a0: 0x1040001c
label_2563a4:
    if (ctx->pc == 0x2563A4u) {
        ctx->pc = 0x2563A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->pc = 0x2563A8u;
        goto label_2563a8;
    }
    ctx->pc = 0x2563A0u;
    {
        const bool branch_taken_0x2563a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2563A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967280));
        if (branch_taken_0x2563a0) {
            ctx->pc = 0x256414u;
            goto label_256414;
        }
    }
    ctx->pc = 0x2563A8u;
label_2563a8:
    // 0x2563a8: 0x202d
    ctx->pc = 0x2563a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2563ac:
    // 0x2563ac: 0x24072b00
    ctx->pc = 0x2563acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 11008));
label_2563b0:
    // 0x2563b0: 0x3c020032
    ctx->pc = 0x2563b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2563b4:
    // 0x2563b4: 0x24481bc0
    ctx->pc = 0x2563b4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
label_2563b8:
    // 0x2563b8: 0x24050001
    ctx->pc = 0x2563b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2563bc:
    // 0x2563bc: 0x871018
    ctx->pc = 0x2563bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2563c0:
    // 0x2563c0: 0x481821
    ctx->pc = 0x2563c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2563c4:
    // 0x2563c4: 0x8c6200fc
    ctx->pc = 0x2563c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_2563c8:
    // 0x2563c8: 0x5445000c
label_2563cc:
    if (ctx->pc == 0x2563CCu) {
        ctx->pc = 0x2563CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2563D0u;
        goto label_2563d0;
    }
    ctx->pc = 0x2563C8u;
    {
        const bool branch_taken_0x2563c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x2563c8) {
            ctx->pc = 0x2563CCu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x2563FCu;
            goto label_2563fc;
        }
    }
    ctx->pc = 0x2563D0u;
label_2563d0:
    // 0x2563d0: 0x8c62089c
    ctx->pc = 0x2563d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2204)));
label_2563d4:
    // 0x2563d4: 0x50510007
label_2563d8:
    if (ctx->pc == 0x2563D8u) {
        ctx->pc = 0x2563D8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
        ctx->pc = 0x2563DCu;
        goto label_2563dc;
    }
    ctx->pc = 0x2563D4u;
    {
        const bool branch_taken_0x2563d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x2563d4) {
            ctx->pc = 0x2563D8u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
            ctx->pc = 0x2563F4u;
            goto label_2563f4;
        }
    }
    ctx->pc = 0x2563DCu;
label_2563dc:
    // 0x2563dc: 0x50400007
label_2563e0:
    if (ctx->pc == 0x2563E0u) {
        ctx->pc = 0x2563E0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2563E4u;
        goto label_2563e4;
    }
    ctx->pc = 0x2563DCu;
    {
        const bool branch_taken_0x2563dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2563dc) {
            ctx->pc = 0x2563E0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x2563FCu;
            goto label_2563fc;
        }
    }
    ctx->pc = 0x2563E4u;
label_2563e4:
    // 0x2563e4: 0x8c420018
    ctx->pc = 0x2563e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2563e8:
    // 0x2563e8: 0x54510004
label_2563ec:
    if (ctx->pc == 0x2563ECu) {
        ctx->pc = 0x2563ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2563F0u;
        goto label_2563f0;
    }
    ctx->pc = 0x2563E8u;
    {
        const bool branch_taken_0x2563e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x2563e8) {
            ctx->pc = 0x2563ECu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x2563FCu;
            goto label_2563fc;
        }
    }
    ctx->pc = 0x2563F0u;
label_2563f0:
    // 0x2563f0: 0x851004
    ctx->pc = 0x2563f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_2563f4:
    // 0x2563f4: 0xc23025
    ctx->pc = 0x2563f4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2563f8:
    // 0x2563f8: 0x24840001
    ctx->pc = 0x2563f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2563fc:
    // 0x2563fc: 0x28820004
    ctx->pc = 0x2563fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
label_256400:
    // 0x256400: 0x1440ffef
label_256404:
    if (ctx->pc == 0x256404u) {
        ctx->pc = 0x256404u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x256408u;
        goto label_256408;
    }
    ctx->pc = 0x256400u;
    {
        const bool branch_taken_0x256400 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x256404u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x256400) {
            ctx->pc = 0x2563C0u;
            goto label_2563c0;
        }
    }
    ctx->pc = 0x256408u;
label_256408:
    // 0x256408: 0x924200e2
    ctx->pc = 0x256408u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 226)));
label_25640c:
    // 0x25640c: 0x461024
    ctx->pc = 0x25640cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_256410:
    // 0x256410: 0xa24200e2
    ctx->pc = 0x256410u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 226), (uint8_t)GPR_U32(ctx, 2));
label_256414:
    // 0x256414: 0x925300e2
    ctx->pc = 0x256414u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 226)));
label_256418:
    // 0x256418: 0x865000f4
    ctx->pc = 0x256418u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
label_25641c:
    // 0x25641c: 0x32020400
    ctx->pc = 0x25641cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1024));
label_256420:
    // 0x256420: 0x10400011
label_256424:
    if (ctx->pc == 0x256424u) {
        ctx->pc = 0x256424u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x256428u;
        goto label_256428;
    }
    ctx->pc = 0x256420u;
    {
        const bool branch_taken_0x256420 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256424u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x256420) {
            ctx->pc = 0x256468u;
            goto label_256468;
        }
    }
    ctx->pc = 0x256428u;
label_256428:
    // 0x256428: 0x8c4207f4
    ctx->pc = 0x256428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2036)));
label_25642c:
    // 0x25642c: 0x12620009
label_256430:
    if (ctx->pc == 0x256430u) {
        ctx->pc = 0x256434u;
        goto label_256434;
    }
    ctx->pc = 0x25642Cu;
    {
        const bool branch_taken_0x25642c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        if (branch_taken_0x25642c) {
            ctx->pc = 0x256454u;
            goto label_256454;
        }
    }
    ctx->pc = 0x256434u;
label_256434:
    // 0x256434: 0xa24000e2
    ctx->pc = 0x256434u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 226), (uint8_t)GPR_U32(ctx, 0));
label_256438:
    // 0x256438: 0x1220006c
label_25643c:
    if (ctx->pc == 0x25643Cu) {
        ctx->pc = 0x25643Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256440u;
        goto label_256440;
    }
    ctx->pc = 0x256438u;
    {
        const bool branch_taken_0x256438 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x25643Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x256438) {
            ctx->pc = 0x2565ECu;
            goto label_2565ec;
        }
    }
    ctx->pc = 0x256440u;
label_256440:
    // 0x256440: 0x8e220010
    ctx->pc = 0x256440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_256444:
    // 0x256444: 0x3c03fbff
    ctx->pc = 0x256444u;
    SET_GPR_U32(ctx, 3, ((uint32_t)64511 << 16));
label_256448:
    // 0x256448: 0x3463ffff
    ctx->pc = 0x256448u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_25644c:
    // 0x25644c: 0x10000005
label_256450:
    if (ctx->pc == 0x256450u) {
        ctx->pc = 0x256450u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x256454u;
        goto label_256454;
    }
    ctx->pc = 0x25644Cu;
    {
        const bool branch_taken_0x25644c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256450u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x25644c) {
            ctx->pc = 0x256464u;
            goto label_256464;
        }
    }
    ctx->pc = 0x256454u;
label_256454:
    // 0x256454: 0x12200065
label_256458:
    if (ctx->pc == 0x256458u) {
        ctx->pc = 0x256458u;
        SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
        ctx->pc = 0x25645Cu;
        goto label_25645c;
    }
    ctx->pc = 0x256454u;
    {
        const bool branch_taken_0x256454 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x256458u;
        SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
        if (branch_taken_0x256454) {
            ctx->pc = 0x2565ECu;
            goto label_2565ec;
        }
    }
    ctx->pc = 0x25645Cu;
label_25645c:
    // 0x25645c: 0x8e220010
    ctx->pc = 0x25645cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_256460:
    // 0x256460: 0x431025
    ctx->pc = 0x256460u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_256464:
    // 0x256464: 0xae220010
    ctx->pc = 0x256464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_256468:
    // 0x256468: 0x12200060
label_25646c:
    if (ctx->pc == 0x25646Cu) {
        ctx->pc = 0x25646Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x256470u;
        goto label_256470;
    }
    ctx->pc = 0x256468u;
    {
        const bool branch_taken_0x256468 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x25646Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x256468) {
            ctx->pc = 0x2565ECu;
            goto label_2565ec;
        }
    }
    ctx->pc = 0x256470u;
label_256470:
    // 0x256470: 0x50400011
label_256474:
    if (ctx->pc == 0x256474u) {
        ctx->pc = 0x256474u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x256478u;
        goto label_256478;
    }
    ctx->pc = 0x256470u;
    {
        const bool branch_taken_0x256470 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256470) {
            ctx->pc = 0x256474u;
            SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2));
            ctx->pc = 0x2564B8u;
            goto label_2564b8;
        }
    }
    ctx->pc = 0x256478u;
label_256478:
    // 0x256478: 0x1260000a
label_25647c:
    if (ctx->pc == 0x25647Cu) {
        ctx->pc = 0x25647Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x256480u;
        goto label_256480;
    }
    ctx->pc = 0x256478u;
    {
        const bool branch_taken_0x256478 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x25647Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x256478) {
            ctx->pc = 0x2564A4u;
            goto label_2564a4;
        }
    }
    ctx->pc = 0x256480u;
label_256480:
    // 0x256480: 0x92240016
    ctx->pc = 0x256480u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_256484:
    // 0x256484: 0x308200f0
    ctx->pc = 0x256484u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 240));
label_256488:
    // 0x256488: 0x21600
    ctx->pc = 0x256488u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_25648c:
    // 0x25648c: 0x21603
    ctx->pc = 0x25648cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_256490:
    // 0x256490: 0x14430060
label_256494:
    if (ctx->pc == 0x256494u) {
        ctx->pc = 0x256494u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x256498u;
        goto label_256498;
    }
    ctx->pc = 0x256490u;
    {
        const bool branch_taken_0x256490 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x256494u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x256490) {
            ctx->pc = 0x256614u;
            goto label_256614;
        }
    }
    ctx->pc = 0x256498u;
label_256498:
    // 0x256498: 0x3082000f
    ctx->pc = 0x256498u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 15));
label_25649c:
    // 0x25649c: 0x1000005c
label_2564a0:
    if (ctx->pc == 0x2564A0u) {
        ctx->pc = 0x2564A0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2564A4u;
        goto label_2564a4;
    }
    ctx->pc = 0x25649Cu;
    {
        const bool branch_taken_0x25649c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2564A0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x25649c) {
            ctx->pc = 0x256610u;
            goto label_256610;
        }
    }
    ctx->pc = 0x2564A4u;
label_2564a4:
    // 0x2564a4: 0x92220016
    ctx->pc = 0x2564a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_2564a8:
    // 0x2564a8: 0x30420020
    ctx->pc = 0x2564a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
label_2564ac:
    // 0x2564ac: 0x2c420001
    ctx->pc = 0x2564acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_2564b0:
    // 0x2564b0: 0x10000058
label_2564b4:
    if (ctx->pc == 0x2564B4u) {
        ctx->pc = 0x2564B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2564B8u;
        goto label_2564b8;
    }
    ctx->pc = 0x2564B0u;
    {
        const bool branch_taken_0x2564b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2564B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2564b0) {
            ctx->pc = 0x256614u;
            goto label_256614;
        }
    }
    ctx->pc = 0x2564B8u;
label_2564b8:
    // 0x2564b8: 0x1040001e
label_2564bc:
    if (ctx->pc == 0x2564BCu) {
        ctx->pc = 0x2564BCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2564C0u;
        goto label_2564c0;
    }
    ctx->pc = 0x2564B8u;
    {
        const bool branch_taken_0x2564b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2564BCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x2564b8) {
            ctx->pc = 0x256534u;
            goto label_256534;
        }
    }
    ctx->pc = 0x2564C0u;
label_2564c0:
    // 0x2564c0: 0x5260000a
label_2564c4:
    if (ctx->pc == 0x2564C4u) {
        ctx->pc = 0x2564C4u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
        ctx->pc = 0x2564C8u;
        goto label_2564c8;
    }
    ctx->pc = 0x2564C0u;
    {
        const bool branch_taken_0x2564c0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2564c0) {
            ctx->pc = 0x2564C4u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
            ctx->pc = 0x2564ECu;
            goto label_2564ec;
        }
    }
    ctx->pc = 0x2564C8u;
label_2564c8:
    // 0x2564c8: 0x92230016
    ctx->pc = 0x2564c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_2564cc:
    // 0x2564cc: 0x306200f0
    ctx->pc = 0x2564ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 240));
label_2564d0:
    // 0x2564d0: 0x54400009
label_2564d4:
    if (ctx->pc == 0x2564D4u) {
        ctx->pc = 0x2564D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2564D8u;
        goto label_2564d8;
    }
    ctx->pc = 0x2564D0u;
    {
        const bool branch_taken_0x2564d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2564d0) {
            ctx->pc = 0x2564D4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x2564F8u;
            goto label_2564f8;
        }
    }
    ctx->pc = 0x2564D8u;
label_2564d8:
    // 0x2564d8: 0x3062000f
    ctx->pc = 0x2564d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
label_2564dc:
    // 0x2564dc: 0x34420020
    ctx->pc = 0x2564dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32));
label_2564e0:
    // 0x2564e0: 0xa2220016
    ctx->pc = 0x2564e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
label_2564e4:
    // 0x2564e4: 0x10000004
label_2564e8:
    if (ctx->pc == 0x2564E8u) {
        ctx->pc = 0x2564E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2564ECu;
        goto label_2564ec;
    }
    ctx->pc = 0x2564E4u;
    {
        const bool branch_taken_0x2564e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2564E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2564e4) {
            ctx->pc = 0x2564F8u;
            goto label_2564f8;
        }
    }
    ctx->pc = 0x2564ECu;
label_2564ec:
    // 0x2564ec: 0x30420020
    ctx->pc = 0x2564ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
label_2564f0:
    // 0x2564f0: 0x2102b
    ctx->pc = 0x2564f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2564f4:
    // 0x2564f4: 0x21040
    ctx->pc = 0x2564f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_2564f8:
    // 0x2564f8: 0xa24200de
    ctx->pc = 0x2564f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
label_2564fc:
    // 0x2564fc: 0x24020017
    ctx->pc = 0x2564fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
label_256500:
    // 0x256500: 0x56820046
label_256504:
    if (ctx->pc == 0x256504u) {
        ctx->pc = 0x256504u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        ctx->pc = 0x256508u;
        goto label_256508;
    }
    ctx->pc = 0x256500u;
    {
        const bool branch_taken_0x256500 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        if (branch_taken_0x256500) {
            ctx->pc = 0x256504u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
            ctx->pc = 0x25661Cu;
            goto label_25661c;
        }
    }
    ctx->pc = 0x256508u;
label_256508:
    // 0x256508: 0x3c020031
    ctx->pc = 0x256508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_25650c:
    // 0x25650c: 0x8c420018
    ctx->pc = 0x25650cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_256510:
    // 0x256510: 0x30428000
    ctx->pc = 0x256510u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
label_256514:
    // 0x256514: 0x54400041
label_256518:
    if (ctx->pc == 0x256518u) {
        ctx->pc = 0x256518u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        ctx->pc = 0x25651Cu;
        goto label_25651c;
    }
    ctx->pc = 0x256514u;
    {
        const bool branch_taken_0x256514 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256514) {
            ctx->pc = 0x256518u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
            ctx->pc = 0x25661Cu;
            goto label_25661c;
        }
    }
    ctx->pc = 0x25651Cu;
label_25651c:
    // 0x25651c: 0x24040005
    ctx->pc = 0x25651cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_256520:
    // 0x256520: 0x2405ffff
    ctx->pc = 0x256520u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_256524:
    // 0x256524: 0xc0a3a1c
label_256528:
    if (ctx->pc == 0x256528u) {
        ctx->pc = 0x256528u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x25652Cu;
        goto label_25652c;
    }
    ctx->pc = 0x256524u;
    SET_GPR_U32(ctx, 31, 0x25652Cu);
    ctx->pc = 0x256528u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 80));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25652Cu; }
    }
    if (ctx->pc != 0x25652Cu) { return; }
    ctx->pc = 0x25652Cu;
label_25652c:
    // 0x25652c: 0x1000003b
label_256530:
    if (ctx->pc == 0x256530u) {
        ctx->pc = 0x256530u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        ctx->pc = 0x256534u;
        goto label_256534;
    }
    ctx->pc = 0x25652Cu;
    {
        const bool branch_taken_0x25652c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256530u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        if (branch_taken_0x25652c) {
            ctx->pc = 0x25661Cu;
            goto label_25661c;
        }
    }
    ctx->pc = 0x256534u;
label_256534:
    // 0x256534: 0x10400024
label_256538:
    if (ctx->pc == 0x256538u) {
        ctx->pc = 0x25653Cu;
        goto label_25653c;
    }
    ctx->pc = 0x256534u;
    {
        const bool branch_taken_0x256534 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256534) {
            ctx->pc = 0x2565C8u;
            goto label_2565c8;
        }
    }
    ctx->pc = 0x25653Cu;
label_25653c:
    // 0x25653c: 0x12600018
label_256540:
    if (ctx->pc == 0x256540u) {
        ctx->pc = 0x256540u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x256544u;
        goto label_256544;
    }
    ctx->pc = 0x25653Cu;
    {
        const bool branch_taken_0x25653c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x256540u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25653c) {
            ctx->pc = 0x2565A0u;
            goto label_2565a0;
        }
    }
    ctx->pc = 0x256544u;
label_256544:
    // 0x256544: 0x92230016
    ctx->pc = 0x256544u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_256548:
    // 0x256548: 0x30620010
    ctx->pc = 0x256548u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_25654c:
    // 0x25654c: 0x14400011
label_256550:
    if (ctx->pc == 0x256550u) {
        ctx->pc = 0x256550u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 15));
        ctx->pc = 0x256554u;
        goto label_256554;
    }
    ctx->pc = 0x25654Cu;
    {
        const bool branch_taken_0x25654c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x256550u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 15));
        if (branch_taken_0x25654c) {
            ctx->pc = 0x256594u;
            goto label_256594;
        }
    }
    ctx->pc = 0x256554u;
label_256554:
    // 0x256554: 0x931025
    ctx->pc = 0x256554u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_256558:
    // 0x256558: 0x82102a
    ctx->pc = 0x256558u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_25655c:
    // 0x25655c: 0x10400003
label_256560:
    if (ctx->pc == 0x256560u) {
        ctx->pc = 0x256560u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 240));
        ctx->pc = 0x256564u;
        goto label_256564;
    }
    ctx->pc = 0x25655Cu;
    {
        const bool branch_taken_0x25655c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256560u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 240));
        if (branch_taken_0x25655c) {
            ctx->pc = 0x25656Cu;
            goto label_25656c;
        }
    }
    ctx->pc = 0x256564u;
label_256564:
    // 0x256564: 0x531025
    ctx->pc = 0x256564u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_256568:
    // 0x256568: 0xa2220016
    ctx->pc = 0x256568u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
label_25656c:
    // 0x25656c: 0x86420100
    ctx->pc = 0x25656cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
label_256570:
    // 0x256570: 0x5c400006
label_256574:
    if (ctx->pc == 0x256574u) {
        ctx->pc = 0x256574u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256578u;
        goto label_256578;
    }
    ctx->pc = 0x256570u;
    {
        const bool branch_taken_0x256570 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x256570) {
            ctx->pc = 0x256574u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x25658Cu;
            goto label_25658c;
        }
    }
    ctx->pc = 0x256578u;
label_256578:
    // 0x256578: 0x92220016
    ctx->pc = 0x256578u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_25657c:
    // 0x25657c: 0x38420020
    ctx->pc = 0x25657cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 32));
label_256580:
    // 0x256580: 0x304200f0
    ctx->pc = 0x256580u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 240));
label_256584:
    // 0x256584: 0x531025
    ctx->pc = 0x256584u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_256588:
    // 0x256588: 0xa2220016
    ctx->pc = 0x256588u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
label_25658c:
    // 0x25658c: 0x10a00021
label_256590:
    if (ctx->pc == 0x256590u) {
        ctx->pc = 0x256590u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x256594u;
        goto label_256594;
    }
    ctx->pc = 0x25658Cu;
    {
        const bool branch_taken_0x25658c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x256590u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25658c) {
            ctx->pc = 0x256614u;
            goto label_256614;
        }
    }
    ctx->pc = 0x256594u;
label_256594:
    // 0x256594: 0x24020078
    ctx->pc = 0x256594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 120));
label_256598:
    // 0x256598: 0x1000001d
label_25659c:
    if (ctx->pc == 0x25659Cu) {
        ctx->pc = 0x25659Cu;
        WRITE16(ADD32(GPR_U32(ctx, 18), 256), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2565A0u;
        goto label_2565a0;
    }
    ctx->pc = 0x256598u;
    {
        const bool branch_taken_0x256598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25659Cu;
        WRITE16(ADD32(GPR_U32(ctx, 18), 256), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x256598) {
            ctx->pc = 0x256610u;
            goto label_256610;
        }
    }
    ctx->pc = 0x2565A0u;
label_2565a0:
    // 0x2565a0: 0x32020800
    ctx->pc = 0x2565a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2048));
label_2565a4:
    // 0x2565a4: 0x1040001c
label_2565a8:
    if (ctx->pc == 0x2565A8u) {
        ctx->pc = 0x2565A8u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2565ACu;
        goto label_2565ac;
    }
    ctx->pc = 0x2565A4u;
    {
        const bool branch_taken_0x2565a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2565A8u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2565a4) {
            ctx->pc = 0x256618u;
            goto label_256618;
        }
    }
    ctx->pc = 0x2565ACu;
label_2565ac:
    // 0x2565ac: 0x3c020031
    ctx->pc = 0x2565acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2565b0:
    // 0x2565b0: 0x8c42002c
    ctx->pc = 0x2565b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2565b4:
    // 0x2565b4: 0x2442ffff
    ctx->pc = 0x2565b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2565b8:
    // 0x2565b8: 0x2403003c
    ctx->pc = 0x2565b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
label_2565bc:
    // 0x2565bc: 0x431018
    ctx->pc = 0x2565bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2565c0:
    // 0x2565c0: 0x10000015
label_2565c4:
    if (ctx->pc == 0x2565C4u) {
        ctx->pc = 0x2565C4u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 256), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2565C8u;
        goto label_2565c8;
    }
    ctx->pc = 0x2565C0u;
    {
        const bool branch_taken_0x2565c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2565C4u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 256), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2565c0) {
            ctx->pc = 0x256618u;
            goto label_256618;
        }
    }
    ctx->pc = 0x2565C8u;
label_2565c8:
    // 0x2565c8: 0x52600004
label_2565cc:
    if (ctx->pc == 0x2565CCu) {
        ctx->pc = 0x2565CCu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
        ctx->pc = 0x2565D0u;
        goto label_2565d0;
    }
    ctx->pc = 0x2565C8u;
    {
        const bool branch_taken_0x2565c8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2565c8) {
            ctx->pc = 0x2565CCu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
            ctx->pc = 0x2565DCu;
            goto label_2565dc;
        }
    }
    ctx->pc = 0x2565D0u;
label_2565d0:
    // 0x2565d0: 0x36620020
    ctx->pc = 0x2565d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), 32));
label_2565d4:
    // 0x2565d4: 0x1000000e
label_2565d8:
    if (ctx->pc == 0x2565D8u) {
        ctx->pc = 0x2565D8u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2565DCu;
        goto label_2565dc;
    }
    ctx->pc = 0x2565D4u;
    {
        const bool branch_taken_0x2565d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2565D8u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2565d4) {
            ctx->pc = 0x256610u;
            goto label_256610;
        }
    }
    ctx->pc = 0x2565DCu;
label_2565dc:
    // 0x2565dc: 0x30420020
    ctx->pc = 0x2565dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
label_2565e0:
    // 0x2565e0: 0x2102b
    ctx->pc = 0x2565e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2565e4:
    // 0x2565e4: 0x1000000b
label_2565e8:
    if (ctx->pc == 0x2565E8u) {
        ctx->pc = 0x2565E8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2565ECu;
        goto label_2565ec;
    }
    ctx->pc = 0x2565E4u;
    {
        const bool branch_taken_0x2565e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2565E8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2565e4) {
            ctx->pc = 0x256614u;
            goto label_256614;
        }
    }
    ctx->pc = 0x2565ECu;
label_2565ec:
    // 0x2565ec: 0x32020004
    ctx->pc = 0x2565ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4));
label_2565f0:
    // 0x2565f0: 0x10400005
label_2565f4:
    if (ctx->pc == 0x2565F4u) {
        ctx->pc = 0x2565F8u;
        goto label_2565f8;
    }
    ctx->pc = 0x2565F0u;
    {
        const bool branch_taken_0x2565f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2565f0) {
            ctx->pc = 0x256608u;
            goto label_256608;
        }
    }
    ctx->pc = 0x2565F8u;
label_2565f8:
    // 0x2565f8: 0x16600006
label_2565fc:
    if (ctx->pc == 0x2565FCu) {
        ctx->pc = 0x2565FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x256600u;
        goto label_256600;
    }
    ctx->pc = 0x2565F8u;
    {
        const bool branch_taken_0x2565f8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x2565FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2565f8) {
            ctx->pc = 0x256614u;
            goto label_256614;
        }
    }
    ctx->pc = 0x256600u;
label_256600:
    // 0x256600: 0x10000005
label_256604:
    if (ctx->pc == 0x256604u) {
        ctx->pc = 0x256604u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256608u;
        goto label_256608;
    }
    ctx->pc = 0x256600u;
    {
        const bool branch_taken_0x256600 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256604u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x256600) {
            ctx->pc = 0x256618u;
            goto label_256618;
        }
    }
    ctx->pc = 0x256608u;
label_256608:
    // 0x256608: 0x52600004
label_25660c:
    if (ctx->pc == 0x25660Cu) {
        ctx->pc = 0x25660Cu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        ctx->pc = 0x256610u;
        goto label_256610;
    }
    ctx->pc = 0x256608u;
    {
        const bool branch_taken_0x256608 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x256608) {
            ctx->pc = 0x25660Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
            ctx->pc = 0x25661Cu;
            goto label_25661c;
        }
    }
    ctx->pc = 0x256610u;
label_256610:
    // 0x256610: 0x24020002
    ctx->pc = 0x256610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_256614:
    // 0x256614: 0xa24200de
    ctx->pc = 0x256614u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
label_256618:
    // 0x256618: 0x824200de
    ctx->pc = 0x256618u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_25661c:
    // 0x25661c: 0x50400022
label_256620:
    if (ctx->pc == 0x256620u) {
        ctx->pc = 0x256620u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256624u;
        goto label_256624;
    }
    ctx->pc = 0x25661Cu;
    {
        const bool branch_taken_0x25661c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25661c) {
            ctx->pc = 0x256620u;
            WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2566A8u;
            goto label_2566a8;
        }
    }
    ctx->pc = 0x256624u;
label_256624:
    // 0x256624: 0x56c00020
label_256628:
    if (ctx->pc == 0x256628u) {
        ctx->pc = 0x256628u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x25662Cu;
        goto label_25662c;
    }
    ctx->pc = 0x256624u;
    {
        const bool branch_taken_0x256624 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x256624) {
            ctx->pc = 0x256628u;
            WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2566A8u;
            goto label_2566a8;
        }
    }
    ctx->pc = 0x25662Cu;
label_25662c:
    // 0x25662c: 0x32021000
    ctx->pc = 0x25662cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4096));
label_256630:
    // 0x256630: 0x10400008
label_256634:
    if (ctx->pc == 0x256634u) {
        ctx->pc = 0x256634u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256638u;
        goto label_256638;
    }
    ctx->pc = 0x256630u;
    {
        const bool branch_taken_0x256630 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256634u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x256630) {
            ctx->pc = 0x256654u;
            goto label_256654;
        }
    }
    ctx->pc = 0x256638u;
label_256638:
    // 0x256638: 0x282d
    ctx->pc = 0x256638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25663c:
    // 0x25663c: 0x240600b4
    ctx->pc = 0x25663cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 180));
label_256640:
    // 0x256640: 0x3c013dcc
    ctx->pc = 0x256640u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
label_256644:
    // 0x256644: 0x3421cccd
    ctx->pc = 0x256644u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_256648:
    // 0x256648: 0x44816000
    ctx->pc = 0x256648u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_25664c:
    // 0x25664c: 0xc09bed8
label_256650:
    if (ctx->pc == 0x256650u) {
        ctx->pc = 0x256650u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x256654u;
        goto label_256654;
    }
    ctx->pc = 0x25664Cu;
    SET_GPR_U32(ctx, 31, 0x256654u);
    ctx->pc = 0x256650u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 100));
    ctx->pc = 0x26FB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShakeCamera_0x26fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256654u; }
    }
    if (ctx->pc != 0x256654u) { return; }
    ctx->pc = 0x256654u;
label_256654:
    // 0x256654: 0x32022000
    ctx->pc = 0x256654u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8192));
label_256658:
    // 0x256658: 0x50400004
label_25665c:
    if (ctx->pc == 0x25665Cu) {
        ctx->pc = 0x25665Cu;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 258)));
        ctx->pc = 0x256660u;
        goto label_256660;
    }
    ctx->pc = 0x256658u;
    {
        const bool branch_taken_0x256658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256658) {
            ctx->pc = 0x25665Cu;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 258)));
            ctx->pc = 0x25666Cu;
            goto label_25666c;
        }
    }
    ctx->pc = 0x256660u;
label_256660:
    // 0x256660: 0xc0951d6
label_256664:
    if (ctx->pc == 0x256664u) {
        ctx->pc = 0x256664u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x256668u;
        goto label_256668;
    }
    ctx->pc = 0x256660u;
    SET_GPR_U32(ctx, 31, 0x256668u);
    ctx->pc = 0x256664u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x254758u;
    {
        const uint32_t __entryPc = ctx->pc;
        ActivateNearestEnemy_0x254758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256668u; }
    }
    if (ctx->pc != 0x256668u) { return; }
    ctx->pc = 0x256668u;
label_256668:
    // 0x256668: 0x86430102
    ctx->pc = 0x256668u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 258)));
label_25666c:
    // 0x25666c: 0x462000e
label_256670:
    if (ctx->pc == 0x256670u) {
        ctx->pc = 0x256670u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256674u;
        goto label_256674;
    }
    ctx->pc = 0x25666Cu;
    {
        const bool branch_taken_0x25666c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25666c) {
            ctx->pc = 0x256670u;
            WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2566A8u;
            goto label_2566a8;
        }
    }
    ctx->pc = 0x256674u;
label_256674:
    // 0x256674: 0x1260000b
label_256678:
    if (ctx->pc == 0x256678u) {
        ctx->pc = 0x256678u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
        ctx->pc = 0x25667Cu;
        goto label_25667c;
    }
    ctx->pc = 0x256674u;
    {
        const bool branch_taken_0x256674 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x256678u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
        if (branch_taken_0x256674) {
            ctx->pc = 0x2566A4u;
            goto label_2566a4;
        }
    }
    ctx->pc = 0x25667Cu;
label_25667c:
    // 0x25667c: 0x3c020033
    ctx->pc = 0x25667cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_256680:
    // 0x256680: 0x24424b70
    ctx->pc = 0x256680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
label_256684:
    // 0x256684: 0x621821
    ctx->pc = 0x256684u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_256688:
    // 0x256688: 0x220202d
    ctx->pc = 0x256688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25668c:
    // 0x25668c: 0x24650010
    ctx->pc = 0x25668cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 16));
label_256690:
    // 0x256690: 0x24660020
    ctx->pc = 0x256690u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 32));
label_256694:
    // 0x256694: 0x90670001
    ctx->pc = 0x256694u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_256698:
    // 0x256698: 0x2408001e
    ctx->pc = 0x256698u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 30));
label_25669c:
    // 0x25669c: 0xc0a89ac
label_2566a0:
    if (ctx->pc == 0x2566A0u) {
        ctx->pc = 0x2566A0u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2566A4u;
        goto label_2566a4;
    }
    ctx->pc = 0x25669Cu;
    SET_GPR_U32(ctx, 31, 0x2566A4u);
    ctx->pc = 0x2566A0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A26B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TriggerCameraActivate_0x2a26b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2566A4u; }
    }
    if (ctx->pc != 0x2566A4u) { return; }
    ctx->pc = 0x2566A4u;
label_2566a4:
    // 0x2566a4: 0xa64000b8
    ctx->pc = 0x2566a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 0));
label_2566a8:
    // 0x2566a8: 0x3c020036
    ctx->pc = 0x2566a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2566ac:
    // 0x2566ac: 0x8c42dbac
    ctx->pc = 0x2566acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
label_2566b0:
    // 0x2566b0: 0x544002f8
label_2566b4:
    if (ctx->pc == 0x2566B4u) {
        ctx->pc = 0x2566B4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2566B8u;
        goto label_2566b8;
    }
    ctx->pc = 0x2566B0u;
    {
        const bool branch_taken_0x2566b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2566b0) {
            ctx->pc = 0x2566B4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x2566B8u;
label_2566b8:
    // 0x2566b8: 0x964200f4
    ctx->pc = 0x2566b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
label_2566bc:
    // 0x2566bc: 0x304200c0
    ctx->pc = 0x2566bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
label_2566c0:
    // 0x2566c0: 0x544002f4
label_2566c4:
    if (ctx->pc == 0x2566C4u) {
        ctx->pc = 0x2566C4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2566C8u;
        goto label_2566c8;
    }
    ctx->pc = 0x2566C0u;
    {
        const bool branch_taken_0x2566c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2566c0) {
            ctx->pc = 0x2566C4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x2566C8u;
label_2566c8:
    // 0x2566c8: 0x924300e2
    ctx->pc = 0x2566c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 226)));
label_2566cc:
    // 0x2566cc: 0x3062000f
    ctx->pc = 0x2566ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
label_2566d0:
    // 0x2566d0: 0x10400003
label_2566d4:
    if (ctx->pc == 0x2566D4u) {
        ctx->pc = 0x2566D4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 240));
        ctx->pc = 0x2566D8u;
        goto label_2566d8;
    }
    ctx->pc = 0x2566D0u;
    {
        const bool branch_taken_0x2566d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2566D4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 240));
        if (branch_taken_0x2566d0) {
            ctx->pc = 0x2566E0u;
            goto label_2566e0;
        }
    }
    ctx->pc = 0x2566D8u;
label_2566d8:
    // 0x2566d8: 0x100002ed
label_2566dc:
    if (ctx->pc == 0x2566DCu) {
        ctx->pc = 0x2566DCu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 226), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2566E0u;
        goto label_2566e0;
    }
    ctx->pc = 0x2566D8u;
    {
        const bool branch_taken_0x2566d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2566DCu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 226), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2566d8) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x2566E0u;
label_2566e0:
    // 0x2566e0: 0x100002eb
label_2566e4:
    if (ctx->pc == 0x2566E4u) {
        ctx->pc = 0x2566E4u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 226), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2566E8u;
        goto label_2566e8;
    }
    ctx->pc = 0x2566E0u;
    {
        const bool branch_taken_0x2566e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2566E4u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 226), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2566e0) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x2566E8u;
label_2566e8:
    // 0x2566e8: 0x8e420000
    ctx->pc = 0x2566e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2566ec:
    // 0x2566ec: 0x8c420004
    ctx->pc = 0x2566ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2566f0:
    // 0x2566f0: 0x1440001c
label_2566f4:
    if (ctx->pc == 0x2566F4u) {
        ctx->pc = 0x2566F4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->pc = 0x2566F8u;
        goto label_2566f8;
    }
    ctx->pc = 0x2566F0u;
    {
        const bool branch_taken_0x2566f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2566F4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 240)));
        if (branch_taken_0x2566f0) {
            ctx->pc = 0x256764u;
            goto label_256764;
        }
    }
    ctx->pc = 0x2566F8u;
label_2566f8:
    // 0x2566f8: 0x120002e5
label_2566fc:
    if (ctx->pc == 0x2566FCu) {
        ctx->pc = 0x2566FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x256700u;
        goto label_256700;
    }
    ctx->pc = 0x2566F8u;
    {
        const bool branch_taken_0x2566f8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2566FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2566f8) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256700u;
label_256700:
    // 0x256700: 0x8c42f934
    ctx->pc = 0x256700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965556)));
label_256704:
    // 0x256704: 0x10400006
label_256708:
    if (ctx->pc == 0x256708u) {
        ctx->pc = 0x256708u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        ctx->pc = 0x25670Cu;
        goto label_25670c;
    }
    ctx->pc = 0x256704u;
    {
        const bool branch_taken_0x256704 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256708u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x256704) {
            ctx->pc = 0x256720u;
            goto label_256720;
        }
    }
    ctx->pc = 0x25670Cu;
label_25670c:
    // 0x25670c: 0x8e020010
    ctx->pc = 0x25670cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_256710:
    // 0x256710: 0x30420004
    ctx->pc = 0x256710u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_256714:
    // 0x256714: 0x544002df
label_256718:
    if (ctx->pc == 0x256718u) {
        ctx->pc = 0x256718u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x25671Cu;
        goto label_25671c;
    }
    ctx->pc = 0x256714u;
    {
        const bool branch_taken_0x256714 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256714) {
            ctx->pc = 0x256718u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x25671Cu;
label_25671c:
    // 0x25671c: 0x3c030031
    ctx->pc = 0x25671cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_256720:
    // 0x256720: 0x8c62ffbc
    ctx->pc = 0x256720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_256724:
    // 0x256724: 0x4400005
label_256728:
    if (ctx->pc == 0x256728u) {
        ctx->pc = 0x256728u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        ctx->pc = 0x25672Cu;
        goto label_25672c;
    }
    ctx->pc = 0x256724u;
    {
        const bool branch_taken_0x256724 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x256728u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x256724) {
            ctx->pc = 0x25673Cu;
            goto label_25673c;
        }
    }
    ctx->pc = 0x25672Cu;
label_25672c:
    // 0x25672c: 0x44826000
    ctx->pc = 0x25672cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_256730:
    // 0x256730: 0x46806320
    ctx->pc = 0x256730u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_256734:
    // 0x256734: 0x10000009
label_256738:
    if (ctx->pc == 0x256738u) {
        ctx->pc = 0x256738u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x25673Cu;
        goto label_25673c;
    }
    ctx->pc = 0x256734u;
    {
        const bool branch_taken_0x256734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256738u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x256734) {
            ctx->pc = 0x25675Cu;
            goto label_25675c;
        }
    }
    ctx->pc = 0x25673Cu;
label_25673c:
    // 0x25673c: 0x8c820000
    ctx->pc = 0x25673cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_256740:
    // 0x256740: 0x30430001
    ctx->pc = 0x256740u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
label_256744:
    // 0x256744: 0x21042
    ctx->pc = 0x256744u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_256748:
    // 0x256748: 0x621825
    ctx->pc = 0x256748u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25674c:
    // 0x25674c: 0x44836000
    ctx->pc = 0x25674cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
label_256750:
    // 0x256750: 0x46806320
    ctx->pc = 0x256750u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_256754:
    // 0x256754: 0x460c6300
    ctx->pc = 0x256754u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_256758:
    // 0x256758: 0xc64000f4
    ctx->pc = 0x256758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25675c:
    // 0x25675c: 0x10000043
label_256760:
    if (ctx->pc == 0x256760u) {
        ctx->pc = 0x256760u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x256764u;
        goto label_256764;
    }
    ctx->pc = 0x25675Cu;
    {
        const bool branch_taken_0x25675c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256760u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x25675c) {
            ctx->pc = 0x25686Cu;
            goto label_25686c;
        }
    }
    ctx->pc = 0x256764u;
label_256764:
    // 0x256764: 0x8e420000
    ctx->pc = 0x256764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_256768:
    // 0x256768: 0x8c430004
    ctx->pc = 0x256768u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25676c:
    // 0x25676c: 0x24020002
    ctx->pc = 0x25676cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_256770:
    // 0x256770: 0x54620049
label_256774:
    if (ctx->pc == 0x256774u) {
        ctx->pc = 0x256774u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x256778u;
        goto label_256778;
    }
    ctx->pc = 0x256770u;
    {
        const bool branch_taken_0x256770 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x256770) {
            ctx->pc = 0x256774u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x256898u;
            goto label_256898;
        }
    }
    ctx->pc = 0x256778u;
label_256778:
    // 0x256778: 0x120002c5
label_25677c:
    if (ctx->pc == 0x25677Cu) {
        ctx->pc = 0x25677Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x256780u;
        goto label_256780;
    }
    ctx->pc = 0x256778u;
    {
        const bool branch_taken_0x256778 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x25677Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x256778) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256780u;
label_256780:
    // 0x256780: 0xde4200d8
    ctx->pc = 0x256780u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 216)));
label_256784:
    // 0x256784: 0x30421001
    ctx->pc = 0x256784u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4097));
label_256788:
    // 0x256788: 0x544302c2
label_25678c:
    if (ctx->pc == 0x25678Cu) {
        ctx->pc = 0x25678Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x256790u;
        goto label_256790;
    }
    ctx->pc = 0x256788u;
    {
        const bool branch_taken_0x256788 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x256788) {
            ctx->pc = 0x25678Cu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x256790u;
label_256790:
    // 0x256790: 0xc64100f4
    ctx->pc = 0x256790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_256794:
    // 0x256794: 0x44800000
    ctx->pc = 0x256794u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_256798:
    // 0x256798: 0x46010036
    ctx->pc = 0x256798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25679c:
    // 0x25679c: 0x45000009
label_2567a0:
    if (ctx->pc == 0x2567A0u) {
        ctx->pc = 0x2567A4u;
        goto label_2567a4;
    }
    ctx->pc = 0x25679Cu;
    {
        const bool branch_taken_0x25679c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25679c) {
            ctx->pc = 0x2567C4u;
            goto label_2567c4;
        }
    }
    ctx->pc = 0x2567A4u;
label_2567a4:
    // 0x2567a4: 0xc64100fc
    ctx->pc = 0x2567a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2567a8:
    // 0x2567a8: 0xc64000f8
    ctx->pc = 0x2567a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2567ac:
    // 0x2567ac: 0x46010036
    ctx->pc = 0x2567acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2567b0:
    // 0x2567b0: 0x0
    ctx->pc = 0x2567b0u;
    // NOP
label_2567b4:
    // 0x2567b4: 0x4503000d
label_2567b8:
    if (ctx->pc == 0x2567B8u) {
        ctx->pc = 0x2567B8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x2567BCu;
        goto label_2567bc;
    }
    ctx->pc = 0x2567B4u;
    {
        const bool branch_taken_0x2567b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2567b4) {
            ctx->pc = 0x2567B8u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x2567ECu;
            goto label_2567ec;
        }
    }
    ctx->pc = 0x2567BCu;
label_2567bc:
    // 0x2567bc: 0xc64100f4
    ctx->pc = 0x2567bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2567c0:
    // 0x2567c0: 0x44800000
    ctx->pc = 0x2567c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2567c4:
    // 0x2567c4: 0x46000834
    ctx->pc = 0x2567c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2567c8:
    // 0x2567c8: 0x0
    ctx->pc = 0x2567c8u;
    // NOP
label_2567cc:
    // 0x2567cc: 0x45000010
label_2567d0:
    if (ctx->pc == 0x2567D0u) {
        ctx->pc = 0x2567D0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x2567D4u;
        goto label_2567d4;
    }
    ctx->pc = 0x2567CCu;
    {
        const bool branch_taken_0x2567cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2567D0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        if (branch_taken_0x2567cc) {
            ctx->pc = 0x256810u;
            goto label_256810;
        }
    }
    ctx->pc = 0x2567D4u;
label_2567d4:
    // 0x2567d4: 0xc64000f8
    ctx->pc = 0x2567d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2567d8:
    // 0x2567d8: 0x46000007
    ctx->pc = 0x2567d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2567dc:
    // 0x2567dc: 0xc64100fc
    ctx->pc = 0x2567dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2567e0:
    // 0x2567e0: 0x46000836
    ctx->pc = 0x2567e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2567e4:
    // 0x2567e4: 0x4500000a
label_2567e8:
    if (ctx->pc == 0x2567E8u) {
        ctx->pc = 0x2567ECu;
        goto label_2567ec;
    }
    ctx->pc = 0x2567E4u;
    {
        const bool branch_taken_0x2567e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2567e4) {
            ctx->pc = 0x256810u;
            goto label_256810;
        }
    }
    ctx->pc = 0x2567ECu;
label_2567ec:
    // 0x2567ec: 0x24040002
    ctx->pc = 0x2567ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_2567f0:
    // 0x2567f0: 0xc097ffc
label_2567f4:
    if (ctx->pc == 0x2567F4u) {
        ctx->pc = 0x2567F4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
        ctx->pc = 0x2567F8u;
        goto label_2567f8;
    }
    ctx->pc = 0x2567F0u;
    SET_GPR_U32(ctx, 31, 0x2567F8u);
    ctx->pc = 0x2567F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    ctx->pc = 0x25FFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioRotator_0x25fff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2567F8u; }
    }
    if (ctx->pc != 0x2567F8u) { return; }
    ctx->pc = 0x2567F8u;
label_2567f8:
    // 0x2567f8: 0x964200d8
    ctx->pc = 0x2567f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_2567fc:
    // 0x2567fc: 0x34421000
    ctx->pc = 0x2567fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4096));
label_256800:
    // 0x256800: 0xa64200d8
    ctx->pc = 0x256800u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
label_256804:
    // 0x256804: 0x24020002
    ctx->pc = 0x256804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_256808:
    // 0x256808: 0x100002a1
label_25680c:
    if (ctx->pc == 0x25680Cu) {
        ctx->pc = 0x25680Cu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x256810u;
        goto label_256810;
    }
    ctx->pc = 0x256808u;
    {
        const bool branch_taken_0x256808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25680Cu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x256808) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256810u;
label_256810:
    // 0x256810: 0x202d
    ctx->pc = 0x256810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256814:
    // 0x256814: 0xc097ffc
label_256818:
    if (ctx->pc == 0x256818u) {
        ctx->pc = 0x256818u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
        ctx->pc = 0x25681Cu;
        goto label_25681c;
    }
    ctx->pc = 0x256814u;
    SET_GPR_U32(ctx, 31, 0x25681Cu);
    ctx->pc = 0x256818u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    ctx->pc = 0x25FFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioRotator_0x25fff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25681Cu; }
    }
    if (ctx->pc != 0x25681Cu) { return; }
    ctx->pc = 0x25681Cu;
label_25681c:
    // 0x25681c: 0x3c030031
    ctx->pc = 0x25681cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_256820:
    // 0x256820: 0x8c62ffbc
    ctx->pc = 0x256820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_256824:
    // 0x256824: 0x4400005
label_256828:
    if (ctx->pc == 0x256828u) {
        ctx->pc = 0x256828u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        ctx->pc = 0x25682Cu;
        goto label_25682c;
    }
    ctx->pc = 0x256824u;
    {
        const bool branch_taken_0x256824 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x256828u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x256824) {
            ctx->pc = 0x25683Cu;
            goto label_25683c;
        }
    }
    ctx->pc = 0x25682Cu;
label_25682c:
    // 0x25682c: 0x44826000
    ctx->pc = 0x25682cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_256830:
    // 0x256830: 0x46806320
    ctx->pc = 0x256830u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_256834:
    // 0x256834: 0x10000009
label_256838:
    if (ctx->pc == 0x256838u) {
        ctx->pc = 0x256838u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x25683Cu;
        goto label_25683c;
    }
    ctx->pc = 0x256834u;
    {
        const bool branch_taken_0x256834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256838u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x256834) {
            ctx->pc = 0x25685Cu;
            goto label_25685c;
        }
    }
    ctx->pc = 0x25683Cu;
label_25683c:
    // 0x25683c: 0x8c820000
    ctx->pc = 0x25683cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_256840:
    // 0x256840: 0x30430001
    ctx->pc = 0x256840u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
label_256844:
    // 0x256844: 0x21042
    ctx->pc = 0x256844u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_256848:
    // 0x256848: 0x621825
    ctx->pc = 0x256848u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25684c:
    // 0x25684c: 0x44836000
    ctx->pc = 0x25684cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
label_256850:
    // 0x256850: 0x46806320
    ctx->pc = 0x256850u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_256854:
    // 0x256854: 0x460c6300
    ctx->pc = 0x256854u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_256858:
    // 0x256858: 0xc64000f4
    ctx->pc = 0x256858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25685c:
    // 0x25685c: 0x46006302
    ctx->pc = 0x25685cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_256860:
    // 0x256860: 0xc64000fc
    ctx->pc = 0x256860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_256864:
    // 0x256864: 0x46006000
    ctx->pc = 0x256864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_256868:
    // 0x256868: 0xe64000fc
    ctx->pc = 0x256868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
label_25686c:
    // 0x25686c: 0x24020002
    ctx->pc = 0x25686cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_256870:
    // 0x256870: 0xa24200de
    ctx->pc = 0x256870u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
label_256874:
    // 0x256874: 0x8e040028
    ctx->pc = 0x256874u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_256878:
    // 0x256878: 0x10800285
label_25687c:
    if (ctx->pc == 0x25687Cu) {
        ctx->pc = 0x25687Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x256880u;
        goto label_256880;
    }
    ctx->pc = 0x256878u;
    {
        const bool branch_taken_0x256878 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25687Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x256878) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256880u;
label_256880:
    // 0x256880: 0x8e020010
    ctx->pc = 0x256880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_256884:
    // 0x256884: 0x431024
    ctx->pc = 0x256884u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_256888:
    // 0x256888: 0xc0b5632
label_25688c:
    if (ctx->pc == 0x25688Cu) {
        ctx->pc = 0x25688Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x256890u;
        goto label_256890;
    }
    ctx->pc = 0x256888u;
    SET_GPR_U32(ctx, 31, 0x256890u);
    ctx->pc = 0x25688Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256890u; }
    }
    if (ctx->pc != 0x256890u) { return; }
    ctx->pc = 0x256890u;
label_256890:
    // 0x256890: 0x10000280
label_256894:
    if (ctx->pc == 0x256894u) {
        ctx->pc = 0x256894u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x256898u;
        goto label_256898;
    }
    ctx->pc = 0x256890u;
    {
        const bool branch_taken_0x256890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256894u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x256890) {
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x256898u;
label_256898:
    // 0x256898: 0x8c430004
    ctx->pc = 0x256898u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25689c:
    // 0x25689c: 0x24020001
    ctx->pc = 0x25689cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2568a0:
    // 0x2568a0: 0x5462027c
label_2568a4:
    if (ctx->pc == 0x2568A4u) {
        ctx->pc = 0x2568A4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2568A8u;
        goto label_2568a8;
    }
    ctx->pc = 0x2568A0u;
    {
        const bool branch_taken_0x2568a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2568a0) {
            ctx->pc = 0x2568A4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x2568A8u;
label_2568a8:
    // 0x2568a8: 0x12000279
label_2568ac:
    if (ctx->pc == 0x2568ACu) {
        ctx->pc = 0x2568ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2568B0u;
        goto label_2568b0;
    }
    ctx->pc = 0x2568A8u;
    {
        const bool branch_taken_0x2568a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2568ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2568a8) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x2568B0u;
label_2568b0:
    // 0x2568b0: 0x8c42002c
    ctx->pc = 0x2568b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2568b4:
    // 0x2568b4: 0x28420002
    ctx->pc = 0x2568b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_2568b8:
    // 0x2568b8: 0x1440000a
label_2568bc:
    if (ctx->pc == 0x2568BCu) {
        ctx->pc = 0x2568BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2568C0u;
        goto label_2568c0;
    }
    ctx->pc = 0x2568B8u;
    {
        const bool branch_taken_0x2568b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2568BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2568b8) {
            ctx->pc = 0x2568E4u;
            goto label_2568e4;
        }
    }
    ctx->pc = 0x2568C0u;
label_2568c0:
    // 0x2568c0: 0xc094e80
label_2568c4:
    if (ctx->pc == 0x2568C4u) {
        ctx->pc = 0x2568C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2568C8u;
        goto label_2568c8;
    }
    ctx->pc = 0x2568C0u;
    SET_GPR_U32(ctx, 31, 0x2568C8u);
    ctx->pc = 0x2568C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        OnWobj_0x253a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2568C8u; }
    }
    if (ctx->pc != 0x2568C8u) { return; }
    ctx->pc = 0x2568C8u;
label_2568c8:
    // 0x2568c8: 0x10400006
label_2568cc:
    if (ctx->pc == 0x2568CCu) {
        ctx->pc = 0x2568D0u;
        goto label_2568d0;
    }
    ctx->pc = 0x2568C8u;
    {
        const bool branch_taken_0x2568c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2568c8) {
            ctx->pc = 0x2568E4u;
            goto label_2568e4;
        }
    }
    ctx->pc = 0x2568D0u;
label_2568d0:
    // 0x2568d0: 0xc09a352
label_2568d4:
    if (ctx->pc == 0x2568D4u) {
        ctx->pc = 0x2568D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x2568D8u;
        goto label_2568d8;
    }
    ctx->pc = 0x2568D0u;
    SET_GPR_U32(ctx, 31, 0x2568D8u);
    ctx->pc = 0x2568D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x268D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_target_0x268d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2568D8u; }
    }
    if (ctx->pc != 0x2568D8u) { return; }
    ctx->pc = 0x2568D8u;
label_2568d8:
    // 0x2568d8: 0x3c020034
    ctx->pc = 0x2568d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2568dc:
    // 0x2568dc: 0x1000026c
label_2568e0:
    if (ctx->pc == 0x2568E0u) {
        ctx->pc = 0x2568E0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954424), GPR_U32(ctx, 21));
        ctx->pc = 0x2568E4u;
        goto label_2568e4;
    }
    ctx->pc = 0x2568DCu;
    {
        const bool branch_taken_0x2568dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2568E0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954424), GPR_U32(ctx, 21));
        if (branch_taken_0x2568dc) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x2568E4u;
label_2568e4:
    // 0x2568e4: 0xc09a3ae
label_2568e8:
    if (ctx->pc == 0x2568E8u) {
        ctx->pc = 0x2568E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x2568ECu;
        goto label_2568ec;
    }
    ctx->pc = 0x2568E4u;
    SET_GPR_U32(ctx, 31, 0x2568ECu);
    ctx->pc = 0x2568E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x268EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_target_0x268eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2568ECu; }
    }
    if (ctx->pc != 0x2568ECu) { return; }
    ctx->pc = 0x2568ECu;
label_2568ec:
    // 0x2568ec: 0x10000269
label_2568f0:
    if (ctx->pc == 0x2568F0u) {
        ctx->pc = 0x2568F0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2568F4u;
        goto label_2568f4;
    }
    ctx->pc = 0x2568ECu;
    {
        const bool branch_taken_0x2568ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2568F0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x2568ec) {
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x2568F4u;
label_2568f4:
    // 0x2568f4: 0x402d
    ctx->pc = 0x2568f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2568f8:
    // 0x2568f8: 0x8e420000
    ctx->pc = 0x2568f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2568fc:
    // 0x2568fc: 0x8c430004
    ctx->pc = 0x2568fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_256900:
    // 0x256900: 0x24020032
    ctx->pc = 0x256900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
label_256904:
    // 0x256904: 0x1462002b
label_256908:
    if (ctx->pc == 0x256908u) {
        ctx->pc = 0x256908u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25690Cu;
        goto label_25690c;
    }
    ctx->pc = 0x256904u;
    {
        const bool branch_taken_0x256904 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x256908u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x256904) {
            ctx->pc = 0x2569B4u;
            goto label_2569b4;
        }
    }
    ctx->pc = 0x25690Cu;
label_25690c:
    // 0x25690c: 0x8e4300f4
    ctx->pc = 0x25690cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_256910:
    // 0x256910: 0x1060025f
label_256914:
    if (ctx->pc == 0x256914u) {
        ctx->pc = 0x256914u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x256918u;
        goto label_256918;
    }
    ctx->pc = 0x256910u;
    {
        const bool branch_taken_0x256910 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x256914u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x256910) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256918u;
label_256918:
    // 0x256918: 0x8c4207bc
    ctx->pc = 0x256918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
label_25691c:
    // 0x25691c: 0x28420003
    ctx->pc = 0x25691cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
label_256920:
    // 0x256920: 0x5040025c
label_256924:
    if (ctx->pc == 0x256924u) {
        ctx->pc = 0x256924u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x256928u;
        goto label_256928;
    }
    ctx->pc = 0x256920u;
    {
        const bool branch_taken_0x256920 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256920) {
            ctx->pc = 0x256924u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x256928u;
label_256928:
    // 0x256928: 0x964200d8
    ctx->pc = 0x256928u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_25692c:
    // 0x25692c: 0x30420001
    ctx->pc = 0x25692cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_256930:
    // 0x256930: 0x54400258
label_256934:
    if (ctx->pc == 0x256934u) {
        ctx->pc = 0x256934u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x256938u;
        goto label_256938;
    }
    ctx->pc = 0x256930u;
    {
        const bool branch_taken_0x256930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256930) {
            ctx->pc = 0x256934u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x256938u;
label_256938:
    // 0x256938: 0x30620001
    ctx->pc = 0x256938u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_25693c:
    // 0x25693c: 0x1440000a
label_256940:
    if (ctx->pc == 0x256940u) {
        ctx->pc = 0x256940u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256944u;
        goto label_256944;
    }
    ctx->pc = 0x25693Cu;
    {
        const bool branch_taken_0x25693c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x256940u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25693c) {
            ctx->pc = 0x256968u;
            goto label_256968;
        }
    }
    ctx->pc = 0x256944u;
label_256944:
    // 0x256944: 0x24a50001
    ctx->pc = 0x256944u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_256948:
    // 0x256948: 0x28a20004
    ctx->pc = 0x256948u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
label_25694c:
    // 0x25694c: 0x50400007
label_256950:
    if (ctx->pc == 0x256950u) {
        ctx->pc = 0x256950u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x256954u;
        goto label_256954;
    }
    ctx->pc = 0x25694Cu;
    {
        const bool branch_taken_0x25694c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25694c) {
            ctx->pc = 0x256950u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->pc = 0x25696Cu;
            goto label_25696c;
        }
    }
    ctx->pc = 0x256954u;
label_256954:
    // 0x256954: 0x8e4200f4
    ctx->pc = 0x256954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_256958:
    // 0x256958: 0xa21007
    ctx->pc = 0x256958u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_25695c:
    // 0x25695c: 0x30420001
    ctx->pc = 0x25695cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_256960:
    // 0x256960: 0x5040fff9
label_256964:
    if (ctx->pc == 0x256964u) {
        ctx->pc = 0x256964u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x256968u;
        goto label_256968;
    }
    ctx->pc = 0x256960u;
    {
        const bool branch_taken_0x256960 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256960) {
            ctx->pc = 0x256964u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x256948u;
            goto label_256948;
        }
    }
    ctx->pc = 0x256968u;
label_256968:
    // 0x256968: 0x964200d8
    ctx->pc = 0x256968u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_25696c:
    // 0x25696c: 0x34420001
    ctx->pc = 0x25696cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_256970:
    // 0x256970: 0xa64200d8
    ctx->pc = 0x256970u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
label_256974:
    // 0x256974: 0x3c030032
    ctx->pc = 0x256974u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_256978:
    // 0x256978: 0x924200f0
    ctx->pc = 0x256978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 240)));
label_25697c:
    // 0x25697c: 0x24420003
    ctx->pc = 0x25697cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3));
label_256980:
    // 0x256980: 0xac6207bc
    ctx->pc = 0x256980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1980), GPR_U32(ctx, 2));
label_256984:
    // 0x256984: 0x24062b00
    ctx->pc = 0x256984u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11008));
label_256988:
    // 0x256988: 0xa63018
    ctx->pc = 0x256988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_25698c:
    // 0x25698c: 0x3c020032
    ctx->pc = 0x25698cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_256990:
    // 0x256990: 0x24421be0
    ctx->pc = 0x256990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
label_256994:
    // 0x256994: 0xc23021
    ctx->pc = 0x256994u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_256998:
    // 0x256998: 0x2a0202d
    ctx->pc = 0x256998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25699c:
    // 0x25699c: 0xc0a4586
label_2569a0:
    if (ctx->pc == 0x2569A0u) {
        ctx->pc = 0x2569A0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 48));
        ctx->pc = 0x2569A4u;
        goto label_2569a4;
    }
    ctx->pc = 0x25699Cu;
    SET_GPR_U32(ctx, 31, 0x2569A4u);
    ctx->pc = 0x2569A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 48));
    ctx->pc = 0x291618u;
    {
        const uint32_t __entryPc = ctx->pc;
        SaveStage_0x291618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569A4u; }
    }
    if (ctx->pc != 0x2569A4u) { return; }
    ctx->pc = 0x2569A4u;
label_2569a4:
    // 0x2569a4: 0xc08ac56
label_2569a8:
    if (ctx->pc == 0x2569A8u) {
        ctx->pc = 0x2569A8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2569ACu;
        goto label_2569ac;
    }
    ctx->pc = 0x2569A4u;
    SET_GPR_U32(ctx, 31, 0x2569ACu);
    ctx->pc = 0x2569A8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x22B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_got_it_0x22b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569ACu; }
    }
    if (ctx->pc != 0x2569ACu) { return; }
    ctx->pc = 0x2569ACu;
label_2569ac:
    // 0x2569ac: 0x1000023a
label_2569b0:
    if (ctx->pc == 0x2569B0u) {
        ctx->pc = 0x2569B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x2569B4u;
        goto label_2569b4;
    }
    ctx->pc = 0x2569ACu;
    {
        const bool branch_taken_0x2569ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2569B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 272));
        if (branch_taken_0x2569ac) {
            ctx->pc = 0x257298u;
            goto label_257298;
        }
    }
    ctx->pc = 0x2569B4u;
label_2569b4:
    // 0x2569b4: 0x282d
    ctx->pc = 0x2569b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2569b8:
    // 0x2569b8: 0x3c020032
    ctx->pc = 0x2569b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2569bc:
    // 0x2569bc: 0x244b1bc0
    ctx->pc = 0x2569bcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 7104));
label_2569c0:
    // 0x2569c0: 0x24092b00
    ctx->pc = 0x2569c0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
label_2569c4:
    // 0x2569c4: 0x24030001
    ctx->pc = 0x2569c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2569c8:
    // 0x2569c8: 0x24070004
    ctx->pc = 0x2569c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
label_2569cc:
    // 0x2569cc: 0x24040005
    ctx->pc = 0x2569ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_2569d0:
    // 0x2569d0: 0xa95018
    ctx->pc = 0x2569d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2569d4:
    // 0x2569d4: 0x0
    ctx->pc = 0x2569d4u;
    // NOP
label_2569d8:
    // 0x2569d8: 0x14b1021
    ctx->pc = 0x2569d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_2569dc:
    // 0x2569dc: 0x8c4200fc
    ctx->pc = 0x2569dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_2569e0:
    // 0x2569e0: 0x50430006
label_2569e4:
    if (ctx->pc == 0x2569E4u) {
        ctx->pc = 0x2569E4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x2569E8u;
        goto label_2569e8;
    }
    ctx->pc = 0x2569E0u;
    {
        const bool branch_taken_0x2569e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2569e0) {
            ctx->pc = 0x2569E4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
            ctx->pc = 0x2569FCu;
            goto label_2569fc;
        }
    }
    ctx->pc = 0x2569E8u;
label_2569e8:
    // 0x2569e8: 0x50470004
label_2569ec:
    if (ctx->pc == 0x2569ECu) {
        ctx->pc = 0x2569ECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x2569F0u;
        goto label_2569f0;
    }
    ctx->pc = 0x2569E8u;
    {
        const bool branch_taken_0x2569e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        if (branch_taken_0x2569e8) {
            ctx->pc = 0x2569ECu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
            ctx->pc = 0x2569FCu;
            goto label_2569fc;
        }
    }
    ctx->pc = 0x2569F0u;
label_2569f0:
    // 0x2569f0: 0x54440004
label_2569f4:
    if (ctx->pc == 0x2569F4u) {
        ctx->pc = 0x2569F4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2569F8u;
        goto label_2569f8;
    }
    ctx->pc = 0x2569F0u;
    {
        const bool branch_taken_0x2569f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x2569f0) {
            ctx->pc = 0x2569F4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x256A04u;
            goto label_256a04;
        }
    }
    ctx->pc = 0x2569F8u;
label_2569f8:
    // 0x2569f8: 0xa31004
    ctx->pc = 0x2569f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_2569fc:
    // 0x2569fc: 0x1024025
    ctx->pc = 0x2569fcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_256a00:
    // 0x256a00: 0x24a50001
    ctx->pc = 0x256a00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_256a04:
    // 0x256a04: 0x28a20004
    ctx->pc = 0x256a04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
label_256a08:
    // 0x256a08: 0x1440fff3
label_256a0c:
    if (ctx->pc == 0x256A0Cu) {
        ctx->pc = 0x256A0Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x256A10u;
        goto label_256a10;
    }
    ctx->pc = 0x256A08u;
    {
        const bool branch_taken_0x256a08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x256A0Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x256a08) {
            ctx->pc = 0x2569D8u;
            goto label_2569d8;
        }
    }
    ctx->pc = 0x256A10u;
label_256a10:
    // 0x256a10: 0x964200d8
    ctx->pc = 0x256a10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_256a14:
    // 0x256a14: 0x34420001
    ctx->pc = 0x256a14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_256a18:
    // 0x256a18: 0x3042fbff
    ctx->pc = 0x256a18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64511));
label_256a1c:
    // 0x256a1c: 0xa64200d8
    ctx->pc = 0x256a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
label_256a20:
    // 0x256a20: 0x282d
    ctx->pc = 0x256a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256a24:
    // 0x256a24: 0x3c020032
    ctx->pc = 0x256a24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_256a28:
    // 0x256a28: 0x24471bc0
    ctx->pc = 0x256a28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7104));
label_256a2c:
    // 0x256a2c: 0x24042b00
    ctx->pc = 0x256a2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11008));
label_256a30:
    // 0x256a30: 0xa41818
    ctx->pc = 0x256a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_256a34:
    // 0x256a34: 0x0
    ctx->pc = 0x256a34u;
    // NOP
label_256a38:
    // 0x256a38: 0x671021
    ctx->pc = 0x256a38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_256a3c:
    // 0x256a3c: 0x8c4200fc
    ctx->pc = 0x256a3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_256a40:
    // 0x256a40: 0x24c30001
    ctx->pc = 0x256a40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
label_256a44:
    // 0x256a44: 0x38420005
    ctx->pc = 0x256a44u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 5));
label_256a48:
    // 0x256a48: 0x62300a
    ctx->pc = 0x256a48u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_256a4c:
    // 0x256a4c: 0x24a50001
    ctx->pc = 0x256a4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_256a50:
    // 0x256a50: 0x28a20004
    ctx->pc = 0x256a50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
label_256a54:
    // 0x256a54: 0x5440fff8
label_256a58:
    if (ctx->pc == 0x256A58u) {
        ctx->pc = 0x256A58u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x256A5Cu;
        goto label_256a5c;
    }
    ctx->pc = 0x256A54u;
    {
        const bool branch_taken_0x256a54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256a54) {
            ctx->pc = 0x256A58u;
            { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x256A38u;
            goto label_256a38;
        }
    }
    ctx->pc = 0x256A5Cu;
label_256a5c:
    // 0x256a5c: 0x54c00031
label_256a60:
    if (ctx->pc == 0x256A60u) {
        ctx->pc = 0x256A60u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x256A64u;
        goto label_256a64;
    }
    ctx->pc = 0x256A5Cu;
    {
        const bool branch_taken_0x256a5c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x256a5c) {
            ctx->pc = 0x256A60u;
            SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
            ctx->pc = 0x256B24u;
            goto label_256b24;
        }
    }
    ctx->pc = 0x256A64u;
label_256a64:
    // 0x256a64: 0x11000039
label_256a68:
    if (ctx->pc == 0x256A68u) {
        ctx->pc = 0x256A68u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 244)));
        ctx->pc = 0x256A6Cu;
        goto label_256a6c;
    }
    ctx->pc = 0x256A64u;
    {
        const bool branch_taken_0x256a64 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x256A68u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 244)));
        if (branch_taken_0x256a64) {
            ctx->pc = 0x256B4Cu;
            goto label_256b4c;
        }
    }
    ctx->pc = 0x256A6Cu;
label_256a6c:
    // 0x256a6c: 0x14480037
label_256a70:
    if (ctx->pc == 0x256A70u) {
        ctx->pc = 0x256A74u;
        goto label_256a74;
    }
    ctx->pc = 0x256A6Cu;
    {
        const bool branch_taken_0x256a6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        if (branch_taken_0x256a6c) {
            ctx->pc = 0x256B4Cu;
            goto label_256b4c;
        }
    }
    ctx->pc = 0x256A74u;
label_256a74:
    // 0x256a74: 0x824200de
    ctx->pc = 0x256a74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_256a78:
    // 0x256a78: 0x50400001
label_256a7c:
    if (ctx->pc == 0x256A7Cu) {
        ctx->pc = 0x256A7Cu;
        WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256A80u;
        goto label_256a80;
    }
    ctx->pc = 0x256A78u;
    {
        const bool branch_taken_0x256a78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256a78) {
            ctx->pc = 0x256A7Cu;
            WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x256A80u;
            goto label_256a80;
        }
    }
    ctx->pc = 0x256A80u;
label_256a80:
    // 0x256a80: 0x864200da
    ctx->pc = 0x256a80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
label_256a84:
    // 0x256a84: 0x5c400008
label_256a88:
    if (ctx->pc == 0x256A88u) {
        ctx->pc = 0x256A88u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x256A8Cu;
        goto label_256a8c;
    }
    ctx->pc = 0x256A84u;
    {
        const bool branch_taken_0x256a84 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x256a84) {
            ctx->pc = 0x256A88u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->pc = 0x256AA8u;
            goto label_256aa8;
        }
    }
    ctx->pc = 0x256A8Cu;
label_256a8c:
    // 0x256a8c: 0x824200de
    ctx->pc = 0x256a8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_256a90:
    // 0x256a90: 0x28420004
    ctx->pc = 0x256a90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
label_256a94:
    // 0x256a94: 0x10400003
label_256a98:
    if (ctx->pc == 0x256A98u) {
        ctx->pc = 0x256A98u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        ctx->pc = 0x256A9Cu;
        goto label_256a9c;
    }
    ctx->pc = 0x256A94u;
    {
        const bool branch_taken_0x256a94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256A98u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        if (branch_taken_0x256a94) {
            ctx->pc = 0x256AA4u;
            goto label_256aa4;
        }
    }
    ctx->pc = 0x256A9Cu;
label_256a9c:
    // 0x256a9c: 0x24620001
    ctx->pc = 0x256a9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_256aa0:
    // 0x256aa0: 0xa24200de
    ctx->pc = 0x256aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
label_256aa4:
    // 0x256aa4: 0x824200dc
    ctx->pc = 0x256aa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_256aa8:
    // 0x256aa8: 0x28420004
    ctx->pc = 0x256aa8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
label_256aac:
    // 0x256aac: 0x54400001
label_256ab0:
    if (ctx->pc == 0x256AB0u) {
        ctx->pc = 0x256AB0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
        ctx->pc = 0x256AB4u;
        goto label_256ab4;
    }
    ctx->pc = 0x256AACu;
    {
        const bool branch_taken_0x256aac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256aac) {
            ctx->pc = 0x256AB0u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
            ctx->pc = 0x256AB4u;
            goto label_256ab4;
        }
    }
    ctx->pc = 0x256AB4u;
label_256ab4:
    // 0x256ab4: 0x824400dc
    ctx->pc = 0x256ab4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_256ab8:
    // 0x256ab8: 0x24020004
    ctx->pc = 0x256ab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_256abc:
    // 0x256abc: 0x1482001f
label_256ac0:
    if (ctx->pc == 0x256AC0u) {
        ctx->pc = 0x256AC0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x256AC4u;
        goto label_256ac4;
    }
    ctx->pc = 0x256ABCu;
    {
        const bool branch_taken_0x256abc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x256AC0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x256abc) {
            ctx->pc = 0x256B3Cu;
            goto label_256b3c;
        }
    }
    ctx->pc = 0x256AC4u;
label_256ac4:
    // 0x256ac4: 0x864200da
    ctx->pc = 0x256ac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
label_256ac8:
    // 0x256ac8: 0x5c40001d
label_256acc:
    if (ctx->pc == 0x256ACCu) {
        ctx->pc = 0x256ACCu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x256AD0u;
        goto label_256ad0;
    }
    ctx->pc = 0x256AC8u;
    {
        const bool branch_taken_0x256ac8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x256ac8) {
            ctx->pc = 0x256ACCu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->pc = 0x256B40u;
            goto label_256b40;
        }
    }
    ctx->pc = 0x256AD0u;
label_256ad0:
    // 0x256ad0: 0x3c020032
    ctx->pc = 0x256ad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_256ad4:
    // 0x256ad4: 0x8c421cbc
    ctx->pc = 0x256ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7356)));
label_256ad8:
    // 0x256ad8: 0x1044000e
label_256adc:
    if (ctx->pc == 0x256ADCu) {
        ctx->pc = 0x256ADCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256AE0u;
        goto label_256ae0;
    }
    ctx->pc = 0x256AD8u;
    {
        const bool branch_taken_0x256ad8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x256ADCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x256ad8) {
            ctx->pc = 0x256B14u;
            goto label_256b14;
        }
    }
    ctx->pc = 0x256AE0u;
label_256ae0:
    // 0x256ae0: 0x3c020032
    ctx->pc = 0x256ae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_256ae4:
    // 0x256ae4: 0x24471bc0
    ctx->pc = 0x256ae4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7104));
label_256ae8:
    // 0x256ae8: 0x24052b00
    ctx->pc = 0x256ae8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
label_256aec:
    // 0x256aec: 0x24040004
    ctx->pc = 0x256aecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_256af0:
    // 0x256af0: 0x24630001
    ctx->pc = 0x256af0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_256af4:
    // 0x256af4: 0x0
    ctx->pc = 0x256af4u;
    // NOP
label_256af8:
    // 0x256af8: 0x28620004
    ctx->pc = 0x256af8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
label_256afc:
    // 0x256afc: 0x10400008
label_256b00:
    if (ctx->pc == 0x256B00u) {
        ctx->pc = 0x256B00u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x256B04u;
        goto label_256b04;
    }
    ctx->pc = 0x256AFCu;
    {
        const bool branch_taken_0x256afc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256B00u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x256afc) {
            ctx->pc = 0x256B20u;
            goto label_256b20;
        }
    }
    ctx->pc = 0x256B04u;
label_256b04:
    // 0x256b04: 0xc71021
    ctx->pc = 0x256b04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_256b08:
    // 0x256b08: 0x8c4200fc
    ctx->pc = 0x256b08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_256b0c:
    // 0x256b0c: 0x5444fffa
label_256b10:
    if (ctx->pc == 0x256B10u) {
        ctx->pc = 0x256B10u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x256B14u;
        goto label_256b14;
    }
    ctx->pc = 0x256B0Cu;
    {
        const bool branch_taken_0x256b0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x256b0c) {
            ctx->pc = 0x256B10u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x256AF8u;
            goto label_256af8;
        }
    }
    ctx->pc = 0x256B14u;
label_256b14:
    // 0x256b14: 0x28620004
    ctx->pc = 0x256b14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
label_256b18:
    // 0x256b18: 0x14400005
label_256b1c:
    if (ctx->pc == 0x256B1Cu) {
        ctx->pc = 0x256B1Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x256B20u;
        goto label_256b20;
    }
    ctx->pc = 0x256B18u;
    {
        const bool branch_taken_0x256b18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x256B1Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x256b18) {
            ctx->pc = 0x256B30u;
            goto label_256b30;
        }
    }
    ctx->pc = 0x256B20u;
label_256b20:
    // 0x256b20: 0x3c030032
    ctx->pc = 0x256b20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_256b24:
    // 0x256b24: 0x2402000f
    ctx->pc = 0x256b24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
label_256b28:
    // 0x256b28: 0x1000003f
label_256b2c:
    if (ctx->pc == 0x256B2Cu) {
        ctx->pc = 0x256B2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 2));
        ctx->pc = 0x256B30u;
        goto label_256b30;
    }
    ctx->pc = 0x256B28u;
    {
        const bool branch_taken_0x256b28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256B2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 2));
        if (branch_taken_0x256b28) {
            ctx->pc = 0x256C28u;
            goto label_256c28;
        }
    }
    ctx->pc = 0x256B30u;
label_256b30:
    // 0x256b30: 0x2402000e
    ctx->pc = 0x256b30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
label_256b34:
    // 0x256b34: 0x1000003c
label_256b38:
    if (ctx->pc == 0x256B38u) {
        ctx->pc = 0x256B38u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 2));
        ctx->pc = 0x256B3Cu;
        goto label_256b3c;
    }
    ctx->pc = 0x256B34u;
    {
        const bool branch_taken_0x256b34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256B38u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 2));
        if (branch_taken_0x256b34) {
            ctx->pc = 0x256C28u;
            goto label_256c28;
        }
    }
    ctx->pc = 0x256B3Cu;
label_256b3c:
    // 0x256b3c: 0x824200dc
    ctx->pc = 0x256b3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_256b40:
    // 0x256b40: 0x2442000a
    ctx->pc = 0x256b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10));
label_256b44:
    // 0x256b44: 0x10000038
label_256b48:
    if (ctx->pc == 0x256B48u) {
        ctx->pc = 0x256B48u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 2));
        ctx->pc = 0x256B4Cu;
        goto label_256b4c;
    }
    ctx->pc = 0x256B44u;
    {
        const bool branch_taken_0x256b44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256B48u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 2));
        if (branch_taken_0x256b44) {
            ctx->pc = 0x256C28u;
            goto label_256c28;
        }
    }
    ctx->pc = 0x256B4Cu;
label_256b4c:
    // 0x256b4c: 0x50400019
label_256b50:
    if (ctx->pc == 0x256B50u) {
        ctx->pc = 0x256B50u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x256B54u;
        goto label_256b54;
    }
    ctx->pc = 0x256B4Cu;
    {
        const bool branch_taken_0x256b4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256b4c) {
            ctx->pc = 0x256B50u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->pc = 0x256BB4u;
            goto label_256bb4;
        }
    }
    ctx->pc = 0x256B54u;
label_256b54:
    // 0x256b54: 0x864200da
    ctx->pc = 0x256b54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
label_256b58:
    // 0x256b58: 0x5c40000d
label_256b5c:
    if (ctx->pc == 0x256B5Cu) {
        ctx->pc = 0x256B5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
        ctx->pc = 0x256B60u;
        goto label_256b60;
    }
    ctx->pc = 0x256B58u;
    {
        const bool branch_taken_0x256b58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x256b58) {
            ctx->pc = 0x256B5Cu;
            WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
            ctx->pc = 0x256B90u;
            goto label_256b90;
        }
    }
    ctx->pc = 0x256B60u;
label_256b60:
    // 0x256b60: 0x824200de
    ctx->pc = 0x256b60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_256b64:
    // 0x256b64: 0x28420003
    ctx->pc = 0x256b64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
label_256b68:
    // 0x256b68: 0x10400004
label_256b6c:
    if (ctx->pc == 0x256B6Cu) {
        ctx->pc = 0x256B6Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        ctx->pc = 0x256B70u;
        goto label_256b70;
    }
    ctx->pc = 0x256B68u;
    {
        const bool branch_taken_0x256b68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256B6Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        if (branch_taken_0x256b68) {
            ctx->pc = 0x256B7Cu;
            goto label_256b7c;
        }
    }
    ctx->pc = 0x256B70u;
label_256b70:
    // 0x256b70: 0x24620001
    ctx->pc = 0x256b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_256b74:
    // 0x256b74: 0x10000005
label_256b78:
    if (ctx->pc == 0x256B78u) {
        ctx->pc = 0x256B78u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x256B7Cu;
        goto label_256b7c;
    }
    ctx->pc = 0x256B74u;
    {
        const bool branch_taken_0x256b74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256B78u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x256b74) {
            ctx->pc = 0x256B8Cu;
            goto label_256b8c;
        }
    }
    ctx->pc = 0x256B7Cu;
label_256b7c:
    // 0x256b7c: 0x824200de
    ctx->pc = 0x256b7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_256b80:
    // 0x256b80: 0x28420004
    ctx->pc = 0x256b80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
label_256b84:
    // 0x256b84: 0x50400001
label_256b88:
    if (ctx->pc == 0x256B88u) {
        ctx->pc = 0x256B88u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256B8Cu;
        goto label_256b8c;
    }
    ctx->pc = 0x256B84u;
    {
        const bool branch_taken_0x256b84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256b84) {
            ctx->pc = 0x256B88u;
            WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x256B8Cu;
            goto label_256b8c;
        }
    }
    ctx->pc = 0x256B8Cu;
label_256b8c:
    // 0x256b8c: 0xae4000f4
    ctx->pc = 0x256b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
label_256b90:
    // 0x256b90: 0x824300dc
    ctx->pc = 0x256b90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_256b94:
    // 0x256b94: 0x3c040032
    ctx->pc = 0x256b94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_256b98:
    // 0x256b98: 0x8c820800
    ctx->pc = 0x256b98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2048)));
label_256b9c:
    // 0x256b9c: 0x43102a
    ctx->pc = 0x256b9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_256ba0:
    // 0x256ba0: 0x54400001
label_256ba4:
    if (ctx->pc == 0x256BA4u) {
        ctx->pc = 0x256BA4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 2048), GPR_U32(ctx, 3));
        ctx->pc = 0x256BA8u;
        goto label_256ba8;
    }
    ctx->pc = 0x256BA0u;
    {
        const bool branch_taken_0x256ba0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256ba0) {
            ctx->pc = 0x256BA4u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 2048), GPR_U32(ctx, 3));
            ctx->pc = 0x256BA8u;
            goto label_256ba8;
        }
    }
    ctx->pc = 0x256BA8u;
label_256ba8:
    // 0x256ba8: 0x24020002
    ctx->pc = 0x256ba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_256bac:
    // 0x256bac: 0x1000001e
label_256bb0:
    if (ctx->pc == 0x256BB0u) {
        ctx->pc = 0x256BB0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x256BB4u;
        goto label_256bb4;
    }
    ctx->pc = 0x256BACu;
    {
        const bool branch_taken_0x256bac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256BB0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x256bac) {
            ctx->pc = 0x256C28u;
            goto label_256c28;
        }
    }
    ctx->pc = 0x256BB4u;
label_256bb4:
    // 0x256bb4: 0x58400015
label_256bb8:
    if (ctx->pc == 0x256BB8u) {
        ctx->pc = 0x256BB8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
        ctx->pc = 0x256BBCu;
        goto label_256bbc;
    }
    ctx->pc = 0x256BB4u;
    {
        const bool branch_taken_0x256bb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x256bb4) {
            ctx->pc = 0x256BB8u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
            ctx->pc = 0x256C0Cu;
            goto label_256c0c;
        }
    }
    ctx->pc = 0x256BBCu;
label_256bbc:
    // 0x256bbc: 0x864200da
    ctx->pc = 0x256bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
label_256bc0:
    // 0x256bc0: 0x5c40000a
label_256bc4:
    if (ctx->pc == 0x256BC4u) {
        ctx->pc = 0x256BC4u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x256BC8u;
        goto label_256bc8;
    }
    ctx->pc = 0x256BC0u;
    {
        const bool branch_taken_0x256bc0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x256bc0) {
            ctx->pc = 0x256BC4u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->pc = 0x256BECu;
            goto label_256bec;
        }
    }
    ctx->pc = 0x256BC8u;
label_256bc8:
    // 0x256bc8: 0x824200de
    ctx->pc = 0x256bc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_256bcc:
    // 0x256bcc: 0x28420004
    ctx->pc = 0x256bccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
label_256bd0:
    // 0x256bd0: 0x10400004
label_256bd4:
    if (ctx->pc == 0x256BD4u) {
        ctx->pc = 0x256BD4u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        ctx->pc = 0x256BD8u;
        goto label_256bd8;
    }
    ctx->pc = 0x256BD0u;
    {
        const bool branch_taken_0x256bd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256BD4u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        if (branch_taken_0x256bd0) {
            ctx->pc = 0x256BE4u;
            goto label_256be4;
        }
    }
    ctx->pc = 0x256BD8u;
label_256bd8:
    // 0x256bd8: 0x24620001
    ctx->pc = 0x256bd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_256bdc:
    // 0x256bdc: 0x1000000a
label_256be0:
    if (ctx->pc == 0x256BE0u) {
        ctx->pc = 0x256BE0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x256BE4u;
        goto label_256be4;
    }
    ctx->pc = 0x256BDCu;
    {
        const bool branch_taken_0x256bdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256BE0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x256bdc) {
            ctx->pc = 0x256C08u;
            goto label_256c08;
        }
    }
    ctx->pc = 0x256BE4u;
label_256be4:
    // 0x256be4: 0x10000008
label_256be8:
    if (ctx->pc == 0x256BE8u) {
        ctx->pc = 0x256BE8u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256BECu;
        goto label_256bec;
    }
    ctx->pc = 0x256BE4u;
    {
        const bool branch_taken_0x256be4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256BE8u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x256be4) {
            ctx->pc = 0x256C08u;
            goto label_256c08;
        }
    }
    ctx->pc = 0x256BECu;
label_256bec:
    // 0x256bec: 0x24020003
    ctx->pc = 0x256becu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_256bf0:
    // 0x256bf0: 0x54620006
label_256bf4:
    if (ctx->pc == 0x256BF4u) {
        ctx->pc = 0x256BF4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
        ctx->pc = 0x256BF8u;
        goto label_256bf8;
    }
    ctx->pc = 0x256BF0u;
    {
        const bool branch_taken_0x256bf0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x256bf0) {
            ctx->pc = 0x256BF4u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
            ctx->pc = 0x256C0Cu;
            goto label_256c0c;
        }
    }
    ctx->pc = 0x256BF8u;
label_256bf8:
    // 0x256bf8: 0xa64000da
    ctx->pc = 0x256bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 0));
label_256bfc:
    // 0x256bfc: 0x24020004
    ctx->pc = 0x256bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_256c00:
    // 0x256c00: 0xa24200de
    ctx->pc = 0x256c00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 222), (uint8_t)GPR_U32(ctx, 2));
label_256c04:
    // 0x256c04: 0xa24200dc
    ctx->pc = 0x256c04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 220), (uint8_t)GPR_U32(ctx, 2));
label_256c08:
    // 0x256c08: 0xae4000f4
    ctx->pc = 0x256c08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
label_256c0c:
    // 0x256c0c: 0x824300dc
    ctx->pc = 0x256c0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_256c10:
    // 0x256c10: 0x3c040032
    ctx->pc = 0x256c10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_256c14:
    // 0x256c14: 0x8c820800
    ctx->pc = 0x256c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2048)));
label_256c18:
    // 0x256c18: 0x43102a
    ctx->pc = 0x256c18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_256c1c:
    // 0x256c1c: 0x54400001
label_256c20:
    if (ctx->pc == 0x256C20u) {
        ctx->pc = 0x256C20u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 2048), GPR_U32(ctx, 3));
        ctx->pc = 0x256C24u;
        goto label_256c24;
    }
    ctx->pc = 0x256C1Cu;
    {
        const bool branch_taken_0x256c1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256c1c) {
            ctx->pc = 0x256C20u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 2048), GPR_U32(ctx, 3));
            ctx->pc = 0x256C24u;
            goto label_256c24;
        }
    }
    ctx->pc = 0x256C24u;
label_256c24:
    // 0x256c24: 0xa24000dd
    ctx->pc = 0x256c24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 0));
label_256c28:
    // 0x256c28: 0x824300dc
    ctx->pc = 0x256c28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_256c2c:
    // 0x256c2c: 0x24020003
    ctx->pc = 0x256c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_256c30:
    // 0x256c30: 0x5462000c
label_256c34:
    if (ctx->pc == 0x256C34u) {
        ctx->pc = 0x256C34u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
        ctx->pc = 0x256C38u;
        goto label_256c38;
    }
    ctx->pc = 0x256C30u;
    {
        const bool branch_taken_0x256c30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x256c30) {
            ctx->pc = 0x256C34u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
            ctx->pc = 0x256C64u;
            goto label_256c64;
        }
    }
    ctx->pc = 0x256C38u;
label_256c38:
    // 0x256c38: 0x824300dd
    ctx->pc = 0x256c38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 221)));
label_256c3c:
    // 0x256c3c: 0x24020002
    ctx->pc = 0x256c3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_256c40:
    // 0x256c40: 0x54620004
label_256c44:
    if (ctx->pc == 0x256C44u) {
        ctx->pc = 0x256C44u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x256C48u;
        goto label_256c48;
    }
    ctx->pc = 0x256C40u;
    {
        const bool branch_taken_0x256c40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x256c40) {
            ctx->pc = 0x256C44u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->pc = 0x256C54u;
            goto label_256c54;
        }
    }
    ctx->pc = 0x256C48u;
label_256c48:
    // 0x256c48: 0x2402002d
    ctx->pc = 0x256c48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
label_256c4c:
    // 0x256c4c: 0xa64200da
    ctx->pc = 0x256c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 2));
label_256c50:
    // 0x256c50: 0x964200d8
    ctx->pc = 0x256c50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_256c54:
    // 0x256c54: 0x34420400
    ctx->pc = 0x256c54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1024));
label_256c58:
    // 0x256c58: 0xa64200d8
    ctx->pc = 0x256c58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
label_256c5c:
    // 0x256c5c: 0x824300de
    ctx->pc = 0x256c5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 222)));
label_256c60:
    // 0x256c60: 0x24020003
    ctx->pc = 0x256c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_256c64:
    // 0x256c64: 0x10620003
label_256c68:
    if (ctx->pc == 0x256C68u) {
        ctx->pc = 0x256C68u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x256C6Cu;
        goto label_256c6c;
    }
    ctx->pc = 0x256C64u;
    {
        const bool branch_taken_0x256c64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x256C68u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x256c64) {
            ctx->pc = 0x256C74u;
            goto label_256c74;
        }
    }
    ctx->pc = 0x256C6Cu;
label_256c6c:
    // 0x256c6c: 0x50400003
label_256c70:
    if (ctx->pc == 0x256C70u) {
        ctx->pc = 0x256C70u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256C74u;
        goto label_256c74;
    }
    ctx->pc = 0x256C6Cu;
    {
        const bool branch_taken_0x256c6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256c6c) {
            ctx->pc = 0x256C70u;
            WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x256C7Cu;
            goto label_256c7c;
        }
    }
    ctx->pc = 0x256C74u;
label_256c74:
    // 0x256c74: 0x24020001
    ctx->pc = 0x256c74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_256c78:
    // 0x256c78: 0xa64200b8
    ctx->pc = 0x256c78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 2));
label_256c7c:
    // 0x256c7c: 0x924200dc
    ctx->pc = 0x256c7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_256c80:
    // 0x256c80: 0x10000183
label_256c84:
    if (ctx->pc == 0x256C84u) {
        ctx->pc = 0x256C84u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x256C88u;
        goto label_256c88;
    }
    ctx->pc = 0x256C80u;
    {
        const bool branch_taken_0x256c80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256C84u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x256c80) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256C88u;
label_256c88:
    // 0x256c88: 0x8e4400f8
    ctx->pc = 0x256c88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_256c8c:
    // 0x256c8c: 0x10800004
label_256c90:
    if (ctx->pc == 0x256C90u) {
        ctx->pc = 0x256C90u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x256C94u;
        goto label_256c94;
    }
    ctx->pc = 0x256C8Cu;
    {
        const bool branch_taken_0x256c8c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x256C90u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x256c8c) {
            ctx->pc = 0x256CA0u;
            goto label_256ca0;
        }
    }
    ctx->pc = 0x256C94u;
label_256c94:
    // 0x256c94: 0x26450010
    ctx->pc = 0x256c94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
label_256c98:
    // 0x256c98: 0xc0b4302
label_256c9c:
    if (ctx->pc == 0x256C9Cu) {
        ctx->pc = 0x256C9Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256CA0u;
        goto label_256ca0;
    }
    ctx->pc = 0x256C98u;
    SET_GPR_U32(ctx, 31, 0x256CA0u);
    ctx->pc = 0x256C9Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CA0u; }
    }
    if (ctx->pc != 0x256CA0u) { return; }
    ctx->pc = 0x256CA0u;
label_256ca0:
    // 0x256ca0: 0xc094ef0
label_256ca4:
    if (ctx->pc == 0x256CA4u) {
        ctx->pc = 0x256CA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x256CA8u;
        goto label_256ca8;
    }
    ctx->pc = 0x256CA0u;
    SET_GPR_U32(ctx, 31, 0x256CA8u);
    ctx->pc = 0x256CA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x253BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DistanceToClosestPlayer_0x253bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CA8u; }
    }
    if (ctx->pc != 0x256CA8u) { return; }
    ctx->pc = 0x256CA8u;
label_256ca8:
    // 0x256ca8: 0x864200fc
    ctx->pc = 0x256ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 252)));
label_256cac:
    // 0x256cac: 0x1840000d
label_256cb0:
    if (ctx->pc == 0x256CB0u) {
        ctx->pc = 0x256CB0u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x256CB4u;
        goto label_256cb4;
    }
    ctx->pc = 0x256CACu;
    {
        const bool branch_taken_0x256cac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x256CB0u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x256cac) {
            ctx->pc = 0x256CE4u;
            goto label_256ce4;
        }
    }
    ctx->pc = 0x256CB4u;
label_256cb4:
    // 0x256cb4: 0x46140834
    ctx->pc = 0x256cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_256cb8:
    // 0x256cb8: 0x0
    ctx->pc = 0x256cb8u;
    // NOP
label_256cbc:
    // 0x256cbc: 0x45000174
label_256cc0:
    if (ctx->pc == 0x256CC0u) {
        ctx->pc = 0x256CC0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x256CC4u;
        goto label_256cc4;
    }
    ctx->pc = 0x256CBCu;
    {
        const bool branch_taken_0x256cbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x256CC0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x256cbc) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256CC4u;
label_256cc4:
    // 0x256cc4: 0x8faa00a8
    ctx->pc = 0x256cc4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_256cc8:
    // 0x256cc8: 0x143102a
    ctx->pc = 0x256cc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 3)));
label_256ccc:
    // 0x256ccc: 0x50400171
label_256cd0:
    if (ctx->pc == 0x256CD0u) {
        ctx->pc = 0x256CD0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x256CD4u;
        goto label_256cd4;
    }
    ctx->pc = 0x256CCCu;
    {
        const bool branch_taken_0x256ccc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x256ccc) {
            ctx->pc = 0x256CD0u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x256CD4u;
label_256cd4:
    // 0x256cd4: 0xafa300a8
    ctx->pc = 0x256cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_256cd8:
    // 0x256cd8: 0x86420100
    ctx->pc = 0x256cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
label_256cdc:
    // 0x256cdc: 0x1000016c
label_256ce0:
    if (ctx->pc == 0x256CE0u) {
        ctx->pc = 0x256CE0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->pc = 0x256CE4u;
        goto label_256ce4;
    }
    ctx->pc = 0x256CDCu;
    {
        const bool branch_taken_0x256cdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256CE0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        if (branch_taken_0x256cdc) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256CE4u;
label_256ce4:
    // 0x256ce4: 0x46140834
    ctx->pc = 0x256ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_256ce8:
    // 0x256ce8: 0x45010006
label_256cec:
    if (ctx->pc == 0x256CECu) {
        ctx->pc = 0x256CF0u;
        goto label_256cf0;
    }
    ctx->pc = 0x256CE8u;
    {
        const bool branch_taken_0x256ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x256ce8) {
            ctx->pc = 0x256D04u;
            goto label_256d04;
        }
    }
    ctx->pc = 0x256CF0u;
label_256cf0:
    // 0x256cf0: 0x3c014000
    ctx->pc = 0x256cf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_256cf4:
    // 0x256cf4: 0x44810000
    ctx->pc = 0x256cf4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_256cf8:
    // 0x256cf8: 0x4600a036
    ctx->pc = 0x256cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_256cfc:
    // 0x256cfc: 0x45000005
label_256d00:
    if (ctx->pc == 0x256D00u) {
        ctx->pc = 0x256D04u;
        goto label_256d04;
    }
    ctx->pc = 0x256CFCu;
    {
        const bool branch_taken_0x256cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x256cfc) {
            ctx->pc = 0x256D14u;
            goto label_256d14;
        }
    }
    ctx->pc = 0x256D04u;
label_256d04:
    // 0x256d04: 0x3c013f80
    ctx->pc = 0x256d04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_256d08:
    // 0x256d08: 0x44816000
    ctx->pc = 0x256d08u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_256d0c:
    // 0x256d0c: 0x10000009
label_256d10:
    if (ctx->pc == 0x256D10u) {
        ctx->pc = 0x256D14u;
        goto label_256d14;
    }
    ctx->pc = 0x256D0Cu;
    {
        const bool branch_taken_0x256d0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x256d0c) {
            ctx->pc = 0x256D34u;
            goto label_256d34;
        }
    }
    ctx->pc = 0x256D14u;
label_256d14:
    // 0x256d14: 0x3c013fc0
    ctx->pc = 0x256d14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
label_256d18:
    // 0x256d18: 0x44810000
    ctx->pc = 0x256d18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_256d1c:
    // 0x256d1c: 0x4600a002
    ctx->pc = 0x256d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_256d20:
    // 0x256d20: 0x46010001
    ctx->pc = 0x256d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_256d24:
    // 0x256d24: 0x46000300
    ctx->pc = 0x256d24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_256d28:
    // 0x256d28: 0x0
    ctx->pc = 0x256d28u;
    // NOP
label_256d2c:
    // 0x256d2c: 0x0
    ctx->pc = 0x256d2cu;
    // NOP
label_256d30:
    // 0x256d30: 0x46146303
    ctx->pc = 0x256d30u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
label_256d34:
    // 0x256d34: 0x44800000
    ctx->pc = 0x256d34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_256d38:
    // 0x256d38: 0x460c0034
    ctx->pc = 0x256d38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_256d3c:
    // 0x256d3c: 0x0
    ctx->pc = 0x256d3cu;
    // NOP
label_256d40:
    // 0x256d40: 0x45030005
label_256d44:
    if (ctx->pc == 0x256D44u) {
        ctx->pc = 0x256D44u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x256D48u;
        goto label_256d48;
    }
    ctx->pc = 0x256D40u;
    {
        const bool branch_taken_0x256d40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x256d40) {
            ctx->pc = 0x256D44u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
            ctx->pc = 0x256D58u;
            goto label_256d58;
        }
    }
    ctx->pc = 0x256D48u;
label_256d48:
    // 0x256d48: 0x864200fe
    ctx->pc = 0x256d48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 254)));
label_256d4c:
    // 0x256d4c: 0x443001c
label_256d50:
    if (ctx->pc == 0x256D50u) {
        ctx->pc = 0x256D50u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 254)));
        ctx->pc = 0x256D54u;
        goto label_256d54;
    }
    ctx->pc = 0x256D4Cu;
    {
        const bool branch_taken_0x256d4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x256d4c) {
            ctx->pc = 0x256D50u;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 254)));
            ctx->pc = 0x256DC0u;
            goto label_256dc0;
        }
    }
    ctx->pc = 0x256D54u;
label_256d54:
    // 0x256d54: 0xafa000a0
    ctx->pc = 0x256d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_256d58:
    // 0x256d58: 0xafa000a4
    ctx->pc = 0x256d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_256d5c:
    // 0x256d5c: 0x864200fe
    ctx->pc = 0x256d5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 254)));
label_256d60:
    // 0x256d60: 0x4410004
label_256d64:
    if (ctx->pc == 0x256D64u) {
        ctx->pc = 0x256D68u;
        goto label_256d68;
    }
    ctx->pc = 0x256D60u;
    {
        const bool branch_taken_0x256d60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x256d60) {
            ctx->pc = 0x256D74u;
            goto label_256d74;
        }
    }
    ctx->pc = 0x256D68u;
label_256d68:
    // 0x256d68: 0x21023
    ctx->pc = 0x256d68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_256d6c:
    // 0x256d6c: 0x10000003
label_256d70:
    if (ctx->pc == 0x256D70u) {
        ctx->pc = 0x256D70u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x256D74u;
        goto label_256d74;
    }
    ctx->pc = 0x256D6Cu;
    {
        const bool branch_taken_0x256d6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256D70u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        if (branch_taken_0x256d6c) {
            ctx->pc = 0x256D7Cu;
            goto label_256d7c;
        }
    }
    ctx->pc = 0x256D74u;
label_256d74:
    // 0x256d74: 0x54400001
label_256d78:
    if (ctx->pc == 0x256D78u) {
        ctx->pc = 0x256D78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x256D7Cu;
        goto label_256d7c;
    }
    ctx->pc = 0x256D74u;
    {
        const bool branch_taken_0x256d74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256d74) {
            ctx->pc = 0x256D78u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
            ctx->pc = 0x256D7Cu;
            goto label_256d7c;
        }
    }
    ctx->pc = 0x256D7Cu;
label_256d7c:
    // 0x256d7c: 0x8e4400f4
    ctx->pc = 0x256d7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_256d80:
    // 0x256d80: 0x26450040
    ctx->pc = 0x256d80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 64));
label_256d84:
    // 0x256d84: 0x86460100
    ctx->pc = 0x256d84u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
label_256d88:
    // 0x256d88: 0x27a700a0
    ctx->pc = 0x256d88u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 160));
label_256d8c:
    // 0x256d8c: 0xc0974aa
label_256d90:
    if (ctx->pc == 0x256D90u) {
        ctx->pc = 0x256D90u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 164));
        ctx->pc = 0x256D94u;
        goto label_256d94;
    }
    ctx->pc = 0x256D8Cu;
    SET_GPR_U32(ctx, 31, 0x256D94u);
    ctx->pc = 0x256D90u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 164));
    ctx->pc = 0x25D2A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoItemSound_0x25d2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D94u; }
    }
    if (ctx->pc != 0x256D94u) { return; }
    ctx->pc = 0x256D94u;
label_256d94:
    // 0x256d94: 0x8fa200a4
    ctx->pc = 0x256d94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_256d98:
    // 0x256d98: 0x10400003
label_256d9c:
    if (ctx->pc == 0x256D9Cu) {
        ctx->pc = 0x256D9Cu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->pc = 0x256DA0u;
        goto label_256da0;
    }
    ctx->pc = 0x256D98u;
    {
        const bool branch_taken_0x256d98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256D9Cu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 164)));
        if (branch_taken_0x256d98) {
            ctx->pc = 0x256DA8u;
            goto label_256da8;
        }
    }
    ctx->pc = 0x256DA0u;
label_256da0:
    // 0x256da0: 0x1000013b
label_256da4:
    if (ctx->pc == 0x256DA4u) {
        ctx->pc = 0x256DA4u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 254), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x256DA8u;
        goto label_256da8;
    }
    ctx->pc = 0x256DA0u;
    {
        const bool branch_taken_0x256da0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256DA4u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 254), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x256da0) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256DA8u;
label_256da8:
    // 0x256da8: 0x8fa200a0
    ctx->pc = 0x256da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_256dac:
    // 0x256dac: 0x10400008
label_256db0:
    if (ctx->pc == 0x256DB0u) {
        ctx->pc = 0x256DB0u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x256DB4u;
        goto label_256db4;
    }
    ctx->pc = 0x256DACu;
    {
        const bool branch_taken_0x256dac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256DB0u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x256dac) {
            ctx->pc = 0x256DD0u;
            goto label_256dd0;
        }
    }
    ctx->pc = 0x256DB4u;
label_256db4:
    // 0x256db4: 0x21023
    ctx->pc = 0x256db4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_256db8:
    // 0x256db8: 0x10000135
label_256dbc:
    if (ctx->pc == 0x256DBCu) {
        ctx->pc = 0x256DBCu;
        WRITE16(ADD32(GPR_U32(ctx, 18), 254), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x256DC0u;
        goto label_256dc0;
    }
    ctx->pc = 0x256DB8u;
    {
        const bool branch_taken_0x256db8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256DBCu;
        WRITE16(ADD32(GPR_U32(ctx, 18), 254), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x256db8) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256DC0u;
label_256dc0:
    // 0x256dc0: 0x58800134
label_256dc4:
    if (ctx->pc == 0x256DC4u) {
        ctx->pc = 0x256DC4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x256DC8u;
        goto label_256dc8;
    }
    ctx->pc = 0x256DC0u;
    {
        const bool branch_taken_0x256dc0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x256dc0) {
            ctx->pc = 0x256DC4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x256DC8u;
label_256dc8:
    // 0x256dc8: 0xc097538
label_256dcc:
    if (ctx->pc == 0x256DCCu) {
        ctx->pc = 0x256DD0u;
        goto label_256dd0;
    }
    ctx->pc = 0x256DC8u;
    SET_GPR_U32(ctx, 31, 0x256DD0u);
    ctx->pc = 0x25D4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        KillItemSound_0x25d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DD0u; }
    }
    if (ctx->pc != 0x256DD0u) { return; }
    ctx->pc = 0x256DD0u;
label_256dd0:
    // 0x256dd0: 0x1000012f
label_256dd4:
    if (ctx->pc == 0x256DD4u) {
        ctx->pc = 0x256DD4u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 254), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256DD8u;
        goto label_256dd8;
    }
    ctx->pc = 0x256DD0u;
    {
        const bool branch_taken_0x256dd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256DD4u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 254), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x256dd0) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256DD8u;
label_256dd8:
    // 0x256dd8: 0x864200f4
    ctx->pc = 0x256dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
label_256ddc:
    // 0x256ddc: 0x28420002
    ctx->pc = 0x256ddcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_256de0:
    // 0x256de0: 0x5440002e
label_256de4:
    if (ctx->pc == 0x256DE4u) {
        ctx->pc = 0x256DE4u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
        ctx->pc = 0x256DE8u;
        goto label_256de8;
    }
    ctx->pc = 0x256DE0u;
    {
        const bool branch_taken_0x256de0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x256de0) {
            ctx->pc = 0x256DE4u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
            ctx->pc = 0x256E9Cu;
            goto label_256e9c;
        }
    }
    ctx->pc = 0x256DE8u;
label_256de8:
    // 0x256de8: 0x864200f6
    ctx->pc = 0x256de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 246)));
label_256dec:
    // 0x256dec: 0x2842001e
    ctx->pc = 0x256decu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 30));
label_256df0:
    // 0x256df0: 0x1040000c
label_256df4:
    if (ctx->pc == 0x256DF4u) {
        ctx->pc = 0x256DF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x256DF8u;
        goto label_256df8;
    }
    ctx->pc = 0x256DF0u;
    {
        const bool branch_taken_0x256df0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256DF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x256df0) {
            ctx->pc = 0x256E24u;
            goto label_256e24;
        }
    }
    ctx->pc = 0x256DF8u;
label_256df8:
    // 0x256df8: 0x8e440070
    ctx->pc = 0x256df8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_256dfc:
    // 0x256dfc: 0x2405fffe
    ctx->pc = 0x256dfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
label_256e00:
    // 0x256e00: 0x8c46fa80
    ctx->pc = 0x256e00u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294965888)));
label_256e04:
    // 0x256e04: 0xc0b4126
label_256e08:
    if (ctx->pc == 0x256E08u) {
        ctx->pc = 0x256E08u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256E0Cu;
        goto label_256e0c;
    }
    ctx->pc = 0x256E04u;
    SET_GPR_U32(ctx, 31, 0x256E0Cu);
    ctx->pc = 0x256E08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E0Cu; }
    }
    if (ctx->pc != 0x256E0Cu) { return; }
    ctx->pc = 0x256E0Cu;
label_256e0c:
    // 0x256e0c: 0x8e440070
    ctx->pc = 0x256e0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_256e10:
    // 0x256e10: 0x24054000
    ctx->pc = 0x256e10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
label_256e14:
    // 0x256e14: 0xc0b41b8
label_256e18:
    if (ctx->pc == 0x256E18u) {
        ctx->pc = 0x256E18u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x256E1Cu;
        goto label_256e1c;
    }
    ctx->pc = 0x256E14u;
    SET_GPR_U32(ctx, 31, 0x256E1Cu);
    ctx->pc = 0x256E18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E1Cu; }
    }
    if (ctx->pc != 0x256E1Cu) { return; }
    ctx->pc = 0x256E1Cu;
label_256e1c:
    // 0x256e1c: 0x1000000b
label_256e20:
    if (ctx->pc == 0x256E20u) {
        ctx->pc = 0x256E20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x256E24u;
        goto label_256e24;
    }
    ctx->pc = 0x256E1Cu;
    {
        const bool branch_taken_0x256e1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256E20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x256e1c) {
            ctx->pc = 0x256E4Cu;
            goto label_256e4c;
        }
    }
    ctx->pc = 0x256E24u;
label_256e24:
    // 0x256e24: 0x8e440070
    ctx->pc = 0x256e24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_256e28:
    // 0x256e28: 0x2405ffff
    ctx->pc = 0x256e28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_256e2c:
    // 0x256e2c: 0x302d
    ctx->pc = 0x256e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256e30:
    // 0x256e30: 0xc0b4126
label_256e34:
    if (ctx->pc == 0x256E34u) {
        ctx->pc = 0x256E34u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256E38u;
        goto label_256e38;
    }
    ctx->pc = 0x256E30u;
    SET_GPR_U32(ctx, 31, 0x256E38u);
    ctx->pc = 0x256E34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E38u; }
    }
    if (ctx->pc != 0x256E38u) { return; }
    ctx->pc = 0x256E38u;
label_256e38:
    // 0x256e38: 0x8e440070
    ctx->pc = 0x256e38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_256e3c:
    // 0x256e3c: 0x24054000
    ctx->pc = 0x256e3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
label_256e40:
    // 0x256e40: 0xc0b41e4
label_256e44:
    if (ctx->pc == 0x256E44u) {
        ctx->pc = 0x256E44u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x256E48u;
        goto label_256e48;
    }
    ctx->pc = 0x256E40u;
    SET_GPR_U32(ctx, 31, 0x256E48u);
    ctx->pc = 0x256E44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E48u; }
    }
    if (ctx->pc != 0x256E48u) { return; }
    ctx->pc = 0x256E48u;
label_256e48:
    // 0x256e48: 0x3c020031
    ctx->pc = 0x256e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_256e4c:
    // 0x256e4c: 0x964300f6
    ctx->pc = 0x256e4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 246)));
label_256e50:
    // 0x256e50: 0x9442ffbc
    ctx->pc = 0x256e50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_256e54:
    // 0x256e54: 0x621821
    ctx->pc = 0x256e54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_256e58:
    // 0x256e58: 0xa64300f6
    ctx->pc = 0x256e58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 246), (uint16_t)GPR_U32(ctx, 3));
label_256e5c:
    // 0x256e5c: 0x31c00
    ctx->pc = 0x256e5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
label_256e60:
    // 0x256e60: 0x31c03
    ctx->pc = 0x256e60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_256e64:
    // 0x256e64: 0x2863003d
    ctx->pc = 0x256e64u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 61));
label_256e68:
    // 0x256e68: 0x54600024
label_256e6c:
    if (ctx->pc == 0x256E6Cu) {
        ctx->pc = 0x256E6Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x256E70u;
        goto label_256e70;
    }
    ctx->pc = 0x256E68u;
    {
        const bool branch_taken_0x256e68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x256e68) {
            ctx->pc = 0x256E6Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x256EFCu;
            goto label_256efc;
        }
    }
    ctx->pc = 0x256E70u;
label_256e70:
    // 0x256e70: 0xa64000f6
    ctx->pc = 0x256e70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 246), (uint16_t)GPR_U32(ctx, 0));
label_256e74:
    // 0x256e74: 0x964200f4
    ctx->pc = 0x256e74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
label_256e78:
    // 0x256e78: 0x2442ffff
    ctx->pc = 0x256e78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_256e7c:
    // 0x256e7c: 0xa64200f4
    ctx->pc = 0x256e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 244), (uint16_t)GPR_U32(ctx, 2));
label_256e80:
    // 0x256e80: 0x21400
    ctx->pc = 0x256e80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_256e84:
    // 0x256e84: 0x21403
    ctx->pc = 0x256e84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_256e88:
    // 0x256e88: 0x24030001
    ctx->pc = 0x256e88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_256e8c:
    // 0x256e8c: 0x5043001a
label_256e90:
    if (ctx->pc == 0x256E90u) {
        ctx->pc = 0x256E90u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 244), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256E94u;
        goto label_256e94;
    }
    ctx->pc = 0x256E8Cu;
    {
        const bool branch_taken_0x256e8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x256e8c) {
            ctx->pc = 0x256E90u;
            WRITE16(ADD32(GPR_U32(ctx, 18), 244), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x256EF8u;
            goto label_256ef8;
        }
    }
    ctx->pc = 0x256E94u;
label_256e94:
    // 0x256e94: 0x10000019
label_256e98:
    if (ctx->pc == 0x256E98u) {
        ctx->pc = 0x256E98u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x256E9Cu;
        goto label_256e9c;
    }
    ctx->pc = 0x256E94u;
    {
        const bool branch_taken_0x256e94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256E98u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x256e94) {
            ctx->pc = 0x256EFCu;
            goto label_256efc;
        }
    }
    ctx->pc = 0x256E9Cu;
label_256e9c:
    // 0x256e9c: 0x24020001
    ctx->pc = 0x256e9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_256ea0:
    // 0x256ea0: 0x1462000d
label_256ea4:
    if (ctx->pc == 0x256EA4u) {
        ctx->pc = 0x256EA4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->pc = 0x256EA8u;
        goto label_256ea8;
    }
    ctx->pc = 0x256EA0u;
    {
        const bool branch_taken_0x256ea0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x256EA4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
        if (branch_taken_0x256ea0) {
            ctx->pc = 0x256ED8u;
            goto label_256ed8;
        }
    }
    ctx->pc = 0x256EA8u;
label_256ea8:
    // 0x256ea8: 0x3c020032
    ctx->pc = 0x256ea8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_256eac:
    // 0x256eac: 0x2405fffe
    ctx->pc = 0x256eacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
label_256eb0:
    // 0x256eb0: 0x8c46fa80
    ctx->pc = 0x256eb0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294965888)));
label_256eb4:
    // 0x256eb4: 0xc0b4126
label_256eb8:
    if (ctx->pc == 0x256EB8u) {
        ctx->pc = 0x256EB8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256EBCu;
        goto label_256ebc;
    }
    ctx->pc = 0x256EB4u;
    SET_GPR_U32(ctx, 31, 0x256EBCu);
    ctx->pc = 0x256EB8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256EBCu; }
    }
    if (ctx->pc != 0x256EBCu) { return; }
    ctx->pc = 0x256EBCu;
label_256ebc:
    // 0x256ebc: 0x8e440070
    ctx->pc = 0x256ebcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_256ec0:
    // 0x256ec0: 0x24054000
    ctx->pc = 0x256ec0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
label_256ec4:
    // 0x256ec4: 0xc0b41b8
label_256ec8:
    if (ctx->pc == 0x256EC8u) {
        ctx->pc = 0x256EC8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x256ECCu;
        goto label_256ecc;
    }
    ctx->pc = 0x256EC4u;
    SET_GPR_U32(ctx, 31, 0x256ECCu);
    ctx->pc = 0x256EC8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256ECCu; }
    }
    if (ctx->pc != 0x256ECCu) { return; }
    ctx->pc = 0x256ECCu;
label_256ecc:
    // 0x256ecc: 0xa64000f4
    ctx->pc = 0x256eccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 244), (uint16_t)GPR_U32(ctx, 0));
label_256ed0:
    // 0x256ed0: 0x10000009
label_256ed4:
    if (ctx->pc == 0x256ED4u) {
        ctx->pc = 0x256ED4u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 246), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x256ED8u;
        goto label_256ed8;
    }
    ctx->pc = 0x256ED0u;
    {
        const bool branch_taken_0x256ed0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256ED4u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 246), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x256ed0) {
            ctx->pc = 0x256EF8u;
            goto label_256ef8;
        }
    }
    ctx->pc = 0x256ED8u;
label_256ed8:
    // 0x256ed8: 0x2405ffff
    ctx->pc = 0x256ed8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_256edc:
    // 0x256edc: 0x302d
    ctx->pc = 0x256edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256ee0:
    // 0x256ee0: 0xc0b4126
label_256ee4:
    if (ctx->pc == 0x256EE4u) {
        ctx->pc = 0x256EE4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256EE8u;
        goto label_256ee8;
    }
    ctx->pc = 0x256EE0u;
    SET_GPR_U32(ctx, 31, 0x256EE8u);
    ctx->pc = 0x256EE4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256EE8u; }
    }
    if (ctx->pc != 0x256EE8u) { return; }
    ctx->pc = 0x256EE8u;
label_256ee8:
    // 0x256ee8: 0x8e440070
    ctx->pc = 0x256ee8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_256eec:
    // 0x256eec: 0x24054000
    ctx->pc = 0x256eecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
label_256ef0:
    // 0x256ef0: 0xc0b41e4
label_256ef4:
    if (ctx->pc == 0x256EF4u) {
        ctx->pc = 0x256EF4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x256EF8u;
        goto label_256ef8;
    }
    ctx->pc = 0x256EF0u;
    SET_GPR_U32(ctx, 31, 0x256EF8u);
    ctx->pc = 0x256EF4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256EF8u; }
    }
    if (ctx->pc != 0x256EF8u) { return; }
    ctx->pc = 0x256EF8u;
label_256ef8:
    // 0x256ef8: 0x8e420000
    ctx->pc = 0x256ef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_256efc:
    // 0x256efc: 0x8c420004
    ctx->pc = 0x256efcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_256f00:
    // 0x256f00: 0x2443ffd8
    ctx->pc = 0x256f00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967256));
label_256f04:
    // 0x256f04: 0x2c62000e
    ctx->pc = 0x256f04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
label_256f08:
    // 0x256f08: 0x104000e1
label_256f0c:
    if (ctx->pc == 0x256F0Cu) {
        ctx->pc = 0x256F0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x256F10u;
        goto label_256f10;
    }
    ctx->pc = 0x256F08u;
    {
        const bool branch_taken_0x256f08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256F0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x256f08) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256F10u;
label_256f10:
    // 0x256f10: 0x24428ae0
    ctx->pc = 0x256f10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937312));
label_256f14:
    // 0x256f14: 0x31880
    ctx->pc = 0x256f14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_256f18:
    // 0x256f18: 0x621821
    ctx->pc = 0x256f18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_256f1c:
    // 0x256f1c: 0x8c620000
    ctx->pc = 0x256f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_256f20:
    // 0x256f20: 0x400008
label_256f24:
    if (ctx->pc == 0x256F24u) {
        ctx->pc = 0x256F28u;
        goto label_256f28;
    }
    ctx->pc = 0x256F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254F10u: goto label_254f10;
            case 0x254F14u: goto label_254f14;
            case 0x254F18u: goto label_254f18;
            case 0x254F1Cu: goto label_254f1c;
            case 0x254F20u: goto label_254f20;
            case 0x254F24u: goto label_254f24;
            case 0x254F28u: goto label_254f28;
            case 0x254F2Cu: goto label_254f2c;
            case 0x254F30u: goto label_254f30;
            case 0x254F34u: goto label_254f34;
            case 0x254F38u: goto label_254f38;
            case 0x254F3Cu: goto label_254f3c;
            case 0x254F40u: goto label_254f40;
            case 0x254F44u: goto label_254f44;
            case 0x254F48u: goto label_254f48;
            case 0x254F4Cu: goto label_254f4c;
            case 0x254F50u: goto label_254f50;
            case 0x254F54u: goto label_254f54;
            case 0x254F58u: goto label_254f58;
            case 0x254F5Cu: goto label_254f5c;
            case 0x254F60u: goto label_254f60;
            case 0x254F64u: goto label_254f64;
            case 0x254F68u: goto label_254f68;
            case 0x254F6Cu: goto label_254f6c;
            case 0x254F70u: goto label_254f70;
            case 0x254F74u: goto label_254f74;
            case 0x254F78u: goto label_254f78;
            case 0x254F7Cu: goto label_254f7c;
            case 0x254F80u: goto label_254f80;
            case 0x254F84u: goto label_254f84;
            case 0x254F88u: goto label_254f88;
            case 0x254F8Cu: goto label_254f8c;
            case 0x254F90u: goto label_254f90;
            case 0x254F94u: goto label_254f94;
            case 0x254F98u: goto label_254f98;
            case 0x254F9Cu: goto label_254f9c;
            case 0x254FA0u: goto label_254fa0;
            case 0x254FA4u: goto label_254fa4;
            case 0x254FA8u: goto label_254fa8;
            case 0x254FACu: goto label_254fac;
            case 0x254FB0u: goto label_254fb0;
            case 0x254FB4u: goto label_254fb4;
            case 0x254FB8u: goto label_254fb8;
            case 0x254FBCu: goto label_254fbc;
            case 0x254FC0u: goto label_254fc0;
            case 0x254FC4u: goto label_254fc4;
            case 0x254FC8u: goto label_254fc8;
            case 0x254FCCu: goto label_254fcc;
            case 0x254FD0u: goto label_254fd0;
            case 0x254FD4u: goto label_254fd4;
            case 0x254FD8u: goto label_254fd8;
            case 0x254FDCu: goto label_254fdc;
            case 0x254FE0u: goto label_254fe0;
            case 0x254FE4u: goto label_254fe4;
            case 0x254FE8u: goto label_254fe8;
            case 0x254FECu: goto label_254fec;
            case 0x254FF0u: goto label_254ff0;
            case 0x254FF4u: goto label_254ff4;
            case 0x254FF8u: goto label_254ff8;
            case 0x254FFCu: goto label_254ffc;
            case 0x255000u: goto label_255000;
            case 0x255004u: goto label_255004;
            case 0x255008u: goto label_255008;
            case 0x25500Cu: goto label_25500c;
            case 0x255010u: goto label_255010;
            case 0x255014u: goto label_255014;
            case 0x255018u: goto label_255018;
            case 0x25501Cu: goto label_25501c;
            case 0x255020u: goto label_255020;
            case 0x255024u: goto label_255024;
            case 0x255028u: goto label_255028;
            case 0x25502Cu: goto label_25502c;
            case 0x255030u: goto label_255030;
            case 0x255034u: goto label_255034;
            case 0x255038u: goto label_255038;
            case 0x25503Cu: goto label_25503c;
            case 0x255040u: goto label_255040;
            case 0x255044u: goto label_255044;
            case 0x255048u: goto label_255048;
            case 0x25504Cu: goto label_25504c;
            case 0x255050u: goto label_255050;
            case 0x255054u: goto label_255054;
            case 0x255058u: goto label_255058;
            case 0x25505Cu: goto label_25505c;
            case 0x255060u: goto label_255060;
            case 0x255064u: goto label_255064;
            case 0x255068u: goto label_255068;
            case 0x25506Cu: goto label_25506c;
            case 0x255070u: goto label_255070;
            case 0x255074u: goto label_255074;
            case 0x255078u: goto label_255078;
            case 0x25507Cu: goto label_25507c;
            case 0x255080u: goto label_255080;
            case 0x255084u: goto label_255084;
            case 0x255088u: goto label_255088;
            case 0x25508Cu: goto label_25508c;
            case 0x255090u: goto label_255090;
            case 0x255094u: goto label_255094;
            case 0x255098u: goto label_255098;
            case 0x25509Cu: goto label_25509c;
            case 0x2550A0u: goto label_2550a0;
            case 0x2550A4u: goto label_2550a4;
            case 0x2550A8u: goto label_2550a8;
            case 0x2550ACu: goto label_2550ac;
            case 0x2550B0u: goto label_2550b0;
            case 0x2550B4u: goto label_2550b4;
            case 0x2550B8u: goto label_2550b8;
            case 0x2550BCu: goto label_2550bc;
            case 0x2550C0u: goto label_2550c0;
            case 0x2550C4u: goto label_2550c4;
            case 0x2550C8u: goto label_2550c8;
            case 0x2550CCu: goto label_2550cc;
            case 0x2550D0u: goto label_2550d0;
            case 0x2550D4u: goto label_2550d4;
            case 0x2550D8u: goto label_2550d8;
            case 0x2550DCu: goto label_2550dc;
            case 0x2550E0u: goto label_2550e0;
            case 0x2550E4u: goto label_2550e4;
            case 0x2550E8u: goto label_2550e8;
            case 0x2550ECu: goto label_2550ec;
            case 0x2550F0u: goto label_2550f0;
            case 0x2550F4u: goto label_2550f4;
            case 0x2550F8u: goto label_2550f8;
            case 0x2550FCu: goto label_2550fc;
            case 0x255100u: goto label_255100;
            case 0x255104u: goto label_255104;
            case 0x255108u: goto label_255108;
            case 0x25510Cu: goto label_25510c;
            case 0x255110u: goto label_255110;
            case 0x255114u: goto label_255114;
            case 0x255118u: goto label_255118;
            case 0x25511Cu: goto label_25511c;
            case 0x255120u: goto label_255120;
            case 0x255124u: goto label_255124;
            case 0x255128u: goto label_255128;
            case 0x25512Cu: goto label_25512c;
            case 0x255130u: goto label_255130;
            case 0x255134u: goto label_255134;
            case 0x255138u: goto label_255138;
            case 0x25513Cu: goto label_25513c;
            case 0x255140u: goto label_255140;
            case 0x255144u: goto label_255144;
            case 0x255148u: goto label_255148;
            case 0x25514Cu: goto label_25514c;
            case 0x255150u: goto label_255150;
            case 0x255154u: goto label_255154;
            case 0x255158u: goto label_255158;
            case 0x25515Cu: goto label_25515c;
            case 0x255160u: goto label_255160;
            case 0x255164u: goto label_255164;
            case 0x255168u: goto label_255168;
            case 0x25516Cu: goto label_25516c;
            case 0x255170u: goto label_255170;
            case 0x255174u: goto label_255174;
            case 0x255178u: goto label_255178;
            case 0x25517Cu: goto label_25517c;
            case 0x255180u: goto label_255180;
            case 0x255184u: goto label_255184;
            case 0x255188u: goto label_255188;
            case 0x25518Cu: goto label_25518c;
            case 0x255190u: goto label_255190;
            case 0x255194u: goto label_255194;
            case 0x255198u: goto label_255198;
            case 0x25519Cu: goto label_25519c;
            case 0x2551A0u: goto label_2551a0;
            case 0x2551A4u: goto label_2551a4;
            case 0x2551A8u: goto label_2551a8;
            case 0x2551ACu: goto label_2551ac;
            case 0x2551B0u: goto label_2551b0;
            case 0x2551B4u: goto label_2551b4;
            case 0x2551B8u: goto label_2551b8;
            case 0x2551BCu: goto label_2551bc;
            case 0x2551C0u: goto label_2551c0;
            case 0x2551C4u: goto label_2551c4;
            case 0x2551C8u: goto label_2551c8;
            case 0x2551CCu: goto label_2551cc;
            case 0x2551D0u: goto label_2551d0;
            case 0x2551D4u: goto label_2551d4;
            case 0x2551D8u: goto label_2551d8;
            case 0x2551DCu: goto label_2551dc;
            case 0x2551E0u: goto label_2551e0;
            case 0x2551E4u: goto label_2551e4;
            case 0x2551E8u: goto label_2551e8;
            case 0x2551ECu: goto label_2551ec;
            case 0x2551F0u: goto label_2551f0;
            case 0x2551F4u: goto label_2551f4;
            case 0x2551F8u: goto label_2551f8;
            case 0x2551FCu: goto label_2551fc;
            case 0x255200u: goto label_255200;
            case 0x255204u: goto label_255204;
            case 0x255208u: goto label_255208;
            case 0x25520Cu: goto label_25520c;
            case 0x255210u: goto label_255210;
            case 0x255214u: goto label_255214;
            case 0x255218u: goto label_255218;
            case 0x25521Cu: goto label_25521c;
            case 0x255220u: goto label_255220;
            case 0x255224u: goto label_255224;
            case 0x255228u: goto label_255228;
            case 0x25522Cu: goto label_25522c;
            case 0x255230u: goto label_255230;
            case 0x255234u: goto label_255234;
            case 0x255238u: goto label_255238;
            case 0x25523Cu: goto label_25523c;
            case 0x255240u: goto label_255240;
            case 0x255244u: goto label_255244;
            case 0x255248u: goto label_255248;
            case 0x25524Cu: goto label_25524c;
            case 0x255250u: goto label_255250;
            case 0x255254u: goto label_255254;
            case 0x255258u: goto label_255258;
            case 0x25525Cu: goto label_25525c;
            case 0x255260u: goto label_255260;
            case 0x255264u: goto label_255264;
            case 0x255268u: goto label_255268;
            case 0x25526Cu: goto label_25526c;
            case 0x255270u: goto label_255270;
            case 0x255274u: goto label_255274;
            case 0x255278u: goto label_255278;
            case 0x25527Cu: goto label_25527c;
            case 0x255280u: goto label_255280;
            case 0x255284u: goto label_255284;
            case 0x255288u: goto label_255288;
            case 0x25528Cu: goto label_25528c;
            case 0x255290u: goto label_255290;
            case 0x255294u: goto label_255294;
            case 0x255298u: goto label_255298;
            case 0x25529Cu: goto label_25529c;
            case 0x2552A0u: goto label_2552a0;
            case 0x2552A4u: goto label_2552a4;
            case 0x2552A8u: goto label_2552a8;
            case 0x2552ACu: goto label_2552ac;
            case 0x2552B0u: goto label_2552b0;
            case 0x2552B4u: goto label_2552b4;
            case 0x2552B8u: goto label_2552b8;
            case 0x2552BCu: goto label_2552bc;
            case 0x2552C0u: goto label_2552c0;
            case 0x2552C4u: goto label_2552c4;
            case 0x2552C8u: goto label_2552c8;
            case 0x2552CCu: goto label_2552cc;
            case 0x2552D0u: goto label_2552d0;
            case 0x2552D4u: goto label_2552d4;
            case 0x2552D8u: goto label_2552d8;
            case 0x2552DCu: goto label_2552dc;
            case 0x2552E0u: goto label_2552e0;
            case 0x2552E4u: goto label_2552e4;
            case 0x2552E8u: goto label_2552e8;
            case 0x2552ECu: goto label_2552ec;
            case 0x2552F0u: goto label_2552f0;
            case 0x2552F4u: goto label_2552f4;
            case 0x2552F8u: goto label_2552f8;
            case 0x2552FCu: goto label_2552fc;
            case 0x255300u: goto label_255300;
            case 0x255304u: goto label_255304;
            case 0x255308u: goto label_255308;
            case 0x25530Cu: goto label_25530c;
            case 0x255310u: goto label_255310;
            case 0x255314u: goto label_255314;
            case 0x255318u: goto label_255318;
            case 0x25531Cu: goto label_25531c;
            case 0x255320u: goto label_255320;
            case 0x255324u: goto label_255324;
            case 0x255328u: goto label_255328;
            case 0x25532Cu: goto label_25532c;
            case 0x255330u: goto label_255330;
            case 0x255334u: goto label_255334;
            case 0x255338u: goto label_255338;
            case 0x25533Cu: goto label_25533c;
            case 0x255340u: goto label_255340;
            case 0x255344u: goto label_255344;
            case 0x255348u: goto label_255348;
            case 0x25534Cu: goto label_25534c;
            case 0x255350u: goto label_255350;
            case 0x255354u: goto label_255354;
            case 0x255358u: goto label_255358;
            case 0x25535Cu: goto label_25535c;
            case 0x255360u: goto label_255360;
            case 0x255364u: goto label_255364;
            case 0x255368u: goto label_255368;
            case 0x25536Cu: goto label_25536c;
            case 0x255370u: goto label_255370;
            case 0x255374u: goto label_255374;
            case 0x255378u: goto label_255378;
            case 0x25537Cu: goto label_25537c;
            case 0x255380u: goto label_255380;
            case 0x255384u: goto label_255384;
            case 0x255388u: goto label_255388;
            case 0x25538Cu: goto label_25538c;
            case 0x255390u: goto label_255390;
            case 0x255394u: goto label_255394;
            case 0x255398u: goto label_255398;
            case 0x25539Cu: goto label_25539c;
            case 0x2553A0u: goto label_2553a0;
            case 0x2553A4u: goto label_2553a4;
            case 0x2553A8u: goto label_2553a8;
            case 0x2553ACu: goto label_2553ac;
            case 0x2553B0u: goto label_2553b0;
            case 0x2553B4u: goto label_2553b4;
            case 0x2553B8u: goto label_2553b8;
            case 0x2553BCu: goto label_2553bc;
            case 0x2553C0u: goto label_2553c0;
            case 0x2553C4u: goto label_2553c4;
            case 0x2553C8u: goto label_2553c8;
            case 0x2553CCu: goto label_2553cc;
            case 0x2553D0u: goto label_2553d0;
            case 0x2553D4u: goto label_2553d4;
            case 0x2553D8u: goto label_2553d8;
            case 0x2553DCu: goto label_2553dc;
            case 0x2553E0u: goto label_2553e0;
            case 0x2553E4u: goto label_2553e4;
            case 0x2553E8u: goto label_2553e8;
            case 0x2553ECu: goto label_2553ec;
            case 0x2553F0u: goto label_2553f0;
            case 0x2553F4u: goto label_2553f4;
            case 0x2553F8u: goto label_2553f8;
            case 0x2553FCu: goto label_2553fc;
            case 0x255400u: goto label_255400;
            case 0x255404u: goto label_255404;
            case 0x255408u: goto label_255408;
            case 0x25540Cu: goto label_25540c;
            case 0x255410u: goto label_255410;
            case 0x255414u: goto label_255414;
            case 0x255418u: goto label_255418;
            case 0x25541Cu: goto label_25541c;
            case 0x255420u: goto label_255420;
            case 0x255424u: goto label_255424;
            case 0x255428u: goto label_255428;
            case 0x25542Cu: goto label_25542c;
            case 0x255430u: goto label_255430;
            case 0x255434u: goto label_255434;
            case 0x255438u: goto label_255438;
            case 0x25543Cu: goto label_25543c;
            case 0x255440u: goto label_255440;
            case 0x255444u: goto label_255444;
            case 0x255448u: goto label_255448;
            case 0x25544Cu: goto label_25544c;
            case 0x255450u: goto label_255450;
            case 0x255454u: goto label_255454;
            case 0x255458u: goto label_255458;
            case 0x25545Cu: goto label_25545c;
            case 0x255460u: goto label_255460;
            case 0x255464u: goto label_255464;
            case 0x255468u: goto label_255468;
            case 0x25546Cu: goto label_25546c;
            case 0x255470u: goto label_255470;
            case 0x255474u: goto label_255474;
            case 0x255478u: goto label_255478;
            case 0x25547Cu: goto label_25547c;
            case 0x255480u: goto label_255480;
            case 0x255484u: goto label_255484;
            case 0x255488u: goto label_255488;
            case 0x25548Cu: goto label_25548c;
            case 0x255490u: goto label_255490;
            case 0x255494u: goto label_255494;
            case 0x255498u: goto label_255498;
            case 0x25549Cu: goto label_25549c;
            case 0x2554A0u: goto label_2554a0;
            case 0x2554A4u: goto label_2554a4;
            case 0x2554A8u: goto label_2554a8;
            case 0x2554ACu: goto label_2554ac;
            case 0x2554B0u: goto label_2554b0;
            case 0x2554B4u: goto label_2554b4;
            case 0x2554B8u: goto label_2554b8;
            case 0x2554BCu: goto label_2554bc;
            case 0x2554C0u: goto label_2554c0;
            case 0x2554C4u: goto label_2554c4;
            case 0x2554C8u: goto label_2554c8;
            case 0x2554CCu: goto label_2554cc;
            case 0x2554D0u: goto label_2554d0;
            case 0x2554D4u: goto label_2554d4;
            case 0x2554D8u: goto label_2554d8;
            case 0x2554DCu: goto label_2554dc;
            case 0x2554E0u: goto label_2554e0;
            case 0x2554E4u: goto label_2554e4;
            case 0x2554E8u: goto label_2554e8;
            case 0x2554ECu: goto label_2554ec;
            case 0x2554F0u: goto label_2554f0;
            case 0x2554F4u: goto label_2554f4;
            case 0x2554F8u: goto label_2554f8;
            case 0x2554FCu: goto label_2554fc;
            case 0x255500u: goto label_255500;
            case 0x255504u: goto label_255504;
            case 0x255508u: goto label_255508;
            case 0x25550Cu: goto label_25550c;
            case 0x255510u: goto label_255510;
            case 0x255514u: goto label_255514;
            case 0x255518u: goto label_255518;
            case 0x25551Cu: goto label_25551c;
            case 0x255520u: goto label_255520;
            case 0x255524u: goto label_255524;
            case 0x255528u: goto label_255528;
            case 0x25552Cu: goto label_25552c;
            case 0x255530u: goto label_255530;
            case 0x255534u: goto label_255534;
            case 0x255538u: goto label_255538;
            case 0x25553Cu: goto label_25553c;
            case 0x255540u: goto label_255540;
            case 0x255544u: goto label_255544;
            case 0x255548u: goto label_255548;
            case 0x25554Cu: goto label_25554c;
            case 0x255550u: goto label_255550;
            case 0x255554u: goto label_255554;
            case 0x255558u: goto label_255558;
            case 0x25555Cu: goto label_25555c;
            case 0x255560u: goto label_255560;
            case 0x255564u: goto label_255564;
            case 0x255568u: goto label_255568;
            case 0x25556Cu: goto label_25556c;
            case 0x255570u: goto label_255570;
            case 0x255574u: goto label_255574;
            case 0x255578u: goto label_255578;
            case 0x25557Cu: goto label_25557c;
            case 0x255580u: goto label_255580;
            case 0x255584u: goto label_255584;
            case 0x255588u: goto label_255588;
            case 0x25558Cu: goto label_25558c;
            case 0x255590u: goto label_255590;
            case 0x255594u: goto label_255594;
            case 0x255598u: goto label_255598;
            case 0x25559Cu: goto label_25559c;
            case 0x2555A0u: goto label_2555a0;
            case 0x2555A4u: goto label_2555a4;
            case 0x2555A8u: goto label_2555a8;
            case 0x2555ACu: goto label_2555ac;
            case 0x2555B0u: goto label_2555b0;
            case 0x2555B4u: goto label_2555b4;
            case 0x2555B8u: goto label_2555b8;
            case 0x2555BCu: goto label_2555bc;
            case 0x2555C0u: goto label_2555c0;
            case 0x2555C4u: goto label_2555c4;
            case 0x2555C8u: goto label_2555c8;
            case 0x2555CCu: goto label_2555cc;
            case 0x2555D0u: goto label_2555d0;
            case 0x2555D4u: goto label_2555d4;
            case 0x2555D8u: goto label_2555d8;
            case 0x2555DCu: goto label_2555dc;
            case 0x2555E0u: goto label_2555e0;
            case 0x2555E4u: goto label_2555e4;
            case 0x2555E8u: goto label_2555e8;
            case 0x2555ECu: goto label_2555ec;
            case 0x2555F0u: goto label_2555f0;
            case 0x2555F4u: goto label_2555f4;
            case 0x2555F8u: goto label_2555f8;
            case 0x2555FCu: goto label_2555fc;
            case 0x255600u: goto label_255600;
            case 0x255604u: goto label_255604;
            case 0x255608u: goto label_255608;
            case 0x25560Cu: goto label_25560c;
            case 0x255610u: goto label_255610;
            case 0x255614u: goto label_255614;
            case 0x255618u: goto label_255618;
            case 0x25561Cu: goto label_25561c;
            case 0x255620u: goto label_255620;
            case 0x255624u: goto label_255624;
            case 0x255628u: goto label_255628;
            case 0x25562Cu: goto label_25562c;
            case 0x255630u: goto label_255630;
            case 0x255634u: goto label_255634;
            case 0x255638u: goto label_255638;
            case 0x25563Cu: goto label_25563c;
            case 0x255640u: goto label_255640;
            case 0x255644u: goto label_255644;
            case 0x255648u: goto label_255648;
            case 0x25564Cu: goto label_25564c;
            case 0x255650u: goto label_255650;
            case 0x255654u: goto label_255654;
            case 0x255658u: goto label_255658;
            case 0x25565Cu: goto label_25565c;
            case 0x255660u: goto label_255660;
            case 0x255664u: goto label_255664;
            case 0x255668u: goto label_255668;
            case 0x25566Cu: goto label_25566c;
            case 0x255670u: goto label_255670;
            case 0x255674u: goto label_255674;
            case 0x255678u: goto label_255678;
            case 0x25567Cu: goto label_25567c;
            case 0x255680u: goto label_255680;
            case 0x255684u: goto label_255684;
            case 0x255688u: goto label_255688;
            case 0x25568Cu: goto label_25568c;
            case 0x255690u: goto label_255690;
            case 0x255694u: goto label_255694;
            case 0x255698u: goto label_255698;
            case 0x25569Cu: goto label_25569c;
            case 0x2556A0u: goto label_2556a0;
            case 0x2556A4u: goto label_2556a4;
            case 0x2556A8u: goto label_2556a8;
            case 0x2556ACu: goto label_2556ac;
            case 0x2556B0u: goto label_2556b0;
            case 0x2556B4u: goto label_2556b4;
            case 0x2556B8u: goto label_2556b8;
            case 0x2556BCu: goto label_2556bc;
            case 0x2556C0u: goto label_2556c0;
            case 0x2556C4u: goto label_2556c4;
            case 0x2556C8u: goto label_2556c8;
            case 0x2556CCu: goto label_2556cc;
            case 0x2556D0u: goto label_2556d0;
            case 0x2556D4u: goto label_2556d4;
            case 0x2556D8u: goto label_2556d8;
            case 0x2556DCu: goto label_2556dc;
            case 0x2556E0u: goto label_2556e0;
            case 0x2556E4u: goto label_2556e4;
            case 0x2556E8u: goto label_2556e8;
            case 0x2556ECu: goto label_2556ec;
            case 0x2556F0u: goto label_2556f0;
            case 0x2556F4u: goto label_2556f4;
            case 0x2556F8u: goto label_2556f8;
            case 0x2556FCu: goto label_2556fc;
            case 0x255700u: goto label_255700;
            case 0x255704u: goto label_255704;
            case 0x255708u: goto label_255708;
            case 0x25570Cu: goto label_25570c;
            case 0x255710u: goto label_255710;
            case 0x255714u: goto label_255714;
            case 0x255718u: goto label_255718;
            case 0x25571Cu: goto label_25571c;
            case 0x255720u: goto label_255720;
            case 0x255724u: goto label_255724;
            case 0x255728u: goto label_255728;
            case 0x25572Cu: goto label_25572c;
            case 0x255730u: goto label_255730;
            case 0x255734u: goto label_255734;
            case 0x255738u: goto label_255738;
            case 0x25573Cu: goto label_25573c;
            case 0x255740u: goto label_255740;
            case 0x255744u: goto label_255744;
            case 0x255748u: goto label_255748;
            case 0x25574Cu: goto label_25574c;
            case 0x255750u: goto label_255750;
            case 0x255754u: goto label_255754;
            case 0x255758u: goto label_255758;
            case 0x25575Cu: goto label_25575c;
            case 0x255760u: goto label_255760;
            case 0x255764u: goto label_255764;
            case 0x255768u: goto label_255768;
            case 0x25576Cu: goto label_25576c;
            case 0x255770u: goto label_255770;
            case 0x255774u: goto label_255774;
            case 0x255778u: goto label_255778;
            case 0x25577Cu: goto label_25577c;
            case 0x255780u: goto label_255780;
            case 0x255784u: goto label_255784;
            case 0x255788u: goto label_255788;
            case 0x25578Cu: goto label_25578c;
            case 0x255790u: goto label_255790;
            case 0x255794u: goto label_255794;
            case 0x255798u: goto label_255798;
            case 0x25579Cu: goto label_25579c;
            case 0x2557A0u: goto label_2557a0;
            case 0x2557A4u: goto label_2557a4;
            case 0x2557A8u: goto label_2557a8;
            case 0x2557ACu: goto label_2557ac;
            case 0x2557B0u: goto label_2557b0;
            case 0x2557B4u: goto label_2557b4;
            case 0x2557B8u: goto label_2557b8;
            case 0x2557BCu: goto label_2557bc;
            case 0x2557C0u: goto label_2557c0;
            case 0x2557C4u: goto label_2557c4;
            case 0x2557C8u: goto label_2557c8;
            case 0x2557CCu: goto label_2557cc;
            case 0x2557D0u: goto label_2557d0;
            case 0x2557D4u: goto label_2557d4;
            case 0x2557D8u: goto label_2557d8;
            case 0x2557DCu: goto label_2557dc;
            case 0x2557E0u: goto label_2557e0;
            case 0x2557E4u: goto label_2557e4;
            case 0x2557E8u: goto label_2557e8;
            case 0x2557ECu: goto label_2557ec;
            case 0x2557F0u: goto label_2557f0;
            case 0x2557F4u: goto label_2557f4;
            case 0x2557F8u: goto label_2557f8;
            case 0x2557FCu: goto label_2557fc;
            case 0x255800u: goto label_255800;
            case 0x255804u: goto label_255804;
            case 0x255808u: goto label_255808;
            case 0x25580Cu: goto label_25580c;
            case 0x255810u: goto label_255810;
            case 0x255814u: goto label_255814;
            case 0x255818u: goto label_255818;
            case 0x25581Cu: goto label_25581c;
            case 0x255820u: goto label_255820;
            case 0x255824u: goto label_255824;
            case 0x255828u: goto label_255828;
            case 0x25582Cu: goto label_25582c;
            case 0x255830u: goto label_255830;
            case 0x255834u: goto label_255834;
            case 0x255838u: goto label_255838;
            case 0x25583Cu: goto label_25583c;
            case 0x255840u: goto label_255840;
            case 0x255844u: goto label_255844;
            case 0x255848u: goto label_255848;
            case 0x25584Cu: goto label_25584c;
            case 0x255850u: goto label_255850;
            case 0x255854u: goto label_255854;
            case 0x255858u: goto label_255858;
            case 0x25585Cu: goto label_25585c;
            case 0x255860u: goto label_255860;
            case 0x255864u: goto label_255864;
            case 0x255868u: goto label_255868;
            case 0x25586Cu: goto label_25586c;
            case 0x255870u: goto label_255870;
            case 0x255874u: goto label_255874;
            case 0x255878u: goto label_255878;
            case 0x25587Cu: goto label_25587c;
            case 0x255880u: goto label_255880;
            case 0x255884u: goto label_255884;
            case 0x255888u: goto label_255888;
            case 0x25588Cu: goto label_25588c;
            case 0x255890u: goto label_255890;
            case 0x255894u: goto label_255894;
            case 0x255898u: goto label_255898;
            case 0x25589Cu: goto label_25589c;
            case 0x2558A0u: goto label_2558a0;
            case 0x2558A4u: goto label_2558a4;
            case 0x2558A8u: goto label_2558a8;
            case 0x2558ACu: goto label_2558ac;
            case 0x2558B0u: goto label_2558b0;
            case 0x2558B4u: goto label_2558b4;
            case 0x2558B8u: goto label_2558b8;
            case 0x2558BCu: goto label_2558bc;
            case 0x2558C0u: goto label_2558c0;
            case 0x2558C4u: goto label_2558c4;
            case 0x2558C8u: goto label_2558c8;
            case 0x2558CCu: goto label_2558cc;
            case 0x2558D0u: goto label_2558d0;
            case 0x2558D4u: goto label_2558d4;
            case 0x2558D8u: goto label_2558d8;
            case 0x2558DCu: goto label_2558dc;
            case 0x2558E0u: goto label_2558e0;
            case 0x2558E4u: goto label_2558e4;
            case 0x2558E8u: goto label_2558e8;
            case 0x2558ECu: goto label_2558ec;
            case 0x2558F0u: goto label_2558f0;
            case 0x2558F4u: goto label_2558f4;
            case 0x2558F8u: goto label_2558f8;
            case 0x2558FCu: goto label_2558fc;
            case 0x255900u: goto label_255900;
            case 0x255904u: goto label_255904;
            case 0x255908u: goto label_255908;
            case 0x25590Cu: goto label_25590c;
            case 0x255910u: goto label_255910;
            case 0x255914u: goto label_255914;
            case 0x255918u: goto label_255918;
            case 0x25591Cu: goto label_25591c;
            case 0x255920u: goto label_255920;
            case 0x255924u: goto label_255924;
            case 0x255928u: goto label_255928;
            case 0x25592Cu: goto label_25592c;
            case 0x255930u: goto label_255930;
            case 0x255934u: goto label_255934;
            case 0x255938u: goto label_255938;
            case 0x25593Cu: goto label_25593c;
            case 0x255940u: goto label_255940;
            case 0x255944u: goto label_255944;
            case 0x255948u: goto label_255948;
            case 0x25594Cu: goto label_25594c;
            case 0x255950u: goto label_255950;
            case 0x255954u: goto label_255954;
            case 0x255958u: goto label_255958;
            case 0x25595Cu: goto label_25595c;
            case 0x255960u: goto label_255960;
            case 0x255964u: goto label_255964;
            case 0x255968u: goto label_255968;
            case 0x25596Cu: goto label_25596c;
            case 0x255970u: goto label_255970;
            case 0x255974u: goto label_255974;
            case 0x255978u: goto label_255978;
            case 0x25597Cu: goto label_25597c;
            case 0x255980u: goto label_255980;
            case 0x255984u: goto label_255984;
            case 0x255988u: goto label_255988;
            case 0x25598Cu: goto label_25598c;
            case 0x255990u: goto label_255990;
            case 0x255994u: goto label_255994;
            case 0x255998u: goto label_255998;
            case 0x25599Cu: goto label_25599c;
            case 0x2559A0u: goto label_2559a0;
            case 0x2559A4u: goto label_2559a4;
            case 0x2559A8u: goto label_2559a8;
            case 0x2559ACu: goto label_2559ac;
            case 0x2559B0u: goto label_2559b0;
            case 0x2559B4u: goto label_2559b4;
            case 0x2559B8u: goto label_2559b8;
            case 0x2559BCu: goto label_2559bc;
            case 0x2559C0u: goto label_2559c0;
            case 0x2559C4u: goto label_2559c4;
            case 0x2559C8u: goto label_2559c8;
            case 0x2559CCu: goto label_2559cc;
            case 0x2559D0u: goto label_2559d0;
            case 0x2559D4u: goto label_2559d4;
            case 0x2559D8u: goto label_2559d8;
            case 0x2559DCu: goto label_2559dc;
            case 0x2559E0u: goto label_2559e0;
            case 0x2559E4u: goto label_2559e4;
            case 0x2559E8u: goto label_2559e8;
            case 0x2559ECu: goto label_2559ec;
            case 0x2559F0u: goto label_2559f0;
            case 0x2559F4u: goto label_2559f4;
            case 0x2559F8u: goto label_2559f8;
            case 0x2559FCu: goto label_2559fc;
            case 0x255A00u: goto label_255a00;
            case 0x255A04u: goto label_255a04;
            case 0x255A08u: goto label_255a08;
            case 0x255A0Cu: goto label_255a0c;
            case 0x255A10u: goto label_255a10;
            case 0x255A14u: goto label_255a14;
            case 0x255A18u: goto label_255a18;
            case 0x255A1Cu: goto label_255a1c;
            case 0x255A20u: goto label_255a20;
            case 0x255A24u: goto label_255a24;
            case 0x255A28u: goto label_255a28;
            case 0x255A2Cu: goto label_255a2c;
            case 0x255A30u: goto label_255a30;
            case 0x255A34u: goto label_255a34;
            case 0x255A38u: goto label_255a38;
            case 0x255A3Cu: goto label_255a3c;
            case 0x255A40u: goto label_255a40;
            case 0x255A44u: goto label_255a44;
            case 0x255A48u: goto label_255a48;
            case 0x255A4Cu: goto label_255a4c;
            case 0x255A50u: goto label_255a50;
            case 0x255A54u: goto label_255a54;
            case 0x255A58u: goto label_255a58;
            case 0x255A5Cu: goto label_255a5c;
            case 0x255A60u: goto label_255a60;
            case 0x255A64u: goto label_255a64;
            case 0x255A68u: goto label_255a68;
            case 0x255A6Cu: goto label_255a6c;
            case 0x255A70u: goto label_255a70;
            case 0x255A74u: goto label_255a74;
            case 0x255A78u: goto label_255a78;
            case 0x255A7Cu: goto label_255a7c;
            case 0x255A80u: goto label_255a80;
            case 0x255A84u: goto label_255a84;
            case 0x255A88u: goto label_255a88;
            case 0x255A8Cu: goto label_255a8c;
            case 0x255A90u: goto label_255a90;
            case 0x255A94u: goto label_255a94;
            case 0x255A98u: goto label_255a98;
            case 0x255A9Cu: goto label_255a9c;
            case 0x255AA0u: goto label_255aa0;
            case 0x255AA4u: goto label_255aa4;
            case 0x255AA8u: goto label_255aa8;
            case 0x255AACu: goto label_255aac;
            case 0x255AB0u: goto label_255ab0;
            case 0x255AB4u: goto label_255ab4;
            case 0x255AB8u: goto label_255ab8;
            case 0x255ABCu: goto label_255abc;
            case 0x255AC0u: goto label_255ac0;
            case 0x255AC4u: goto label_255ac4;
            case 0x255AC8u: goto label_255ac8;
            case 0x255ACCu: goto label_255acc;
            case 0x255AD0u: goto label_255ad0;
            case 0x255AD4u: goto label_255ad4;
            case 0x255AD8u: goto label_255ad8;
            case 0x255ADCu: goto label_255adc;
            case 0x255AE0u: goto label_255ae0;
            case 0x255AE4u: goto label_255ae4;
            case 0x255AE8u: goto label_255ae8;
            case 0x255AECu: goto label_255aec;
            case 0x255AF0u: goto label_255af0;
            case 0x255AF4u: goto label_255af4;
            case 0x255AF8u: goto label_255af8;
            case 0x255AFCu: goto label_255afc;
            case 0x255B00u: goto label_255b00;
            case 0x255B04u: goto label_255b04;
            case 0x255B08u: goto label_255b08;
            case 0x255B0Cu: goto label_255b0c;
            case 0x255B10u: goto label_255b10;
            case 0x255B14u: goto label_255b14;
            case 0x255B18u: goto label_255b18;
            case 0x255B1Cu: goto label_255b1c;
            case 0x255B20u: goto label_255b20;
            case 0x255B24u: goto label_255b24;
            case 0x255B28u: goto label_255b28;
            case 0x255B2Cu: goto label_255b2c;
            case 0x255B30u: goto label_255b30;
            case 0x255B34u: goto label_255b34;
            case 0x255B38u: goto label_255b38;
            case 0x255B3Cu: goto label_255b3c;
            case 0x255B40u: goto label_255b40;
            case 0x255B44u: goto label_255b44;
            case 0x255B48u: goto label_255b48;
            case 0x255B4Cu: goto label_255b4c;
            case 0x255B50u: goto label_255b50;
            case 0x255B54u: goto label_255b54;
            case 0x255B58u: goto label_255b58;
            case 0x255B5Cu: goto label_255b5c;
            case 0x255B60u: goto label_255b60;
            case 0x255B64u: goto label_255b64;
            case 0x255B68u: goto label_255b68;
            case 0x255B6Cu: goto label_255b6c;
            case 0x255B70u: goto label_255b70;
            case 0x255B74u: goto label_255b74;
            case 0x255B78u: goto label_255b78;
            case 0x255B7Cu: goto label_255b7c;
            case 0x255B80u: goto label_255b80;
            case 0x255B84u: goto label_255b84;
            case 0x255B88u: goto label_255b88;
            case 0x255B8Cu: goto label_255b8c;
            case 0x255B90u: goto label_255b90;
            case 0x255B94u: goto label_255b94;
            case 0x255B98u: goto label_255b98;
            case 0x255B9Cu: goto label_255b9c;
            case 0x255BA0u: goto label_255ba0;
            case 0x255BA4u: goto label_255ba4;
            case 0x255BA8u: goto label_255ba8;
            case 0x255BACu: goto label_255bac;
            case 0x255BB0u: goto label_255bb0;
            case 0x255BB4u: goto label_255bb4;
            case 0x255BB8u: goto label_255bb8;
            case 0x255BBCu: goto label_255bbc;
            case 0x255BC0u: goto label_255bc0;
            case 0x255BC4u: goto label_255bc4;
            case 0x255BC8u: goto label_255bc8;
            case 0x255BCCu: goto label_255bcc;
            case 0x255BD0u: goto label_255bd0;
            case 0x255BD4u: goto label_255bd4;
            case 0x255BD8u: goto label_255bd8;
            case 0x255BDCu: goto label_255bdc;
            case 0x255BE0u: goto label_255be0;
            case 0x255BE4u: goto label_255be4;
            case 0x255BE8u: goto label_255be8;
            case 0x255BECu: goto label_255bec;
            case 0x255BF0u: goto label_255bf0;
            case 0x255BF4u: goto label_255bf4;
            case 0x255BF8u: goto label_255bf8;
            case 0x255BFCu: goto label_255bfc;
            case 0x255C00u: goto label_255c00;
            case 0x255C04u: goto label_255c04;
            case 0x255C08u: goto label_255c08;
            case 0x255C0Cu: goto label_255c0c;
            case 0x255C10u: goto label_255c10;
            case 0x255C14u: goto label_255c14;
            case 0x255C18u: goto label_255c18;
            case 0x255C1Cu: goto label_255c1c;
            case 0x255C20u: goto label_255c20;
            case 0x255C24u: goto label_255c24;
            case 0x255C28u: goto label_255c28;
            case 0x255C2Cu: goto label_255c2c;
            case 0x255C30u: goto label_255c30;
            case 0x255C34u: goto label_255c34;
            case 0x255C38u: goto label_255c38;
            case 0x255C3Cu: goto label_255c3c;
            case 0x255C40u: goto label_255c40;
            case 0x255C44u: goto label_255c44;
            case 0x255C48u: goto label_255c48;
            case 0x255C4Cu: goto label_255c4c;
            case 0x255C50u: goto label_255c50;
            case 0x255C54u: goto label_255c54;
            case 0x255C58u: goto label_255c58;
            case 0x255C5Cu: goto label_255c5c;
            case 0x255C60u: goto label_255c60;
            case 0x255C64u: goto label_255c64;
            case 0x255C68u: goto label_255c68;
            case 0x255C6Cu: goto label_255c6c;
            case 0x255C70u: goto label_255c70;
            case 0x255C74u: goto label_255c74;
            case 0x255C78u: goto label_255c78;
            case 0x255C7Cu: goto label_255c7c;
            case 0x255C80u: goto label_255c80;
            case 0x255C84u: goto label_255c84;
            case 0x255C88u: goto label_255c88;
            case 0x255C8Cu: goto label_255c8c;
            case 0x255C90u: goto label_255c90;
            case 0x255C94u: goto label_255c94;
            case 0x255C98u: goto label_255c98;
            case 0x255C9Cu: goto label_255c9c;
            case 0x255CA0u: goto label_255ca0;
            case 0x255CA4u: goto label_255ca4;
            case 0x255CA8u: goto label_255ca8;
            case 0x255CACu: goto label_255cac;
            case 0x255CB0u: goto label_255cb0;
            case 0x255CB4u: goto label_255cb4;
            case 0x255CB8u: goto label_255cb8;
            case 0x255CBCu: goto label_255cbc;
            case 0x255CC0u: goto label_255cc0;
            case 0x255CC4u: goto label_255cc4;
            case 0x255CC8u: goto label_255cc8;
            case 0x255CCCu: goto label_255ccc;
            case 0x255CD0u: goto label_255cd0;
            case 0x255CD4u: goto label_255cd4;
            case 0x255CD8u: goto label_255cd8;
            case 0x255CDCu: goto label_255cdc;
            case 0x255CE0u: goto label_255ce0;
            case 0x255CE4u: goto label_255ce4;
            case 0x255CE8u: goto label_255ce8;
            case 0x255CECu: goto label_255cec;
            case 0x255CF0u: goto label_255cf0;
            case 0x255CF4u: goto label_255cf4;
            case 0x255CF8u: goto label_255cf8;
            case 0x255CFCu: goto label_255cfc;
            case 0x255D00u: goto label_255d00;
            case 0x255D04u: goto label_255d04;
            case 0x255D08u: goto label_255d08;
            case 0x255D0Cu: goto label_255d0c;
            case 0x255D10u: goto label_255d10;
            case 0x255D14u: goto label_255d14;
            case 0x255D18u: goto label_255d18;
            case 0x255D1Cu: goto label_255d1c;
            case 0x255D20u: goto label_255d20;
            case 0x255D24u: goto label_255d24;
            case 0x255D28u: goto label_255d28;
            case 0x255D2Cu: goto label_255d2c;
            case 0x255D30u: goto label_255d30;
            case 0x255D34u: goto label_255d34;
            case 0x255D38u: goto label_255d38;
            case 0x255D3Cu: goto label_255d3c;
            case 0x255D40u: goto label_255d40;
            case 0x255D44u: goto label_255d44;
            case 0x255D48u: goto label_255d48;
            case 0x255D4Cu: goto label_255d4c;
            case 0x255D50u: goto label_255d50;
            case 0x255D54u: goto label_255d54;
            case 0x255D58u: goto label_255d58;
            case 0x255D5Cu: goto label_255d5c;
            case 0x255D60u: goto label_255d60;
            case 0x255D64u: goto label_255d64;
            case 0x255D68u: goto label_255d68;
            case 0x255D6Cu: goto label_255d6c;
            case 0x255D70u: goto label_255d70;
            case 0x255D74u: goto label_255d74;
            case 0x255D78u: goto label_255d78;
            case 0x255D7Cu: goto label_255d7c;
            case 0x255D80u: goto label_255d80;
            case 0x255D84u: goto label_255d84;
            case 0x255D88u: goto label_255d88;
            case 0x255D8Cu: goto label_255d8c;
            case 0x255D90u: goto label_255d90;
            case 0x255D94u: goto label_255d94;
            case 0x255D98u: goto label_255d98;
            case 0x255D9Cu: goto label_255d9c;
            case 0x255DA0u: goto label_255da0;
            case 0x255DA4u: goto label_255da4;
            case 0x255DA8u: goto label_255da8;
            case 0x255DACu: goto label_255dac;
            case 0x255DB0u: goto label_255db0;
            case 0x255DB4u: goto label_255db4;
            case 0x255DB8u: goto label_255db8;
            case 0x255DBCu: goto label_255dbc;
            case 0x255DC0u: goto label_255dc0;
            case 0x255DC4u: goto label_255dc4;
            case 0x255DC8u: goto label_255dc8;
            case 0x255DCCu: goto label_255dcc;
            case 0x255DD0u: goto label_255dd0;
            case 0x255DD4u: goto label_255dd4;
            case 0x255DD8u: goto label_255dd8;
            case 0x255DDCu: goto label_255ddc;
            case 0x255DE0u: goto label_255de0;
            case 0x255DE4u: goto label_255de4;
            case 0x255DE8u: goto label_255de8;
            case 0x255DECu: goto label_255dec;
            case 0x255DF0u: goto label_255df0;
            case 0x255DF4u: goto label_255df4;
            case 0x255DF8u: goto label_255df8;
            case 0x255DFCu: goto label_255dfc;
            case 0x255E00u: goto label_255e00;
            case 0x255E04u: goto label_255e04;
            case 0x255E08u: goto label_255e08;
            case 0x255E0Cu: goto label_255e0c;
            case 0x255E10u: goto label_255e10;
            case 0x255E14u: goto label_255e14;
            case 0x255E18u: goto label_255e18;
            case 0x255E1Cu: goto label_255e1c;
            case 0x255E20u: goto label_255e20;
            case 0x255E24u: goto label_255e24;
            case 0x255E28u: goto label_255e28;
            case 0x255E2Cu: goto label_255e2c;
            case 0x255E30u: goto label_255e30;
            case 0x255E34u: goto label_255e34;
            case 0x255E38u: goto label_255e38;
            case 0x255E3Cu: goto label_255e3c;
            case 0x255E40u: goto label_255e40;
            case 0x255E44u: goto label_255e44;
            case 0x255E48u: goto label_255e48;
            case 0x255E4Cu: goto label_255e4c;
            case 0x255E50u: goto label_255e50;
            case 0x255E54u: goto label_255e54;
            case 0x255E58u: goto label_255e58;
            case 0x255E5Cu: goto label_255e5c;
            case 0x255E60u: goto label_255e60;
            case 0x255E64u: goto label_255e64;
            case 0x255E68u: goto label_255e68;
            case 0x255E6Cu: goto label_255e6c;
            case 0x255E70u: goto label_255e70;
            case 0x255E74u: goto label_255e74;
            case 0x255E78u: goto label_255e78;
            case 0x255E7Cu: goto label_255e7c;
            case 0x255E80u: goto label_255e80;
            case 0x255E84u: goto label_255e84;
            case 0x255E88u: goto label_255e88;
            case 0x255E8Cu: goto label_255e8c;
            case 0x255E90u: goto label_255e90;
            case 0x255E94u: goto label_255e94;
            case 0x255E98u: goto label_255e98;
            case 0x255E9Cu: goto label_255e9c;
            case 0x255EA0u: goto label_255ea0;
            case 0x255EA4u: goto label_255ea4;
            case 0x255EA8u: goto label_255ea8;
            case 0x255EACu: goto label_255eac;
            case 0x255EB0u: goto label_255eb0;
            case 0x255EB4u: goto label_255eb4;
            case 0x255EB8u: goto label_255eb8;
            case 0x255EBCu: goto label_255ebc;
            case 0x255EC0u: goto label_255ec0;
            case 0x255EC4u: goto label_255ec4;
            case 0x255EC8u: goto label_255ec8;
            case 0x255ECCu: goto label_255ecc;
            case 0x255ED0u: goto label_255ed0;
            case 0x255ED4u: goto label_255ed4;
            case 0x255ED8u: goto label_255ed8;
            case 0x255EDCu: goto label_255edc;
            case 0x255EE0u: goto label_255ee0;
            case 0x255EE4u: goto label_255ee4;
            case 0x255EE8u: goto label_255ee8;
            case 0x255EECu: goto label_255eec;
            case 0x255EF0u: goto label_255ef0;
            case 0x255EF4u: goto label_255ef4;
            case 0x255EF8u: goto label_255ef8;
            case 0x255EFCu: goto label_255efc;
            case 0x255F00u: goto label_255f00;
            case 0x255F04u: goto label_255f04;
            case 0x255F08u: goto label_255f08;
            case 0x255F0Cu: goto label_255f0c;
            case 0x255F10u: goto label_255f10;
            case 0x255F14u: goto label_255f14;
            case 0x255F18u: goto label_255f18;
            case 0x255F1Cu: goto label_255f1c;
            case 0x255F20u: goto label_255f20;
            case 0x255F24u: goto label_255f24;
            case 0x255F28u: goto label_255f28;
            case 0x255F2Cu: goto label_255f2c;
            case 0x255F30u: goto label_255f30;
            case 0x255F34u: goto label_255f34;
            case 0x255F38u: goto label_255f38;
            case 0x255F3Cu: goto label_255f3c;
            case 0x255F40u: goto label_255f40;
            case 0x255F44u: goto label_255f44;
            case 0x255F48u: goto label_255f48;
            case 0x255F4Cu: goto label_255f4c;
            case 0x255F50u: goto label_255f50;
            case 0x255F54u: goto label_255f54;
            case 0x255F58u: goto label_255f58;
            case 0x255F5Cu: goto label_255f5c;
            case 0x255F60u: goto label_255f60;
            case 0x255F64u: goto label_255f64;
            case 0x255F68u: goto label_255f68;
            case 0x255F6Cu: goto label_255f6c;
            case 0x255F70u: goto label_255f70;
            case 0x255F74u: goto label_255f74;
            case 0x255F78u: goto label_255f78;
            case 0x255F7Cu: goto label_255f7c;
            case 0x255F80u: goto label_255f80;
            case 0x255F84u: goto label_255f84;
            case 0x255F88u: goto label_255f88;
            case 0x255F8Cu: goto label_255f8c;
            case 0x255F90u: goto label_255f90;
            case 0x255F94u: goto label_255f94;
            case 0x255F98u: goto label_255f98;
            case 0x255F9Cu: goto label_255f9c;
            case 0x255FA0u: goto label_255fa0;
            case 0x255FA4u: goto label_255fa4;
            case 0x255FA8u: goto label_255fa8;
            case 0x255FACu: goto label_255fac;
            case 0x255FB0u: goto label_255fb0;
            case 0x255FB4u: goto label_255fb4;
            case 0x255FB8u: goto label_255fb8;
            case 0x255FBCu: goto label_255fbc;
            case 0x255FC0u: goto label_255fc0;
            case 0x255FC4u: goto label_255fc4;
            case 0x255FC8u: goto label_255fc8;
            case 0x255FCCu: goto label_255fcc;
            case 0x255FD0u: goto label_255fd0;
            case 0x255FD4u: goto label_255fd4;
            case 0x255FD8u: goto label_255fd8;
            case 0x255FDCu: goto label_255fdc;
            case 0x255FE0u: goto label_255fe0;
            case 0x255FE4u: goto label_255fe4;
            case 0x255FE8u: goto label_255fe8;
            case 0x255FECu: goto label_255fec;
            case 0x255FF0u: goto label_255ff0;
            case 0x255FF4u: goto label_255ff4;
            case 0x255FF8u: goto label_255ff8;
            case 0x255FFCu: goto label_255ffc;
            case 0x256000u: goto label_256000;
            case 0x256004u: goto label_256004;
            case 0x256008u: goto label_256008;
            case 0x25600Cu: goto label_25600c;
            case 0x256010u: goto label_256010;
            case 0x256014u: goto label_256014;
            case 0x256018u: goto label_256018;
            case 0x25601Cu: goto label_25601c;
            case 0x256020u: goto label_256020;
            case 0x256024u: goto label_256024;
            case 0x256028u: goto label_256028;
            case 0x25602Cu: goto label_25602c;
            case 0x256030u: goto label_256030;
            case 0x256034u: goto label_256034;
            case 0x256038u: goto label_256038;
            case 0x25603Cu: goto label_25603c;
            case 0x256040u: goto label_256040;
            case 0x256044u: goto label_256044;
            case 0x256048u: goto label_256048;
            case 0x25604Cu: goto label_25604c;
            case 0x256050u: goto label_256050;
            case 0x256054u: goto label_256054;
            case 0x256058u: goto label_256058;
            case 0x25605Cu: goto label_25605c;
            case 0x256060u: goto label_256060;
            case 0x256064u: goto label_256064;
            case 0x256068u: goto label_256068;
            case 0x25606Cu: goto label_25606c;
            case 0x256070u: goto label_256070;
            case 0x256074u: goto label_256074;
            case 0x256078u: goto label_256078;
            case 0x25607Cu: goto label_25607c;
            case 0x256080u: goto label_256080;
            case 0x256084u: goto label_256084;
            case 0x256088u: goto label_256088;
            case 0x25608Cu: goto label_25608c;
            case 0x256090u: goto label_256090;
            case 0x256094u: goto label_256094;
            case 0x256098u: goto label_256098;
            case 0x25609Cu: goto label_25609c;
            case 0x2560A0u: goto label_2560a0;
            case 0x2560A4u: goto label_2560a4;
            case 0x2560A8u: goto label_2560a8;
            case 0x2560ACu: goto label_2560ac;
            case 0x2560B0u: goto label_2560b0;
            case 0x2560B4u: goto label_2560b4;
            case 0x2560B8u: goto label_2560b8;
            case 0x2560BCu: goto label_2560bc;
            case 0x2560C0u: goto label_2560c0;
            case 0x2560C4u: goto label_2560c4;
            case 0x2560C8u: goto label_2560c8;
            case 0x2560CCu: goto label_2560cc;
            case 0x2560D0u: goto label_2560d0;
            case 0x2560D4u: goto label_2560d4;
            case 0x2560D8u: goto label_2560d8;
            case 0x2560DCu: goto label_2560dc;
            case 0x2560E0u: goto label_2560e0;
            case 0x2560E4u: goto label_2560e4;
            case 0x2560E8u: goto label_2560e8;
            case 0x2560ECu: goto label_2560ec;
            case 0x2560F0u: goto label_2560f0;
            case 0x2560F4u: goto label_2560f4;
            case 0x2560F8u: goto label_2560f8;
            case 0x2560FCu: goto label_2560fc;
            case 0x256100u: goto label_256100;
            case 0x256104u: goto label_256104;
            case 0x256108u: goto label_256108;
            case 0x25610Cu: goto label_25610c;
            case 0x256110u: goto label_256110;
            case 0x256114u: goto label_256114;
            case 0x256118u: goto label_256118;
            case 0x25611Cu: goto label_25611c;
            case 0x256120u: goto label_256120;
            case 0x256124u: goto label_256124;
            case 0x256128u: goto label_256128;
            case 0x25612Cu: goto label_25612c;
            case 0x256130u: goto label_256130;
            case 0x256134u: goto label_256134;
            case 0x256138u: goto label_256138;
            case 0x25613Cu: goto label_25613c;
            case 0x256140u: goto label_256140;
            case 0x256144u: goto label_256144;
            case 0x256148u: goto label_256148;
            case 0x25614Cu: goto label_25614c;
            case 0x256150u: goto label_256150;
            case 0x256154u: goto label_256154;
            case 0x256158u: goto label_256158;
            case 0x25615Cu: goto label_25615c;
            case 0x256160u: goto label_256160;
            case 0x256164u: goto label_256164;
            case 0x256168u: goto label_256168;
            case 0x25616Cu: goto label_25616c;
            case 0x256170u: goto label_256170;
            case 0x256174u: goto label_256174;
            case 0x256178u: goto label_256178;
            case 0x25617Cu: goto label_25617c;
            case 0x256180u: goto label_256180;
            case 0x256184u: goto label_256184;
            case 0x256188u: goto label_256188;
            case 0x25618Cu: goto label_25618c;
            case 0x256190u: goto label_256190;
            case 0x256194u: goto label_256194;
            case 0x256198u: goto label_256198;
            case 0x25619Cu: goto label_25619c;
            case 0x2561A0u: goto label_2561a0;
            case 0x2561A4u: goto label_2561a4;
            case 0x2561A8u: goto label_2561a8;
            case 0x2561ACu: goto label_2561ac;
            case 0x2561B0u: goto label_2561b0;
            case 0x2561B4u: goto label_2561b4;
            case 0x2561B8u: goto label_2561b8;
            case 0x2561BCu: goto label_2561bc;
            case 0x2561C0u: goto label_2561c0;
            case 0x2561C4u: goto label_2561c4;
            case 0x2561C8u: goto label_2561c8;
            case 0x2561CCu: goto label_2561cc;
            case 0x2561D0u: goto label_2561d0;
            case 0x2561D4u: goto label_2561d4;
            case 0x2561D8u: goto label_2561d8;
            case 0x2561DCu: goto label_2561dc;
            case 0x2561E0u: goto label_2561e0;
            case 0x2561E4u: goto label_2561e4;
            case 0x2561E8u: goto label_2561e8;
            case 0x2561ECu: goto label_2561ec;
            case 0x2561F0u: goto label_2561f0;
            case 0x2561F4u: goto label_2561f4;
            case 0x2561F8u: goto label_2561f8;
            case 0x2561FCu: goto label_2561fc;
            case 0x256200u: goto label_256200;
            case 0x256204u: goto label_256204;
            case 0x256208u: goto label_256208;
            case 0x25620Cu: goto label_25620c;
            case 0x256210u: goto label_256210;
            case 0x256214u: goto label_256214;
            case 0x256218u: goto label_256218;
            case 0x25621Cu: goto label_25621c;
            case 0x256220u: goto label_256220;
            case 0x256224u: goto label_256224;
            case 0x256228u: goto label_256228;
            case 0x25622Cu: goto label_25622c;
            case 0x256230u: goto label_256230;
            case 0x256234u: goto label_256234;
            case 0x256238u: goto label_256238;
            case 0x25623Cu: goto label_25623c;
            case 0x256240u: goto label_256240;
            case 0x256244u: goto label_256244;
            case 0x256248u: goto label_256248;
            case 0x25624Cu: goto label_25624c;
            case 0x256250u: goto label_256250;
            case 0x256254u: goto label_256254;
            case 0x256258u: goto label_256258;
            case 0x25625Cu: goto label_25625c;
            case 0x256260u: goto label_256260;
            case 0x256264u: goto label_256264;
            case 0x256268u: goto label_256268;
            case 0x25626Cu: goto label_25626c;
            case 0x256270u: goto label_256270;
            case 0x256274u: goto label_256274;
            case 0x256278u: goto label_256278;
            case 0x25627Cu: goto label_25627c;
            case 0x256280u: goto label_256280;
            case 0x256284u: goto label_256284;
            case 0x256288u: goto label_256288;
            case 0x25628Cu: goto label_25628c;
            case 0x256290u: goto label_256290;
            case 0x256294u: goto label_256294;
            case 0x256298u: goto label_256298;
            case 0x25629Cu: goto label_25629c;
            case 0x2562A0u: goto label_2562a0;
            case 0x2562A4u: goto label_2562a4;
            case 0x2562A8u: goto label_2562a8;
            case 0x2562ACu: goto label_2562ac;
            case 0x2562B0u: goto label_2562b0;
            case 0x2562B4u: goto label_2562b4;
            case 0x2562B8u: goto label_2562b8;
            case 0x2562BCu: goto label_2562bc;
            case 0x2562C0u: goto label_2562c0;
            case 0x2562C4u: goto label_2562c4;
            case 0x2562C8u: goto label_2562c8;
            case 0x2562CCu: goto label_2562cc;
            case 0x2562D0u: goto label_2562d0;
            case 0x2562D4u: goto label_2562d4;
            case 0x2562D8u: goto label_2562d8;
            case 0x2562DCu: goto label_2562dc;
            case 0x2562E0u: goto label_2562e0;
            case 0x2562E4u: goto label_2562e4;
            case 0x2562E8u: goto label_2562e8;
            case 0x2562ECu: goto label_2562ec;
            case 0x2562F0u: goto label_2562f0;
            case 0x2562F4u: goto label_2562f4;
            case 0x2562F8u: goto label_2562f8;
            case 0x2562FCu: goto label_2562fc;
            case 0x256300u: goto label_256300;
            case 0x256304u: goto label_256304;
            case 0x256308u: goto label_256308;
            case 0x25630Cu: goto label_25630c;
            case 0x256310u: goto label_256310;
            case 0x256314u: goto label_256314;
            case 0x256318u: goto label_256318;
            case 0x25631Cu: goto label_25631c;
            case 0x256320u: goto label_256320;
            case 0x256324u: goto label_256324;
            case 0x256328u: goto label_256328;
            case 0x25632Cu: goto label_25632c;
            case 0x256330u: goto label_256330;
            case 0x256334u: goto label_256334;
            case 0x256338u: goto label_256338;
            case 0x25633Cu: goto label_25633c;
            case 0x256340u: goto label_256340;
            case 0x256344u: goto label_256344;
            case 0x256348u: goto label_256348;
            case 0x25634Cu: goto label_25634c;
            case 0x256350u: goto label_256350;
            case 0x256354u: goto label_256354;
            case 0x256358u: goto label_256358;
            case 0x25635Cu: goto label_25635c;
            case 0x256360u: goto label_256360;
            case 0x256364u: goto label_256364;
            case 0x256368u: goto label_256368;
            case 0x25636Cu: goto label_25636c;
            case 0x256370u: goto label_256370;
            case 0x256374u: goto label_256374;
            case 0x256378u: goto label_256378;
            case 0x25637Cu: goto label_25637c;
            case 0x256380u: goto label_256380;
            case 0x256384u: goto label_256384;
            case 0x256388u: goto label_256388;
            case 0x25638Cu: goto label_25638c;
            case 0x256390u: goto label_256390;
            case 0x256394u: goto label_256394;
            case 0x256398u: goto label_256398;
            case 0x25639Cu: goto label_25639c;
            case 0x2563A0u: goto label_2563a0;
            case 0x2563A4u: goto label_2563a4;
            case 0x2563A8u: goto label_2563a8;
            case 0x2563ACu: goto label_2563ac;
            case 0x2563B0u: goto label_2563b0;
            case 0x2563B4u: goto label_2563b4;
            case 0x2563B8u: goto label_2563b8;
            case 0x2563BCu: goto label_2563bc;
            case 0x2563C0u: goto label_2563c0;
            case 0x2563C4u: goto label_2563c4;
            case 0x2563C8u: goto label_2563c8;
            case 0x2563CCu: goto label_2563cc;
            case 0x2563D0u: goto label_2563d0;
            case 0x2563D4u: goto label_2563d4;
            case 0x2563D8u: goto label_2563d8;
            case 0x2563DCu: goto label_2563dc;
            case 0x2563E0u: goto label_2563e0;
            case 0x2563E4u: goto label_2563e4;
            case 0x2563E8u: goto label_2563e8;
            case 0x2563ECu: goto label_2563ec;
            case 0x2563F0u: goto label_2563f0;
            case 0x2563F4u: goto label_2563f4;
            case 0x2563F8u: goto label_2563f8;
            case 0x2563FCu: goto label_2563fc;
            case 0x256400u: goto label_256400;
            case 0x256404u: goto label_256404;
            case 0x256408u: goto label_256408;
            case 0x25640Cu: goto label_25640c;
            case 0x256410u: goto label_256410;
            case 0x256414u: goto label_256414;
            case 0x256418u: goto label_256418;
            case 0x25641Cu: goto label_25641c;
            case 0x256420u: goto label_256420;
            case 0x256424u: goto label_256424;
            case 0x256428u: goto label_256428;
            case 0x25642Cu: goto label_25642c;
            case 0x256430u: goto label_256430;
            case 0x256434u: goto label_256434;
            case 0x256438u: goto label_256438;
            case 0x25643Cu: goto label_25643c;
            case 0x256440u: goto label_256440;
            case 0x256444u: goto label_256444;
            case 0x256448u: goto label_256448;
            case 0x25644Cu: goto label_25644c;
            case 0x256450u: goto label_256450;
            case 0x256454u: goto label_256454;
            case 0x256458u: goto label_256458;
            case 0x25645Cu: goto label_25645c;
            case 0x256460u: goto label_256460;
            case 0x256464u: goto label_256464;
            case 0x256468u: goto label_256468;
            case 0x25646Cu: goto label_25646c;
            case 0x256470u: goto label_256470;
            case 0x256474u: goto label_256474;
            case 0x256478u: goto label_256478;
            case 0x25647Cu: goto label_25647c;
            case 0x256480u: goto label_256480;
            case 0x256484u: goto label_256484;
            case 0x256488u: goto label_256488;
            case 0x25648Cu: goto label_25648c;
            case 0x256490u: goto label_256490;
            case 0x256494u: goto label_256494;
            case 0x256498u: goto label_256498;
            case 0x25649Cu: goto label_25649c;
            case 0x2564A0u: goto label_2564a0;
            case 0x2564A4u: goto label_2564a4;
            case 0x2564A8u: goto label_2564a8;
            case 0x2564ACu: goto label_2564ac;
            case 0x2564B0u: goto label_2564b0;
            case 0x2564B4u: goto label_2564b4;
            case 0x2564B8u: goto label_2564b8;
            case 0x2564BCu: goto label_2564bc;
            case 0x2564C0u: goto label_2564c0;
            case 0x2564C4u: goto label_2564c4;
            case 0x2564C8u: goto label_2564c8;
            case 0x2564CCu: goto label_2564cc;
            case 0x2564D0u: goto label_2564d0;
            case 0x2564D4u: goto label_2564d4;
            case 0x2564D8u: goto label_2564d8;
            case 0x2564DCu: goto label_2564dc;
            case 0x2564E0u: goto label_2564e0;
            case 0x2564E4u: goto label_2564e4;
            case 0x2564E8u: goto label_2564e8;
            case 0x2564ECu: goto label_2564ec;
            case 0x2564F0u: goto label_2564f0;
            case 0x2564F4u: goto label_2564f4;
            case 0x2564F8u: goto label_2564f8;
            case 0x2564FCu: goto label_2564fc;
            case 0x256500u: goto label_256500;
            case 0x256504u: goto label_256504;
            case 0x256508u: goto label_256508;
            case 0x25650Cu: goto label_25650c;
            case 0x256510u: goto label_256510;
            case 0x256514u: goto label_256514;
            case 0x256518u: goto label_256518;
            case 0x25651Cu: goto label_25651c;
            case 0x256520u: goto label_256520;
            case 0x256524u: goto label_256524;
            case 0x256528u: goto label_256528;
            case 0x25652Cu: goto label_25652c;
            case 0x256530u: goto label_256530;
            case 0x256534u: goto label_256534;
            case 0x256538u: goto label_256538;
            case 0x25653Cu: goto label_25653c;
            case 0x256540u: goto label_256540;
            case 0x256544u: goto label_256544;
            case 0x256548u: goto label_256548;
            case 0x25654Cu: goto label_25654c;
            case 0x256550u: goto label_256550;
            case 0x256554u: goto label_256554;
            case 0x256558u: goto label_256558;
            case 0x25655Cu: goto label_25655c;
            case 0x256560u: goto label_256560;
            case 0x256564u: goto label_256564;
            case 0x256568u: goto label_256568;
            case 0x25656Cu: goto label_25656c;
            case 0x256570u: goto label_256570;
            case 0x256574u: goto label_256574;
            case 0x256578u: goto label_256578;
            case 0x25657Cu: goto label_25657c;
            case 0x256580u: goto label_256580;
            case 0x256584u: goto label_256584;
            case 0x256588u: goto label_256588;
            case 0x25658Cu: goto label_25658c;
            case 0x256590u: goto label_256590;
            case 0x256594u: goto label_256594;
            case 0x256598u: goto label_256598;
            case 0x25659Cu: goto label_25659c;
            case 0x2565A0u: goto label_2565a0;
            case 0x2565A4u: goto label_2565a4;
            case 0x2565A8u: goto label_2565a8;
            case 0x2565ACu: goto label_2565ac;
            case 0x2565B0u: goto label_2565b0;
            case 0x2565B4u: goto label_2565b4;
            case 0x2565B8u: goto label_2565b8;
            case 0x2565BCu: goto label_2565bc;
            case 0x2565C0u: goto label_2565c0;
            case 0x2565C4u: goto label_2565c4;
            case 0x2565C8u: goto label_2565c8;
            case 0x2565CCu: goto label_2565cc;
            case 0x2565D0u: goto label_2565d0;
            case 0x2565D4u: goto label_2565d4;
            case 0x2565D8u: goto label_2565d8;
            case 0x2565DCu: goto label_2565dc;
            case 0x2565E0u: goto label_2565e0;
            case 0x2565E4u: goto label_2565e4;
            case 0x2565E8u: goto label_2565e8;
            case 0x2565ECu: goto label_2565ec;
            case 0x2565F0u: goto label_2565f0;
            case 0x2565F4u: goto label_2565f4;
            case 0x2565F8u: goto label_2565f8;
            case 0x2565FCu: goto label_2565fc;
            case 0x256600u: goto label_256600;
            case 0x256604u: goto label_256604;
            case 0x256608u: goto label_256608;
            case 0x25660Cu: goto label_25660c;
            case 0x256610u: goto label_256610;
            case 0x256614u: goto label_256614;
            case 0x256618u: goto label_256618;
            case 0x25661Cu: goto label_25661c;
            case 0x256620u: goto label_256620;
            case 0x256624u: goto label_256624;
            case 0x256628u: goto label_256628;
            case 0x25662Cu: goto label_25662c;
            case 0x256630u: goto label_256630;
            case 0x256634u: goto label_256634;
            case 0x256638u: goto label_256638;
            case 0x25663Cu: goto label_25663c;
            case 0x256640u: goto label_256640;
            case 0x256644u: goto label_256644;
            case 0x256648u: goto label_256648;
            case 0x25664Cu: goto label_25664c;
            case 0x256650u: goto label_256650;
            case 0x256654u: goto label_256654;
            case 0x256658u: goto label_256658;
            case 0x25665Cu: goto label_25665c;
            case 0x256660u: goto label_256660;
            case 0x256664u: goto label_256664;
            case 0x256668u: goto label_256668;
            case 0x25666Cu: goto label_25666c;
            case 0x256670u: goto label_256670;
            case 0x256674u: goto label_256674;
            case 0x256678u: goto label_256678;
            case 0x25667Cu: goto label_25667c;
            case 0x256680u: goto label_256680;
            case 0x256684u: goto label_256684;
            case 0x256688u: goto label_256688;
            case 0x25668Cu: goto label_25668c;
            case 0x256690u: goto label_256690;
            case 0x256694u: goto label_256694;
            case 0x256698u: goto label_256698;
            case 0x25669Cu: goto label_25669c;
            case 0x2566A0u: goto label_2566a0;
            case 0x2566A4u: goto label_2566a4;
            case 0x2566A8u: goto label_2566a8;
            case 0x2566ACu: goto label_2566ac;
            case 0x2566B0u: goto label_2566b0;
            case 0x2566B4u: goto label_2566b4;
            case 0x2566B8u: goto label_2566b8;
            case 0x2566BCu: goto label_2566bc;
            case 0x2566C0u: goto label_2566c0;
            case 0x2566C4u: goto label_2566c4;
            case 0x2566C8u: goto label_2566c8;
            case 0x2566CCu: goto label_2566cc;
            case 0x2566D0u: goto label_2566d0;
            case 0x2566D4u: goto label_2566d4;
            case 0x2566D8u: goto label_2566d8;
            case 0x2566DCu: goto label_2566dc;
            case 0x2566E0u: goto label_2566e0;
            case 0x2566E4u: goto label_2566e4;
            case 0x2566E8u: goto label_2566e8;
            case 0x2566ECu: goto label_2566ec;
            case 0x2566F0u: goto label_2566f0;
            case 0x2566F4u: goto label_2566f4;
            case 0x2566F8u: goto label_2566f8;
            case 0x2566FCu: goto label_2566fc;
            case 0x256700u: goto label_256700;
            case 0x256704u: goto label_256704;
            case 0x256708u: goto label_256708;
            case 0x25670Cu: goto label_25670c;
            case 0x256710u: goto label_256710;
            case 0x256714u: goto label_256714;
            case 0x256718u: goto label_256718;
            case 0x25671Cu: goto label_25671c;
            case 0x256720u: goto label_256720;
            case 0x256724u: goto label_256724;
            case 0x256728u: goto label_256728;
            case 0x25672Cu: goto label_25672c;
            case 0x256730u: goto label_256730;
            case 0x256734u: goto label_256734;
            case 0x256738u: goto label_256738;
            case 0x25673Cu: goto label_25673c;
            case 0x256740u: goto label_256740;
            case 0x256744u: goto label_256744;
            case 0x256748u: goto label_256748;
            case 0x25674Cu: goto label_25674c;
            case 0x256750u: goto label_256750;
            case 0x256754u: goto label_256754;
            case 0x256758u: goto label_256758;
            case 0x25675Cu: goto label_25675c;
            case 0x256760u: goto label_256760;
            case 0x256764u: goto label_256764;
            case 0x256768u: goto label_256768;
            case 0x25676Cu: goto label_25676c;
            case 0x256770u: goto label_256770;
            case 0x256774u: goto label_256774;
            case 0x256778u: goto label_256778;
            case 0x25677Cu: goto label_25677c;
            case 0x256780u: goto label_256780;
            case 0x256784u: goto label_256784;
            case 0x256788u: goto label_256788;
            case 0x25678Cu: goto label_25678c;
            case 0x256790u: goto label_256790;
            case 0x256794u: goto label_256794;
            case 0x256798u: goto label_256798;
            case 0x25679Cu: goto label_25679c;
            case 0x2567A0u: goto label_2567a0;
            case 0x2567A4u: goto label_2567a4;
            case 0x2567A8u: goto label_2567a8;
            case 0x2567ACu: goto label_2567ac;
            case 0x2567B0u: goto label_2567b0;
            case 0x2567B4u: goto label_2567b4;
            case 0x2567B8u: goto label_2567b8;
            case 0x2567BCu: goto label_2567bc;
            case 0x2567C0u: goto label_2567c0;
            case 0x2567C4u: goto label_2567c4;
            case 0x2567C8u: goto label_2567c8;
            case 0x2567CCu: goto label_2567cc;
            case 0x2567D0u: goto label_2567d0;
            case 0x2567D4u: goto label_2567d4;
            case 0x2567D8u: goto label_2567d8;
            case 0x2567DCu: goto label_2567dc;
            case 0x2567E0u: goto label_2567e0;
            case 0x2567E4u: goto label_2567e4;
            case 0x2567E8u: goto label_2567e8;
            case 0x2567ECu: goto label_2567ec;
            case 0x2567F0u: goto label_2567f0;
            case 0x2567F4u: goto label_2567f4;
            case 0x2567F8u: goto label_2567f8;
            case 0x2567FCu: goto label_2567fc;
            case 0x256800u: goto label_256800;
            case 0x256804u: goto label_256804;
            case 0x256808u: goto label_256808;
            case 0x25680Cu: goto label_25680c;
            case 0x256810u: goto label_256810;
            case 0x256814u: goto label_256814;
            case 0x256818u: goto label_256818;
            case 0x25681Cu: goto label_25681c;
            case 0x256820u: goto label_256820;
            case 0x256824u: goto label_256824;
            case 0x256828u: goto label_256828;
            case 0x25682Cu: goto label_25682c;
            case 0x256830u: goto label_256830;
            case 0x256834u: goto label_256834;
            case 0x256838u: goto label_256838;
            case 0x25683Cu: goto label_25683c;
            case 0x256840u: goto label_256840;
            case 0x256844u: goto label_256844;
            case 0x256848u: goto label_256848;
            case 0x25684Cu: goto label_25684c;
            case 0x256850u: goto label_256850;
            case 0x256854u: goto label_256854;
            case 0x256858u: goto label_256858;
            case 0x25685Cu: goto label_25685c;
            case 0x256860u: goto label_256860;
            case 0x256864u: goto label_256864;
            case 0x256868u: goto label_256868;
            case 0x25686Cu: goto label_25686c;
            case 0x256870u: goto label_256870;
            case 0x256874u: goto label_256874;
            case 0x256878u: goto label_256878;
            case 0x25687Cu: goto label_25687c;
            case 0x256880u: goto label_256880;
            case 0x256884u: goto label_256884;
            case 0x256888u: goto label_256888;
            case 0x25688Cu: goto label_25688c;
            case 0x256890u: goto label_256890;
            case 0x256894u: goto label_256894;
            case 0x256898u: goto label_256898;
            case 0x25689Cu: goto label_25689c;
            case 0x2568A0u: goto label_2568a0;
            case 0x2568A4u: goto label_2568a4;
            case 0x2568A8u: goto label_2568a8;
            case 0x2568ACu: goto label_2568ac;
            case 0x2568B0u: goto label_2568b0;
            case 0x2568B4u: goto label_2568b4;
            case 0x2568B8u: goto label_2568b8;
            case 0x2568BCu: goto label_2568bc;
            case 0x2568C0u: goto label_2568c0;
            case 0x2568C4u: goto label_2568c4;
            case 0x2568C8u: goto label_2568c8;
            case 0x2568CCu: goto label_2568cc;
            case 0x2568D0u: goto label_2568d0;
            case 0x2568D4u: goto label_2568d4;
            case 0x2568D8u: goto label_2568d8;
            case 0x2568DCu: goto label_2568dc;
            case 0x2568E0u: goto label_2568e0;
            case 0x2568E4u: goto label_2568e4;
            case 0x2568E8u: goto label_2568e8;
            case 0x2568ECu: goto label_2568ec;
            case 0x2568F0u: goto label_2568f0;
            case 0x2568F4u: goto label_2568f4;
            case 0x2568F8u: goto label_2568f8;
            case 0x2568FCu: goto label_2568fc;
            case 0x256900u: goto label_256900;
            case 0x256904u: goto label_256904;
            case 0x256908u: goto label_256908;
            case 0x25690Cu: goto label_25690c;
            case 0x256910u: goto label_256910;
            case 0x256914u: goto label_256914;
            case 0x256918u: goto label_256918;
            case 0x25691Cu: goto label_25691c;
            case 0x256920u: goto label_256920;
            case 0x256924u: goto label_256924;
            case 0x256928u: goto label_256928;
            case 0x25692Cu: goto label_25692c;
            case 0x256930u: goto label_256930;
            case 0x256934u: goto label_256934;
            case 0x256938u: goto label_256938;
            case 0x25693Cu: goto label_25693c;
            case 0x256940u: goto label_256940;
            case 0x256944u: goto label_256944;
            case 0x256948u: goto label_256948;
            case 0x25694Cu: goto label_25694c;
            case 0x256950u: goto label_256950;
            case 0x256954u: goto label_256954;
            case 0x256958u: goto label_256958;
            case 0x25695Cu: goto label_25695c;
            case 0x256960u: goto label_256960;
            case 0x256964u: goto label_256964;
            case 0x256968u: goto label_256968;
            case 0x25696Cu: goto label_25696c;
            case 0x256970u: goto label_256970;
            case 0x256974u: goto label_256974;
            case 0x256978u: goto label_256978;
            case 0x25697Cu: goto label_25697c;
            case 0x256980u: goto label_256980;
            case 0x256984u: goto label_256984;
            case 0x256988u: goto label_256988;
            case 0x25698Cu: goto label_25698c;
            case 0x256990u: goto label_256990;
            case 0x256994u: goto label_256994;
            case 0x256998u: goto label_256998;
            case 0x25699Cu: goto label_25699c;
            case 0x2569A0u: goto label_2569a0;
            case 0x2569A4u: goto label_2569a4;
            case 0x2569A8u: goto label_2569a8;
            case 0x2569ACu: goto label_2569ac;
            case 0x2569B0u: goto label_2569b0;
            case 0x2569B4u: goto label_2569b4;
            case 0x2569B8u: goto label_2569b8;
            case 0x2569BCu: goto label_2569bc;
            case 0x2569C0u: goto label_2569c0;
            case 0x2569C4u: goto label_2569c4;
            case 0x2569C8u: goto label_2569c8;
            case 0x2569CCu: goto label_2569cc;
            case 0x2569D0u: goto label_2569d0;
            case 0x2569D4u: goto label_2569d4;
            case 0x2569D8u: goto label_2569d8;
            case 0x2569DCu: goto label_2569dc;
            case 0x2569E0u: goto label_2569e0;
            case 0x2569E4u: goto label_2569e4;
            case 0x2569E8u: goto label_2569e8;
            case 0x2569ECu: goto label_2569ec;
            case 0x2569F0u: goto label_2569f0;
            case 0x2569F4u: goto label_2569f4;
            case 0x2569F8u: goto label_2569f8;
            case 0x2569FCu: goto label_2569fc;
            case 0x256A00u: goto label_256a00;
            case 0x256A04u: goto label_256a04;
            case 0x256A08u: goto label_256a08;
            case 0x256A0Cu: goto label_256a0c;
            case 0x256A10u: goto label_256a10;
            case 0x256A14u: goto label_256a14;
            case 0x256A18u: goto label_256a18;
            case 0x256A1Cu: goto label_256a1c;
            case 0x256A20u: goto label_256a20;
            case 0x256A24u: goto label_256a24;
            case 0x256A28u: goto label_256a28;
            case 0x256A2Cu: goto label_256a2c;
            case 0x256A30u: goto label_256a30;
            case 0x256A34u: goto label_256a34;
            case 0x256A38u: goto label_256a38;
            case 0x256A3Cu: goto label_256a3c;
            case 0x256A40u: goto label_256a40;
            case 0x256A44u: goto label_256a44;
            case 0x256A48u: goto label_256a48;
            case 0x256A4Cu: goto label_256a4c;
            case 0x256A50u: goto label_256a50;
            case 0x256A54u: goto label_256a54;
            case 0x256A58u: goto label_256a58;
            case 0x256A5Cu: goto label_256a5c;
            case 0x256A60u: goto label_256a60;
            case 0x256A64u: goto label_256a64;
            case 0x256A68u: goto label_256a68;
            case 0x256A6Cu: goto label_256a6c;
            case 0x256A70u: goto label_256a70;
            case 0x256A74u: goto label_256a74;
            case 0x256A78u: goto label_256a78;
            case 0x256A7Cu: goto label_256a7c;
            case 0x256A80u: goto label_256a80;
            case 0x256A84u: goto label_256a84;
            case 0x256A88u: goto label_256a88;
            case 0x256A8Cu: goto label_256a8c;
            case 0x256A90u: goto label_256a90;
            case 0x256A94u: goto label_256a94;
            case 0x256A98u: goto label_256a98;
            case 0x256A9Cu: goto label_256a9c;
            case 0x256AA0u: goto label_256aa0;
            case 0x256AA4u: goto label_256aa4;
            case 0x256AA8u: goto label_256aa8;
            case 0x256AACu: goto label_256aac;
            case 0x256AB0u: goto label_256ab0;
            case 0x256AB4u: goto label_256ab4;
            case 0x256AB8u: goto label_256ab8;
            case 0x256ABCu: goto label_256abc;
            case 0x256AC0u: goto label_256ac0;
            case 0x256AC4u: goto label_256ac4;
            case 0x256AC8u: goto label_256ac8;
            case 0x256ACCu: goto label_256acc;
            case 0x256AD0u: goto label_256ad0;
            case 0x256AD4u: goto label_256ad4;
            case 0x256AD8u: goto label_256ad8;
            case 0x256ADCu: goto label_256adc;
            case 0x256AE0u: goto label_256ae0;
            case 0x256AE4u: goto label_256ae4;
            case 0x256AE8u: goto label_256ae8;
            case 0x256AECu: goto label_256aec;
            case 0x256AF0u: goto label_256af0;
            case 0x256AF4u: goto label_256af4;
            case 0x256AF8u: goto label_256af8;
            case 0x256AFCu: goto label_256afc;
            case 0x256B00u: goto label_256b00;
            case 0x256B04u: goto label_256b04;
            case 0x256B08u: goto label_256b08;
            case 0x256B0Cu: goto label_256b0c;
            case 0x256B10u: goto label_256b10;
            case 0x256B14u: goto label_256b14;
            case 0x256B18u: goto label_256b18;
            case 0x256B1Cu: goto label_256b1c;
            case 0x256B20u: goto label_256b20;
            case 0x256B24u: goto label_256b24;
            case 0x256B28u: goto label_256b28;
            case 0x256B2Cu: goto label_256b2c;
            case 0x256B30u: goto label_256b30;
            case 0x256B34u: goto label_256b34;
            case 0x256B38u: goto label_256b38;
            case 0x256B3Cu: goto label_256b3c;
            case 0x256B40u: goto label_256b40;
            case 0x256B44u: goto label_256b44;
            case 0x256B48u: goto label_256b48;
            case 0x256B4Cu: goto label_256b4c;
            case 0x256B50u: goto label_256b50;
            case 0x256B54u: goto label_256b54;
            case 0x256B58u: goto label_256b58;
            case 0x256B5Cu: goto label_256b5c;
            case 0x256B60u: goto label_256b60;
            case 0x256B64u: goto label_256b64;
            case 0x256B68u: goto label_256b68;
            case 0x256B6Cu: goto label_256b6c;
            case 0x256B70u: goto label_256b70;
            case 0x256B74u: goto label_256b74;
            case 0x256B78u: goto label_256b78;
            case 0x256B7Cu: goto label_256b7c;
            case 0x256B80u: goto label_256b80;
            case 0x256B84u: goto label_256b84;
            case 0x256B88u: goto label_256b88;
            case 0x256B8Cu: goto label_256b8c;
            case 0x256B90u: goto label_256b90;
            case 0x256B94u: goto label_256b94;
            case 0x256B98u: goto label_256b98;
            case 0x256B9Cu: goto label_256b9c;
            case 0x256BA0u: goto label_256ba0;
            case 0x256BA4u: goto label_256ba4;
            case 0x256BA8u: goto label_256ba8;
            case 0x256BACu: goto label_256bac;
            case 0x256BB0u: goto label_256bb0;
            case 0x256BB4u: goto label_256bb4;
            case 0x256BB8u: goto label_256bb8;
            case 0x256BBCu: goto label_256bbc;
            case 0x256BC0u: goto label_256bc0;
            case 0x256BC4u: goto label_256bc4;
            case 0x256BC8u: goto label_256bc8;
            case 0x256BCCu: goto label_256bcc;
            case 0x256BD0u: goto label_256bd0;
            case 0x256BD4u: goto label_256bd4;
            case 0x256BD8u: goto label_256bd8;
            case 0x256BDCu: goto label_256bdc;
            case 0x256BE0u: goto label_256be0;
            case 0x256BE4u: goto label_256be4;
            case 0x256BE8u: goto label_256be8;
            case 0x256BECu: goto label_256bec;
            case 0x256BF0u: goto label_256bf0;
            case 0x256BF4u: goto label_256bf4;
            case 0x256BF8u: goto label_256bf8;
            case 0x256BFCu: goto label_256bfc;
            case 0x256C00u: goto label_256c00;
            case 0x256C04u: goto label_256c04;
            case 0x256C08u: goto label_256c08;
            case 0x256C0Cu: goto label_256c0c;
            case 0x256C10u: goto label_256c10;
            case 0x256C14u: goto label_256c14;
            case 0x256C18u: goto label_256c18;
            case 0x256C1Cu: goto label_256c1c;
            case 0x256C20u: goto label_256c20;
            case 0x256C24u: goto label_256c24;
            case 0x256C28u: goto label_256c28;
            case 0x256C2Cu: goto label_256c2c;
            case 0x256C30u: goto label_256c30;
            case 0x256C34u: goto label_256c34;
            case 0x256C38u: goto label_256c38;
            case 0x256C3Cu: goto label_256c3c;
            case 0x256C40u: goto label_256c40;
            case 0x256C44u: goto label_256c44;
            case 0x256C48u: goto label_256c48;
            case 0x256C4Cu: goto label_256c4c;
            case 0x256C50u: goto label_256c50;
            case 0x256C54u: goto label_256c54;
            case 0x256C58u: goto label_256c58;
            case 0x256C5Cu: goto label_256c5c;
            case 0x256C60u: goto label_256c60;
            case 0x256C64u: goto label_256c64;
            case 0x256C68u: goto label_256c68;
            case 0x256C6Cu: goto label_256c6c;
            case 0x256C70u: goto label_256c70;
            case 0x256C74u: goto label_256c74;
            case 0x256C78u: goto label_256c78;
            case 0x256C7Cu: goto label_256c7c;
            case 0x256C80u: goto label_256c80;
            case 0x256C84u: goto label_256c84;
            case 0x256C88u: goto label_256c88;
            case 0x256C8Cu: goto label_256c8c;
            case 0x256C90u: goto label_256c90;
            case 0x256C94u: goto label_256c94;
            case 0x256C98u: goto label_256c98;
            case 0x256C9Cu: goto label_256c9c;
            case 0x256CA0u: goto label_256ca0;
            case 0x256CA4u: goto label_256ca4;
            case 0x256CA8u: goto label_256ca8;
            case 0x256CACu: goto label_256cac;
            case 0x256CB0u: goto label_256cb0;
            case 0x256CB4u: goto label_256cb4;
            case 0x256CB8u: goto label_256cb8;
            case 0x256CBCu: goto label_256cbc;
            case 0x256CC0u: goto label_256cc0;
            case 0x256CC4u: goto label_256cc4;
            case 0x256CC8u: goto label_256cc8;
            case 0x256CCCu: goto label_256ccc;
            case 0x256CD0u: goto label_256cd0;
            case 0x256CD4u: goto label_256cd4;
            case 0x256CD8u: goto label_256cd8;
            case 0x256CDCu: goto label_256cdc;
            case 0x256CE0u: goto label_256ce0;
            case 0x256CE4u: goto label_256ce4;
            case 0x256CE8u: goto label_256ce8;
            case 0x256CECu: goto label_256cec;
            case 0x256CF0u: goto label_256cf0;
            case 0x256CF4u: goto label_256cf4;
            case 0x256CF8u: goto label_256cf8;
            case 0x256CFCu: goto label_256cfc;
            case 0x256D00u: goto label_256d00;
            case 0x256D04u: goto label_256d04;
            case 0x256D08u: goto label_256d08;
            case 0x256D0Cu: goto label_256d0c;
            case 0x256D10u: goto label_256d10;
            case 0x256D14u: goto label_256d14;
            case 0x256D18u: goto label_256d18;
            case 0x256D1Cu: goto label_256d1c;
            case 0x256D20u: goto label_256d20;
            case 0x256D24u: goto label_256d24;
            case 0x256D28u: goto label_256d28;
            case 0x256D2Cu: goto label_256d2c;
            case 0x256D30u: goto label_256d30;
            case 0x256D34u: goto label_256d34;
            case 0x256D38u: goto label_256d38;
            case 0x256D3Cu: goto label_256d3c;
            case 0x256D40u: goto label_256d40;
            case 0x256D44u: goto label_256d44;
            case 0x256D48u: goto label_256d48;
            case 0x256D4Cu: goto label_256d4c;
            case 0x256D50u: goto label_256d50;
            case 0x256D54u: goto label_256d54;
            case 0x256D58u: goto label_256d58;
            case 0x256D5Cu: goto label_256d5c;
            case 0x256D60u: goto label_256d60;
            case 0x256D64u: goto label_256d64;
            case 0x256D68u: goto label_256d68;
            case 0x256D6Cu: goto label_256d6c;
            case 0x256D70u: goto label_256d70;
            case 0x256D74u: goto label_256d74;
            case 0x256D78u: goto label_256d78;
            case 0x256D7Cu: goto label_256d7c;
            case 0x256D80u: goto label_256d80;
            case 0x256D84u: goto label_256d84;
            case 0x256D88u: goto label_256d88;
            case 0x256D8Cu: goto label_256d8c;
            case 0x256D90u: goto label_256d90;
            case 0x256D94u: goto label_256d94;
            case 0x256D98u: goto label_256d98;
            case 0x256D9Cu: goto label_256d9c;
            case 0x256DA0u: goto label_256da0;
            case 0x256DA4u: goto label_256da4;
            case 0x256DA8u: goto label_256da8;
            case 0x256DACu: goto label_256dac;
            case 0x256DB0u: goto label_256db0;
            case 0x256DB4u: goto label_256db4;
            case 0x256DB8u: goto label_256db8;
            case 0x256DBCu: goto label_256dbc;
            case 0x256DC0u: goto label_256dc0;
            case 0x256DC4u: goto label_256dc4;
            case 0x256DC8u: goto label_256dc8;
            case 0x256DCCu: goto label_256dcc;
            case 0x256DD0u: goto label_256dd0;
            case 0x256DD4u: goto label_256dd4;
            case 0x256DD8u: goto label_256dd8;
            case 0x256DDCu: goto label_256ddc;
            case 0x256DE0u: goto label_256de0;
            case 0x256DE4u: goto label_256de4;
            case 0x256DE8u: goto label_256de8;
            case 0x256DECu: goto label_256dec;
            case 0x256DF0u: goto label_256df0;
            case 0x256DF4u: goto label_256df4;
            case 0x256DF8u: goto label_256df8;
            case 0x256DFCu: goto label_256dfc;
            case 0x256E00u: goto label_256e00;
            case 0x256E04u: goto label_256e04;
            case 0x256E08u: goto label_256e08;
            case 0x256E0Cu: goto label_256e0c;
            case 0x256E10u: goto label_256e10;
            case 0x256E14u: goto label_256e14;
            case 0x256E18u: goto label_256e18;
            case 0x256E1Cu: goto label_256e1c;
            case 0x256E20u: goto label_256e20;
            case 0x256E24u: goto label_256e24;
            case 0x256E28u: goto label_256e28;
            case 0x256E2Cu: goto label_256e2c;
            case 0x256E30u: goto label_256e30;
            case 0x256E34u: goto label_256e34;
            case 0x256E38u: goto label_256e38;
            case 0x256E3Cu: goto label_256e3c;
            case 0x256E40u: goto label_256e40;
            case 0x256E44u: goto label_256e44;
            case 0x256E48u: goto label_256e48;
            case 0x256E4Cu: goto label_256e4c;
            case 0x256E50u: goto label_256e50;
            case 0x256E54u: goto label_256e54;
            case 0x256E58u: goto label_256e58;
            case 0x256E5Cu: goto label_256e5c;
            case 0x256E60u: goto label_256e60;
            case 0x256E64u: goto label_256e64;
            case 0x256E68u: goto label_256e68;
            case 0x256E6Cu: goto label_256e6c;
            case 0x256E70u: goto label_256e70;
            case 0x256E74u: goto label_256e74;
            case 0x256E78u: goto label_256e78;
            case 0x256E7Cu: goto label_256e7c;
            case 0x256E80u: goto label_256e80;
            case 0x256E84u: goto label_256e84;
            case 0x256E88u: goto label_256e88;
            case 0x256E8Cu: goto label_256e8c;
            case 0x256E90u: goto label_256e90;
            case 0x256E94u: goto label_256e94;
            case 0x256E98u: goto label_256e98;
            case 0x256E9Cu: goto label_256e9c;
            case 0x256EA0u: goto label_256ea0;
            case 0x256EA4u: goto label_256ea4;
            case 0x256EA8u: goto label_256ea8;
            case 0x256EACu: goto label_256eac;
            case 0x256EB0u: goto label_256eb0;
            case 0x256EB4u: goto label_256eb4;
            case 0x256EB8u: goto label_256eb8;
            case 0x256EBCu: goto label_256ebc;
            case 0x256EC0u: goto label_256ec0;
            case 0x256EC4u: goto label_256ec4;
            case 0x256EC8u: goto label_256ec8;
            case 0x256ECCu: goto label_256ecc;
            case 0x256ED0u: goto label_256ed0;
            case 0x256ED4u: goto label_256ed4;
            case 0x256ED8u: goto label_256ed8;
            case 0x256EDCu: goto label_256edc;
            case 0x256EE0u: goto label_256ee0;
            case 0x256EE4u: goto label_256ee4;
            case 0x256EE8u: goto label_256ee8;
            case 0x256EECu: goto label_256eec;
            case 0x256EF0u: goto label_256ef0;
            case 0x256EF4u: goto label_256ef4;
            case 0x256EF8u: goto label_256ef8;
            case 0x256EFCu: goto label_256efc;
            case 0x256F00u: goto label_256f00;
            case 0x256F04u: goto label_256f04;
            case 0x256F08u: goto label_256f08;
            case 0x256F0Cu: goto label_256f0c;
            case 0x256F10u: goto label_256f10;
            case 0x256F14u: goto label_256f14;
            case 0x256F18u: goto label_256f18;
            case 0x256F1Cu: goto label_256f1c;
            case 0x256F20u: goto label_256f20;
            case 0x256F24u: goto label_256f24;
            case 0x256F28u: goto label_256f28;
            case 0x256F2Cu: goto label_256f2c;
            case 0x256F30u: goto label_256f30;
            case 0x256F34u: goto label_256f34;
            case 0x256F38u: goto label_256f38;
            case 0x256F3Cu: goto label_256f3c;
            case 0x256F40u: goto label_256f40;
            case 0x256F44u: goto label_256f44;
            case 0x256F48u: goto label_256f48;
            case 0x256F4Cu: goto label_256f4c;
            case 0x256F50u: goto label_256f50;
            case 0x256F54u: goto label_256f54;
            case 0x256F58u: goto label_256f58;
            case 0x256F5Cu: goto label_256f5c;
            case 0x256F60u: goto label_256f60;
            case 0x256F64u: goto label_256f64;
            case 0x256F68u: goto label_256f68;
            case 0x256F6Cu: goto label_256f6c;
            case 0x256F70u: goto label_256f70;
            case 0x256F74u: goto label_256f74;
            case 0x256F78u: goto label_256f78;
            case 0x256F7Cu: goto label_256f7c;
            case 0x256F80u: goto label_256f80;
            case 0x256F84u: goto label_256f84;
            case 0x256F88u: goto label_256f88;
            case 0x256F8Cu: goto label_256f8c;
            case 0x256F90u: goto label_256f90;
            case 0x256F94u: goto label_256f94;
            case 0x256F98u: goto label_256f98;
            case 0x256F9Cu: goto label_256f9c;
            case 0x256FA0u: goto label_256fa0;
            case 0x256FA4u: goto label_256fa4;
            case 0x256FA8u: goto label_256fa8;
            case 0x256FACu: goto label_256fac;
            case 0x256FB0u: goto label_256fb0;
            case 0x256FB4u: goto label_256fb4;
            case 0x256FB8u: goto label_256fb8;
            case 0x256FBCu: goto label_256fbc;
            case 0x256FC0u: goto label_256fc0;
            case 0x256FC4u: goto label_256fc4;
            case 0x256FC8u: goto label_256fc8;
            case 0x256FCCu: goto label_256fcc;
            case 0x256FD0u: goto label_256fd0;
            case 0x256FD4u: goto label_256fd4;
            case 0x256FD8u: goto label_256fd8;
            case 0x256FDCu: goto label_256fdc;
            case 0x256FE0u: goto label_256fe0;
            case 0x256FE4u: goto label_256fe4;
            case 0x256FE8u: goto label_256fe8;
            case 0x256FECu: goto label_256fec;
            case 0x256FF0u: goto label_256ff0;
            case 0x256FF4u: goto label_256ff4;
            case 0x256FF8u: goto label_256ff8;
            case 0x256FFCu: goto label_256ffc;
            case 0x257000u: goto label_257000;
            case 0x257004u: goto label_257004;
            case 0x257008u: goto label_257008;
            case 0x25700Cu: goto label_25700c;
            case 0x257010u: goto label_257010;
            case 0x257014u: goto label_257014;
            case 0x257018u: goto label_257018;
            case 0x25701Cu: goto label_25701c;
            case 0x257020u: goto label_257020;
            case 0x257024u: goto label_257024;
            case 0x257028u: goto label_257028;
            case 0x25702Cu: goto label_25702c;
            case 0x257030u: goto label_257030;
            case 0x257034u: goto label_257034;
            case 0x257038u: goto label_257038;
            case 0x25703Cu: goto label_25703c;
            case 0x257040u: goto label_257040;
            case 0x257044u: goto label_257044;
            case 0x257048u: goto label_257048;
            case 0x25704Cu: goto label_25704c;
            case 0x257050u: goto label_257050;
            case 0x257054u: goto label_257054;
            case 0x257058u: goto label_257058;
            case 0x25705Cu: goto label_25705c;
            case 0x257060u: goto label_257060;
            case 0x257064u: goto label_257064;
            case 0x257068u: goto label_257068;
            case 0x25706Cu: goto label_25706c;
            case 0x257070u: goto label_257070;
            case 0x257074u: goto label_257074;
            case 0x257078u: goto label_257078;
            case 0x25707Cu: goto label_25707c;
            case 0x257080u: goto label_257080;
            case 0x257084u: goto label_257084;
            case 0x257088u: goto label_257088;
            case 0x25708Cu: goto label_25708c;
            case 0x257090u: goto label_257090;
            case 0x257094u: goto label_257094;
            case 0x257098u: goto label_257098;
            case 0x25709Cu: goto label_25709c;
            case 0x2570A0u: goto label_2570a0;
            case 0x2570A4u: goto label_2570a4;
            case 0x2570A8u: goto label_2570a8;
            case 0x2570ACu: goto label_2570ac;
            case 0x2570B0u: goto label_2570b0;
            case 0x2570B4u: goto label_2570b4;
            case 0x2570B8u: goto label_2570b8;
            case 0x2570BCu: goto label_2570bc;
            case 0x2570C0u: goto label_2570c0;
            case 0x2570C4u: goto label_2570c4;
            case 0x2570C8u: goto label_2570c8;
            case 0x2570CCu: goto label_2570cc;
            case 0x2570D0u: goto label_2570d0;
            case 0x2570D4u: goto label_2570d4;
            case 0x2570D8u: goto label_2570d8;
            case 0x2570DCu: goto label_2570dc;
            case 0x2570E0u: goto label_2570e0;
            case 0x2570E4u: goto label_2570e4;
            case 0x2570E8u: goto label_2570e8;
            case 0x2570ECu: goto label_2570ec;
            case 0x2570F0u: goto label_2570f0;
            case 0x2570F4u: goto label_2570f4;
            case 0x2570F8u: goto label_2570f8;
            case 0x2570FCu: goto label_2570fc;
            case 0x257100u: goto label_257100;
            case 0x257104u: goto label_257104;
            case 0x257108u: goto label_257108;
            case 0x25710Cu: goto label_25710c;
            case 0x257110u: goto label_257110;
            case 0x257114u: goto label_257114;
            case 0x257118u: goto label_257118;
            case 0x25711Cu: goto label_25711c;
            case 0x257120u: goto label_257120;
            case 0x257124u: goto label_257124;
            case 0x257128u: goto label_257128;
            case 0x25712Cu: goto label_25712c;
            case 0x257130u: goto label_257130;
            case 0x257134u: goto label_257134;
            case 0x257138u: goto label_257138;
            case 0x25713Cu: goto label_25713c;
            case 0x257140u: goto label_257140;
            case 0x257144u: goto label_257144;
            case 0x257148u: goto label_257148;
            case 0x25714Cu: goto label_25714c;
            case 0x257150u: goto label_257150;
            case 0x257154u: goto label_257154;
            case 0x257158u: goto label_257158;
            case 0x25715Cu: goto label_25715c;
            case 0x257160u: goto label_257160;
            case 0x257164u: goto label_257164;
            case 0x257168u: goto label_257168;
            case 0x25716Cu: goto label_25716c;
            case 0x257170u: goto label_257170;
            case 0x257174u: goto label_257174;
            case 0x257178u: goto label_257178;
            case 0x25717Cu: goto label_25717c;
            case 0x257180u: goto label_257180;
            case 0x257184u: goto label_257184;
            case 0x257188u: goto label_257188;
            case 0x25718Cu: goto label_25718c;
            case 0x257190u: goto label_257190;
            case 0x257194u: goto label_257194;
            case 0x257198u: goto label_257198;
            case 0x25719Cu: goto label_25719c;
            case 0x2571A0u: goto label_2571a0;
            case 0x2571A4u: goto label_2571a4;
            case 0x2571A8u: goto label_2571a8;
            case 0x2571ACu: goto label_2571ac;
            case 0x2571B0u: goto label_2571b0;
            case 0x2571B4u: goto label_2571b4;
            case 0x2571B8u: goto label_2571b8;
            case 0x2571BCu: goto label_2571bc;
            case 0x2571C0u: goto label_2571c0;
            case 0x2571C4u: goto label_2571c4;
            case 0x2571C8u: goto label_2571c8;
            case 0x2571CCu: goto label_2571cc;
            case 0x2571D0u: goto label_2571d0;
            case 0x2571D4u: goto label_2571d4;
            case 0x2571D8u: goto label_2571d8;
            case 0x2571DCu: goto label_2571dc;
            case 0x2571E0u: goto label_2571e0;
            case 0x2571E4u: goto label_2571e4;
            case 0x2571E8u: goto label_2571e8;
            case 0x2571ECu: goto label_2571ec;
            case 0x2571F0u: goto label_2571f0;
            case 0x2571F4u: goto label_2571f4;
            case 0x2571F8u: goto label_2571f8;
            case 0x2571FCu: goto label_2571fc;
            case 0x257200u: goto label_257200;
            case 0x257204u: goto label_257204;
            case 0x257208u: goto label_257208;
            case 0x25720Cu: goto label_25720c;
            case 0x257210u: goto label_257210;
            case 0x257214u: goto label_257214;
            case 0x257218u: goto label_257218;
            case 0x25721Cu: goto label_25721c;
            case 0x257220u: goto label_257220;
            case 0x257224u: goto label_257224;
            case 0x257228u: goto label_257228;
            case 0x25722Cu: goto label_25722c;
            case 0x257230u: goto label_257230;
            case 0x257234u: goto label_257234;
            case 0x257238u: goto label_257238;
            case 0x25723Cu: goto label_25723c;
            case 0x257240u: goto label_257240;
            case 0x257244u: goto label_257244;
            case 0x257248u: goto label_257248;
            case 0x25724Cu: goto label_25724c;
            case 0x257250u: goto label_257250;
            case 0x257254u: goto label_257254;
            case 0x257258u: goto label_257258;
            case 0x25725Cu: goto label_25725c;
            case 0x257260u: goto label_257260;
            case 0x257264u: goto label_257264;
            case 0x257268u: goto label_257268;
            case 0x25726Cu: goto label_25726c;
            case 0x257270u: goto label_257270;
            case 0x257274u: goto label_257274;
            case 0x257278u: goto label_257278;
            case 0x25727Cu: goto label_25727c;
            case 0x257280u: goto label_257280;
            case 0x257284u: goto label_257284;
            case 0x257288u: goto label_257288;
            case 0x25728Cu: goto label_25728c;
            case 0x257290u: goto label_257290;
            case 0x257294u: goto label_257294;
            case 0x257298u: goto label_257298;
            case 0x25729Cu: goto label_25729c;
            case 0x2572A0u: goto label_2572a0;
            case 0x2572A4u: goto label_2572a4;
            case 0x2572A8u: goto label_2572a8;
            case 0x2572ACu: goto label_2572ac;
            case 0x2572B0u: goto label_2572b0;
            case 0x2572B4u: goto label_2572b4;
            case 0x2572B8u: goto label_2572b8;
            case 0x2572BCu: goto label_2572bc;
            case 0x2572C0u: goto label_2572c0;
            case 0x2572C4u: goto label_2572c4;
            case 0x2572C8u: goto label_2572c8;
            case 0x2572CCu: goto label_2572cc;
            case 0x2572D0u: goto label_2572d0;
            case 0x2572D4u: goto label_2572d4;
            case 0x2572D8u: goto label_2572d8;
            case 0x2572DCu: goto label_2572dc;
            case 0x2572E0u: goto label_2572e0;
            case 0x2572E4u: goto label_2572e4;
            case 0x2572E8u: goto label_2572e8;
            case 0x2572ECu: goto label_2572ec;
            case 0x2572F0u: goto label_2572f0;
            case 0x2572F4u: goto label_2572f4;
            case 0x2572F8u: goto label_2572f8;
            case 0x2572FCu: goto label_2572fc;
            case 0x257300u: goto label_257300;
            case 0x257304u: goto label_257304;
            case 0x257308u: goto label_257308;
            case 0x25730Cu: goto label_25730c;
            case 0x257310u: goto label_257310;
            case 0x257314u: goto label_257314;
            case 0x257318u: goto label_257318;
            case 0x25731Cu: goto label_25731c;
            case 0x257320u: goto label_257320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x256F28u;
label_256f28:
    // 0x256f28: 0x824300dc
    ctx->pc = 0x256f28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 220)));
label_256f2c:
    // 0x256f2c: 0x24020001
    ctx->pc = 0x256f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_256f30:
    // 0x256f30: 0x14620017
label_256f34:
    if (ctx->pc == 0x256F34u) {
        ctx->pc = 0x256F34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x256F38u;
        goto label_256f38;
    }
    ctx->pc = 0x256F30u;
    {
        const bool branch_taken_0x256f30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x256F34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x256f30) {
            ctx->pc = 0x256F90u;
            goto label_256f90;
        }
    }
    ctx->pc = 0x256F38u;
label_256f38:
    // 0x256f38: 0x864300da
    ctx->pc = 0x256f38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 218)));
label_256f3c:
    // 0x256f3c: 0x28620068
    ctx->pc = 0x256f3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 104));
label_256f40:
    // 0x256f40: 0x104000d3
label_256f44:
    if (ctx->pc == 0x256F44u) {
        ctx->pc = 0x256F44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->pc = 0x256F48u;
        goto label_256f48;
    }
    ctx->pc = 0x256F40u;
    {
        const bool branch_taken_0x256f40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x256F44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967280));
        if (branch_taken_0x256f40) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x256F48u;
label_256f48:
    // 0x256f48: 0x44820000
    ctx->pc = 0x256f48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_256f4c:
    // 0x256f4c: 0x46800020
    ctx->pc = 0x256f4cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_256f50:
    // 0x256f50: 0x3c014035
    ctx->pc = 0x256f50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16437 << 16));
label_256f54:
    // 0x256f54: 0x34211eb8
    ctx->pc = 0x256f54u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 7864));
label_256f58:
    // 0x256f58: 0x44810800
    ctx->pc = 0x256f58u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_256f5c:
    // 0x256f5c: 0x46010002
    ctx->pc = 0x256f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_256f60:
    // 0x256f60: 0x46000064
    ctx->pc = 0x256f60u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_256f64:
    // 0x256f64: 0x44020800
    ctx->pc = 0x256f64u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_256f68:
    // 0x256f68: 0x24050100
    ctx->pc = 0x256f68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
label_256f6c:
    // 0x256f6c: 0xa22823
    ctx->pc = 0x256f6cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_256f70:
    // 0x256f70: 0x28a30100
    ctx->pc = 0x256f70u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 256));
label_256f74:
    // 0x256f74: 0x240200ff
    ctx->pc = 0x256f74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_256f78:
    // 0x256f78: 0x8e440070
    ctx->pc = 0x256f78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_256f7c:
    // 0x256f7c: 0x43280a
    ctx->pc = 0x256f7cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_256f80:
    // 0x256f80: 0xc0b40c0
label_256f84:
    if (ctx->pc == 0x256F84u) {
        ctx->pc = 0x256F84u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x256F88u;
        goto label_256f88;
    }
    ctx->pc = 0x256F80u;
    SET_GPR_U32(ctx, 31, 0x256F88u);
    ctx->pc = 0x256F84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256F88u; }
    }
    if (ctx->pc != 0x256F88u) { return; }
    ctx->pc = 0x256F88u;
label_256f88:
    // 0x256f88: 0x100000c2
label_256f8c:
    if (ctx->pc == 0x256F8Cu) {
        ctx->pc = 0x256F8Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x256F90u;
        goto label_256f90;
    }
    ctx->pc = 0x256F88u;
    {
        const bool branch_taken_0x256f88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256F8Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x256f88) {
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x256F90u;
label_256f90:
    // 0x256f90: 0x546200c0
label_256f94:
    if (ctx->pc == 0x256F94u) {
        ctx->pc = 0x256F94u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x256F98u;
        goto label_256f98;
    }
    ctx->pc = 0x256F90u;
    {
        const bool branch_taken_0x256f90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x256f90) {
            ctx->pc = 0x256F94u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x256F98u;
label_256f98:
    // 0x256f98: 0xc095126
label_256f9c:
    if (ctx->pc == 0x256F9Cu) {
        ctx->pc = 0x256F9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x256FA0u;
        goto label_256fa0;
    }
    ctx->pc = 0x256F98u;
    SET_GPR_U32(ctx, 31, 0x256FA0u);
    ctx->pc = 0x256F9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 96));
    ctx->pc = 0x254498u;
    {
        const uint32_t __entryPc = ctx->pc;
        distance_to_closest_player_0x254498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256FA0u; }
    }
    if (ctx->pc != 0x256FA0u) { return; }
    ctx->pc = 0x256FA0u;
label_256fa0:
    // 0x256fa0: 0x3c014110
    ctx->pc = 0x256fa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16656 << 16));
label_256fa4:
    // 0x256fa4: 0x44810800
    ctx->pc = 0x256fa4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_256fa8:
    // 0x256fa8: 0x46010036
    ctx->pc = 0x256fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_256fac:
    // 0x256fac: 0x0
    ctx->pc = 0x256facu;
    // NOP
label_256fb0:
    // 0x256fb0: 0x45000009
label_256fb4:
    if (ctx->pc == 0x256FB4u) {
        ctx->pc = 0x256FB4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x256FB8u;
        goto label_256fb8;
    }
    ctx->pc = 0x256FB0u;
    {
        const bool branch_taken_0x256fb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x256FB4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
        if (branch_taken_0x256fb0) {
            ctx->pc = 0x256FD8u;
            goto label_256fd8;
        }
    }
    ctx->pc = 0x256FB8u;
label_256fb8:
    // 0x256fb8: 0x8e420000
    ctx->pc = 0x256fb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_256fbc:
    // 0x256fbc: 0x8c420004
    ctx->pc = 0x256fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_256fc0:
    // 0x256fc0: 0x2404002d
    ctx->pc = 0x256fc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 45));
label_256fc4:
    // 0x256fc4: 0x3842002c
    ctx->pc = 0x256fc4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 44));
label_256fc8:
    // 0x256fc8: 0x62200a
    ctx->pc = 0x256fc8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_256fcc:
    // 0x256fcc: 0x2405ffff
    ctx->pc = 0x256fccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_256fd0:
    // 0x256fd0: 0xc0a3a1c
label_256fd4:
    if (ctx->pc == 0x256FD4u) {
        ctx->pc = 0x256FD4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x256FD8u;
        goto label_256fd8;
    }
    ctx->pc = 0x256FD0u;
    SET_GPR_U32(ctx, 31, 0x256FD8u);
    ctx->pc = 0x256FD4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 80));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256FD8u; }
    }
    if (ctx->pc != 0x256FD8u) { return; }
    ctx->pc = 0x256FD8u;
label_256fd8:
    // 0x256fd8: 0x240202d
    ctx->pc = 0x256fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_256fdc:
    // 0x256fdc: 0xc094dcc
label_256fe0:
    if (ctx->pc == 0x256FE0u) {
        ctx->pc = 0x256FE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256FE4u;
        goto label_256fe4;
    }
    ctx->pc = 0x256FDCu;
    SET_GPR_U32(ctx, 31, 0x256FE4u);
    ctx->pc = 0x256FE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256FE4u; }
    }
    if (ctx->pc != 0x256FE4u) { return; }
    ctx->pc = 0x256FE4u;
label_256fe4:
    // 0x256fe4: 0x100000ab
label_256fe8:
    if (ctx->pc == 0x256FE8u) {
        ctx->pc = 0x256FE8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x256FECu;
        goto label_256fec;
    }
    ctx->pc = 0x256FE4u;
    {
        const bool branch_taken_0x256fe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x256FE8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x256fe4) {
            ctx->pc = 0x257294u;
            goto label_257294;
        }
    }
    ctx->pc = 0x256FECu;
label_256fec:
    // 0x256fec: 0x3c020034
    ctx->pc = 0x256fecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_256ff0:
    // 0x256ff0: 0x3c030034
    ctx->pc = 0x256ff0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_256ff4:
    // 0x256ff4: 0x8c44cdc0
    ctx->pc = 0x256ff4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954432)));
label_256ff8:
    // 0x256ff8: 0x8c62cdc4
    ctx->pc = 0x256ff8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954436)));
label_256ffc:
    // 0x256ffc: 0x10820043
label_257000:
    if (ctx->pc == 0x257000u) {
        ctx->pc = 0x257000u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257004u;
        goto label_257004;
    }
    ctx->pc = 0x256FFCu;
    {
        const bool branch_taken_0x256ffc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x257000u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x256ffc) {
            ctx->pc = 0x25710Cu;
            goto label_25710c;
        }
    }
    ctx->pc = 0x257004u;
label_257004:
    // 0x257004: 0x24020002
    ctx->pc = 0x257004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_257008:
    // 0x257008: 0x10620014
label_25700c:
    if (ctx->pc == 0x25700Cu) {
        ctx->pc = 0x25700Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        ctx->pc = 0x257010u;
        goto label_257010;
    }
    ctx->pc = 0x257008u;
    {
        const bool branch_taken_0x257008 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25700Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x257008) {
            ctx->pc = 0x25705Cu;
            goto label_25705c;
        }
    }
    ctx->pc = 0x257010u;
label_257010:
    // 0x257010: 0x10400005
label_257014:
    if (ctx->pc == 0x257014u) {
        ctx->pc = 0x257014u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x257018u;
        goto label_257018;
    }
    ctx->pc = 0x257010u;
    {
        const bool branch_taken_0x257010 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x257014u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x257010) {
            ctx->pc = 0x257028u;
            goto label_257028;
        }
    }
    ctx->pc = 0x257018u;
label_257018:
    // 0x257018: 0x10620008
label_25701c:
    if (ctx->pc == 0x25701Cu) {
        ctx->pc = 0x257020u;
        goto label_257020;
    }
    ctx->pc = 0x257018u;
    {
        const bool branch_taken_0x257018 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x257018) {
            ctx->pc = 0x25703Cu;
            goto label_25703c;
        }
    }
    ctx->pc = 0x257020u;
label_257020:
    // 0x257020: 0x10000038
label_257024:
    if (ctx->pc == 0x257024u) {
        ctx->pc = 0x257024u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x257028u;
        goto label_257028;
    }
    ctx->pc = 0x257020u;
    {
        const bool branch_taken_0x257020 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257024u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        if (branch_taken_0x257020) {
            ctx->pc = 0x257104u;
            goto label_257104;
        }
    }
    ctx->pc = 0x257028u;
label_257028:
    // 0x257028: 0x24020003
    ctx->pc = 0x257028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_25702c:
    // 0x25702c: 0x10620013
label_257030:
    if (ctx->pc == 0x257030u) {
        ctx->pc = 0x257030u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x257034u;
        goto label_257034;
    }
    ctx->pc = 0x25702Cu;
    {
        const bool branch_taken_0x25702c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x257030u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25702c) {
            ctx->pc = 0x25707Cu;
            goto label_25707c;
        }
    }
    ctx->pc = 0x257034u;
label_257034:
    // 0x257034: 0x10000033
label_257038:
    if (ctx->pc == 0x257038u) {
        ctx->pc = 0x257038u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x25703Cu;
        goto label_25703c;
    }
    ctx->pc = 0x257034u;
    {
        const bool branch_taken_0x257034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257038u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        if (branch_taken_0x257034) {
            ctx->pc = 0x257104u;
            goto label_257104;
        }
    }
    ctx->pc = 0x25703Cu;
label_25703c:
    // 0x25703c: 0x3c014120
    ctx->pc = 0x25703cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_257040:
    // 0x257040: 0x44816000
    ctx->pc = 0x257040u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_257044:
    // 0x257044: 0xc0b5c06
label_257048:
    if (ctx->pc == 0x257048u) {
        ctx->pc = 0x25704Cu;
        goto label_25704c;
    }
    ctx->pc = 0x257044u;
    SET_GPR_U32(ctx, 31, 0x25704Cu);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25704Cu; }
    }
    if (ctx->pc != 0x25704Cu) { return; }
    ctx->pc = 0x25704Cu;
label_25704c:
    // 0x25704c: 0x3c0141a0
    ctx->pc = 0x25704cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
label_257050:
    // 0x257050: 0x44810800
    ctx->pc = 0x257050u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_257054:
    // 0x257054: 0x10000029
label_257058:
    if (ctx->pc == 0x257058u) {
        ctx->pc = 0x257058u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x25705Cu;
        goto label_25705c;
    }
    ctx->pc = 0x257054u;
    {
        const bool branch_taken_0x257054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257058u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x257054) {
            ctx->pc = 0x2570FCu;
            goto label_2570fc;
        }
    }
    ctx->pc = 0x25705Cu;
label_25705c:
    // 0x25705c: 0x3c014170
    ctx->pc = 0x25705cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
label_257060:
    // 0x257060: 0x44816000
    ctx->pc = 0x257060u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_257064:
    // 0x257064: 0xc0b5c06
label_257068:
    if (ctx->pc == 0x257068u) {
        ctx->pc = 0x25706Cu;
        goto label_25706c;
    }
    ctx->pc = 0x257064u;
    SET_GPR_U32(ctx, 31, 0x25706Cu);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25706Cu; }
    }
    if (ctx->pc != 0x25706Cu) { return; }
    ctx->pc = 0x25706Cu;
label_25706c:
    // 0x25706c: 0x3c0141f0
    ctx->pc = 0x25706cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
label_257070:
    // 0x257070: 0x44810800
    ctx->pc = 0x257070u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_257074:
    // 0x257074: 0x10000021
label_257078:
    if (ctx->pc == 0x257078u) {
        ctx->pc = 0x257078u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x25707Cu;
        goto label_25707c;
    }
    ctx->pc = 0x257074u;
    {
        const bool branch_taken_0x257074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257078u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x257074) {
            ctx->pc = 0x2570FCu;
            goto label_2570fc;
        }
    }
    ctx->pc = 0x25707Cu;
label_25707c:
    // 0x25707c: 0x2443cdc8
    ctx->pc = 0x25707cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294954440));
label_257080:
    // 0x257080: 0xc6400040
    ctx->pc = 0x257080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257084:
    // 0x257084: 0xc441cdc8
    ctx->pc = 0x257084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257088:
    // 0x257088: 0x46010001
    ctx->pc = 0x257088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25708c:
    // 0x25708c: 0xe7a00040
    ctx->pc = 0x25708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_257090:
    // 0x257090: 0xc6400044
    ctx->pc = 0x257090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257094:
    // 0x257094: 0xc4610004
    ctx->pc = 0x257094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257098:
    // 0x257098: 0x46010001
    ctx->pc = 0x257098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25709c:
    // 0x25709c: 0xe7a00044
    ctx->pc = 0x25709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2570a0:
    // 0x2570a0: 0xc6400048
    ctx->pc = 0x2570a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570a4:
    // 0x2570a4: 0xc4610008
    ctx->pc = 0x2570a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2570a8:
    // 0x2570a8: 0x46010001
    ctx->pc = 0x2570a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2570ac:
    // 0x2570ac: 0xe7a00048
    ctx->pc = 0x2570acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2570b0:
    // 0x2570b0: 0xc0b58fc
label_2570b4:
    if (ctx->pc == 0x2570B4u) {
        ctx->pc = 0x2570B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2570B8u;
        goto label_2570b8;
    }
    ctx->pc = 0x2570B0u;
    SET_GPR_U32(ctx, 31, 0x2570B8u);
    ctx->pc = 0x2570B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2570B8u; }
    }
    if (ctx->pc != 0x2570B8u) { return; }
    ctx->pc = 0x2570B8u;
label_2570b8:
    // 0x2570b8: 0xc7a00040
    ctx->pc = 0x2570b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570bc:
    // 0x2570bc: 0x3c014120
    ctx->pc = 0x2570bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_2570c0:
    // 0x2570c0: 0x44810800
    ctx->pc = 0x2570c0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2570c4:
    // 0x2570c4: 0x46010002
    ctx->pc = 0x2570c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2570c8:
    // 0x2570c8: 0xe64000f8
    ctx->pc = 0x2570c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
label_2570cc:
    // 0x2570cc: 0xc7a00044
    ctx->pc = 0x2570ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570d0:
    // 0x2570d0: 0x46010002
    ctx->pc = 0x2570d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2570d4:
    // 0x2570d4: 0xe64000fc
    ctx->pc = 0x2570d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
label_2570d8:
    // 0x2570d8: 0xc7a00048
    ctx->pc = 0x2570d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570dc:
    // 0x2570dc: 0x46010002
    ctx->pc = 0x2570dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2570e0:
    // 0x2570e0: 0x3c0142c8
    ctx->pc = 0x2570e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
label_2570e4:
    // 0x2570e4: 0x44816000
    ctx->pc = 0x2570e4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2570e8:
    // 0x2570e8: 0xc0b5c06
label_2570ec:
    if (ctx->pc == 0x2570ECu) {
        ctx->pc = 0x2570ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
        ctx->pc = 0x2570F0u;
        goto label_2570f0;
    }
    ctx->pc = 0x2570E8u;
    SET_GPR_U32(ctx, 31, 0x2570F0u);
    ctx->pc = 0x2570ECu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2570F0u; }
    }
    if (ctx->pc != 0x2570F0u) { return; }
    ctx->pc = 0x2570F0u;
label_2570f0:
    // 0x2570f0: 0x3c014248
    ctx->pc = 0x2570f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
label_2570f4:
    // 0x2570f4: 0x44810800
    ctx->pc = 0x2570f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2570f8:
    // 0x2570f8: 0x46010000
    ctx->pc = 0x2570f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2570fc:
    // 0x2570fc: 0xe64000fc
    ctx->pc = 0x2570fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
label_257100:
    // 0x257100: 0x964200d8
    ctx->pc = 0x257100u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_257104:
    // 0x257104: 0x34420001
    ctx->pc = 0x257104u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_257108:
    // 0x257108: 0xa64200d8
    ctx->pc = 0x257108u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
label_25710c:
    // 0x25710c: 0x32a30007
    ctx->pc = 0x25710cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 21), 7));
label_257110:
    // 0x257110: 0x151027
    ctx->pc = 0x257110u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
label_257114:
    // 0x257114: 0x30420007
    ctx->pc = 0x257114u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
label_257118:
    // 0x257118: 0x3c040033
    ctx->pc = 0x257118u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
label_25711c:
    // 0x25711c: 0x248449f0
    ctx->pc = 0x25711cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18928));
label_257120:
    // 0x257120: 0x31880
    ctx->pc = 0x257120u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_257124:
    // 0x257124: 0x641821
    ctx->pc = 0x257124u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_257128:
    // 0x257128: 0x21080
    ctx->pc = 0x257128u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_25712c:
    // 0x25712c: 0x441021
    ctx->pc = 0x25712cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_257130:
    // 0x257130: 0xc4550000
    ctx->pc = 0x257130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_257134:
    // 0x257134: 0x964200d8
    ctx->pc = 0x257134u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
label_257138:
    // 0x257138: 0x30420001
    ctx->pc = 0x257138u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_25713c:
    // 0x25713c: 0x10400054
label_257140:
    if (ctx->pc == 0x257140u) {
        ctx->pc = 0x257140u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x257144u;
        goto label_257144;
    }
    ctx->pc = 0x25713Cu;
    {
        const bool branch_taken_0x25713c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x257140u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x25713c) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x257144u;
label_257144:
    // 0x257144: 0x26440010
    ctx->pc = 0x257144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16));
label_257148:
    // 0x257148: 0xc0b5b9e
label_25714c:
    if (ctx->pc == 0x25714Cu) {
        ctx->pc = 0x25714Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x257150u;
        goto label_257150;
    }
    ctx->pc = 0x257148u;
    SET_GPR_U32(ctx, 31, 0x257150u);
    ctx->pc = 0x25714Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x2D6E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExtractYPR_0x2d6e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257150u; }
    }
    if (ctx->pc != 0x257150u) { return; }
    ctx->pc = 0x257150u;
label_257150:
    // 0x257150: 0x8e420000
    ctx->pc = 0x257150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_257154:
    // 0x257154: 0x8c430004
    ctx->pc = 0x257154u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_257158:
    // 0x257158: 0x24020031
    ctx->pc = 0x257158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
label_25715c:
    // 0x25715c: 0x5462000a
label_257160:
    if (ctx->pc == 0x257160u) {
        ctx->pc = 0x257160u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x257164u;
        goto label_257164;
    }
    ctx->pc = 0x25715Cu;
    {
        const bool branch_taken_0x25715c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25715c) {
            ctx->pc = 0x257160u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x257188u;
            goto label_257188;
        }
    }
    ctx->pc = 0x257164u;
label_257164:
    // 0x257164: 0xc64000fc
    ctx->pc = 0x257164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257168:
    // 0x257168: 0x3c013f80
    ctx->pc = 0x257168u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_25716c:
    // 0x25716c: 0x44810800
    ctx->pc = 0x25716cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_257170:
    // 0x257170: 0x46010001
    ctx->pc = 0x257170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_257174:
    // 0x257174: 0x3c013e32
    ctx->pc = 0x257174u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15922 << 16));
label_257178:
    // 0x257178: 0x3421b8c3
    ctx->pc = 0x257178u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
label_25717c:
    // 0x25717c: 0x44810800
    ctx->pc = 0x25717cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_257180:
    // 0x257180: 0x10000014
label_257184:
    if (ctx->pc == 0x257184u) {
        ctx->pc = 0x257184u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        ctx->pc = 0x257188u;
        goto label_257188;
    }
    ctx->pc = 0x257180u;
    {
        const bool branch_taken_0x257180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257184u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        if (branch_taken_0x257180) {
            ctx->pc = 0x2571D4u;
            goto label_2571d4;
        }
    }
    ctx->pc = 0x257188u;
label_257188:
    // 0x257188: 0x8c430004
    ctx->pc = 0x257188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25718c:
    // 0x25718c: 0x24020035
    ctx->pc = 0x25718cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 53));
label_257190:
    // 0x257190: 0x14620009
label_257194:
    if (ctx->pc == 0x257194u) {
        ctx->pc = 0x257194u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x257198u;
        goto label_257198;
    }
    ctx->pc = 0x257190u;
    {
        const bool branch_taken_0x257190 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x257194u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x257190) {
            ctx->pc = 0x2571B8u;
            goto label_2571b8;
        }
    }
    ctx->pc = 0x257198u;
label_257198:
    // 0x257198: 0x3c014000
    ctx->pc = 0x257198u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_25719c:
    // 0x25719c: 0x44810800
    ctx->pc = 0x25719cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2571a0:
    // 0x2571a0: 0x46010001
    ctx->pc = 0x2571a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2571a4:
    // 0x2571a4: 0x3c013c8e
    ctx->pc = 0x2571a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15502 << 16));
label_2571a8:
    // 0x2571a8: 0x3421fa36
    ctx->pc = 0x2571a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
label_2571ac:
    // 0x2571ac: 0x44810800
    ctx->pc = 0x2571acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2571b0:
    // 0x2571b0: 0x10000008
label_2571b4:
    if (ctx->pc == 0x2571B4u) {
        ctx->pc = 0x2571B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        ctx->pc = 0x2571B8u;
        goto label_2571b8;
    }
    ctx->pc = 0x2571B0u;
    {
        const bool branch_taken_0x2571b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2571B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        if (branch_taken_0x2571b0) {
            ctx->pc = 0x2571D4u;
            goto label_2571d4;
        }
    }
    ctx->pc = 0x2571B8u;
label_2571b8:
    // 0x2571b8: 0x3c014000
    ctx->pc = 0x2571b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_2571bc:
    // 0x2571bc: 0x44810800
    ctx->pc = 0x2571bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2571c0:
    // 0x2571c0: 0x46010001
    ctx->pc = 0x2571c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2571c4:
    // 0x2571c4: 0xe64000fc
    ctx->pc = 0x2571c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
label_2571c8:
    // 0x2571c8: 0x3c013eb2
    ctx->pc = 0x2571c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16050 << 16));
label_2571cc:
    // 0x2571cc: 0x3421b8c3
    ctx->pc = 0x2571ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
label_2571d0:
    // 0x2571d0: 0x44810800
    ctx->pc = 0x2571d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2571d4:
    // 0x2571d4: 0x4601a082
    ctx->pc = 0x2571d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_2571d8:
    // 0x2571d8: 0x3c020031
    ctx->pc = 0x2571d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2571dc:
    // 0x2571dc: 0xc443ffa8
    ctx->pc = 0x2571dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2571e0:
    // 0x2571e0: 0x46031082
    ctx->pc = 0x2571e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2571e4:
    // 0x2571e4: 0xc7a00090
    ctx->pc = 0x2571e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2571e8:
    // 0x2571e8: 0x46001080
    ctx->pc = 0x2571e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2571ec:
    // 0x2571ec: 0xe7a20090
    ctx->pc = 0x2571ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2571f0:
    // 0x2571f0: 0x4601a842
    ctx->pc = 0x2571f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_2571f4:
    // 0x2571f4: 0x46030842
    ctx->pc = 0x2571f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2571f8:
    // 0x2571f8: 0xc7a00098
    ctx->pc = 0x2571f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2571fc:
    // 0x2571fc: 0x46000840
    ctx->pc = 0x2571fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257200:
    // 0x257200: 0xe7a10098
    ctx->pc = 0x257200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_257204:
    // 0x257204: 0x26500010
    ctx->pc = 0x257204u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 16));
label_257208:
    // 0x257208: 0x200202d
    ctx->pc = 0x257208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25720c:
    // 0x25720c: 0xc0b5ae8
label_257210:
    if (ctx->pc == 0x257210u) {
        ctx->pc = 0x257210u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x257214u;
        goto label_257214;
    }
    ctx->pc = 0x25720Cu;
    SET_GPR_U32(ctx, 31, 0x257214u);
    ctx->pc = 0x257210u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257214u; }
    }
    if (ctx->pc != 0x257214u) { return; }
    ctx->pc = 0x257214u;
label_257214:
    // 0x257214: 0x3c020031
    ctx->pc = 0x257214u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_257218:
    // 0x257218: 0xc64100f8
    ctx->pc = 0x257218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25721c:
    // 0x25721c: 0xc442ffa8
    ctx->pc = 0x25721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257220:
    // 0x257220: 0x46020842
    ctx->pc = 0x257220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_257224:
    // 0x257224: 0xc6400040
    ctx->pc = 0x257224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257228:
    // 0x257228: 0x46000840
    ctx->pc = 0x257228u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25722c:
    // 0x25722c: 0xe6410040
    ctx->pc = 0x25722cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_257230:
    // 0x257230: 0xc64000fc
    ctx->pc = 0x257230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257234:
    // 0x257234: 0x46020002
    ctx->pc = 0x257234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_257238:
    // 0x257238: 0xc6410044
    ctx->pc = 0x257238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25723c:
    // 0x25723c: 0x46010000
    ctx->pc = 0x25723cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_257240:
    // 0x257240: 0xe6400044
    ctx->pc = 0x257240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_257244:
    // 0x257244: 0xc6400100
    ctx->pc = 0x257244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257248:
    // 0x257248: 0x46020002
    ctx->pc = 0x257248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_25724c:
    // 0x25724c: 0xc6410048
    ctx->pc = 0x25724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257250:
    // 0x257250: 0x46010000
    ctx->pc = 0x257250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_257254:
    // 0x257254: 0xe6400048
    ctx->pc = 0x257254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
label_257258:
    // 0x257258: 0xc080ce2
label_25725c:
    if (ctx->pc == 0x25725Cu) {
        ctx->pc = 0x25725Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257260u;
        goto label_257260;
    }
    ctx->pc = 0x257258u;
    SET_GPR_U32(ctx, 31, 0x257260u);
    ctx->pc = 0x25725Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257260u; }
    }
    if (ctx->pc != 0x257260u) { return; }
    ctx->pc = 0x257260u;
label_257260:
    // 0x257260: 0x3c020034
    ctx->pc = 0x257260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_257264:
    // 0x257264: 0xc441e88c
    ctx->pc = 0x257264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257268:
    // 0x257268: 0x3c014348
    ctx->pc = 0x257268u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17224 << 16));
label_25726c:
    // 0x25726c: 0x44810000
    ctx->pc = 0x25726cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_257270:
    // 0x257270: 0x46000841
    ctx->pc = 0x257270u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_257274:
    // 0x257274: 0xc6400044
    ctx->pc = 0x257274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257278:
    // 0x257278: 0x46010034
    ctx->pc = 0x257278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25727c:
    // 0x25727c: 0x0
    ctx->pc = 0x25727cu;
    // NOP
label_257280:
    // 0x257280: 0x45000003
label_257284:
    if (ctx->pc == 0x257284u) {
        ctx->pc = 0x257284u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257288u;
        goto label_257288;
    }
    ctx->pc = 0x257280u;
    {
        const bool branch_taken_0x257280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257284u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x257280) {
            ctx->pc = 0x257290u;
            goto label_257290;
        }
    }
    ctx->pc = 0x257288u;
label_257288:
    // 0x257288: 0xc094dcc
label_25728c:
    if (ctx->pc == 0x25728Cu) {
        ctx->pc = 0x25728Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257290u;
        goto label_257290;
    }
    ctx->pc = 0x257288u;
    SET_GPR_U32(ctx, 31, 0x257290u);
    ctx->pc = 0x25728Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257290u; }
    }
    if (ctx->pc != 0x257290u) { return; }
    ctx->pc = 0x257290u;
label_257290:
    // 0x257290: 0x26b50001
    ctx->pc = 0x257290u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_257294:
    // 0x257294: 0x26520110
    ctx->pc = 0x257294u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 272));
label_257298:
    // 0x257298: 0x3c020034
    ctx->pc = 0x257298u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25729c:
    // 0x25729c: 0x8c42cd98
    ctx->pc = 0x25729cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
label_2572a0:
    // 0x2572a0: 0x2a2102a
    ctx->pc = 0x2572a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 2)));
label_2572a4:
    // 0x2572a4: 0x5440f89a
label_2572a8:
    if (ctx->pc == 0x2572A8u) {
        ctx->pc = 0x2572A8u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x2572ACu;
        goto label_2572ac;
    }
    ctx->pc = 0x2572A4u;
    {
        const bool branch_taken_0x2572a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2572a4) {
            ctx->pc = 0x2572A8u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->pc = 0x255510u;
            goto label_255510;
        }
    }
    ctx->pc = 0x2572ACu;
label_2572ac:
    // 0x2572ac: 0x8fa200a8
    ctx->pc = 0x2572acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2572b0:
    // 0x2572b0: 0x4400008
label_2572b4:
    if (ctx->pc == 0x2572B4u) {
        ctx->pc = 0x2572B4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x2572B8u;
        goto label_2572b8;
    }
    ctx->pc = 0x2572B0u;
    {
        const bool branch_taken_0x2572b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2572B4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2572b0) {
            ctx->pc = 0x2572D4u;
            goto label_2572d4;
        }
    }
    ctx->pc = 0x2572B8u;
label_2572b8:
    // 0x2572b8: 0x8c62d320
    ctx->pc = 0x2572b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_2572bc:
    // 0x2572bc: 0x8fa400a8
    ctx->pc = 0x2572bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2572c0:
    // 0x2572c0: 0x10820004
label_2572c4:
    if (ctx->pc == 0x2572C4u) {
        ctx->pc = 0x2572C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x2572C8u;
        goto label_2572c8;
    }
    ctx->pc = 0x2572C0u;
    {
        const bool branch_taken_0x2572c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2572C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2572c0) {
            ctx->pc = 0x2572D4u;
            goto label_2572d4;
        }
    }
    ctx->pc = 0x2572C8u;
label_2572c8:
    // 0x2572c8: 0xac64d320
    ctx->pc = 0x2572c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955808), GPR_U32(ctx, 4));
label_2572cc:
    // 0x2572cc: 0x8fa600ac
    ctx->pc = 0x2572ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2572d0:
    // 0x2572d0: 0xac46d324
    ctx->pc = 0x2572d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955812), GPR_U32(ctx, 6));
label_2572d4:
    // 0x2572d4: 0xc0951ee
label_2572d8:
    if (ctx->pc == 0x2572D8u) {
        ctx->pc = 0x2572DCu;
        goto label_2572dc;
    }
    ctx->pc = 0x2572D4u;
    SET_GPR_U32(ctx, 31, 0x2572DCu);
    ctx->pc = 0x2547B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessItemWobjs_0x2547b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2572DCu; }
    }
    if (ctx->pc != 0x2572DCu) { return; }
    ctx->pc = 0x2572DCu;
label_2572dc:
    // 0x2572dc: 0x3c020034
    ctx->pc = 0x2572dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2572e0:
    // 0x2572e0: 0x3c030034
    ctx->pc = 0x2572e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2572e4:
    // 0x2572e4: 0x8c63cdc0
    ctx->pc = 0x2572e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294954432)));
label_2572e8:
    // 0x2572e8: 0xac43cdc4
    ctx->pc = 0x2572e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954436), GPR_U32(ctx, 3));
label_2572ec:
    // 0x2572ec: 0xdfbf0140
    ctx->pc = 0x2572ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2572f0:
    // 0x2572f0: 0xdfbe0130
    ctx->pc = 0x2572f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_2572f4:
    // 0x2572f4: 0xdfb70120
    ctx->pc = 0x2572f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2572f8:
    // 0x2572f8: 0xdfb60110
    ctx->pc = 0x2572f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2572fc:
    // 0x2572fc: 0xdfb50100
    ctx->pc = 0x2572fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_257300:
    // 0x257300: 0xdfb400f0
    ctx->pc = 0x257300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_257304:
    // 0x257304: 0xdfb300e0
    ctx->pc = 0x257304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_257308:
    // 0x257308: 0xdfb200d0
    ctx->pc = 0x257308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_25730c:
    // 0x25730c: 0xdfb100c0
    ctx->pc = 0x25730cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_257310:
    // 0x257310: 0xdfb000b0
    ctx->pc = 0x257310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_257314:
    // 0x257314: 0xc7b50158
    ctx->pc = 0x257314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_257318:
    // 0x257318: 0xc7b40150
    ctx->pc = 0x257318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25731c:
    // 0x25731c: 0x3e00008
label_257320:
    if (ctx->pc == 0x257320u) {
        ctx->pc = 0x257320u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x257324u;
        goto label_fallthrough_0x25731c;
    }
    ctx->pc = 0x25731Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257320u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254F10u: goto label_254f10;
            case 0x254F14u: goto label_254f14;
            case 0x254F18u: goto label_254f18;
            case 0x254F1Cu: goto label_254f1c;
            case 0x254F20u: goto label_254f20;
            case 0x254F24u: goto label_254f24;
            case 0x254F28u: goto label_254f28;
            case 0x254F2Cu: goto label_254f2c;
            case 0x254F30u: goto label_254f30;
            case 0x254F34u: goto label_254f34;
            case 0x254F38u: goto label_254f38;
            case 0x254F3Cu: goto label_254f3c;
            case 0x254F40u: goto label_254f40;
            case 0x254F44u: goto label_254f44;
            case 0x254F48u: goto label_254f48;
            case 0x254F4Cu: goto label_254f4c;
            case 0x254F50u: goto label_254f50;
            case 0x254F54u: goto label_254f54;
            case 0x254F58u: goto label_254f58;
            case 0x254F5Cu: goto label_254f5c;
            case 0x254F60u: goto label_254f60;
            case 0x254F64u: goto label_254f64;
            case 0x254F68u: goto label_254f68;
            case 0x254F6Cu: goto label_254f6c;
            case 0x254F70u: goto label_254f70;
            case 0x254F74u: goto label_254f74;
            case 0x254F78u: goto label_254f78;
            case 0x254F7Cu: goto label_254f7c;
            case 0x254F80u: goto label_254f80;
            case 0x254F84u: goto label_254f84;
            case 0x254F88u: goto label_254f88;
            case 0x254F8Cu: goto label_254f8c;
            case 0x254F90u: goto label_254f90;
            case 0x254F94u: goto label_254f94;
            case 0x254F98u: goto label_254f98;
            case 0x254F9Cu: goto label_254f9c;
            case 0x254FA0u: goto label_254fa0;
            case 0x254FA4u: goto label_254fa4;
            case 0x254FA8u: goto label_254fa8;
            case 0x254FACu: goto label_254fac;
            case 0x254FB0u: goto label_254fb0;
            case 0x254FB4u: goto label_254fb4;
            case 0x254FB8u: goto label_254fb8;
            case 0x254FBCu: goto label_254fbc;
            case 0x254FC0u: goto label_254fc0;
            case 0x254FC4u: goto label_254fc4;
            case 0x254FC8u: goto label_254fc8;
            case 0x254FCCu: goto label_254fcc;
            case 0x254FD0u: goto label_254fd0;
            case 0x254FD4u: goto label_254fd4;
            case 0x254FD8u: goto label_254fd8;
            case 0x254FDCu: goto label_254fdc;
            case 0x254FE0u: goto label_254fe0;
            case 0x254FE4u: goto label_254fe4;
            case 0x254FE8u: goto label_254fe8;
            case 0x254FECu: goto label_254fec;
            case 0x254FF0u: goto label_254ff0;
            case 0x254FF4u: goto label_254ff4;
            case 0x254FF8u: goto label_254ff8;
            case 0x254FFCu: goto label_254ffc;
            case 0x255000u: goto label_255000;
            case 0x255004u: goto label_255004;
            case 0x255008u: goto label_255008;
            case 0x25500Cu: goto label_25500c;
            case 0x255010u: goto label_255010;
            case 0x255014u: goto label_255014;
            case 0x255018u: goto label_255018;
            case 0x25501Cu: goto label_25501c;
            case 0x255020u: goto label_255020;
            case 0x255024u: goto label_255024;
            case 0x255028u: goto label_255028;
            case 0x25502Cu: goto label_25502c;
            case 0x255030u: goto label_255030;
            case 0x255034u: goto label_255034;
            case 0x255038u: goto label_255038;
            case 0x25503Cu: goto label_25503c;
            case 0x255040u: goto label_255040;
            case 0x255044u: goto label_255044;
            case 0x255048u: goto label_255048;
            case 0x25504Cu: goto label_25504c;
            case 0x255050u: goto label_255050;
            case 0x255054u: goto label_255054;
            case 0x255058u: goto label_255058;
            case 0x25505Cu: goto label_25505c;
            case 0x255060u: goto label_255060;
            case 0x255064u: goto label_255064;
            case 0x255068u: goto label_255068;
            case 0x25506Cu: goto label_25506c;
            case 0x255070u: goto label_255070;
            case 0x255074u: goto label_255074;
            case 0x255078u: goto label_255078;
            case 0x25507Cu: goto label_25507c;
            case 0x255080u: goto label_255080;
            case 0x255084u: goto label_255084;
            case 0x255088u: goto label_255088;
            case 0x25508Cu: goto label_25508c;
            case 0x255090u: goto label_255090;
            case 0x255094u: goto label_255094;
            case 0x255098u: goto label_255098;
            case 0x25509Cu: goto label_25509c;
            case 0x2550A0u: goto label_2550a0;
            case 0x2550A4u: goto label_2550a4;
            case 0x2550A8u: goto label_2550a8;
            case 0x2550ACu: goto label_2550ac;
            case 0x2550B0u: goto label_2550b0;
            case 0x2550B4u: goto label_2550b4;
            case 0x2550B8u: goto label_2550b8;
            case 0x2550BCu: goto label_2550bc;
            case 0x2550C0u: goto label_2550c0;
            case 0x2550C4u: goto label_2550c4;
            case 0x2550C8u: goto label_2550c8;
            case 0x2550CCu: goto label_2550cc;
            case 0x2550D0u: goto label_2550d0;
            case 0x2550D4u: goto label_2550d4;
            case 0x2550D8u: goto label_2550d8;
            case 0x2550DCu: goto label_2550dc;
            case 0x2550E0u: goto label_2550e0;
            case 0x2550E4u: goto label_2550e4;
            case 0x2550E8u: goto label_2550e8;
            case 0x2550ECu: goto label_2550ec;
            case 0x2550F0u: goto label_2550f0;
            case 0x2550F4u: goto label_2550f4;
            case 0x2550F8u: goto label_2550f8;
            case 0x2550FCu: goto label_2550fc;
            case 0x255100u: goto label_255100;
            case 0x255104u: goto label_255104;
            case 0x255108u: goto label_255108;
            case 0x25510Cu: goto label_25510c;
            case 0x255110u: goto label_255110;
            case 0x255114u: goto label_255114;
            case 0x255118u: goto label_255118;
            case 0x25511Cu: goto label_25511c;
            case 0x255120u: goto label_255120;
            case 0x255124u: goto label_255124;
            case 0x255128u: goto label_255128;
            case 0x25512Cu: goto label_25512c;
            case 0x255130u: goto label_255130;
            case 0x255134u: goto label_255134;
            case 0x255138u: goto label_255138;
            case 0x25513Cu: goto label_25513c;
            case 0x255140u: goto label_255140;
            case 0x255144u: goto label_255144;
            case 0x255148u: goto label_255148;
            case 0x25514Cu: goto label_25514c;
            case 0x255150u: goto label_255150;
            case 0x255154u: goto label_255154;
            case 0x255158u: goto label_255158;
            case 0x25515Cu: goto label_25515c;
            case 0x255160u: goto label_255160;
            case 0x255164u: goto label_255164;
            case 0x255168u: goto label_255168;
            case 0x25516Cu: goto label_25516c;
            case 0x255170u: goto label_255170;
            case 0x255174u: goto label_255174;
            case 0x255178u: goto label_255178;
            case 0x25517Cu: goto label_25517c;
            case 0x255180u: goto label_255180;
            case 0x255184u: goto label_255184;
            case 0x255188u: goto label_255188;
            case 0x25518Cu: goto label_25518c;
            case 0x255190u: goto label_255190;
            case 0x255194u: goto label_255194;
            case 0x255198u: goto label_255198;
            case 0x25519Cu: goto label_25519c;
            case 0x2551A0u: goto label_2551a0;
            case 0x2551A4u: goto label_2551a4;
            case 0x2551A8u: goto label_2551a8;
            case 0x2551ACu: goto label_2551ac;
            case 0x2551B0u: goto label_2551b0;
            case 0x2551B4u: goto label_2551b4;
            case 0x2551B8u: goto label_2551b8;
            case 0x2551BCu: goto label_2551bc;
            case 0x2551C0u: goto label_2551c0;
            case 0x2551C4u: goto label_2551c4;
            case 0x2551C8u: goto label_2551c8;
            case 0x2551CCu: goto label_2551cc;
            case 0x2551D0u: goto label_2551d0;
            case 0x2551D4u: goto label_2551d4;
            case 0x2551D8u: goto label_2551d8;
            case 0x2551DCu: goto label_2551dc;
            case 0x2551E0u: goto label_2551e0;
            case 0x2551E4u: goto label_2551e4;
            case 0x2551E8u: goto label_2551e8;
            case 0x2551ECu: goto label_2551ec;
            case 0x2551F0u: goto label_2551f0;
            case 0x2551F4u: goto label_2551f4;
            case 0x2551F8u: goto label_2551f8;
            case 0x2551FCu: goto label_2551fc;
            case 0x255200u: goto label_255200;
            case 0x255204u: goto label_255204;
            case 0x255208u: goto label_255208;
            case 0x25520Cu: goto label_25520c;
            case 0x255210u: goto label_255210;
            case 0x255214u: goto label_255214;
            case 0x255218u: goto label_255218;
            case 0x25521Cu: goto label_25521c;
            case 0x255220u: goto label_255220;
            case 0x255224u: goto label_255224;
            case 0x255228u: goto label_255228;
            case 0x25522Cu: goto label_25522c;
            case 0x255230u: goto label_255230;
            case 0x255234u: goto label_255234;
            case 0x255238u: goto label_255238;
            case 0x25523Cu: goto label_25523c;
            case 0x255240u: goto label_255240;
            case 0x255244u: goto label_255244;
            case 0x255248u: goto label_255248;
            case 0x25524Cu: goto label_25524c;
            case 0x255250u: goto label_255250;
            case 0x255254u: goto label_255254;
            case 0x255258u: goto label_255258;
            case 0x25525Cu: goto label_25525c;
            case 0x255260u: goto label_255260;
            case 0x255264u: goto label_255264;
            case 0x255268u: goto label_255268;
            case 0x25526Cu: goto label_25526c;
            case 0x255270u: goto label_255270;
            case 0x255274u: goto label_255274;
            case 0x255278u: goto label_255278;
            case 0x25527Cu: goto label_25527c;
            case 0x255280u: goto label_255280;
            case 0x255284u: goto label_255284;
            case 0x255288u: goto label_255288;
            case 0x25528Cu: goto label_25528c;
            case 0x255290u: goto label_255290;
            case 0x255294u: goto label_255294;
            case 0x255298u: goto label_255298;
            case 0x25529Cu: goto label_25529c;
            case 0x2552A0u: goto label_2552a0;
            case 0x2552A4u: goto label_2552a4;
            case 0x2552A8u: goto label_2552a8;
            case 0x2552ACu: goto label_2552ac;
            case 0x2552B0u: goto label_2552b0;
            case 0x2552B4u: goto label_2552b4;
            case 0x2552B8u: goto label_2552b8;
            case 0x2552BCu: goto label_2552bc;
            case 0x2552C0u: goto label_2552c0;
            case 0x2552C4u: goto label_2552c4;
            case 0x2552C8u: goto label_2552c8;
            case 0x2552CCu: goto label_2552cc;
            case 0x2552D0u: goto label_2552d0;
            case 0x2552D4u: goto label_2552d4;
            case 0x2552D8u: goto label_2552d8;
            case 0x2552DCu: goto label_2552dc;
            case 0x2552E0u: goto label_2552e0;
            case 0x2552E4u: goto label_2552e4;
            case 0x2552E8u: goto label_2552e8;
            case 0x2552ECu: goto label_2552ec;
            case 0x2552F0u: goto label_2552f0;
            case 0x2552F4u: goto label_2552f4;
            case 0x2552F8u: goto label_2552f8;
            case 0x2552FCu: goto label_2552fc;
            case 0x255300u: goto label_255300;
            case 0x255304u: goto label_255304;
            case 0x255308u: goto label_255308;
            case 0x25530Cu: goto label_25530c;
            case 0x255310u: goto label_255310;
            case 0x255314u: goto label_255314;
            case 0x255318u: goto label_255318;
            case 0x25531Cu: goto label_25531c;
            case 0x255320u: goto label_255320;
            case 0x255324u: goto label_255324;
            case 0x255328u: goto label_255328;
            case 0x25532Cu: goto label_25532c;
            case 0x255330u: goto label_255330;
            case 0x255334u: goto label_255334;
            case 0x255338u: goto label_255338;
            case 0x25533Cu: goto label_25533c;
            case 0x255340u: goto label_255340;
            case 0x255344u: goto label_255344;
            case 0x255348u: goto label_255348;
            case 0x25534Cu: goto label_25534c;
            case 0x255350u: goto label_255350;
            case 0x255354u: goto label_255354;
            case 0x255358u: goto label_255358;
            case 0x25535Cu: goto label_25535c;
            case 0x255360u: goto label_255360;
            case 0x255364u: goto label_255364;
            case 0x255368u: goto label_255368;
            case 0x25536Cu: goto label_25536c;
            case 0x255370u: goto label_255370;
            case 0x255374u: goto label_255374;
            case 0x255378u: goto label_255378;
            case 0x25537Cu: goto label_25537c;
            case 0x255380u: goto label_255380;
            case 0x255384u: goto label_255384;
            case 0x255388u: goto label_255388;
            case 0x25538Cu: goto label_25538c;
            case 0x255390u: goto label_255390;
            case 0x255394u: goto label_255394;
            case 0x255398u: goto label_255398;
            case 0x25539Cu: goto label_25539c;
            case 0x2553A0u: goto label_2553a0;
            case 0x2553A4u: goto label_2553a4;
            case 0x2553A8u: goto label_2553a8;
            case 0x2553ACu: goto label_2553ac;
            case 0x2553B0u: goto label_2553b0;
            case 0x2553B4u: goto label_2553b4;
            case 0x2553B8u: goto label_2553b8;
            case 0x2553BCu: goto label_2553bc;
            case 0x2553C0u: goto label_2553c0;
            case 0x2553C4u: goto label_2553c4;
            case 0x2553C8u: goto label_2553c8;
            case 0x2553CCu: goto label_2553cc;
            case 0x2553D0u: goto label_2553d0;
            case 0x2553D4u: goto label_2553d4;
            case 0x2553D8u: goto label_2553d8;
            case 0x2553DCu: goto label_2553dc;
            case 0x2553E0u: goto label_2553e0;
            case 0x2553E4u: goto label_2553e4;
            case 0x2553E8u: goto label_2553e8;
            case 0x2553ECu: goto label_2553ec;
            case 0x2553F0u: goto label_2553f0;
            case 0x2553F4u: goto label_2553f4;
            case 0x2553F8u: goto label_2553f8;
            case 0x2553FCu: goto label_2553fc;
            case 0x255400u: goto label_255400;
            case 0x255404u: goto label_255404;
            case 0x255408u: goto label_255408;
            case 0x25540Cu: goto label_25540c;
            case 0x255410u: goto label_255410;
            case 0x255414u: goto label_255414;
            case 0x255418u: goto label_255418;
            case 0x25541Cu: goto label_25541c;
            case 0x255420u: goto label_255420;
            case 0x255424u: goto label_255424;
            case 0x255428u: goto label_255428;
            case 0x25542Cu: goto label_25542c;
            case 0x255430u: goto label_255430;
            case 0x255434u: goto label_255434;
            case 0x255438u: goto label_255438;
            case 0x25543Cu: goto label_25543c;
            case 0x255440u: goto label_255440;
            case 0x255444u: goto label_255444;
            case 0x255448u: goto label_255448;
            case 0x25544Cu: goto label_25544c;
            case 0x255450u: goto label_255450;
            case 0x255454u: goto label_255454;
            case 0x255458u: goto label_255458;
            case 0x25545Cu: goto label_25545c;
            case 0x255460u: goto label_255460;
            case 0x255464u: goto label_255464;
            case 0x255468u: goto label_255468;
            case 0x25546Cu: goto label_25546c;
            case 0x255470u: goto label_255470;
            case 0x255474u: goto label_255474;
            case 0x255478u: goto label_255478;
            case 0x25547Cu: goto label_25547c;
            case 0x255480u: goto label_255480;
            case 0x255484u: goto label_255484;
            case 0x255488u: goto label_255488;
            case 0x25548Cu: goto label_25548c;
            case 0x255490u: goto label_255490;
            case 0x255494u: goto label_255494;
            case 0x255498u: goto label_255498;
            case 0x25549Cu: goto label_25549c;
            case 0x2554A0u: goto label_2554a0;
            case 0x2554A4u: goto label_2554a4;
            case 0x2554A8u: goto label_2554a8;
            case 0x2554ACu: goto label_2554ac;
            case 0x2554B0u: goto label_2554b0;
            case 0x2554B4u: goto label_2554b4;
            case 0x2554B8u: goto label_2554b8;
            case 0x2554BCu: goto label_2554bc;
            case 0x2554C0u: goto label_2554c0;
            case 0x2554C4u: goto label_2554c4;
            case 0x2554C8u: goto label_2554c8;
            case 0x2554CCu: goto label_2554cc;
            case 0x2554D0u: goto label_2554d0;
            case 0x2554D4u: goto label_2554d4;
            case 0x2554D8u: goto label_2554d8;
            case 0x2554DCu: goto label_2554dc;
            case 0x2554E0u: goto label_2554e0;
            case 0x2554E4u: goto label_2554e4;
            case 0x2554E8u: goto label_2554e8;
            case 0x2554ECu: goto label_2554ec;
            case 0x2554F0u: goto label_2554f0;
            case 0x2554F4u: goto label_2554f4;
            case 0x2554F8u: goto label_2554f8;
            case 0x2554FCu: goto label_2554fc;
            case 0x255500u: goto label_255500;
            case 0x255504u: goto label_255504;
            case 0x255508u: goto label_255508;
            case 0x25550Cu: goto label_25550c;
            case 0x255510u: goto label_255510;
            case 0x255514u: goto label_255514;
            case 0x255518u: goto label_255518;
            case 0x25551Cu: goto label_25551c;
            case 0x255520u: goto label_255520;
            case 0x255524u: goto label_255524;
            case 0x255528u: goto label_255528;
            case 0x25552Cu: goto label_25552c;
            case 0x255530u: goto label_255530;
            case 0x255534u: goto label_255534;
            case 0x255538u: goto label_255538;
            case 0x25553Cu: goto label_25553c;
            case 0x255540u: goto label_255540;
            case 0x255544u: goto label_255544;
            case 0x255548u: goto label_255548;
            case 0x25554Cu: goto label_25554c;
            case 0x255550u: goto label_255550;
            case 0x255554u: goto label_255554;
            case 0x255558u: goto label_255558;
            case 0x25555Cu: goto label_25555c;
            case 0x255560u: goto label_255560;
            case 0x255564u: goto label_255564;
            case 0x255568u: goto label_255568;
            case 0x25556Cu: goto label_25556c;
            case 0x255570u: goto label_255570;
            case 0x255574u: goto label_255574;
            case 0x255578u: goto label_255578;
            case 0x25557Cu: goto label_25557c;
            case 0x255580u: goto label_255580;
            case 0x255584u: goto label_255584;
            case 0x255588u: goto label_255588;
            case 0x25558Cu: goto label_25558c;
            case 0x255590u: goto label_255590;
            case 0x255594u: goto label_255594;
            case 0x255598u: goto label_255598;
            case 0x25559Cu: goto label_25559c;
            case 0x2555A0u: goto label_2555a0;
            case 0x2555A4u: goto label_2555a4;
            case 0x2555A8u: goto label_2555a8;
            case 0x2555ACu: goto label_2555ac;
            case 0x2555B0u: goto label_2555b0;
            case 0x2555B4u: goto label_2555b4;
            case 0x2555B8u: goto label_2555b8;
            case 0x2555BCu: goto label_2555bc;
            case 0x2555C0u: goto label_2555c0;
            case 0x2555C4u: goto label_2555c4;
            case 0x2555C8u: goto label_2555c8;
            case 0x2555CCu: goto label_2555cc;
            case 0x2555D0u: goto label_2555d0;
            case 0x2555D4u: goto label_2555d4;
            case 0x2555D8u: goto label_2555d8;
            case 0x2555DCu: goto label_2555dc;
            case 0x2555E0u: goto label_2555e0;
            case 0x2555E4u: goto label_2555e4;
            case 0x2555E8u: goto label_2555e8;
            case 0x2555ECu: goto label_2555ec;
            case 0x2555F0u: goto label_2555f0;
            case 0x2555F4u: goto label_2555f4;
            case 0x2555F8u: goto label_2555f8;
            case 0x2555FCu: goto label_2555fc;
            case 0x255600u: goto label_255600;
            case 0x255604u: goto label_255604;
            case 0x255608u: goto label_255608;
            case 0x25560Cu: goto label_25560c;
            case 0x255610u: goto label_255610;
            case 0x255614u: goto label_255614;
            case 0x255618u: goto label_255618;
            case 0x25561Cu: goto label_25561c;
            case 0x255620u: goto label_255620;
            case 0x255624u: goto label_255624;
            case 0x255628u: goto label_255628;
            case 0x25562Cu: goto label_25562c;
            case 0x255630u: goto label_255630;
            case 0x255634u: goto label_255634;
            case 0x255638u: goto label_255638;
            case 0x25563Cu: goto label_25563c;
            case 0x255640u: goto label_255640;
            case 0x255644u: goto label_255644;
            case 0x255648u: goto label_255648;
            case 0x25564Cu: goto label_25564c;
            case 0x255650u: goto label_255650;
            case 0x255654u: goto label_255654;
            case 0x255658u: goto label_255658;
            case 0x25565Cu: goto label_25565c;
            case 0x255660u: goto label_255660;
            case 0x255664u: goto label_255664;
            case 0x255668u: goto label_255668;
            case 0x25566Cu: goto label_25566c;
            case 0x255670u: goto label_255670;
            case 0x255674u: goto label_255674;
            case 0x255678u: goto label_255678;
            case 0x25567Cu: goto label_25567c;
            case 0x255680u: goto label_255680;
            case 0x255684u: goto label_255684;
            case 0x255688u: goto label_255688;
            case 0x25568Cu: goto label_25568c;
            case 0x255690u: goto label_255690;
            case 0x255694u: goto label_255694;
            case 0x255698u: goto label_255698;
            case 0x25569Cu: goto label_25569c;
            case 0x2556A0u: goto label_2556a0;
            case 0x2556A4u: goto label_2556a4;
            case 0x2556A8u: goto label_2556a8;
            case 0x2556ACu: goto label_2556ac;
            case 0x2556B0u: goto label_2556b0;
            case 0x2556B4u: goto label_2556b4;
            case 0x2556B8u: goto label_2556b8;
            case 0x2556BCu: goto label_2556bc;
            case 0x2556C0u: goto label_2556c0;
            case 0x2556C4u: goto label_2556c4;
            case 0x2556C8u: goto label_2556c8;
            case 0x2556CCu: goto label_2556cc;
            case 0x2556D0u: goto label_2556d0;
            case 0x2556D4u: goto label_2556d4;
            case 0x2556D8u: goto label_2556d8;
            case 0x2556DCu: goto label_2556dc;
            case 0x2556E0u: goto label_2556e0;
            case 0x2556E4u: goto label_2556e4;
            case 0x2556E8u: goto label_2556e8;
            case 0x2556ECu: goto label_2556ec;
            case 0x2556F0u: goto label_2556f0;
            case 0x2556F4u: goto label_2556f4;
            case 0x2556F8u: goto label_2556f8;
            case 0x2556FCu: goto label_2556fc;
            case 0x255700u: goto label_255700;
            case 0x255704u: goto label_255704;
            case 0x255708u: goto label_255708;
            case 0x25570Cu: goto label_25570c;
            case 0x255710u: goto label_255710;
            case 0x255714u: goto label_255714;
            case 0x255718u: goto label_255718;
            case 0x25571Cu: goto label_25571c;
            case 0x255720u: goto label_255720;
            case 0x255724u: goto label_255724;
            case 0x255728u: goto label_255728;
            case 0x25572Cu: goto label_25572c;
            case 0x255730u: goto label_255730;
            case 0x255734u: goto label_255734;
            case 0x255738u: goto label_255738;
            case 0x25573Cu: goto label_25573c;
            case 0x255740u: goto label_255740;
            case 0x255744u: goto label_255744;
            case 0x255748u: goto label_255748;
            case 0x25574Cu: goto label_25574c;
            case 0x255750u: goto label_255750;
            case 0x255754u: goto label_255754;
            case 0x255758u: goto label_255758;
            case 0x25575Cu: goto label_25575c;
            case 0x255760u: goto label_255760;
            case 0x255764u: goto label_255764;
            case 0x255768u: goto label_255768;
            case 0x25576Cu: goto label_25576c;
            case 0x255770u: goto label_255770;
            case 0x255774u: goto label_255774;
            case 0x255778u: goto label_255778;
            case 0x25577Cu: goto label_25577c;
            case 0x255780u: goto label_255780;
            case 0x255784u: goto label_255784;
            case 0x255788u: goto label_255788;
            case 0x25578Cu: goto label_25578c;
            case 0x255790u: goto label_255790;
            case 0x255794u: goto label_255794;
            case 0x255798u: goto label_255798;
            case 0x25579Cu: goto label_25579c;
            case 0x2557A0u: goto label_2557a0;
            case 0x2557A4u: goto label_2557a4;
            case 0x2557A8u: goto label_2557a8;
            case 0x2557ACu: goto label_2557ac;
            case 0x2557B0u: goto label_2557b0;
            case 0x2557B4u: goto label_2557b4;
            case 0x2557B8u: goto label_2557b8;
            case 0x2557BCu: goto label_2557bc;
            case 0x2557C0u: goto label_2557c0;
            case 0x2557C4u: goto label_2557c4;
            case 0x2557C8u: goto label_2557c8;
            case 0x2557CCu: goto label_2557cc;
            case 0x2557D0u: goto label_2557d0;
            case 0x2557D4u: goto label_2557d4;
            case 0x2557D8u: goto label_2557d8;
            case 0x2557DCu: goto label_2557dc;
            case 0x2557E0u: goto label_2557e0;
            case 0x2557E4u: goto label_2557e4;
            case 0x2557E8u: goto label_2557e8;
            case 0x2557ECu: goto label_2557ec;
            case 0x2557F0u: goto label_2557f0;
            case 0x2557F4u: goto label_2557f4;
            case 0x2557F8u: goto label_2557f8;
            case 0x2557FCu: goto label_2557fc;
            case 0x255800u: goto label_255800;
            case 0x255804u: goto label_255804;
            case 0x255808u: goto label_255808;
            case 0x25580Cu: goto label_25580c;
            case 0x255810u: goto label_255810;
            case 0x255814u: goto label_255814;
            case 0x255818u: goto label_255818;
            case 0x25581Cu: goto label_25581c;
            case 0x255820u: goto label_255820;
            case 0x255824u: goto label_255824;
            case 0x255828u: goto label_255828;
            case 0x25582Cu: goto label_25582c;
            case 0x255830u: goto label_255830;
            case 0x255834u: goto label_255834;
            case 0x255838u: goto label_255838;
            case 0x25583Cu: goto label_25583c;
            case 0x255840u: goto label_255840;
            case 0x255844u: goto label_255844;
            case 0x255848u: goto label_255848;
            case 0x25584Cu: goto label_25584c;
            case 0x255850u: goto label_255850;
            case 0x255854u: goto label_255854;
            case 0x255858u: goto label_255858;
            case 0x25585Cu: goto label_25585c;
            case 0x255860u: goto label_255860;
            case 0x255864u: goto label_255864;
            case 0x255868u: goto label_255868;
            case 0x25586Cu: goto label_25586c;
            case 0x255870u: goto label_255870;
            case 0x255874u: goto label_255874;
            case 0x255878u: goto label_255878;
            case 0x25587Cu: goto label_25587c;
            case 0x255880u: goto label_255880;
            case 0x255884u: goto label_255884;
            case 0x255888u: goto label_255888;
            case 0x25588Cu: goto label_25588c;
            case 0x255890u: goto label_255890;
            case 0x255894u: goto label_255894;
            case 0x255898u: goto label_255898;
            case 0x25589Cu: goto label_25589c;
            case 0x2558A0u: goto label_2558a0;
            case 0x2558A4u: goto label_2558a4;
            case 0x2558A8u: goto label_2558a8;
            case 0x2558ACu: goto label_2558ac;
            case 0x2558B0u: goto label_2558b0;
            case 0x2558B4u: goto label_2558b4;
            case 0x2558B8u: goto label_2558b8;
            case 0x2558BCu: goto label_2558bc;
            case 0x2558C0u: goto label_2558c0;
            case 0x2558C4u: goto label_2558c4;
            case 0x2558C8u: goto label_2558c8;
            case 0x2558CCu: goto label_2558cc;
            case 0x2558D0u: goto label_2558d0;
            case 0x2558D4u: goto label_2558d4;
            case 0x2558D8u: goto label_2558d8;
            case 0x2558DCu: goto label_2558dc;
            case 0x2558E0u: goto label_2558e0;
            case 0x2558E4u: goto label_2558e4;
            case 0x2558E8u: goto label_2558e8;
            case 0x2558ECu: goto label_2558ec;
            case 0x2558F0u: goto label_2558f0;
            case 0x2558F4u: goto label_2558f4;
            case 0x2558F8u: goto label_2558f8;
            case 0x2558FCu: goto label_2558fc;
            case 0x255900u: goto label_255900;
            case 0x255904u: goto label_255904;
            case 0x255908u: goto label_255908;
            case 0x25590Cu: goto label_25590c;
            case 0x255910u: goto label_255910;
            case 0x255914u: goto label_255914;
            case 0x255918u: goto label_255918;
            case 0x25591Cu: goto label_25591c;
            case 0x255920u: goto label_255920;
            case 0x255924u: goto label_255924;
            case 0x255928u: goto label_255928;
            case 0x25592Cu: goto label_25592c;
            case 0x255930u: goto label_255930;
            case 0x255934u: goto label_255934;
            case 0x255938u: goto label_255938;
            case 0x25593Cu: goto label_25593c;
            case 0x255940u: goto label_255940;
            case 0x255944u: goto label_255944;
            case 0x255948u: goto label_255948;
            case 0x25594Cu: goto label_25594c;
            case 0x255950u: goto label_255950;
            case 0x255954u: goto label_255954;
            case 0x255958u: goto label_255958;
            case 0x25595Cu: goto label_25595c;
            case 0x255960u: goto label_255960;
            case 0x255964u: goto label_255964;
            case 0x255968u: goto label_255968;
            case 0x25596Cu: goto label_25596c;
            case 0x255970u: goto label_255970;
            case 0x255974u: goto label_255974;
            case 0x255978u: goto label_255978;
            case 0x25597Cu: goto label_25597c;
            case 0x255980u: goto label_255980;
            case 0x255984u: goto label_255984;
            case 0x255988u: goto label_255988;
            case 0x25598Cu: goto label_25598c;
            case 0x255990u: goto label_255990;
            case 0x255994u: goto label_255994;
            case 0x255998u: goto label_255998;
            case 0x25599Cu: goto label_25599c;
            case 0x2559A0u: goto label_2559a0;
            case 0x2559A4u: goto label_2559a4;
            case 0x2559A8u: goto label_2559a8;
            case 0x2559ACu: goto label_2559ac;
            case 0x2559B0u: goto label_2559b0;
            case 0x2559B4u: goto label_2559b4;
            case 0x2559B8u: goto label_2559b8;
            case 0x2559BCu: goto label_2559bc;
            case 0x2559C0u: goto label_2559c0;
            case 0x2559C4u: goto label_2559c4;
            case 0x2559C8u: goto label_2559c8;
            case 0x2559CCu: goto label_2559cc;
            case 0x2559D0u: goto label_2559d0;
            case 0x2559D4u: goto label_2559d4;
            case 0x2559D8u: goto label_2559d8;
            case 0x2559DCu: goto label_2559dc;
            case 0x2559E0u: goto label_2559e0;
            case 0x2559E4u: goto label_2559e4;
            case 0x2559E8u: goto label_2559e8;
            case 0x2559ECu: goto label_2559ec;
            case 0x2559F0u: goto label_2559f0;
            case 0x2559F4u: goto label_2559f4;
            case 0x2559F8u: goto label_2559f8;
            case 0x2559FCu: goto label_2559fc;
            case 0x255A00u: goto label_255a00;
            case 0x255A04u: goto label_255a04;
            case 0x255A08u: goto label_255a08;
            case 0x255A0Cu: goto label_255a0c;
            case 0x255A10u: goto label_255a10;
            case 0x255A14u: goto label_255a14;
            case 0x255A18u: goto label_255a18;
            case 0x255A1Cu: goto label_255a1c;
            case 0x255A20u: goto label_255a20;
            case 0x255A24u: goto label_255a24;
            case 0x255A28u: goto label_255a28;
            case 0x255A2Cu: goto label_255a2c;
            case 0x255A30u: goto label_255a30;
            case 0x255A34u: goto label_255a34;
            case 0x255A38u: goto label_255a38;
            case 0x255A3Cu: goto label_255a3c;
            case 0x255A40u: goto label_255a40;
            case 0x255A44u: goto label_255a44;
            case 0x255A48u: goto label_255a48;
            case 0x255A4Cu: goto label_255a4c;
            case 0x255A50u: goto label_255a50;
            case 0x255A54u: goto label_255a54;
            case 0x255A58u: goto label_255a58;
            case 0x255A5Cu: goto label_255a5c;
            case 0x255A60u: goto label_255a60;
            case 0x255A64u: goto label_255a64;
            case 0x255A68u: goto label_255a68;
            case 0x255A6Cu: goto label_255a6c;
            case 0x255A70u: goto label_255a70;
            case 0x255A74u: goto label_255a74;
            case 0x255A78u: goto label_255a78;
            case 0x255A7Cu: goto label_255a7c;
            case 0x255A80u: goto label_255a80;
            case 0x255A84u: goto label_255a84;
            case 0x255A88u: goto label_255a88;
            case 0x255A8Cu: goto label_255a8c;
            case 0x255A90u: goto label_255a90;
            case 0x255A94u: goto label_255a94;
            case 0x255A98u: goto label_255a98;
            case 0x255A9Cu: goto label_255a9c;
            case 0x255AA0u: goto label_255aa0;
            case 0x255AA4u: goto label_255aa4;
            case 0x255AA8u: goto label_255aa8;
            case 0x255AACu: goto label_255aac;
            case 0x255AB0u: goto label_255ab0;
            case 0x255AB4u: goto label_255ab4;
            case 0x255AB8u: goto label_255ab8;
            case 0x255ABCu: goto label_255abc;
            case 0x255AC0u: goto label_255ac0;
            case 0x255AC4u: goto label_255ac4;
            case 0x255AC8u: goto label_255ac8;
            case 0x255ACCu: goto label_255acc;
            case 0x255AD0u: goto label_255ad0;
            case 0x255AD4u: goto label_255ad4;
            case 0x255AD8u: goto label_255ad8;
            case 0x255ADCu: goto label_255adc;
            case 0x255AE0u: goto label_255ae0;
            case 0x255AE4u: goto label_255ae4;
            case 0x255AE8u: goto label_255ae8;
            case 0x255AECu: goto label_255aec;
            case 0x255AF0u: goto label_255af0;
            case 0x255AF4u: goto label_255af4;
            case 0x255AF8u: goto label_255af8;
            case 0x255AFCu: goto label_255afc;
            case 0x255B00u: goto label_255b00;
            case 0x255B04u: goto label_255b04;
            case 0x255B08u: goto label_255b08;
            case 0x255B0Cu: goto label_255b0c;
            case 0x255B10u: goto label_255b10;
            case 0x255B14u: goto label_255b14;
            case 0x255B18u: goto label_255b18;
            case 0x255B1Cu: goto label_255b1c;
            case 0x255B20u: goto label_255b20;
            case 0x255B24u: goto label_255b24;
            case 0x255B28u: goto label_255b28;
            case 0x255B2Cu: goto label_255b2c;
            case 0x255B30u: goto label_255b30;
            case 0x255B34u: goto label_255b34;
            case 0x255B38u: goto label_255b38;
            case 0x255B3Cu: goto label_255b3c;
            case 0x255B40u: goto label_255b40;
            case 0x255B44u: goto label_255b44;
            case 0x255B48u: goto label_255b48;
            case 0x255B4Cu: goto label_255b4c;
            case 0x255B50u: goto label_255b50;
            case 0x255B54u: goto label_255b54;
            case 0x255B58u: goto label_255b58;
            case 0x255B5Cu: goto label_255b5c;
            case 0x255B60u: goto label_255b60;
            case 0x255B64u: goto label_255b64;
            case 0x255B68u: goto label_255b68;
            case 0x255B6Cu: goto label_255b6c;
            case 0x255B70u: goto label_255b70;
            case 0x255B74u: goto label_255b74;
            case 0x255B78u: goto label_255b78;
            case 0x255B7Cu: goto label_255b7c;
            case 0x255B80u: goto label_255b80;
            case 0x255B84u: goto label_255b84;
            case 0x255B88u: goto label_255b88;
            case 0x255B8Cu: goto label_255b8c;
            case 0x255B90u: goto label_255b90;
            case 0x255B94u: goto label_255b94;
            case 0x255B98u: goto label_255b98;
            case 0x255B9Cu: goto label_255b9c;
            case 0x255BA0u: goto label_255ba0;
            case 0x255BA4u: goto label_255ba4;
            case 0x255BA8u: goto label_255ba8;
            case 0x255BACu: goto label_255bac;
            case 0x255BB0u: goto label_255bb0;
            case 0x255BB4u: goto label_255bb4;
            case 0x255BB8u: goto label_255bb8;
            case 0x255BBCu: goto label_255bbc;
            case 0x255BC0u: goto label_255bc0;
            case 0x255BC4u: goto label_255bc4;
            case 0x255BC8u: goto label_255bc8;
            case 0x255BCCu: goto label_255bcc;
            case 0x255BD0u: goto label_255bd0;
            case 0x255BD4u: goto label_255bd4;
            case 0x255BD8u: goto label_255bd8;
            case 0x255BDCu: goto label_255bdc;
            case 0x255BE0u: goto label_255be0;
            case 0x255BE4u: goto label_255be4;
            case 0x255BE8u: goto label_255be8;
            case 0x255BECu: goto label_255bec;
            case 0x255BF0u: goto label_255bf0;
            case 0x255BF4u: goto label_255bf4;
            case 0x255BF8u: goto label_255bf8;
            case 0x255BFCu: goto label_255bfc;
            case 0x255C00u: goto label_255c00;
            case 0x255C04u: goto label_255c04;
            case 0x255C08u: goto label_255c08;
            case 0x255C0Cu: goto label_255c0c;
            case 0x255C10u: goto label_255c10;
            case 0x255C14u: goto label_255c14;
            case 0x255C18u: goto label_255c18;
            case 0x255C1Cu: goto label_255c1c;
            case 0x255C20u: goto label_255c20;
            case 0x255C24u: goto label_255c24;
            case 0x255C28u: goto label_255c28;
            case 0x255C2Cu: goto label_255c2c;
            case 0x255C30u: goto label_255c30;
            case 0x255C34u: goto label_255c34;
            case 0x255C38u: goto label_255c38;
            case 0x255C3Cu: goto label_255c3c;
            case 0x255C40u: goto label_255c40;
            case 0x255C44u: goto label_255c44;
            case 0x255C48u: goto label_255c48;
            case 0x255C4Cu: goto label_255c4c;
            case 0x255C50u: goto label_255c50;
            case 0x255C54u: goto label_255c54;
            case 0x255C58u: goto label_255c58;
            case 0x255C5Cu: goto label_255c5c;
            case 0x255C60u: goto label_255c60;
            case 0x255C64u: goto label_255c64;
            case 0x255C68u: goto label_255c68;
            case 0x255C6Cu: goto label_255c6c;
            case 0x255C70u: goto label_255c70;
            case 0x255C74u: goto label_255c74;
            case 0x255C78u: goto label_255c78;
            case 0x255C7Cu: goto label_255c7c;
            case 0x255C80u: goto label_255c80;
            case 0x255C84u: goto label_255c84;
            case 0x255C88u: goto label_255c88;
            case 0x255C8Cu: goto label_255c8c;
            case 0x255C90u: goto label_255c90;
            case 0x255C94u: goto label_255c94;
            case 0x255C98u: goto label_255c98;
            case 0x255C9Cu: goto label_255c9c;
            case 0x255CA0u: goto label_255ca0;
            case 0x255CA4u: goto label_255ca4;
            case 0x255CA8u: goto label_255ca8;
            case 0x255CACu: goto label_255cac;
            case 0x255CB0u: goto label_255cb0;
            case 0x255CB4u: goto label_255cb4;
            case 0x255CB8u: goto label_255cb8;
            case 0x255CBCu: goto label_255cbc;
            case 0x255CC0u: goto label_255cc0;
            case 0x255CC4u: goto label_255cc4;
            case 0x255CC8u: goto label_255cc8;
            case 0x255CCCu: goto label_255ccc;
            case 0x255CD0u: goto label_255cd0;
            case 0x255CD4u: goto label_255cd4;
            case 0x255CD8u: goto label_255cd8;
            case 0x255CDCu: goto label_255cdc;
            case 0x255CE0u: goto label_255ce0;
            case 0x255CE4u: goto label_255ce4;
            case 0x255CE8u: goto label_255ce8;
            case 0x255CECu: goto label_255cec;
            case 0x255CF0u: goto label_255cf0;
            case 0x255CF4u: goto label_255cf4;
            case 0x255CF8u: goto label_255cf8;
            case 0x255CFCu: goto label_255cfc;
            case 0x255D00u: goto label_255d00;
            case 0x255D04u: goto label_255d04;
            case 0x255D08u: goto label_255d08;
            case 0x255D0Cu: goto label_255d0c;
            case 0x255D10u: goto label_255d10;
            case 0x255D14u: goto label_255d14;
            case 0x255D18u: goto label_255d18;
            case 0x255D1Cu: goto label_255d1c;
            case 0x255D20u: goto label_255d20;
            case 0x255D24u: goto label_255d24;
            case 0x255D28u: goto label_255d28;
            case 0x255D2Cu: goto label_255d2c;
            case 0x255D30u: goto label_255d30;
            case 0x255D34u: goto label_255d34;
            case 0x255D38u: goto label_255d38;
            case 0x255D3Cu: goto label_255d3c;
            case 0x255D40u: goto label_255d40;
            case 0x255D44u: goto label_255d44;
            case 0x255D48u: goto label_255d48;
            case 0x255D4Cu: goto label_255d4c;
            case 0x255D50u: goto label_255d50;
            case 0x255D54u: goto label_255d54;
            case 0x255D58u: goto label_255d58;
            case 0x255D5Cu: goto label_255d5c;
            case 0x255D60u: goto label_255d60;
            case 0x255D64u: goto label_255d64;
            case 0x255D68u: goto label_255d68;
            case 0x255D6Cu: goto label_255d6c;
            case 0x255D70u: goto label_255d70;
            case 0x255D74u: goto label_255d74;
            case 0x255D78u: goto label_255d78;
            case 0x255D7Cu: goto label_255d7c;
            case 0x255D80u: goto label_255d80;
            case 0x255D84u: goto label_255d84;
            case 0x255D88u: goto label_255d88;
            case 0x255D8Cu: goto label_255d8c;
            case 0x255D90u: goto label_255d90;
            case 0x255D94u: goto label_255d94;
            case 0x255D98u: goto label_255d98;
            case 0x255D9Cu: goto label_255d9c;
            case 0x255DA0u: goto label_255da0;
            case 0x255DA4u: goto label_255da4;
            case 0x255DA8u: goto label_255da8;
            case 0x255DACu: goto label_255dac;
            case 0x255DB0u: goto label_255db0;
            case 0x255DB4u: goto label_255db4;
            case 0x255DB8u: goto label_255db8;
            case 0x255DBCu: goto label_255dbc;
            case 0x255DC0u: goto label_255dc0;
            case 0x255DC4u: goto label_255dc4;
            case 0x255DC8u: goto label_255dc8;
            case 0x255DCCu: goto label_255dcc;
            case 0x255DD0u: goto label_255dd0;
            case 0x255DD4u: goto label_255dd4;
            case 0x255DD8u: goto label_255dd8;
            case 0x255DDCu: goto label_255ddc;
            case 0x255DE0u: goto label_255de0;
            case 0x255DE4u: goto label_255de4;
            case 0x255DE8u: goto label_255de8;
            case 0x255DECu: goto label_255dec;
            case 0x255DF0u: goto label_255df0;
            case 0x255DF4u: goto label_255df4;
            case 0x255DF8u: goto label_255df8;
            case 0x255DFCu: goto label_255dfc;
            case 0x255E00u: goto label_255e00;
            case 0x255E04u: goto label_255e04;
            case 0x255E08u: goto label_255e08;
            case 0x255E0Cu: goto label_255e0c;
            case 0x255E10u: goto label_255e10;
            case 0x255E14u: goto label_255e14;
            case 0x255E18u: goto label_255e18;
            case 0x255E1Cu: goto label_255e1c;
            case 0x255E20u: goto label_255e20;
            case 0x255E24u: goto label_255e24;
            case 0x255E28u: goto label_255e28;
            case 0x255E2Cu: goto label_255e2c;
            case 0x255E30u: goto label_255e30;
            case 0x255E34u: goto label_255e34;
            case 0x255E38u: goto label_255e38;
            case 0x255E3Cu: goto label_255e3c;
            case 0x255E40u: goto label_255e40;
            case 0x255E44u: goto label_255e44;
            case 0x255E48u: goto label_255e48;
            case 0x255E4Cu: goto label_255e4c;
            case 0x255E50u: goto label_255e50;
            case 0x255E54u: goto label_255e54;
            case 0x255E58u: goto label_255e58;
            case 0x255E5Cu: goto label_255e5c;
            case 0x255E60u: goto label_255e60;
            case 0x255E64u: goto label_255e64;
            case 0x255E68u: goto label_255e68;
            case 0x255E6Cu: goto label_255e6c;
            case 0x255E70u: goto label_255e70;
            case 0x255E74u: goto label_255e74;
            case 0x255E78u: goto label_255e78;
            case 0x255E7Cu: goto label_255e7c;
            case 0x255E80u: goto label_255e80;
            case 0x255E84u: goto label_255e84;
            case 0x255E88u: goto label_255e88;
            case 0x255E8Cu: goto label_255e8c;
            case 0x255E90u: goto label_255e90;
            case 0x255E94u: goto label_255e94;
            case 0x255E98u: goto label_255e98;
            case 0x255E9Cu: goto label_255e9c;
            case 0x255EA0u: goto label_255ea0;
            case 0x255EA4u: goto label_255ea4;
            case 0x255EA8u: goto label_255ea8;
            case 0x255EACu: goto label_255eac;
            case 0x255EB0u: goto label_255eb0;
            case 0x255EB4u: goto label_255eb4;
            case 0x255EB8u: goto label_255eb8;
            case 0x255EBCu: goto label_255ebc;
            case 0x255EC0u: goto label_255ec0;
            case 0x255EC4u: goto label_255ec4;
            case 0x255EC8u: goto label_255ec8;
            case 0x255ECCu: goto label_255ecc;
            case 0x255ED0u: goto label_255ed0;
            case 0x255ED4u: goto label_255ed4;
            case 0x255ED8u: goto label_255ed8;
            case 0x255EDCu: goto label_255edc;
            case 0x255EE0u: goto label_255ee0;
            case 0x255EE4u: goto label_255ee4;
            case 0x255EE8u: goto label_255ee8;
            case 0x255EECu: goto label_255eec;
            case 0x255EF0u: goto label_255ef0;
            case 0x255EF4u: goto label_255ef4;
            case 0x255EF8u: goto label_255ef8;
            case 0x255EFCu: goto label_255efc;
            case 0x255F00u: goto label_255f00;
            case 0x255F04u: goto label_255f04;
            case 0x255F08u: goto label_255f08;
            case 0x255F0Cu: goto label_255f0c;
            case 0x255F10u: goto label_255f10;
            case 0x255F14u: goto label_255f14;
            case 0x255F18u: goto label_255f18;
            case 0x255F1Cu: goto label_255f1c;
            case 0x255F20u: goto label_255f20;
            case 0x255F24u: goto label_255f24;
            case 0x255F28u: goto label_255f28;
            case 0x255F2Cu: goto label_255f2c;
            case 0x255F30u: goto label_255f30;
            case 0x255F34u: goto label_255f34;
            case 0x255F38u: goto label_255f38;
            case 0x255F3Cu: goto label_255f3c;
            case 0x255F40u: goto label_255f40;
            case 0x255F44u: goto label_255f44;
            case 0x255F48u: goto label_255f48;
            case 0x255F4Cu: goto label_255f4c;
            case 0x255F50u: goto label_255f50;
            case 0x255F54u: goto label_255f54;
            case 0x255F58u: goto label_255f58;
            case 0x255F5Cu: goto label_255f5c;
            case 0x255F60u: goto label_255f60;
            case 0x255F64u: goto label_255f64;
            case 0x255F68u: goto label_255f68;
            case 0x255F6Cu: goto label_255f6c;
            case 0x255F70u: goto label_255f70;
            case 0x255F74u: goto label_255f74;
            case 0x255F78u: goto label_255f78;
            case 0x255F7Cu: goto label_255f7c;
            case 0x255F80u: goto label_255f80;
            case 0x255F84u: goto label_255f84;
            case 0x255F88u: goto label_255f88;
            case 0x255F8Cu: goto label_255f8c;
            case 0x255F90u: goto label_255f90;
            case 0x255F94u: goto label_255f94;
            case 0x255F98u: goto label_255f98;
            case 0x255F9Cu: goto label_255f9c;
            case 0x255FA0u: goto label_255fa0;
            case 0x255FA4u: goto label_255fa4;
            case 0x255FA8u: goto label_255fa8;
            case 0x255FACu: goto label_255fac;
            case 0x255FB0u: goto label_255fb0;
            case 0x255FB4u: goto label_255fb4;
            case 0x255FB8u: goto label_255fb8;
            case 0x255FBCu: goto label_255fbc;
            case 0x255FC0u: goto label_255fc0;
            case 0x255FC4u: goto label_255fc4;
            case 0x255FC8u: goto label_255fc8;
            case 0x255FCCu: goto label_255fcc;
            case 0x255FD0u: goto label_255fd0;
            case 0x255FD4u: goto label_255fd4;
            case 0x255FD8u: goto label_255fd8;
            case 0x255FDCu: goto label_255fdc;
            case 0x255FE0u: goto label_255fe0;
            case 0x255FE4u: goto label_255fe4;
            case 0x255FE8u: goto label_255fe8;
            case 0x255FECu: goto label_255fec;
            case 0x255FF0u: goto label_255ff0;
            case 0x255FF4u: goto label_255ff4;
            case 0x255FF8u: goto label_255ff8;
            case 0x255FFCu: goto label_255ffc;
            case 0x256000u: goto label_256000;
            case 0x256004u: goto label_256004;
            case 0x256008u: goto label_256008;
            case 0x25600Cu: goto label_25600c;
            case 0x256010u: goto label_256010;
            case 0x256014u: goto label_256014;
            case 0x256018u: goto label_256018;
            case 0x25601Cu: goto label_25601c;
            case 0x256020u: goto label_256020;
            case 0x256024u: goto label_256024;
            case 0x256028u: goto label_256028;
            case 0x25602Cu: goto label_25602c;
            case 0x256030u: goto label_256030;
            case 0x256034u: goto label_256034;
            case 0x256038u: goto label_256038;
            case 0x25603Cu: goto label_25603c;
            case 0x256040u: goto label_256040;
            case 0x256044u: goto label_256044;
            case 0x256048u: goto label_256048;
            case 0x25604Cu: goto label_25604c;
            case 0x256050u: goto label_256050;
            case 0x256054u: goto label_256054;
            case 0x256058u: goto label_256058;
            case 0x25605Cu: goto label_25605c;
            case 0x256060u: goto label_256060;
            case 0x256064u: goto label_256064;
            case 0x256068u: goto label_256068;
            case 0x25606Cu: goto label_25606c;
            case 0x256070u: goto label_256070;
            case 0x256074u: goto label_256074;
            case 0x256078u: goto label_256078;
            case 0x25607Cu: goto label_25607c;
            case 0x256080u: goto label_256080;
            case 0x256084u: goto label_256084;
            case 0x256088u: goto label_256088;
            case 0x25608Cu: goto label_25608c;
            case 0x256090u: goto label_256090;
            case 0x256094u: goto label_256094;
            case 0x256098u: goto label_256098;
            case 0x25609Cu: goto label_25609c;
            case 0x2560A0u: goto label_2560a0;
            case 0x2560A4u: goto label_2560a4;
            case 0x2560A8u: goto label_2560a8;
            case 0x2560ACu: goto label_2560ac;
            case 0x2560B0u: goto label_2560b0;
            case 0x2560B4u: goto label_2560b4;
            case 0x2560B8u: goto label_2560b8;
            case 0x2560BCu: goto label_2560bc;
            case 0x2560C0u: goto label_2560c0;
            case 0x2560C4u: goto label_2560c4;
            case 0x2560C8u: goto label_2560c8;
            case 0x2560CCu: goto label_2560cc;
            case 0x2560D0u: goto label_2560d0;
            case 0x2560D4u: goto label_2560d4;
            case 0x2560D8u: goto label_2560d8;
            case 0x2560DCu: goto label_2560dc;
            case 0x2560E0u: goto label_2560e0;
            case 0x2560E4u: goto label_2560e4;
            case 0x2560E8u: goto label_2560e8;
            case 0x2560ECu: goto label_2560ec;
            case 0x2560F0u: goto label_2560f0;
            case 0x2560F4u: goto label_2560f4;
            case 0x2560F8u: goto label_2560f8;
            case 0x2560FCu: goto label_2560fc;
            case 0x256100u: goto label_256100;
            case 0x256104u: goto label_256104;
            case 0x256108u: goto label_256108;
            case 0x25610Cu: goto label_25610c;
            case 0x256110u: goto label_256110;
            case 0x256114u: goto label_256114;
            case 0x256118u: goto label_256118;
            case 0x25611Cu: goto label_25611c;
            case 0x256120u: goto label_256120;
            case 0x256124u: goto label_256124;
            case 0x256128u: goto label_256128;
            case 0x25612Cu: goto label_25612c;
            case 0x256130u: goto label_256130;
            case 0x256134u: goto label_256134;
            case 0x256138u: goto label_256138;
            case 0x25613Cu: goto label_25613c;
            case 0x256140u: goto label_256140;
            case 0x256144u: goto label_256144;
            case 0x256148u: goto label_256148;
            case 0x25614Cu: goto label_25614c;
            case 0x256150u: goto label_256150;
            case 0x256154u: goto label_256154;
            case 0x256158u: goto label_256158;
            case 0x25615Cu: goto label_25615c;
            case 0x256160u: goto label_256160;
            case 0x256164u: goto label_256164;
            case 0x256168u: goto label_256168;
            case 0x25616Cu: goto label_25616c;
            case 0x256170u: goto label_256170;
            case 0x256174u: goto label_256174;
            case 0x256178u: goto label_256178;
            case 0x25617Cu: goto label_25617c;
            case 0x256180u: goto label_256180;
            case 0x256184u: goto label_256184;
            case 0x256188u: goto label_256188;
            case 0x25618Cu: goto label_25618c;
            case 0x256190u: goto label_256190;
            case 0x256194u: goto label_256194;
            case 0x256198u: goto label_256198;
            case 0x25619Cu: goto label_25619c;
            case 0x2561A0u: goto label_2561a0;
            case 0x2561A4u: goto label_2561a4;
            case 0x2561A8u: goto label_2561a8;
            case 0x2561ACu: goto label_2561ac;
            case 0x2561B0u: goto label_2561b0;
            case 0x2561B4u: goto label_2561b4;
            case 0x2561B8u: goto label_2561b8;
            case 0x2561BCu: goto label_2561bc;
            case 0x2561C0u: goto label_2561c0;
            case 0x2561C4u: goto label_2561c4;
            case 0x2561C8u: goto label_2561c8;
            case 0x2561CCu: goto label_2561cc;
            case 0x2561D0u: goto label_2561d0;
            case 0x2561D4u: goto label_2561d4;
            case 0x2561D8u: goto label_2561d8;
            case 0x2561DCu: goto label_2561dc;
            case 0x2561E0u: goto label_2561e0;
            case 0x2561E4u: goto label_2561e4;
            case 0x2561E8u: goto label_2561e8;
            case 0x2561ECu: goto label_2561ec;
            case 0x2561F0u: goto label_2561f0;
            case 0x2561F4u: goto label_2561f4;
            case 0x2561F8u: goto label_2561f8;
            case 0x2561FCu: goto label_2561fc;
            case 0x256200u: goto label_256200;
            case 0x256204u: goto label_256204;
            case 0x256208u: goto label_256208;
            case 0x25620Cu: goto label_25620c;
            case 0x256210u: goto label_256210;
            case 0x256214u: goto label_256214;
            case 0x256218u: goto label_256218;
            case 0x25621Cu: goto label_25621c;
            case 0x256220u: goto label_256220;
            case 0x256224u: goto label_256224;
            case 0x256228u: goto label_256228;
            case 0x25622Cu: goto label_25622c;
            case 0x256230u: goto label_256230;
            case 0x256234u: goto label_256234;
            case 0x256238u: goto label_256238;
            case 0x25623Cu: goto label_25623c;
            case 0x256240u: goto label_256240;
            case 0x256244u: goto label_256244;
            case 0x256248u: goto label_256248;
            case 0x25624Cu: goto label_25624c;
            case 0x256250u: goto label_256250;
            case 0x256254u: goto label_256254;
            case 0x256258u: goto label_256258;
            case 0x25625Cu: goto label_25625c;
            case 0x256260u: goto label_256260;
            case 0x256264u: goto label_256264;
            case 0x256268u: goto label_256268;
            case 0x25626Cu: goto label_25626c;
            case 0x256270u: goto label_256270;
            case 0x256274u: goto label_256274;
            case 0x256278u: goto label_256278;
            case 0x25627Cu: goto label_25627c;
            case 0x256280u: goto label_256280;
            case 0x256284u: goto label_256284;
            case 0x256288u: goto label_256288;
            case 0x25628Cu: goto label_25628c;
            case 0x256290u: goto label_256290;
            case 0x256294u: goto label_256294;
            case 0x256298u: goto label_256298;
            case 0x25629Cu: goto label_25629c;
            case 0x2562A0u: goto label_2562a0;
            case 0x2562A4u: goto label_2562a4;
            case 0x2562A8u: goto label_2562a8;
            case 0x2562ACu: goto label_2562ac;
            case 0x2562B0u: goto label_2562b0;
            case 0x2562B4u: goto label_2562b4;
            case 0x2562B8u: goto label_2562b8;
            case 0x2562BCu: goto label_2562bc;
            case 0x2562C0u: goto label_2562c0;
            case 0x2562C4u: goto label_2562c4;
            case 0x2562C8u: goto label_2562c8;
            case 0x2562CCu: goto label_2562cc;
            case 0x2562D0u: goto label_2562d0;
            case 0x2562D4u: goto label_2562d4;
            case 0x2562D8u: goto label_2562d8;
            case 0x2562DCu: goto label_2562dc;
            case 0x2562E0u: goto label_2562e0;
            case 0x2562E4u: goto label_2562e4;
            case 0x2562E8u: goto label_2562e8;
            case 0x2562ECu: goto label_2562ec;
            case 0x2562F0u: goto label_2562f0;
            case 0x2562F4u: goto label_2562f4;
            case 0x2562F8u: goto label_2562f8;
            case 0x2562FCu: goto label_2562fc;
            case 0x256300u: goto label_256300;
            case 0x256304u: goto label_256304;
            case 0x256308u: goto label_256308;
            case 0x25630Cu: goto label_25630c;
            case 0x256310u: goto label_256310;
            case 0x256314u: goto label_256314;
            case 0x256318u: goto label_256318;
            case 0x25631Cu: goto label_25631c;
            case 0x256320u: goto label_256320;
            case 0x256324u: goto label_256324;
            case 0x256328u: goto label_256328;
            case 0x25632Cu: goto label_25632c;
            case 0x256330u: goto label_256330;
            case 0x256334u: goto label_256334;
            case 0x256338u: goto label_256338;
            case 0x25633Cu: goto label_25633c;
            case 0x256340u: goto label_256340;
            case 0x256344u: goto label_256344;
            case 0x256348u: goto label_256348;
            case 0x25634Cu: goto label_25634c;
            case 0x256350u: goto label_256350;
            case 0x256354u: goto label_256354;
            case 0x256358u: goto label_256358;
            case 0x25635Cu: goto label_25635c;
            case 0x256360u: goto label_256360;
            case 0x256364u: goto label_256364;
            case 0x256368u: goto label_256368;
            case 0x25636Cu: goto label_25636c;
            case 0x256370u: goto label_256370;
            case 0x256374u: goto label_256374;
            case 0x256378u: goto label_256378;
            case 0x25637Cu: goto label_25637c;
            case 0x256380u: goto label_256380;
            case 0x256384u: goto label_256384;
            case 0x256388u: goto label_256388;
            case 0x25638Cu: goto label_25638c;
            case 0x256390u: goto label_256390;
            case 0x256394u: goto label_256394;
            case 0x256398u: goto label_256398;
            case 0x25639Cu: goto label_25639c;
            case 0x2563A0u: goto label_2563a0;
            case 0x2563A4u: goto label_2563a4;
            case 0x2563A8u: goto label_2563a8;
            case 0x2563ACu: goto label_2563ac;
            case 0x2563B0u: goto label_2563b0;
            case 0x2563B4u: goto label_2563b4;
            case 0x2563B8u: goto label_2563b8;
            case 0x2563BCu: goto label_2563bc;
            case 0x2563C0u: goto label_2563c0;
            case 0x2563C4u: goto label_2563c4;
            case 0x2563C8u: goto label_2563c8;
            case 0x2563CCu: goto label_2563cc;
            case 0x2563D0u: goto label_2563d0;
            case 0x2563D4u: goto label_2563d4;
            case 0x2563D8u: goto label_2563d8;
            case 0x2563DCu: goto label_2563dc;
            case 0x2563E0u: goto label_2563e0;
            case 0x2563E4u: goto label_2563e4;
            case 0x2563E8u: goto label_2563e8;
            case 0x2563ECu: goto label_2563ec;
            case 0x2563F0u: goto label_2563f0;
            case 0x2563F4u: goto label_2563f4;
            case 0x2563F8u: goto label_2563f8;
            case 0x2563FCu: goto label_2563fc;
            case 0x256400u: goto label_256400;
            case 0x256404u: goto label_256404;
            case 0x256408u: goto label_256408;
            case 0x25640Cu: goto label_25640c;
            case 0x256410u: goto label_256410;
            case 0x256414u: goto label_256414;
            case 0x256418u: goto label_256418;
            case 0x25641Cu: goto label_25641c;
            case 0x256420u: goto label_256420;
            case 0x256424u: goto label_256424;
            case 0x256428u: goto label_256428;
            case 0x25642Cu: goto label_25642c;
            case 0x256430u: goto label_256430;
            case 0x256434u: goto label_256434;
            case 0x256438u: goto label_256438;
            case 0x25643Cu: goto label_25643c;
            case 0x256440u: goto label_256440;
            case 0x256444u: goto label_256444;
            case 0x256448u: goto label_256448;
            case 0x25644Cu: goto label_25644c;
            case 0x256450u: goto label_256450;
            case 0x256454u: goto label_256454;
            case 0x256458u: goto label_256458;
            case 0x25645Cu: goto label_25645c;
            case 0x256460u: goto label_256460;
            case 0x256464u: goto label_256464;
            case 0x256468u: goto label_256468;
            case 0x25646Cu: goto label_25646c;
            case 0x256470u: goto label_256470;
            case 0x256474u: goto label_256474;
            case 0x256478u: goto label_256478;
            case 0x25647Cu: goto label_25647c;
            case 0x256480u: goto label_256480;
            case 0x256484u: goto label_256484;
            case 0x256488u: goto label_256488;
            case 0x25648Cu: goto label_25648c;
            case 0x256490u: goto label_256490;
            case 0x256494u: goto label_256494;
            case 0x256498u: goto label_256498;
            case 0x25649Cu: goto label_25649c;
            case 0x2564A0u: goto label_2564a0;
            case 0x2564A4u: goto label_2564a4;
            case 0x2564A8u: goto label_2564a8;
            case 0x2564ACu: goto label_2564ac;
            case 0x2564B0u: goto label_2564b0;
            case 0x2564B4u: goto label_2564b4;
            case 0x2564B8u: goto label_2564b8;
            case 0x2564BCu: goto label_2564bc;
            case 0x2564C0u: goto label_2564c0;
            case 0x2564C4u: goto label_2564c4;
            case 0x2564C8u: goto label_2564c8;
            case 0x2564CCu: goto label_2564cc;
            case 0x2564D0u: goto label_2564d0;
            case 0x2564D4u: goto label_2564d4;
            case 0x2564D8u: goto label_2564d8;
            case 0x2564DCu: goto label_2564dc;
            case 0x2564E0u: goto label_2564e0;
            case 0x2564E4u: goto label_2564e4;
            case 0x2564E8u: goto label_2564e8;
            case 0x2564ECu: goto label_2564ec;
            case 0x2564F0u: goto label_2564f0;
            case 0x2564F4u: goto label_2564f4;
            case 0x2564F8u: goto label_2564f8;
            case 0x2564FCu: goto label_2564fc;
            case 0x256500u: goto label_256500;
            case 0x256504u: goto label_256504;
            case 0x256508u: goto label_256508;
            case 0x25650Cu: goto label_25650c;
            case 0x256510u: goto label_256510;
            case 0x256514u: goto label_256514;
            case 0x256518u: goto label_256518;
            case 0x25651Cu: goto label_25651c;
            case 0x256520u: goto label_256520;
            case 0x256524u: goto label_256524;
            case 0x256528u: goto label_256528;
            case 0x25652Cu: goto label_25652c;
            case 0x256530u: goto label_256530;
            case 0x256534u: goto label_256534;
            case 0x256538u: goto label_256538;
            case 0x25653Cu: goto label_25653c;
            case 0x256540u: goto label_256540;
            case 0x256544u: goto label_256544;
            case 0x256548u: goto label_256548;
            case 0x25654Cu: goto label_25654c;
            case 0x256550u: goto label_256550;
            case 0x256554u: goto label_256554;
            case 0x256558u: goto label_256558;
            case 0x25655Cu: goto label_25655c;
            case 0x256560u: goto label_256560;
            case 0x256564u: goto label_256564;
            case 0x256568u: goto label_256568;
            case 0x25656Cu: goto label_25656c;
            case 0x256570u: goto label_256570;
            case 0x256574u: goto label_256574;
            case 0x256578u: goto label_256578;
            case 0x25657Cu: goto label_25657c;
            case 0x256580u: goto label_256580;
            case 0x256584u: goto label_256584;
            case 0x256588u: goto label_256588;
            case 0x25658Cu: goto label_25658c;
            case 0x256590u: goto label_256590;
            case 0x256594u: goto label_256594;
            case 0x256598u: goto label_256598;
            case 0x25659Cu: goto label_25659c;
            case 0x2565A0u: goto label_2565a0;
            case 0x2565A4u: goto label_2565a4;
            case 0x2565A8u: goto label_2565a8;
            case 0x2565ACu: goto label_2565ac;
            case 0x2565B0u: goto label_2565b0;
            case 0x2565B4u: goto label_2565b4;
            case 0x2565B8u: goto label_2565b8;
            case 0x2565BCu: goto label_2565bc;
            case 0x2565C0u: goto label_2565c0;
            case 0x2565C4u: goto label_2565c4;
            case 0x2565C8u: goto label_2565c8;
            case 0x2565CCu: goto label_2565cc;
            case 0x2565D0u: goto label_2565d0;
            case 0x2565D4u: goto label_2565d4;
            case 0x2565D8u: goto label_2565d8;
            case 0x2565DCu: goto label_2565dc;
            case 0x2565E0u: goto label_2565e0;
            case 0x2565E4u: goto label_2565e4;
            case 0x2565E8u: goto label_2565e8;
            case 0x2565ECu: goto label_2565ec;
            case 0x2565F0u: goto label_2565f0;
            case 0x2565F4u: goto label_2565f4;
            case 0x2565F8u: goto label_2565f8;
            case 0x2565FCu: goto label_2565fc;
            case 0x256600u: goto label_256600;
            case 0x256604u: goto label_256604;
            case 0x256608u: goto label_256608;
            case 0x25660Cu: goto label_25660c;
            case 0x256610u: goto label_256610;
            case 0x256614u: goto label_256614;
            case 0x256618u: goto label_256618;
            case 0x25661Cu: goto label_25661c;
            case 0x256620u: goto label_256620;
            case 0x256624u: goto label_256624;
            case 0x256628u: goto label_256628;
            case 0x25662Cu: goto label_25662c;
            case 0x256630u: goto label_256630;
            case 0x256634u: goto label_256634;
            case 0x256638u: goto label_256638;
            case 0x25663Cu: goto label_25663c;
            case 0x256640u: goto label_256640;
            case 0x256644u: goto label_256644;
            case 0x256648u: goto label_256648;
            case 0x25664Cu: goto label_25664c;
            case 0x256650u: goto label_256650;
            case 0x256654u: goto label_256654;
            case 0x256658u: goto label_256658;
            case 0x25665Cu: goto label_25665c;
            case 0x256660u: goto label_256660;
            case 0x256664u: goto label_256664;
            case 0x256668u: goto label_256668;
            case 0x25666Cu: goto label_25666c;
            case 0x256670u: goto label_256670;
            case 0x256674u: goto label_256674;
            case 0x256678u: goto label_256678;
            case 0x25667Cu: goto label_25667c;
            case 0x256680u: goto label_256680;
            case 0x256684u: goto label_256684;
            case 0x256688u: goto label_256688;
            case 0x25668Cu: goto label_25668c;
            case 0x256690u: goto label_256690;
            case 0x256694u: goto label_256694;
            case 0x256698u: goto label_256698;
            case 0x25669Cu: goto label_25669c;
            case 0x2566A0u: goto label_2566a0;
            case 0x2566A4u: goto label_2566a4;
            case 0x2566A8u: goto label_2566a8;
            case 0x2566ACu: goto label_2566ac;
            case 0x2566B0u: goto label_2566b0;
            case 0x2566B4u: goto label_2566b4;
            case 0x2566B8u: goto label_2566b8;
            case 0x2566BCu: goto label_2566bc;
            case 0x2566C0u: goto label_2566c0;
            case 0x2566C4u: goto label_2566c4;
            case 0x2566C8u: goto label_2566c8;
            case 0x2566CCu: goto label_2566cc;
            case 0x2566D0u: goto label_2566d0;
            case 0x2566D4u: goto label_2566d4;
            case 0x2566D8u: goto label_2566d8;
            case 0x2566DCu: goto label_2566dc;
            case 0x2566E0u: goto label_2566e0;
            case 0x2566E4u: goto label_2566e4;
            case 0x2566E8u: goto label_2566e8;
            case 0x2566ECu: goto label_2566ec;
            case 0x2566F0u: goto label_2566f0;
            case 0x2566F4u: goto label_2566f4;
            case 0x2566F8u: goto label_2566f8;
            case 0x2566FCu: goto label_2566fc;
            case 0x256700u: goto label_256700;
            case 0x256704u: goto label_256704;
            case 0x256708u: goto label_256708;
            case 0x25670Cu: goto label_25670c;
            case 0x256710u: goto label_256710;
            case 0x256714u: goto label_256714;
            case 0x256718u: goto label_256718;
            case 0x25671Cu: goto label_25671c;
            case 0x256720u: goto label_256720;
            case 0x256724u: goto label_256724;
            case 0x256728u: goto label_256728;
            case 0x25672Cu: goto label_25672c;
            case 0x256730u: goto label_256730;
            case 0x256734u: goto label_256734;
            case 0x256738u: goto label_256738;
            case 0x25673Cu: goto label_25673c;
            case 0x256740u: goto label_256740;
            case 0x256744u: goto label_256744;
            case 0x256748u: goto label_256748;
            case 0x25674Cu: goto label_25674c;
            case 0x256750u: goto label_256750;
            case 0x256754u: goto label_256754;
            case 0x256758u: goto label_256758;
            case 0x25675Cu: goto label_25675c;
            case 0x256760u: goto label_256760;
            case 0x256764u: goto label_256764;
            case 0x256768u: goto label_256768;
            case 0x25676Cu: goto label_25676c;
            case 0x256770u: goto label_256770;
            case 0x256774u: goto label_256774;
            case 0x256778u: goto label_256778;
            case 0x25677Cu: goto label_25677c;
            case 0x256780u: goto label_256780;
            case 0x256784u: goto label_256784;
            case 0x256788u: goto label_256788;
            case 0x25678Cu: goto label_25678c;
            case 0x256790u: goto label_256790;
            case 0x256794u: goto label_256794;
            case 0x256798u: goto label_256798;
            case 0x25679Cu: goto label_25679c;
            case 0x2567A0u: goto label_2567a0;
            case 0x2567A4u: goto label_2567a4;
            case 0x2567A8u: goto label_2567a8;
            case 0x2567ACu: goto label_2567ac;
            case 0x2567B0u: goto label_2567b0;
            case 0x2567B4u: goto label_2567b4;
            case 0x2567B8u: goto label_2567b8;
            case 0x2567BCu: goto label_2567bc;
            case 0x2567C0u: goto label_2567c0;
            case 0x2567C4u: goto label_2567c4;
            case 0x2567C8u: goto label_2567c8;
            case 0x2567CCu: goto label_2567cc;
            case 0x2567D0u: goto label_2567d0;
            case 0x2567D4u: goto label_2567d4;
            case 0x2567D8u: goto label_2567d8;
            case 0x2567DCu: goto label_2567dc;
            case 0x2567E0u: goto label_2567e0;
            case 0x2567E4u: goto label_2567e4;
            case 0x2567E8u: goto label_2567e8;
            case 0x2567ECu: goto label_2567ec;
            case 0x2567F0u: goto label_2567f0;
            case 0x2567F4u: goto label_2567f4;
            case 0x2567F8u: goto label_2567f8;
            case 0x2567FCu: goto label_2567fc;
            case 0x256800u: goto label_256800;
            case 0x256804u: goto label_256804;
            case 0x256808u: goto label_256808;
            case 0x25680Cu: goto label_25680c;
            case 0x256810u: goto label_256810;
            case 0x256814u: goto label_256814;
            case 0x256818u: goto label_256818;
            case 0x25681Cu: goto label_25681c;
            case 0x256820u: goto label_256820;
            case 0x256824u: goto label_256824;
            case 0x256828u: goto label_256828;
            case 0x25682Cu: goto label_25682c;
            case 0x256830u: goto label_256830;
            case 0x256834u: goto label_256834;
            case 0x256838u: goto label_256838;
            case 0x25683Cu: goto label_25683c;
            case 0x256840u: goto label_256840;
            case 0x256844u: goto label_256844;
            case 0x256848u: goto label_256848;
            case 0x25684Cu: goto label_25684c;
            case 0x256850u: goto label_256850;
            case 0x256854u: goto label_256854;
            case 0x256858u: goto label_256858;
            case 0x25685Cu: goto label_25685c;
            case 0x256860u: goto label_256860;
            case 0x256864u: goto label_256864;
            case 0x256868u: goto label_256868;
            case 0x25686Cu: goto label_25686c;
            case 0x256870u: goto label_256870;
            case 0x256874u: goto label_256874;
            case 0x256878u: goto label_256878;
            case 0x25687Cu: goto label_25687c;
            case 0x256880u: goto label_256880;
            case 0x256884u: goto label_256884;
            case 0x256888u: goto label_256888;
            case 0x25688Cu: goto label_25688c;
            case 0x256890u: goto label_256890;
            case 0x256894u: goto label_256894;
            case 0x256898u: goto label_256898;
            case 0x25689Cu: goto label_25689c;
            case 0x2568A0u: goto label_2568a0;
            case 0x2568A4u: goto label_2568a4;
            case 0x2568A8u: goto label_2568a8;
            case 0x2568ACu: goto label_2568ac;
            case 0x2568B0u: goto label_2568b0;
            case 0x2568B4u: goto label_2568b4;
            case 0x2568B8u: goto label_2568b8;
            case 0x2568BCu: goto label_2568bc;
            case 0x2568C0u: goto label_2568c0;
            case 0x2568C4u: goto label_2568c4;
            case 0x2568C8u: goto label_2568c8;
            case 0x2568CCu: goto label_2568cc;
            case 0x2568D0u: goto label_2568d0;
            case 0x2568D4u: goto label_2568d4;
            case 0x2568D8u: goto label_2568d8;
            case 0x2568DCu: goto label_2568dc;
            case 0x2568E0u: goto label_2568e0;
            case 0x2568E4u: goto label_2568e4;
            case 0x2568E8u: goto label_2568e8;
            case 0x2568ECu: goto label_2568ec;
            case 0x2568F0u: goto label_2568f0;
            case 0x2568F4u: goto label_2568f4;
            case 0x2568F8u: goto label_2568f8;
            case 0x2568FCu: goto label_2568fc;
            case 0x256900u: goto label_256900;
            case 0x256904u: goto label_256904;
            case 0x256908u: goto label_256908;
            case 0x25690Cu: goto label_25690c;
            case 0x256910u: goto label_256910;
            case 0x256914u: goto label_256914;
            case 0x256918u: goto label_256918;
            case 0x25691Cu: goto label_25691c;
            case 0x256920u: goto label_256920;
            case 0x256924u: goto label_256924;
            case 0x256928u: goto label_256928;
            case 0x25692Cu: goto label_25692c;
            case 0x256930u: goto label_256930;
            case 0x256934u: goto label_256934;
            case 0x256938u: goto label_256938;
            case 0x25693Cu: goto label_25693c;
            case 0x256940u: goto label_256940;
            case 0x256944u: goto label_256944;
            case 0x256948u: goto label_256948;
            case 0x25694Cu: goto label_25694c;
            case 0x256950u: goto label_256950;
            case 0x256954u: goto label_256954;
            case 0x256958u: goto label_256958;
            case 0x25695Cu: goto label_25695c;
            case 0x256960u: goto label_256960;
            case 0x256964u: goto label_256964;
            case 0x256968u: goto label_256968;
            case 0x25696Cu: goto label_25696c;
            case 0x256970u: goto label_256970;
            case 0x256974u: goto label_256974;
            case 0x256978u: goto label_256978;
            case 0x25697Cu: goto label_25697c;
            case 0x256980u: goto label_256980;
            case 0x256984u: goto label_256984;
            case 0x256988u: goto label_256988;
            case 0x25698Cu: goto label_25698c;
            case 0x256990u: goto label_256990;
            case 0x256994u: goto label_256994;
            case 0x256998u: goto label_256998;
            case 0x25699Cu: goto label_25699c;
            case 0x2569A0u: goto label_2569a0;
            case 0x2569A4u: goto label_2569a4;
            case 0x2569A8u: goto label_2569a8;
            case 0x2569ACu: goto label_2569ac;
            case 0x2569B0u: goto label_2569b0;
            case 0x2569B4u: goto label_2569b4;
            case 0x2569B8u: goto label_2569b8;
            case 0x2569BCu: goto label_2569bc;
            case 0x2569C0u: goto label_2569c0;
            case 0x2569C4u: goto label_2569c4;
            case 0x2569C8u: goto label_2569c8;
            case 0x2569CCu: goto label_2569cc;
            case 0x2569D0u: goto label_2569d0;
            case 0x2569D4u: goto label_2569d4;
            case 0x2569D8u: goto label_2569d8;
            case 0x2569DCu: goto label_2569dc;
            case 0x2569E0u: goto label_2569e0;
            case 0x2569E4u: goto label_2569e4;
            case 0x2569E8u: goto label_2569e8;
            case 0x2569ECu: goto label_2569ec;
            case 0x2569F0u: goto label_2569f0;
            case 0x2569F4u: goto label_2569f4;
            case 0x2569F8u: goto label_2569f8;
            case 0x2569FCu: goto label_2569fc;
            case 0x256A00u: goto label_256a00;
            case 0x256A04u: goto label_256a04;
            case 0x256A08u: goto label_256a08;
            case 0x256A0Cu: goto label_256a0c;
            case 0x256A10u: goto label_256a10;
            case 0x256A14u: goto label_256a14;
            case 0x256A18u: goto label_256a18;
            case 0x256A1Cu: goto label_256a1c;
            case 0x256A20u: goto label_256a20;
            case 0x256A24u: goto label_256a24;
            case 0x256A28u: goto label_256a28;
            case 0x256A2Cu: goto label_256a2c;
            case 0x256A30u: goto label_256a30;
            case 0x256A34u: goto label_256a34;
            case 0x256A38u: goto label_256a38;
            case 0x256A3Cu: goto label_256a3c;
            case 0x256A40u: goto label_256a40;
            case 0x256A44u: goto label_256a44;
            case 0x256A48u: goto label_256a48;
            case 0x256A4Cu: goto label_256a4c;
            case 0x256A50u: goto label_256a50;
            case 0x256A54u: goto label_256a54;
            case 0x256A58u: goto label_256a58;
            case 0x256A5Cu: goto label_256a5c;
            case 0x256A60u: goto label_256a60;
            case 0x256A64u: goto label_256a64;
            case 0x256A68u: goto label_256a68;
            case 0x256A6Cu: goto label_256a6c;
            case 0x256A70u: goto label_256a70;
            case 0x256A74u: goto label_256a74;
            case 0x256A78u: goto label_256a78;
            case 0x256A7Cu: goto label_256a7c;
            case 0x256A80u: goto label_256a80;
            case 0x256A84u: goto label_256a84;
            case 0x256A88u: goto label_256a88;
            case 0x256A8Cu: goto label_256a8c;
            case 0x256A90u: goto label_256a90;
            case 0x256A94u: goto label_256a94;
            case 0x256A98u: goto label_256a98;
            case 0x256A9Cu: goto label_256a9c;
            case 0x256AA0u: goto label_256aa0;
            case 0x256AA4u: goto label_256aa4;
            case 0x256AA8u: goto label_256aa8;
            case 0x256AACu: goto label_256aac;
            case 0x256AB0u: goto label_256ab0;
            case 0x256AB4u: goto label_256ab4;
            case 0x256AB8u: goto label_256ab8;
            case 0x256ABCu: goto label_256abc;
            case 0x256AC0u: goto label_256ac0;
            case 0x256AC4u: goto label_256ac4;
            case 0x256AC8u: goto label_256ac8;
            case 0x256ACCu: goto label_256acc;
            case 0x256AD0u: goto label_256ad0;
            case 0x256AD4u: goto label_256ad4;
            case 0x256AD8u: goto label_256ad8;
            case 0x256ADCu: goto label_256adc;
            case 0x256AE0u: goto label_256ae0;
            case 0x256AE4u: goto label_256ae4;
            case 0x256AE8u: goto label_256ae8;
            case 0x256AECu: goto label_256aec;
            case 0x256AF0u: goto label_256af0;
            case 0x256AF4u: goto label_256af4;
            case 0x256AF8u: goto label_256af8;
            case 0x256AFCu: goto label_256afc;
            case 0x256B00u: goto label_256b00;
            case 0x256B04u: goto label_256b04;
            case 0x256B08u: goto label_256b08;
            case 0x256B0Cu: goto label_256b0c;
            case 0x256B10u: goto label_256b10;
            case 0x256B14u: goto label_256b14;
            case 0x256B18u: goto label_256b18;
            case 0x256B1Cu: goto label_256b1c;
            case 0x256B20u: goto label_256b20;
            case 0x256B24u: goto label_256b24;
            case 0x256B28u: goto label_256b28;
            case 0x256B2Cu: goto label_256b2c;
            case 0x256B30u: goto label_256b30;
            case 0x256B34u: goto label_256b34;
            case 0x256B38u: goto label_256b38;
            case 0x256B3Cu: goto label_256b3c;
            case 0x256B40u: goto label_256b40;
            case 0x256B44u: goto label_256b44;
            case 0x256B48u: goto label_256b48;
            case 0x256B4Cu: goto label_256b4c;
            case 0x256B50u: goto label_256b50;
            case 0x256B54u: goto label_256b54;
            case 0x256B58u: goto label_256b58;
            case 0x256B5Cu: goto label_256b5c;
            case 0x256B60u: goto label_256b60;
            case 0x256B64u: goto label_256b64;
            case 0x256B68u: goto label_256b68;
            case 0x256B6Cu: goto label_256b6c;
            case 0x256B70u: goto label_256b70;
            case 0x256B74u: goto label_256b74;
            case 0x256B78u: goto label_256b78;
            case 0x256B7Cu: goto label_256b7c;
            case 0x256B80u: goto label_256b80;
            case 0x256B84u: goto label_256b84;
            case 0x256B88u: goto label_256b88;
            case 0x256B8Cu: goto label_256b8c;
            case 0x256B90u: goto label_256b90;
            case 0x256B94u: goto label_256b94;
            case 0x256B98u: goto label_256b98;
            case 0x256B9Cu: goto label_256b9c;
            case 0x256BA0u: goto label_256ba0;
            case 0x256BA4u: goto label_256ba4;
            case 0x256BA8u: goto label_256ba8;
            case 0x256BACu: goto label_256bac;
            case 0x256BB0u: goto label_256bb0;
            case 0x256BB4u: goto label_256bb4;
            case 0x256BB8u: goto label_256bb8;
            case 0x256BBCu: goto label_256bbc;
            case 0x256BC0u: goto label_256bc0;
            case 0x256BC4u: goto label_256bc4;
            case 0x256BC8u: goto label_256bc8;
            case 0x256BCCu: goto label_256bcc;
            case 0x256BD0u: goto label_256bd0;
            case 0x256BD4u: goto label_256bd4;
            case 0x256BD8u: goto label_256bd8;
            case 0x256BDCu: goto label_256bdc;
            case 0x256BE0u: goto label_256be0;
            case 0x256BE4u: goto label_256be4;
            case 0x256BE8u: goto label_256be8;
            case 0x256BECu: goto label_256bec;
            case 0x256BF0u: goto label_256bf0;
            case 0x256BF4u: goto label_256bf4;
            case 0x256BF8u: goto label_256bf8;
            case 0x256BFCu: goto label_256bfc;
            case 0x256C00u: goto label_256c00;
            case 0x256C04u: goto label_256c04;
            case 0x256C08u: goto label_256c08;
            case 0x256C0Cu: goto label_256c0c;
            case 0x256C10u: goto label_256c10;
            case 0x256C14u: goto label_256c14;
            case 0x256C18u: goto label_256c18;
            case 0x256C1Cu: goto label_256c1c;
            case 0x256C20u: goto label_256c20;
            case 0x256C24u: goto label_256c24;
            case 0x256C28u: goto label_256c28;
            case 0x256C2Cu: goto label_256c2c;
            case 0x256C30u: goto label_256c30;
            case 0x256C34u: goto label_256c34;
            case 0x256C38u: goto label_256c38;
            case 0x256C3Cu: goto label_256c3c;
            case 0x256C40u: goto label_256c40;
            case 0x256C44u: goto label_256c44;
            case 0x256C48u: goto label_256c48;
            case 0x256C4Cu: goto label_256c4c;
            case 0x256C50u: goto label_256c50;
            case 0x256C54u: goto label_256c54;
            case 0x256C58u: goto label_256c58;
            case 0x256C5Cu: goto label_256c5c;
            case 0x256C60u: goto label_256c60;
            case 0x256C64u: goto label_256c64;
            case 0x256C68u: goto label_256c68;
            case 0x256C6Cu: goto label_256c6c;
            case 0x256C70u: goto label_256c70;
            case 0x256C74u: goto label_256c74;
            case 0x256C78u: goto label_256c78;
            case 0x256C7Cu: goto label_256c7c;
            case 0x256C80u: goto label_256c80;
            case 0x256C84u: goto label_256c84;
            case 0x256C88u: goto label_256c88;
            case 0x256C8Cu: goto label_256c8c;
            case 0x256C90u: goto label_256c90;
            case 0x256C94u: goto label_256c94;
            case 0x256C98u: goto label_256c98;
            case 0x256C9Cu: goto label_256c9c;
            case 0x256CA0u: goto label_256ca0;
            case 0x256CA4u: goto label_256ca4;
            case 0x256CA8u: goto label_256ca8;
            case 0x256CACu: goto label_256cac;
            case 0x256CB0u: goto label_256cb0;
            case 0x256CB4u: goto label_256cb4;
            case 0x256CB8u: goto label_256cb8;
            case 0x256CBCu: goto label_256cbc;
            case 0x256CC0u: goto label_256cc0;
            case 0x256CC4u: goto label_256cc4;
            case 0x256CC8u: goto label_256cc8;
            case 0x256CCCu: goto label_256ccc;
            case 0x256CD0u: goto label_256cd0;
            case 0x256CD4u: goto label_256cd4;
            case 0x256CD8u: goto label_256cd8;
            case 0x256CDCu: goto label_256cdc;
            case 0x256CE0u: goto label_256ce0;
            case 0x256CE4u: goto label_256ce4;
            case 0x256CE8u: goto label_256ce8;
            case 0x256CECu: goto label_256cec;
            case 0x256CF0u: goto label_256cf0;
            case 0x256CF4u: goto label_256cf4;
            case 0x256CF8u: goto label_256cf8;
            case 0x256CFCu: goto label_256cfc;
            case 0x256D00u: goto label_256d00;
            case 0x256D04u: goto label_256d04;
            case 0x256D08u: goto label_256d08;
            case 0x256D0Cu: goto label_256d0c;
            case 0x256D10u: goto label_256d10;
            case 0x256D14u: goto label_256d14;
            case 0x256D18u: goto label_256d18;
            case 0x256D1Cu: goto label_256d1c;
            case 0x256D20u: goto label_256d20;
            case 0x256D24u: goto label_256d24;
            case 0x256D28u: goto label_256d28;
            case 0x256D2Cu: goto label_256d2c;
            case 0x256D30u: goto label_256d30;
            case 0x256D34u: goto label_256d34;
            case 0x256D38u: goto label_256d38;
            case 0x256D3Cu: goto label_256d3c;
            case 0x256D40u: goto label_256d40;
            case 0x256D44u: goto label_256d44;
            case 0x256D48u: goto label_256d48;
            case 0x256D4Cu: goto label_256d4c;
            case 0x256D50u: goto label_256d50;
            case 0x256D54u: goto label_256d54;
            case 0x256D58u: goto label_256d58;
            case 0x256D5Cu: goto label_256d5c;
            case 0x256D60u: goto label_256d60;
            case 0x256D64u: goto label_256d64;
            case 0x256D68u: goto label_256d68;
            case 0x256D6Cu: goto label_256d6c;
            case 0x256D70u: goto label_256d70;
            case 0x256D74u: goto label_256d74;
            case 0x256D78u: goto label_256d78;
            case 0x256D7Cu: goto label_256d7c;
            case 0x256D80u: goto label_256d80;
            case 0x256D84u: goto label_256d84;
            case 0x256D88u: goto label_256d88;
            case 0x256D8Cu: goto label_256d8c;
            case 0x256D90u: goto label_256d90;
            case 0x256D94u: goto label_256d94;
            case 0x256D98u: goto label_256d98;
            case 0x256D9Cu: goto label_256d9c;
            case 0x256DA0u: goto label_256da0;
            case 0x256DA4u: goto label_256da4;
            case 0x256DA8u: goto label_256da8;
            case 0x256DACu: goto label_256dac;
            case 0x256DB0u: goto label_256db0;
            case 0x256DB4u: goto label_256db4;
            case 0x256DB8u: goto label_256db8;
            case 0x256DBCu: goto label_256dbc;
            case 0x256DC0u: goto label_256dc0;
            case 0x256DC4u: goto label_256dc4;
            case 0x256DC8u: goto label_256dc8;
            case 0x256DCCu: goto label_256dcc;
            case 0x256DD0u: goto label_256dd0;
            case 0x256DD4u: goto label_256dd4;
            case 0x256DD8u: goto label_256dd8;
            case 0x256DDCu: goto label_256ddc;
            case 0x256DE0u: goto label_256de0;
            case 0x256DE4u: goto label_256de4;
            case 0x256DE8u: goto label_256de8;
            case 0x256DECu: goto label_256dec;
            case 0x256DF0u: goto label_256df0;
            case 0x256DF4u: goto label_256df4;
            case 0x256DF8u: goto label_256df8;
            case 0x256DFCu: goto label_256dfc;
            case 0x256E00u: goto label_256e00;
            case 0x256E04u: goto label_256e04;
            case 0x256E08u: goto label_256e08;
            case 0x256E0Cu: goto label_256e0c;
            case 0x256E10u: goto label_256e10;
            case 0x256E14u: goto label_256e14;
            case 0x256E18u: goto label_256e18;
            case 0x256E1Cu: goto label_256e1c;
            case 0x256E20u: goto label_256e20;
            case 0x256E24u: goto label_256e24;
            case 0x256E28u: goto label_256e28;
            case 0x256E2Cu: goto label_256e2c;
            case 0x256E30u: goto label_256e30;
            case 0x256E34u: goto label_256e34;
            case 0x256E38u: goto label_256e38;
            case 0x256E3Cu: goto label_256e3c;
            case 0x256E40u: goto label_256e40;
            case 0x256E44u: goto label_256e44;
            case 0x256E48u: goto label_256e48;
            case 0x256E4Cu: goto label_256e4c;
            case 0x256E50u: goto label_256e50;
            case 0x256E54u: goto label_256e54;
            case 0x256E58u: goto label_256e58;
            case 0x256E5Cu: goto label_256e5c;
            case 0x256E60u: goto label_256e60;
            case 0x256E64u: goto label_256e64;
            case 0x256E68u: goto label_256e68;
            case 0x256E6Cu: goto label_256e6c;
            case 0x256E70u: goto label_256e70;
            case 0x256E74u: goto label_256e74;
            case 0x256E78u: goto label_256e78;
            case 0x256E7Cu: goto label_256e7c;
            case 0x256E80u: goto label_256e80;
            case 0x256E84u: goto label_256e84;
            case 0x256E88u: goto label_256e88;
            case 0x256E8Cu: goto label_256e8c;
            case 0x256E90u: goto label_256e90;
            case 0x256E94u: goto label_256e94;
            case 0x256E98u: goto label_256e98;
            case 0x256E9Cu: goto label_256e9c;
            case 0x256EA0u: goto label_256ea0;
            case 0x256EA4u: goto label_256ea4;
            case 0x256EA8u: goto label_256ea8;
            case 0x256EACu: goto label_256eac;
            case 0x256EB0u: goto label_256eb0;
            case 0x256EB4u: goto label_256eb4;
            case 0x256EB8u: goto label_256eb8;
            case 0x256EBCu: goto label_256ebc;
            case 0x256EC0u: goto label_256ec0;
            case 0x256EC4u: goto label_256ec4;
            case 0x256EC8u: goto label_256ec8;
            case 0x256ECCu: goto label_256ecc;
            case 0x256ED0u: goto label_256ed0;
            case 0x256ED4u: goto label_256ed4;
            case 0x256ED8u: goto label_256ed8;
            case 0x256EDCu: goto label_256edc;
            case 0x256EE0u: goto label_256ee0;
            case 0x256EE4u: goto label_256ee4;
            case 0x256EE8u: goto label_256ee8;
            case 0x256EECu: goto label_256eec;
            case 0x256EF0u: goto label_256ef0;
            case 0x256EF4u: goto label_256ef4;
            case 0x256EF8u: goto label_256ef8;
            case 0x256EFCu: goto label_256efc;
            case 0x256F00u: goto label_256f00;
            case 0x256F04u: goto label_256f04;
            case 0x256F08u: goto label_256f08;
            case 0x256F0Cu: goto label_256f0c;
            case 0x256F10u: goto label_256f10;
            case 0x256F14u: goto label_256f14;
            case 0x256F18u: goto label_256f18;
            case 0x256F1Cu: goto label_256f1c;
            case 0x256F20u: goto label_256f20;
            case 0x256F24u: goto label_256f24;
            case 0x256F28u: goto label_256f28;
            case 0x256F2Cu: goto label_256f2c;
            case 0x256F30u: goto label_256f30;
            case 0x256F34u: goto label_256f34;
            case 0x256F38u: goto label_256f38;
            case 0x256F3Cu: goto label_256f3c;
            case 0x256F40u: goto label_256f40;
            case 0x256F44u: goto label_256f44;
            case 0x256F48u: goto label_256f48;
            case 0x256F4Cu: goto label_256f4c;
            case 0x256F50u: goto label_256f50;
            case 0x256F54u: goto label_256f54;
            case 0x256F58u: goto label_256f58;
            case 0x256F5Cu: goto label_256f5c;
            case 0x256F60u: goto label_256f60;
            case 0x256F64u: goto label_256f64;
            case 0x256F68u: goto label_256f68;
            case 0x256F6Cu: goto label_256f6c;
            case 0x256F70u: goto label_256f70;
            case 0x256F74u: goto label_256f74;
            case 0x256F78u: goto label_256f78;
            case 0x256F7Cu: goto label_256f7c;
            case 0x256F80u: goto label_256f80;
            case 0x256F84u: goto label_256f84;
            case 0x256F88u: goto label_256f88;
            case 0x256F8Cu: goto label_256f8c;
            case 0x256F90u: goto label_256f90;
            case 0x256F94u: goto label_256f94;
            case 0x256F98u: goto label_256f98;
            case 0x256F9Cu: goto label_256f9c;
            case 0x256FA0u: goto label_256fa0;
            case 0x256FA4u: goto label_256fa4;
            case 0x256FA8u: goto label_256fa8;
            case 0x256FACu: goto label_256fac;
            case 0x256FB0u: goto label_256fb0;
            case 0x256FB4u: goto label_256fb4;
            case 0x256FB8u: goto label_256fb8;
            case 0x256FBCu: goto label_256fbc;
            case 0x256FC0u: goto label_256fc0;
            case 0x256FC4u: goto label_256fc4;
            case 0x256FC8u: goto label_256fc8;
            case 0x256FCCu: goto label_256fcc;
            case 0x256FD0u: goto label_256fd0;
            case 0x256FD4u: goto label_256fd4;
            case 0x256FD8u: goto label_256fd8;
            case 0x256FDCu: goto label_256fdc;
            case 0x256FE0u: goto label_256fe0;
            case 0x256FE4u: goto label_256fe4;
            case 0x256FE8u: goto label_256fe8;
            case 0x256FECu: goto label_256fec;
            case 0x256FF0u: goto label_256ff0;
            case 0x256FF4u: goto label_256ff4;
            case 0x256FF8u: goto label_256ff8;
            case 0x256FFCu: goto label_256ffc;
            case 0x257000u: goto label_257000;
            case 0x257004u: goto label_257004;
            case 0x257008u: goto label_257008;
            case 0x25700Cu: goto label_25700c;
            case 0x257010u: goto label_257010;
            case 0x257014u: goto label_257014;
            case 0x257018u: goto label_257018;
            case 0x25701Cu: goto label_25701c;
            case 0x257020u: goto label_257020;
            case 0x257024u: goto label_257024;
            case 0x257028u: goto label_257028;
            case 0x25702Cu: goto label_25702c;
            case 0x257030u: goto label_257030;
            case 0x257034u: goto label_257034;
            case 0x257038u: goto label_257038;
            case 0x25703Cu: goto label_25703c;
            case 0x257040u: goto label_257040;
            case 0x257044u: goto label_257044;
            case 0x257048u: goto label_257048;
            case 0x25704Cu: goto label_25704c;
            case 0x257050u: goto label_257050;
            case 0x257054u: goto label_257054;
            case 0x257058u: goto label_257058;
            case 0x25705Cu: goto label_25705c;
            case 0x257060u: goto label_257060;
            case 0x257064u: goto label_257064;
            case 0x257068u: goto label_257068;
            case 0x25706Cu: goto label_25706c;
            case 0x257070u: goto label_257070;
            case 0x257074u: goto label_257074;
            case 0x257078u: goto label_257078;
            case 0x25707Cu: goto label_25707c;
            case 0x257080u: goto label_257080;
            case 0x257084u: goto label_257084;
            case 0x257088u: goto label_257088;
            case 0x25708Cu: goto label_25708c;
            case 0x257090u: goto label_257090;
            case 0x257094u: goto label_257094;
            case 0x257098u: goto label_257098;
            case 0x25709Cu: goto label_25709c;
            case 0x2570A0u: goto label_2570a0;
            case 0x2570A4u: goto label_2570a4;
            case 0x2570A8u: goto label_2570a8;
            case 0x2570ACu: goto label_2570ac;
            case 0x2570B0u: goto label_2570b0;
            case 0x2570B4u: goto label_2570b4;
            case 0x2570B8u: goto label_2570b8;
            case 0x2570BCu: goto label_2570bc;
            case 0x2570C0u: goto label_2570c0;
            case 0x2570C4u: goto label_2570c4;
            case 0x2570C8u: goto label_2570c8;
            case 0x2570CCu: goto label_2570cc;
            case 0x2570D0u: goto label_2570d0;
            case 0x2570D4u: goto label_2570d4;
            case 0x2570D8u: goto label_2570d8;
            case 0x2570DCu: goto label_2570dc;
            case 0x2570E0u: goto label_2570e0;
            case 0x2570E4u: goto label_2570e4;
            case 0x2570E8u: goto label_2570e8;
            case 0x2570ECu: goto label_2570ec;
            case 0x2570F0u: goto label_2570f0;
            case 0x2570F4u: goto label_2570f4;
            case 0x2570F8u: goto label_2570f8;
            case 0x2570FCu: goto label_2570fc;
            case 0x257100u: goto label_257100;
            case 0x257104u: goto label_257104;
            case 0x257108u: goto label_257108;
            case 0x25710Cu: goto label_25710c;
            case 0x257110u: goto label_257110;
            case 0x257114u: goto label_257114;
            case 0x257118u: goto label_257118;
            case 0x25711Cu: goto label_25711c;
            case 0x257120u: goto label_257120;
            case 0x257124u: goto label_257124;
            case 0x257128u: goto label_257128;
            case 0x25712Cu: goto label_25712c;
            case 0x257130u: goto label_257130;
            case 0x257134u: goto label_257134;
            case 0x257138u: goto label_257138;
            case 0x25713Cu: goto label_25713c;
            case 0x257140u: goto label_257140;
            case 0x257144u: goto label_257144;
            case 0x257148u: goto label_257148;
            case 0x25714Cu: goto label_25714c;
            case 0x257150u: goto label_257150;
            case 0x257154u: goto label_257154;
            case 0x257158u: goto label_257158;
            case 0x25715Cu: goto label_25715c;
            case 0x257160u: goto label_257160;
            case 0x257164u: goto label_257164;
            case 0x257168u: goto label_257168;
            case 0x25716Cu: goto label_25716c;
            case 0x257170u: goto label_257170;
            case 0x257174u: goto label_257174;
            case 0x257178u: goto label_257178;
            case 0x25717Cu: goto label_25717c;
            case 0x257180u: goto label_257180;
            case 0x257184u: goto label_257184;
            case 0x257188u: goto label_257188;
            case 0x25718Cu: goto label_25718c;
            case 0x257190u: goto label_257190;
            case 0x257194u: goto label_257194;
            case 0x257198u: goto label_257198;
            case 0x25719Cu: goto label_25719c;
            case 0x2571A0u: goto label_2571a0;
            case 0x2571A4u: goto label_2571a4;
            case 0x2571A8u: goto label_2571a8;
            case 0x2571ACu: goto label_2571ac;
            case 0x2571B0u: goto label_2571b0;
            case 0x2571B4u: goto label_2571b4;
            case 0x2571B8u: goto label_2571b8;
            case 0x2571BCu: goto label_2571bc;
            case 0x2571C0u: goto label_2571c0;
            case 0x2571C4u: goto label_2571c4;
            case 0x2571C8u: goto label_2571c8;
            case 0x2571CCu: goto label_2571cc;
            case 0x2571D0u: goto label_2571d0;
            case 0x2571D4u: goto label_2571d4;
            case 0x2571D8u: goto label_2571d8;
            case 0x2571DCu: goto label_2571dc;
            case 0x2571E0u: goto label_2571e0;
            case 0x2571E4u: goto label_2571e4;
            case 0x2571E8u: goto label_2571e8;
            case 0x2571ECu: goto label_2571ec;
            case 0x2571F0u: goto label_2571f0;
            case 0x2571F4u: goto label_2571f4;
            case 0x2571F8u: goto label_2571f8;
            case 0x2571FCu: goto label_2571fc;
            case 0x257200u: goto label_257200;
            case 0x257204u: goto label_257204;
            case 0x257208u: goto label_257208;
            case 0x25720Cu: goto label_25720c;
            case 0x257210u: goto label_257210;
            case 0x257214u: goto label_257214;
            case 0x257218u: goto label_257218;
            case 0x25721Cu: goto label_25721c;
            case 0x257220u: goto label_257220;
            case 0x257224u: goto label_257224;
            case 0x257228u: goto label_257228;
            case 0x25722Cu: goto label_25722c;
            case 0x257230u: goto label_257230;
            case 0x257234u: goto label_257234;
            case 0x257238u: goto label_257238;
            case 0x25723Cu: goto label_25723c;
            case 0x257240u: goto label_257240;
            case 0x257244u: goto label_257244;
            case 0x257248u: goto label_257248;
            case 0x25724Cu: goto label_25724c;
            case 0x257250u: goto label_257250;
            case 0x257254u: goto label_257254;
            case 0x257258u: goto label_257258;
            case 0x25725Cu: goto label_25725c;
            case 0x257260u: goto label_257260;
            case 0x257264u: goto label_257264;
            case 0x257268u: goto label_257268;
            case 0x25726Cu: goto label_25726c;
            case 0x257270u: goto label_257270;
            case 0x257274u: goto label_257274;
            case 0x257278u: goto label_257278;
            case 0x25727Cu: goto label_25727c;
            case 0x257280u: goto label_257280;
            case 0x257284u: goto label_257284;
            case 0x257288u: goto label_257288;
            case 0x25728Cu: goto label_25728c;
            case 0x257290u: goto label_257290;
            case 0x257294u: goto label_257294;
            case 0x257298u: goto label_257298;
            case 0x25729Cu: goto label_25729c;
            case 0x2572A0u: goto label_2572a0;
            case 0x2572A4u: goto label_2572a4;
            case 0x2572A8u: goto label_2572a8;
            case 0x2572ACu: goto label_2572ac;
            case 0x2572B0u: goto label_2572b0;
            case 0x2572B4u: goto label_2572b4;
            case 0x2572B8u: goto label_2572b8;
            case 0x2572BCu: goto label_2572bc;
            case 0x2572C0u: goto label_2572c0;
            case 0x2572C4u: goto label_2572c4;
            case 0x2572C8u: goto label_2572c8;
            case 0x2572CCu: goto label_2572cc;
            case 0x2572D0u: goto label_2572d0;
            case 0x2572D4u: goto label_2572d4;
            case 0x2572D8u: goto label_2572d8;
            case 0x2572DCu: goto label_2572dc;
            case 0x2572E0u: goto label_2572e0;
            case 0x2572E4u: goto label_2572e4;
            case 0x2572E8u: goto label_2572e8;
            case 0x2572ECu: goto label_2572ec;
            case 0x2572F0u: goto label_2572f0;
            case 0x2572F4u: goto label_2572f4;
            case 0x2572F8u: goto label_2572f8;
            case 0x2572FCu: goto label_2572fc;
            case 0x257300u: goto label_257300;
            case 0x257304u: goto label_257304;
            case 0x257308u: goto label_257308;
            case 0x25730Cu: goto label_25730c;
            case 0x257310u: goto label_257310;
            case 0x257314u: goto label_257314;
            case 0x257318u: goto label_257318;
            case 0x25731Cu: goto label_25731c;
            case 0x257320u: goto label_257320;
            default: break;
        }
        return;
    }
label_fallthrough_0x25731c:
    ctx->pc = 0x257324u;
}
