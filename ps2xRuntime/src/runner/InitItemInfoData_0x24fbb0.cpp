#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitItemInfoData
// Address: 0x24fbb0 - 0x24fdec
void InitItemInfoData_0x24fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24fbb0u;

    // 0x24fbb0: 0x27bdff60
    ctx->pc = 0x24fbb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24fbb4: 0xffbf0090
    ctx->pc = 0x24fbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24fbb8: 0xffbe0080
    ctx->pc = 0x24fbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x24fbbc: 0xffb70070
    ctx->pc = 0x24fbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x24fbc0: 0xffb60060
    ctx->pc = 0x24fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x24fbc4: 0xffb50050
    ctx->pc = 0x24fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24fbc8: 0xffb40040
    ctx->pc = 0x24fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24fbcc: 0xffb30030
    ctx->pc = 0x24fbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24fbd0: 0xffb20020
    ctx->pc = 0x24fbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24fbd4: 0xffb10010
    ctx->pc = 0x24fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24fbd8: 0xffb00000
    ctx->pc = 0x24fbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24fbdc: 0x3c020032
    ctx->pc = 0x24fbdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x24fbe0: 0x2442f9f8
    ctx->pc = 0x24fbe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x24fbe4: 0x8c560068
    ctx->pc = 0x24fbe4u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x24fbe8: 0x8c510074
    ctx->pc = 0x24fbe8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x24fbec: 0x3c020034
    ctx->pc = 0x24fbecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fbf0: 0xac40cdec
    ctx->pc = 0x24fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954476), GPR_U32(ctx, 0));
    // 0x24fbf4: 0x3c020034
    ctx->pc = 0x24fbf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fbf8: 0xac40cde0
    ctx->pc = 0x24fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954464), GPR_U32(ctx, 0));
    // 0x24fbfc: 0x3c020034
    ctx->pc = 0x24fbfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fc00: 0xac40cde4
    ctx->pc = 0x24fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954468), GPR_U32(ctx, 0));
    // 0x24fc04: 0x3c020034
    ctx->pc = 0x24fc04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fc08: 0xac40cde8
    ctx->pc = 0x24fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954472), GPR_U32(ctx, 0));
    // 0x24fc0c: 0x3c020034
    ctx->pc = 0x24fc0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fc10: 0x8c42cda0
    ctx->pc = 0x24fc10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x24fc14: 0x14400007
    ctx->pc = 0x24FC14u;
    {
        const bool branch_taken_0x24fc14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24FC18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x24fc14) {
            ctx->pc = 0x24FC34u;
            goto label_24fc34;
        }
    }
    ctx->pc = 0x24FC1Cu;
    // 0x24fc1c: 0x8c42cda4
    ctx->pc = 0x24fc1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954404)));
    // 0x24fc20: 0x14400004
    ctx->pc = 0x24FC20u;
    {
        const bool branch_taken_0x24fc20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24FC24u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x24fc20) {
            ctx->pc = 0x24FC34u;
            goto label_24fc34;
        }
    }
    ctx->pc = 0x24FC28u;
    // 0x24fc28: 0x8c42cdac
    ctx->pc = 0x24fc28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x24fc2c: 0x10400033
    ctx->pc = 0x24FC2Cu;
    {
        const bool branch_taken_0x24fc2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FC30u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fc2c) {
            ctx->pc = 0x24FCFCu;
            goto label_24fcfc;
        }
    }
    ctx->pc = 0x24FC34u;
