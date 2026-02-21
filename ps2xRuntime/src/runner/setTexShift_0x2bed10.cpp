#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setTexShift
// Address: 0x2bed10 - 0x2beef4
void setTexShift_0x2bed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bed10u;

    // 0x2bed10: 0x27bdff90
    ctx->pc = 0x2bed10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bed14: 0xffbf0060
    ctx->pc = 0x2bed14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2bed18: 0xffb50050
    ctx->pc = 0x2bed18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2bed1c: 0xffb40040
    ctx->pc = 0x2bed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bed20: 0xffb30030
    ctx->pc = 0x2bed20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bed24: 0xffb20020
    ctx->pc = 0x2bed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bed28: 0xffb10010
    ctx->pc = 0x2bed28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bed2c: 0xffb00000
    ctx->pc = 0x2bed2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bed30: 0x80982d
    ctx->pc = 0x2bed30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed34: 0x3c020036
    ctx->pc = 0x2bed34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bed38: 0x8c44dee0
    ctx->pc = 0x2bed38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bed3c: 0x24150001
    ctx->pc = 0x2bed3cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bed40: 0x3c020037
    ctx->pc = 0x2bed40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bed44: 0x8c432888
    ctx->pc = 0x2bed44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10376)));
    // 0x2bed48: 0x8c620044
    ctx->pc = 0x2bed48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2bed4c: 0x14400002
    ctx->pc = 0x2BED4Cu;
    {
        const bool branch_taken_0x2bed4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BED50u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bed4c) {
            ctx->pc = 0x2BED58u;
            goto label_2bed58;
        }
    }
    ctx->pc = 0x2BED54u;
    // 0x2bed54: 0x8c740040
    ctx->pc = 0x2bed54u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2bed58:
    // 0x2bed58: 0x14a0000a
    ctx->pc = 0x2BED58u;
    {
        const bool branch_taken_0x2bed58 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bed58) {
            ctx->pc = 0x2BED84u;
            goto label_2bed84;
        }
    }
    ctx->pc = 0x2BED60u;
    // 0x2bed60: 0x54c00008
    ctx->pc = 0x2BED60u;
    {
        const bool branch_taken_0x2bed60 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bed60) {
            ctx->pc = 0x2BED64u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2BED84u;
            goto label_2bed84;
        }
    }
    ctx->pc = 0x2BED68u;
    // 0x2bed68: 0x14e00005
    ctx->pc = 0x2BED68u;
    {
        const bool branch_taken_0x2bed68 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BED6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bed68) {
            ctx->pc = 0x2BED80u;
            goto label_2bed80;
        }
    }
    ctx->pc = 0x2BED70u;
    // 0x2bed70: 0x8e6200e0
    ctx->pc = 0x2bed70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x2bed74: 0x10400056
    ctx->pc = 0x2BED74u;
    {
        const bool branch_taken_0x2bed74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BED78u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bed74) {
            ctx->pc = 0x2BEED0u;
            goto label_2beed0;
        }
    }
    ctx->pc = 0x2BED7Cu;
    // 0x2bed7c: 0x3c020037
    ctx->pc = 0x2bed7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2bed80:
    // 0x2bed80: 0x24452898
    ctx->pc = 0x2bed80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 10392));