label_24fc34:
    // 0x24fc34: 0x1a200017
    ctx->pc = 0x24FC34u;
    {
        const bool branch_taken_0x24fc34 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x24FC38u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fc34) {
            ctx->pc = 0x24FC94u;
            goto label_24fc94;
        }
    }
    ctx->pc = 0x24FC3Cu;
    // 0x24fc3c: 0x24170050
    ctx->pc = 0x24fc3cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 80));
    // 0x24fc40: 0x24150002
    ctx->pc = 0x24fc40u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 2));
    // 0x24fc44: 0x2414002f
    ctx->pc = 0x24fc44u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 47));
    // 0x24fc48: 0x3c130034
    ctx->pc = 0x24fc48u;
    SET_GPR_U32(ctx, 19, ((uint32_t)52 << 16));
    // 0x24fc4c: 0x2571018
    ctx->pc = 0x24fc4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24fc50:
    // 0x24fc50: 0x568021
    ctx->pc = 0x24fc50u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x24fc54: 0x8e050000
    ctx->pc = 0x24fc54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24fc58: 0x38a50003
    ctx->pc = 0x24fc58u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 3));
    // 0x24fc5c: 0x26040028
    ctx->pc = 0x24fc5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
    // 0x24fc60: 0xc093eaa
    ctx->pc = 0x24FC60u;
    SET_GPR_U32(ctx, 31, 0x24FC68u);
    ctx->pc = 0x24FC64u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x24FAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatchAnyHeader_0x24faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC68u; }
    }
    if (ctx->pc != 0x24FC68u) { return; }
    ctx->pc = 0x24FC68u;
    // 0x24fc68: 0xae02004c
    ctx->pc = 0x24fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x24fc6c: 0x8e020000
    ctx->pc = 0x24fc6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24fc70: 0x54550005
    ctx->pc = 0x24FC70u;
    {
        const bool branch_taken_0x24fc70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        if (branch_taken_0x24fc70) {
            ctx->pc = 0x24FC74u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x24FC88u;
            goto label_24fc88;
        }
    }
    ctx->pc = 0x24FC78u;
    // 0x24fc78: 0x8e020004
    ctx->pc = 0x24fc78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24fc7c: 0x50540001
    ctx->pc = 0x24FC7Cu;
    {
        const bool branch_taken_0x24fc7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        if (branch_taken_0x24fc7c) {
            ctx->pc = 0x24FC80u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294954476), GPR_U32(ctx, 16));
            ctx->pc = 0x24FC84u;
            goto label_24fc84;
        }
    }
    ctx->pc = 0x24FC84u;
label_24fc84:
    // 0x24fc84: 0x26520001
    ctx->pc = 0x24fc84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_24fc88:
    // 0x24fc88: 0x251102a
    ctx->pc = 0x24fc88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 17)));
    // 0x24fc8c: 0x1440fff0
    ctx->pc = 0x24FC8Cu;
    {
        const bool branch_taken_0x24fc8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24FC90u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x24fc8c) {
            ctx->pc = 0x24FC50u;
            goto label_24fc50;
        }
    }
    ctx->pc = 0x24FC94u;