label_2bed84:
    // 0x2bed84: 0x10e00045
    ctx->pc = 0x2BED84u;
    {
        const bool branch_taken_0x2bed84 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BED88u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bed84) {
            ctx->pc = 0x2BEE9Cu;
            goto label_2bee9c;
        }
    }
    ctx->pc = 0x2BED8Cu;
    // 0x2bed8c: 0x8c432888
    ctx->pc = 0x2bed8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10376)));
    // 0x2bed90: 0x8c620014
    ctx->pc = 0x2bed90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2bed94: 0x54400009
    ctx->pc = 0x2BED94u;
    {
        const bool branch_taken_0x2bed94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bed94) {
            ctx->pc = 0x2BED98u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2BEDBCu;
            goto label_2bedbc;
        }
    }
    ctx->pc = 0x2BED9Cu;
    // 0x2bed9c: 0x8c620018
    ctx->pc = 0x2bed9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2beda0: 0x54400006
    ctx->pc = 0x2BEDA0u;
    {
        const bool branch_taken_0x2beda0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2beda0) {
            ctx->pc = 0x2BEDA4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2BEDBCu;
            goto label_2bedbc;
        }
    }
    ctx->pc = 0x2BEDA8u;
    // 0x2beda8: 0x8c820004
    ctx->pc = 0x2beda8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bedac: 0xac400054
    ctx->pc = 0x2bedacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x2bedb0: 0x8c820004
    ctx->pc = 0x2bedb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bedb4: 0xac400050
    ctx->pc = 0x2bedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x2bedb8: 0xc4a00000
    ctx->pc = 0x2bedb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bedbc:
    // 0x2bedbc: 0x3c013f00
    ctx->pc = 0x2bedbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2bedc0: 0x44810800
    ctx->pc = 0x2bedc0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2bedc4: 0x46010302
    ctx->pc = 0x2bedc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bedc8: 0x3c020037
    ctx->pc = 0x2bedc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bedcc: 0x8c432888
    ctx->pc = 0x2bedccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10376)));
    // 0x2bedd0: 0xc4600034
    ctx->pc = 0x2bedd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bedd4: 0x46006302
    ctx->pc = 0x2bedd4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2bedd8: 0xc4a30008
    ctx->pc = 0x2bedd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2beddc: 0x460118c2
    ctx->pc = 0x2beddcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bede0: 0xc4600038
    ctx->pc = 0x2bede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bede4: 0x460018c2
    ctx->pc = 0x2bede4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bede8: 0xe66c0020
    ctx->pc = 0x2bede8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x2bedec: 0xe6630024
    ctx->pc = 0x2bedecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x2bedf0: 0xc4a20004
    ctx->pc = 0x2bedf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bedf4: 0x46026080
    ctx->pc = 0x2bedf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2bedf8: 0x8c820004
    ctx->pc = 0x2bedf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bedfc: 0xc4400054
    ctx->pc = 0x2bedfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bee00: 0xc4610030
    ctx->pc = 0x2bee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bee04: 0x46010002
    ctx->pc = 0x2bee04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bee08: 0x46001080
    ctx->pc = 0x2bee08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2bee0c: 0xe6620028
    ctx->pc = 0x2bee0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x2bee10: 0xc4a0000c
    ctx->pc = 0x2bee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bee14: 0x460018c0
    ctx->pc = 0x2bee14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2bee18: 0x8c820004
    ctx->pc = 0x2bee18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bee1c: 0xc4400050
    ctx->pc = 0x2bee1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bee20: 0xc461002c
    ctx->pc = 0x2bee20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bee24: 0x46010002
    ctx->pc = 0x2bee24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bee28: 0x460018c0
    ctx->pc = 0x2bee28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2bee2c: 0x32820800
    ctx->pc = 0x2bee2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 2048));
    // 0x2bee30: 0x10400013
    ctx->pc = 0x2BEE30u;
    {
        const bool branch_taken_0x2bee30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEE34u;
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
        if (branch_taken_0x2bee30) {
            ctx->pc = 0x2BEE80u;
            goto label_2bee80;
        }
    }
    ctx->pc = 0x2BEE38u;
    // 0x2bee38: 0xc0be862
    ctx->pc = 0x2BEE38u;
    SET_GPR_U32(ctx, 31, 0x2BEE40u);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE40u; }
    }
    if (ctx->pc != 0x2BEE40u) { return; }
    ctx->pc = 0x2BEE40u;
    // 0x2bee40: 0x40902d
    ctx->pc = 0x2bee40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee44: 0xc0be862
    ctx->pc = 0x2BEE44u;
    SET_GPR_U32(ctx, 31, 0x2BEE4Cu);
    ctx->pc = 0x2BEE48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE4Cu; }
    }
    if (ctx->pc != 0x2BEE4Cu) { return; }
    ctx->pc = 0x2BEE4Cu;
    // 0x2bee4c: 0x40882d
    ctx->pc = 0x2bee4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee50: 0xc0be862
    ctx->pc = 0x2BEE50u;
    SET_GPR_U32(ctx, 31, 0x2BEE58u);
    ctx->pc = 0x2BEE54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE58u; }
    }
    if (ctx->pc != 0x2BEE58u) { return; }
    ctx->pc = 0x2BEE58u;
    // 0x2bee58: 0x40802d
    ctx->pc = 0x2bee58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee5c: 0xc0be862
    ctx->pc = 0x2BEE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BEE64u);
    ctx->pc = 0x2BEE60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE64u; }
    }
    if (ctx->pc != 0x2BEE64u) { return; }
    ctx->pc = 0x2BEE64u;
    // 0x2bee64: 0x3c04003b
    ctx->pc = 0x2bee64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bee68: 0x24846b50
    ctx->pc = 0x2bee68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27472));
    // 0x2bee6c: 0x240282d
    ctx->pc = 0x2bee6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee70: 0x220302d
    ctx->pc = 0x2bee70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee74: 0x200382d
    ctx->pc = 0x2bee74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee78: 0xc0b4a34
    ctx->pc = 0x2BEE78u;
    SET_GPR_U32(ctx, 31, 0x2BEE80u);
    ctx->pc = 0x2BEE7Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE80u; }
    }
    if (ctx->pc != 0x2BEE80u) { return; }
    ctx->pc = 0x2BEE80u;