label_24fc94:
    // 0x24fc94: 0x3c020034
    ctx->pc = 0x24fc94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fc98: 0x8c44cda0
    ctx->pc = 0x24fc98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x24fc9c: 0x10800016
    ctx->pc = 0x24FC9Cu;
    {
        const bool branch_taken_0x24fc9c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FCA0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x24fc9c) {
            ctx->pc = 0x24FCF8u;
            goto label_24fcf8;
        }
    }
    ctx->pc = 0x24FCA4u;
    // 0x24fca4: 0x24a584b0
    ctx->pc = 0x24fca4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935728));
    // 0x24fca8: 0xc0847fc
    ctx->pc = 0x24FCA8u;
    SET_GPR_U32(ctx, 31, 0x24FCB0u);
    ctx->pc = 0x24FCACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FCB0u; }
    }
    if (ctx->pc != 0x24FCB0u) { return; }
    ctx->pc = 0x24FCB0u;
    // 0x24fcb0: 0x3c030034
    ctx->pc = 0x24fcb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x24fcb4: 0xac62cde0
    ctx->pc = 0x24fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954464), GPR_U32(ctx, 2));
    // 0x24fcb8: 0x3c100034
    ctx->pc = 0x24fcb8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x24fcbc: 0x8e04cdac
    ctx->pc = 0x24fcbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954412)));
    // 0x24fcc0: 0x1080000d
    ctx->pc = 0x24FCC0u;
    {
        const bool branch_taken_0x24fcc0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FCC4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x24fcc0) {
            ctx->pc = 0x24FCF8u;
            goto label_24fcf8;
        }
    }
    ctx->pc = 0x24FCC8u;
    // 0x24fcc8: 0x24a584b8
    ctx->pc = 0x24fcc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935736));
    // 0x24fccc: 0xc0847fc
    ctx->pc = 0x24FCCCu;
    SET_GPR_U32(ctx, 31, 0x24FCD4u);
    ctx->pc = 0x24FCD0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FCD4u; }
    }
    if (ctx->pc != 0x24FCD4u) { return; }
    ctx->pc = 0x24FCD4u;
    // 0x24fcd4: 0x3c030034
    ctx->pc = 0x24fcd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x24fcd8: 0xac62cde4
    ctx->pc = 0x24fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954468), GPR_U32(ctx, 2));
    // 0x24fcdc: 0x8e04cdac
    ctx->pc = 0x24fcdcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954412)));
    // 0x24fce0: 0x3c05003b
    ctx->pc = 0x24fce0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x24fce4: 0x24a584c8
    ctx->pc = 0x24fce4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935752));
    // 0x24fce8: 0xc0847fc
    ctx->pc = 0x24FCE8u;
    SET_GPR_U32(ctx, 31, 0x24FCF0u);
    ctx->pc = 0x24FCECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FCF0u; }
    }
    if (ctx->pc != 0x24FCF0u) { return; }
    ctx->pc = 0x24FCF0u;
    // 0x24fcf0: 0x3c030034
    ctx->pc = 0x24fcf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x24fcf4: 0xac62cde8
    ctx->pc = 0x24fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954472), GPR_U32(ctx, 2));
label_24fcf8:
    // 0x24fcf8: 0x902d
    ctx->pc = 0x24fcf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24fcfc:
    // 0x24fcfc: 0x3c130034
    ctx->pc = 0x24fcfcu;
    SET_GPR_U32(ctx, 19, ((uint32_t)52 << 16));
    // 0x24fd00: 0x3c020034
    ctx->pc = 0x24fd00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fd04: 0x245ecf20
    ctx->pc = 0x24fd04u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x24fd08: 0x3c020034
    ctx->pc = 0x24fd08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fd0c: 0x2457cdf0
    ctx->pc = 0x24fd0cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294954480));
    // 0x24fd10: 0x3c020034
    ctx->pc = 0x24fd10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fd14: 0x2456cf50
    ctx->pc = 0x24fd14u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294954832));
    // 0x24fd18: 0x3c020034
    ctx->pc = 0x24fd18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fd1c: 0x2455cf30
    ctx->pc = 0x24fd1cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294954800));
    // 0x24fd20: 0x3c020034
    ctx->pc = 0x24fd20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fd24: 0x2454cf40
    ctx->pc = 0x24fd24u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294954816));
label_24fd28:
    // 0x24fd28: 0x8e64cd9c
    ctx->pc = 0x24fd28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294954396)));
    // 0x24fd2c: 0x282d
    ctx->pc = 0x24fd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd30: 0xc0b3ec0
    ctx->pc = 0x24FD30u;
    SET_GPR_U32(ctx, 31, 0x24FD38u);
    ctx->pc = 0x24FD34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD38u; }
    }
    if (ctx->pc != 0x24FD38u) { return; }
    ctx->pc = 0x24FD38u;
    // 0x24fd38: 0x128080
    ctx->pc = 0x24fd38u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
    // 0x24fd3c: 0x3c040034
    ctx->pc = 0x24fd3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x24fd40: 0x2484cf10
    ctx->pc = 0x24fd40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954768));
    // 0x24fd44: 0x2041821
    ctx->pc = 0x24fd44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24fd48: 0xac620000
    ctx->pc = 0x24fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24fd4c: 0x21e1021
    ctx->pc = 0x24fd4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x24fd50: 0xac400000
    ctx->pc = 0x24fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24fd54: 0x24020048
    ctx->pc = 0x24fd54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x24fd58: 0x2421818
    ctx->pc = 0x24fd58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24fd5c: 0x771021
    ctx->pc = 0x24fd5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x24fd60: 0xac400000
    ctx->pc = 0x24fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24fd64: 0x3c04003b
    ctx->pc = 0x24fd64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x24fd68: 0x248484d0
    ctx->pc = 0x24fd68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935760));
    // 0x24fd6c: 0x282d
    ctx->pc = 0x24fd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd70: 0x8e66cd9c
    ctx->pc = 0x24fd70u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 4294954396)));
    // 0x24fd74: 0xc0b1b04
    ctx->pc = 0x24FD74u;
    SET_GPR_U32(ctx, 31, 0x24FD7Cu);
    ctx->pc = 0x24FD78u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1056 << 16));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD7Cu; }
    }
    if (ctx->pc != 0x24FD7Cu) { return; }
    ctx->pc = 0x24FD7Cu;
    // 0x24fd7c: 0x2168821
    ctx->pc = 0x24fd7cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x24fd80: 0xae220000
    ctx->pc = 0x24fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x24fd84: 0x40202d
    ctx->pc = 0x24fd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd88: 0x24050001
    ctx->pc = 0x24fd88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fd8c: 0xc0b41b8
    ctx->pc = 0x24FD8Cu;
    SET_GPR_U32(ctx, 31, 0x24FD94u);
    ctx->pc = 0x24FD90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD94u; }
    }
    if (ctx->pc != 0x24FD94u) { return; }
    ctx->pc = 0x24FD94u;
    // 0x24fd94: 0x8e230000
    ctx->pc = 0x24fd94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24fd98: 0x2402fce0
    ctx->pc = 0x24fd98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966496));
    // 0x24fd9c: 0xa4620068
    ctx->pc = 0x24fd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 2));
    // 0x24fda0: 0x2151021
    ctx->pc = 0x24fda0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x24fda4: 0xac400000
    ctx->pc = 0x24fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24fda8: 0x2148021
    ctx->pc = 0x24fda8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x24fdac: 0x26520001
    ctx->pc = 0x24fdacu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x24fdb0: 0x2a420004
    ctx->pc = 0x24fdb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x24fdb4: 0x1440ffdc
    ctx->pc = 0x24FDB4u;
    {
        const bool branch_taken_0x24fdb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24FDB8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x24fdb4) {
            ctx->pc = 0x24FD28u;
            goto label_24fd28;
        }
    }
    ctx->pc = 0x24FDBCu;
    // 0x24fdbc: 0xdfbf0090
    ctx->pc = 0x24fdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24fdc0: 0xdfbe0080
    ctx->pc = 0x24fdc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fdc4: 0xdfb70070
    ctx->pc = 0x24fdc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24fdc8: 0xdfb60060
    ctx->pc = 0x24fdc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24fdcc: 0xdfb50050
    ctx->pc = 0x24fdccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24fdd0: 0xdfb40040
    ctx->pc = 0x24fdd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24fdd4: 0xdfb30030
    ctx->pc = 0x24fdd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fdd8: 0xdfb20020
    ctx->pc = 0x24fdd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fddc: 0xdfb10010
    ctx->pc = 0x24fddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fde0: 0xdfb00000
    ctx->pc = 0x24fde0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fde4: 0x3e00008
    ctx->pc = 0x24FDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FDE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24FC34u: goto label_24fc34;
            case 0x24FC50u: goto label_24fc50;
            case 0x24FC84u: goto label_24fc84;
            case 0x24FC88u: goto label_24fc88;
            case 0x24FC94u: goto label_24fc94;
            case 0x24FCF8u: goto label_24fcf8;
            case 0x24FCFCu: goto label_24fcfc;
            case 0x24FD28u: goto label_24fd28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24FDECu;
}