label_2bee80:
    // 0x2bee80: 0x32821000
    ctx->pc = 0x2bee80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 4096));
    // 0x2bee84: 0x10400011
    ctx->pc = 0x2BEE84u;
    {
        const bool branch_taken_0x2bee84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEE88u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bee84) {
            ctx->pc = 0x2BEECCu;
            goto label_2beecc;
        }
    }
    ctx->pc = 0x2BEE8Cu;
    // 0x2bee8c: 0xc0b4a34
    ctx->pc = 0x2BEE8Cu;
    SET_GPR_U32(ctx, 31, 0x2BEE94u);
    ctx->pc = 0x2BEE90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27512));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE94u; }
    }
    if (ctx->pc != 0x2BEE94u) { return; }
    ctx->pc = 0x2BEE94u;
    // 0x2bee94: 0x1000000e
    ctx->pc = 0x2BEE94u;
    {
        const bool branch_taken_0x2bee94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEE98u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 21));
        if (branch_taken_0x2bee94) {
            ctx->pc = 0x2BEED0u;
            goto label_2beed0;
        }
    }
    ctx->pc = 0x2BEE9Cu;
label_2bee9c:
    // 0x2bee9c: 0xc4a00000
    ctx->pc = 0x2bee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beea0: 0x3c014380
    ctx->pc = 0x2beea0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17280 << 16));
    // 0x2beea4: 0x44810800
    ctx->pc = 0x2beea4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2beea8: 0x46010002
    ctx->pc = 0x2beea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2beeac: 0xe6600020
    ctx->pc = 0x2beeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x2beeb0: 0xc4a00008
    ctx->pc = 0x2beeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beeb4: 0x46010002
    ctx->pc = 0x2beeb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2beeb8: 0xe6600024
    ctx->pc = 0x2beeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x2beebc: 0xc4a00004
    ctx->pc = 0x2beebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beec0: 0xe6600028
    ctx->pc = 0x2beec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x2beec4: 0xc4a0000c
    ctx->pc = 0x2beec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beec8: 0xe660002c
    ctx->pc = 0x2beec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_2beecc:
    // 0x2beecc: 0xae7500e0
    ctx->pc = 0x2beeccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 21));
label_2beed0:
    // 0x2beed0: 0xdfbf0060
    ctx->pc = 0x2beed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2beed4: 0xdfb50050
    ctx->pc = 0x2beed4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2beed8: 0xdfb40040
    ctx->pc = 0x2beed8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2beedc: 0xdfb30030
    ctx->pc = 0x2beedcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2beee0: 0xdfb20020
    ctx->pc = 0x2beee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2beee4: 0xdfb10010
    ctx->pc = 0x2beee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beee8: 0xdfb00000
    ctx->pc = 0x2beee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2beeec: 0x3e00008
    ctx->pc = 0x2BEEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEEF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BED58u: goto label_2bed58;
            case 0x2BED80u: goto label_2bed80;
            case 0x2BED84u: goto label_2bed84;
            case 0x2BEDBCu: goto label_2bedbc;
            case 0x2BEE80u: goto label_2bee80;
            case 0x2BEE9Cu: goto label_2bee9c;
            case 0x2BEECCu: goto label_2beecc;
            case 0x2BEED0u: goto label_2beed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BEEF4u;
}
