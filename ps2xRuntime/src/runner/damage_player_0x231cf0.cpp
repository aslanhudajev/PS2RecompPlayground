#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: damage_player
// Address: 0x231cf0 - 0x2325a4
void damage_player_0x231cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x231cf0u;

    // 0x231cf0: 0x27bdff70
    ctx->pc = 0x231cf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x231cf4: 0xffbf0070
    ctx->pc = 0x231cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x231cf8: 0xffb50060
    ctx->pc = 0x231cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x231cfc: 0xffb40050
    ctx->pc = 0x231cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x231d00: 0xffb30040
    ctx->pc = 0x231d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x231d04: 0xffb20030
    ctx->pc = 0x231d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x231d08: 0xffb10020
    ctx->pc = 0x231d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x231d0c: 0xffb00010
    ctx->pc = 0x231d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x231d10: 0xe7b50088
    ctx->pc = 0x231d10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x231d14: 0xe7b40080
    ctx->pc = 0x231d14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x231d18: 0x80882d
    ctx->pc = 0x231d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d1c: 0xe7ac0000
    ctx->pc = 0x231d1cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x231d20: 0xa0a02d
    ctx->pc = 0x231d20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d24: 0xafa60004
    ctx->pc = 0x231d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x231d28: 0xe0902d
    ctx->pc = 0x231d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d2c: 0x24032b00
    ctx->pc = 0x231d2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x231d30: 0x2231818
    ctx->pc = 0x231d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x231d34: 0x3c020032
    ctx->pc = 0x231d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x231d38: 0x24421bc0
    ctx->pc = 0x231d38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x231d3c: 0x628021
    ctx->pc = 0x231d3cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231d40: 0x8e0300fc
    ctx->pc = 0x231d40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x231d44: 0x24020001
    ctx->pc = 0x231d44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x231d48: 0x14620005
    ctx->pc = 0x231D48u;
    {
        const bool branch_taken_0x231d48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x231D4Cu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x231d48) {
            ctx->pc = 0x231D60u;
            goto label_231d60;
        }
    }
    ctx->pc = 0x231D50u;
    // 0x231d50: 0x3c020036
    ctx->pc = 0x231d50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x231d54: 0x8c42dbac
    ctx->pc = 0x231d54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
    // 0x231d58: 0x10400003
    ctx->pc = 0x231D58u;
    {
        const bool branch_taken_0x231d58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231D5Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x231d58) {
            ctx->pc = 0x231D68u;
            goto label_231d68;
        }
    }
    ctx->pc = 0x231D60u;
label_231d60:
    // 0x231d60: 0x10000205
    ctx->pc = 0x231D60u;
    {
        const bool branch_taken_0x231d60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x231D64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x231d60) {
            ctx->pc = 0x232578u;
            goto label_232578;
        }
    }
    ctx->pc = 0x231D68u;
label_231d68:
    // 0x231d68: 0x30420200
    ctx->pc = 0x231d68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x231d6c: 0x14400202
    ctx->pc = 0x231D6Cu;
    {
        const bool branch_taken_0x231d6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x231D70u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x231d6c) {
            ctx->pc = 0x232578u;
            goto label_232578;
        }
    }
    ctx->pc = 0x231D74u;
    // 0x231d74: 0xc08c728
    ctx->pc = 0x231D74u;
    SET_GPR_U32(ctx, 31, 0x231D7Cu);
    ctx->pc = 0x231D78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_can_be_damaged_0x231ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231D7Cu; }
    }
    if (ctx->pc != 0x231D7Cu) { return; }
    ctx->pc = 0x231D7Cu;
    // 0x231d7c: 0x1040fff8
    ctx->pc = 0x231D7Cu;
    {
        const bool branch_taken_0x231d7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231D80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x231d7c) {
            ctx->pc = 0x231D60u;
            goto label_231d60;
        }
    }
    ctx->pc = 0x231D84u;
    // 0x231d84: 0x8c43ffe8
    ctx->pc = 0x231d84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294967272)));
    // 0x231d88: 0x28620002
    ctx->pc = 0x231d88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x231d8c: 0x14400003
    ctx->pc = 0x231D8Cu;
    {
        const bool branch_taken_0x231d8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x231D90u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x231d8c) {
            ctx->pc = 0x231D9Cu;
            goto label_231d9c;
        }
    }
    ctx->pc = 0x231D94u;
    // 0x231d94: 0x1000000b
    ctx->pc = 0x231D94u;
    {
        const bool branch_taken_0x231d94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x231D98u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x231d94) {
            ctx->pc = 0x231DC4u;
            goto label_231dc4;
        }
    }
    ctx->pc = 0x231D9Cu;
label_231d9c:
    // 0x231d9c: 0x8c42ffe8
    ctx->pc = 0x231d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967272)));
    // 0x231da0: 0x18400008
    ctx->pc = 0x231DA0u;
    {
        const bool branch_taken_0x231da0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x231DA4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x231da0) {
            ctx->pc = 0x231DC4u;
            goto label_231dc4;
        }
    }
    ctx->pc = 0x231DA8u;
    // 0x231da8: 0x3c01bf80
    ctx->pc = 0x231da8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x231dac: 0x44810800
    ctx->pc = 0x231dacu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x231db0: 0xc7a00000
    ctx->pc = 0x231db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231db4: 0x46010032
    ctx->pc = 0x231db4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231db8: 0x0
    ctx->pc = 0x231db8u;
    // NOP
    // 0x231dbc: 0x45020001
    ctx->pc = 0x231DBCu;
    {
        const bool branch_taken_0x231dbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231dbc) {
            ctx->pc = 0x231DC0u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x231DC4u;
            goto label_231dc4;
        }
    }
    ctx->pc = 0x231DC4u;
label_231dc4:
    // 0x231dc4: 0x8fa20004
    ctx->pc = 0x231dc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x231dc8: 0x30428000
    ctx->pc = 0x231dc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x231dcc: 0x1440002a
    ctx->pc = 0x231DCCu;
    {
        const bool branch_taken_0x231dcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x231DD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x231dcc) {
            ctx->pc = 0x231E78u;
            goto label_231e78;
        }
    }
    ctx->pc = 0x231DD4u;
    // 0x231dd4: 0x2a620003
    ctx->pc = 0x231dd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 3));
    // 0x231dd8: 0x1040ffe1
    ctx->pc = 0x231DD8u;
    {
        const bool branch_taken_0x231dd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231DDCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x231dd8) {
            ctx->pc = 0x231D60u;
            goto label_231d60;
        }
    }
    ctx->pc = 0x231DE0u;
    // 0x231de0: 0x24631bc0
    ctx->pc = 0x231de0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x231de4: 0x24022b00
    ctx->pc = 0x231de4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x231de8: 0x2221018
    ctx->pc = 0x231de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x231dec: 0x431021
    ctx->pc = 0x231decu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231df0: 0x8c4300fc
    ctx->pc = 0x231df0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x231df4: 0x24020004
    ctx->pc = 0x231df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x231df8: 0x1062ffd9
    ctx->pc = 0x231DF8u;
    {
        const bool branch_taken_0x231df8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x231DFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x231df8) {
            ctx->pc = 0x231D60u;
            goto label_231d60;
        }
    }
    ctx->pc = 0x231E00u;
    // 0x231e00: 0x8c42e8fc
    ctx->pc = 0x231e00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961404)));
    // 0x231e04: 0x144001dc
    ctx->pc = 0x231E04u;
    {
        const bool branch_taken_0x231e04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x231E08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x231e04) {
            ctx->pc = 0x232578u;
            goto label_232578;
        }
    }
    ctx->pc = 0x231E0Cu;
    // 0x231e0c: 0x3c020036
    ctx->pc = 0x231e0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x231e10: 0x8c42d934
    ctx->pc = 0x231e10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x231e14: 0x440000c
    ctx->pc = 0x231E14u;
    {
        const bool branch_taken_0x231e14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x231E18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x231e14) {
            ctx->pc = 0x231E48u;
            goto label_231e48;
        }
    }
    ctx->pc = 0x231E1Cu;
    // 0x231e1c: 0x8c44d938
    ctx->pc = 0x231e1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957368)));
    // 0x231e20: 0x4800009
    ctx->pc = 0x231E20u;
    {
        const bool branch_taken_0x231e20 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x231E24u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x231e20) {
            ctx->pc = 0x231E48u;
            goto label_231e48;
        }
    }
    ctx->pc = 0x231E28u;
    // 0x231e28: 0x2463dfd0
    ctx->pc = 0x231e28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
    // 0x231e2c: 0x240203b0
    ctx->pc = 0x231e2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x231e30: 0x821018
    ctx->pc = 0x231e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x231e34: 0x431021
    ctx->pc = 0x231e34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231e38: 0x8c4300c8
    ctx->pc = 0x231e38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x231e3c: 0x24020001
    ctx->pc = 0x231e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x231e40: 0x146201cd
    ctx->pc = 0x231E40u;
    {
        const bool branch_taken_0x231e40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x231E44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x231e40) {
            ctx->pc = 0x232578u;
            goto label_232578;
        }
    }
    ctx->pc = 0x231E48u;
label_231e48:
    // 0x231e48: 0x3c013f80
    ctx->pc = 0x231e48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x231e4c: 0x44810000
    ctx->pc = 0x231e4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x231e50: 0xc7a10000
    ctx->pc = 0x231e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231e54: 0x46010034
    ctx->pc = 0x231e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231e58: 0x0
    ctx->pc = 0x231e58u;
    // NOP
    // 0x231e5c: 0x45000005
    ctx->pc = 0x231E5Cu;
    {
        const bool branch_taken_0x231e5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231E60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x231e5c) {
            ctx->pc = 0x231E74u;
            goto label_231e74;
        }
    }
    ctx->pc = 0x231E64u;
    // 0x231e64: 0x8c42e7c8
    ctx->pc = 0x231e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x231e68: 0xc44000a4
    ctx->pc = 0x231e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e6c: 0x46000802
    ctx->pc = 0x231e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x231e70: 0xe7a00000
    ctx->pc = 0x231e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_231e74:
    // 0x231e74: 0x3a0202d
    ctx->pc = 0x231e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_231e78:
    // 0x231e78: 0x27a50004
    ctx->pc = 0x231e78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 4));
    // 0x231e7c: 0x8e060134
    ctx->pc = 0x231e7cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x231e80: 0xc0a433a
    ctx->pc = 0x231E80u;
    SET_GPR_U32(ctx, 31, 0x231E88u);
    ctx->pc = 0x231E84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x290CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ModifyDamage_0x290ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231E88u; }
    }
    if (ctx->pc != 0x231E88u) { return; }
    ctx->pc = 0x231E88u;
    // 0x231e88: 0x8fa20004
    ctx->pc = 0x231e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x231e8c: 0x3c034000
    ctx->pc = 0x231e8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x231e90: 0x431024
    ctx->pc = 0x231e90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231e94: 0x10400006
    ctx->pc = 0x231E94u;
    {
        const bool branch_taken_0x231e94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231E98u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x231e94) {
            ctx->pc = 0x231EB0u;
            goto label_231eb0;
        }
    }
    ctx->pc = 0x231E9Cu;
    // 0x231e9c: 0x8e020138
    ctx->pc = 0x231e9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x231ea0: 0x30420001
    ctx->pc = 0x231ea0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x231ea4: 0x54400001
    ctx->pc = 0x231EA4u;
    {
        const bool branch_taken_0x231ea4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x231ea4) {
            ctx->pc = 0x231EA8u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x231EACu;
            goto label_231eac;
        }
    }
    ctx->pc = 0x231EACu;
label_231eac:
    // 0x231eac: 0xc7a10000
    ctx->pc = 0x231eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231eb0:
    // 0x231eb0: 0x3c013f80
    ctx->pc = 0x231eb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x231eb4: 0x44810000
    ctx->pc = 0x231eb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x231eb8: 0x46010034
    ctx->pc = 0x231eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231ebc: 0x0
    ctx->pc = 0x231ebcu;
    // NOP
    // 0x231ec0: 0x4502008d
    ctx->pc = 0x231EC0u;
    {
        const bool branch_taken_0x231ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231ec0) {
            ctx->pc = 0x231EC4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2320F8u;
            goto label_2320f8;
        }
    }
    ctx->pc = 0x231EC8u;
    // 0x231ec8: 0x9603093c
    ctx->pc = 0x231ec8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
    // 0x231ecc: 0x30620600
    ctx->pc = 0x231eccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1536));
    // 0x231ed0: 0x1040006e
    ctx->pc = 0x231ED0u;
    {
        const bool branch_taken_0x231ed0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231ED4u;
        ctx->f[21] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x231ed0) {
            ctx->pc = 0x23208Cu;
            goto label_23208c;
        }
    }
    ctx->pc = 0x231ED8u;
    // 0x231ed8: 0x30620200
    ctx->pc = 0x231ed8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
    // 0x231edc: 0x1040002e
    ctx->pc = 0x231EDCu;
    {
        const bool branch_taken_0x231edc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x231edc) {
            ctx->pc = 0x231F98u;
            goto label_231f98;
        }
    }
    ctx->pc = 0x231EE4u;
    // 0x231ee4: 0x12400029
    ctx->pc = 0x231EE4u;
    {
        const bool branch_taken_0x231ee4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x231ee4) {
            ctx->pc = 0x231F8Cu;
            goto label_231f8c;
        }
    }
    ctx->pc = 0x231EECu;
    // 0x231eec: 0xc64c0000
    ctx->pc = 0x231eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231ef0: 0xc0ba04a
    ctx->pc = 0x231EF0u;
    SET_GPR_U32(ctx, 31, 0x231EF8u);
    ctx->pc = 0x231EF4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231EF8u; }
    }
    if (ctx->pc != 0x231EF8u) { return; }
    ctx->pc = 0x231EF8u;
    // 0x231ef8: 0xc601086c
    ctx->pc = 0x231ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231efc: 0x46010041
    ctx->pc = 0x231efcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x231f00: 0x3c014049
    ctx->pc = 0x231f00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x231f04: 0x34210fdb
    ctx->pc = 0x231f04u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x231f08: 0x44810000
    ctx->pc = 0x231f08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x231f0c: 0x46010034
    ctx->pc = 0x231f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231f10: 0x45000006
    ctx->pc = 0x231F10u;
    {
        const bool branch_taken_0x231f10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231f10) {
            ctx->pc = 0x231F2Cu;
            goto label_231f2c;
        }
    }
    ctx->pc = 0x231F18u;
    // 0x231f18: 0x3c0140c9
    ctx->pc = 0x231f18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x231f1c: 0x34210fdb
    ctx->pc = 0x231f1cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x231f20: 0x44810000
    ctx->pc = 0x231f20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x231f24: 0x1000000c
    ctx->pc = 0x231F24u;
    {
        const bool branch_taken_0x231f24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x231F28u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x231f24) {
            ctx->pc = 0x231F58u;
            goto label_231f58;
        }
    }
    ctx->pc = 0x231F2Cu;
label_231f2c:
    // 0x231f2c: 0x3c01c049
    ctx->pc = 0x231f2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x231f30: 0x34210fdb
    ctx->pc = 0x231f30u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x231f34: 0x44810000
    ctx->pc = 0x231f34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x231f38: 0x46000836
    ctx->pc = 0x231f38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231f3c: 0x0
    ctx->pc = 0x231f3cu;
    // NOP
    // 0x231f40: 0x45020005
    ctx->pc = 0x231F40u;
    {
        const bool branch_taken_0x231f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231f40) {
            ctx->pc = 0x231F44u;
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x231F58u;
            goto label_231f58;
        }
    }
    ctx->pc = 0x231F48u;
    // 0x231f48: 0x3c0140c9
    ctx->pc = 0x231f48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x231f4c: 0x34210fdb
    ctx->pc = 0x231f4cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x231f50: 0x44810000
    ctx->pc = 0x231f50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x231f54: 0x46000800
    ctx->pc = 0x231f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_231f58:
    // 0x231f58: 0x46000046
    ctx->pc = 0x231f58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x231f5c: 0x3c013fc9
    ctx->pc = 0x231f5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x231f60: 0x34210fdb
    ctx->pc = 0x231f60u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x231f64: 0x44810000
    ctx->pc = 0x231f64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x231f68: 0x46010034
    ctx->pc = 0x231f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231f6c: 0x4500000a
    ctx->pc = 0x231F6Cu;
    {
        const bool branch_taken_0x231f6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231f6c) {
            ctx->pc = 0x231F98u;
            goto label_231f98;
        }
    }
    ctx->pc = 0x231F74u;
    // 0x231f74: 0x3c01bfc9
    ctx->pc = 0x231f74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49097 << 16));
    // 0x231f78: 0x34210fdb
    ctx->pc = 0x231f78u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x231f7c: 0x44810000
    ctx->pc = 0x231f7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x231f80: 0x46000834
    ctx->pc = 0x231f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231f84: 0x45000004
    ctx->pc = 0x231F84u;
    {
        const bool branch_taken_0x231f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231f84) {
            ctx->pc = 0x231F98u;
            goto label_231f98;
        }
    }
    ctx->pc = 0x231F8Cu;
label_231f8c:
    // 0x231f8c: 0x4480a800
    ctx->pc = 0x231f8cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x231f90: 0x10000005
    ctx->pc = 0x231F90u;
    {
        const bool branch_taken_0x231f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x231F94u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x231f90) {
            ctx->pc = 0x231FA8u;
            goto label_231fa8;
        }
    }
    ctx->pc = 0x231F98u;
label_231f98:
    // 0x231f98: 0x3c013f00
    ctx->pc = 0x231f98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x231f9c: 0x44810000
    ctx->pc = 0x231f9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x231fa0: 0x4600ad42
    ctx->pc = 0x231fa0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x231fa4: 0xc7a00000
    ctx->pc = 0x231fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231fa8:
    // 0x231fa8: 0x46150001
    ctx->pc = 0x231fa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x231fac: 0x3c014000
    ctx->pc = 0x231facu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x231fb0: 0x44810800
    ctx->pc = 0x231fb0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x231fb4: 0x46000834
    ctx->pc = 0x231fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231fb8: 0x0
    ctx->pc = 0x231fb8u;
    // NOP
    // 0x231fbc: 0x45000023
    ctx->pc = 0x231FBCu;
    {
        const bool branch_taken_0x231fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231FC0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x231fbc) {
            ctx->pc = 0x23204Cu;
            goto label_23204c;
        }
    }
    ctx->pc = 0x231FC4u;
    // 0x231fc4: 0x860201d6
    ctx->pc = 0x231fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 470)));
    // 0x231fc8: 0x5c400021
    ctx->pc = 0x231FC8u;
    {
        const bool branch_taken_0x231fc8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x231fc8) {
            ctx->pc = 0x231FCCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
            ctx->pc = 0x232050u;
            goto label_232050;
        }
    }
    ctx->pc = 0x231FD0u;
    // 0x231fd0: 0x3c013c23
    ctx->pc = 0x231fd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x231fd4: 0x3421d70a
    ctx->pc = 0x231fd4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x231fd8: 0x44810000
    ctx->pc = 0x231fd8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x231fdc: 0x4600ad02
    ctx->pc = 0x231fdcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x231fe0: 0x3c013eaa
    ctx->pc = 0x231fe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16042 << 16));
    // 0x231fe4: 0x34217efa
    ctx->pc = 0x231fe4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32506));
    // 0x231fe8: 0x44810000
    ctx->pc = 0x231fe8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x231fec: 0x4600a034
    ctx->pc = 0x231fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231ff0: 0x0
    ctx->pc = 0x231ff0u;
    // NOP
    // 0x231ff4: 0x45010008
    ctx->pc = 0x231FF4u;
    {
        const bool branch_taken_0x231ff4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x231FF8u;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x231ff4) {
            ctx->pc = 0x232018u;
            goto label_232018;
        }
    }
    ctx->pc = 0x231FFCu;
    // 0x231ffc: 0x3c013f80
    ctx->pc = 0x231ffcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x232000: 0x44810000
    ctx->pc = 0x232000u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x232004: 0x46140034
    ctx->pc = 0x232004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232008: 0x0
    ctx->pc = 0x232008u;
    // NOP
    // 0x23200c: 0x45000002
    ctx->pc = 0x23200Cu;
    {
        const bool branch_taken_0x23200c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232010u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x23200c) {
            ctx->pc = 0x232018u;
            goto label_232018;
        }
    }
    ctx->pc = 0x232014u;
    // 0x232014: 0x46000306
    ctx->pc = 0x232014u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_232018:
    // 0x232018: 0x46006506
    ctx->pc = 0x232018u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x23201c: 0xc09fc14
    ctx->pc = 0x23201Cu;
    SET_GPR_U32(ctx, 31, 0x232024u);
    ctx->pc = 0x232020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x27F050u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartBlockFX_0x27f050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232024u; }
    }
    if (ctx->pc != 0x232024u) { return; }
    ctx->pc = 0x232024u;
    // 0x232024: 0x3c014270
    ctx->pc = 0x232024u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
    // 0x232028: 0x44810000
    ctx->pc = 0x232028u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23202c: 0x4600a002
    ctx->pc = 0x23202cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x232030: 0x46000064
    ctx->pc = 0x232030u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x232034: 0x44020800
    ctx->pc = 0x232034u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x232038: 0xa60201d6
    ctx->pc = 0x232038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 470), (uint16_t)GPR_U32(ctx, 2));
    // 0x23203c: 0x9602093c
    ctx->pc = 0x23203cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
    // 0x232040: 0x34422000
    ctx->pc = 0x232040u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x232044: 0xa602093c
    ctx->pc = 0x232044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2364), (uint16_t)GPR_U32(ctx, 2));
    // 0x232048: 0x8fa30004
    ctx->pc = 0x232048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23204c:
    // 0x23204c: 0x3c020001
    ctx->pc = 0x23204cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_232050:
    // 0x232050: 0x34420160
    ctx->pc = 0x232050u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 352));
    // 0x232054: 0x621024
    ctx->pc = 0x232054u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232058: 0x50400007
    ctx->pc = 0x232058u;
    {
        const bool branch_taken_0x232058 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x232058) {
            ctx->pc = 0x23205Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->pc = 0x232078u;
            goto label_232078;
        }
    }
    ctx->pc = 0x232060u;
    // 0x232060: 0x3c02fffe
    ctx->pc = 0x232060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x232064: 0x3442fe9f
    ctx->pc = 0x232064u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65183));
    // 0x232068: 0x621024
    ctx->pc = 0x232068u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23206c: 0xafa20004
    ctx->pc = 0x23206cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x232070: 0x10000003
    ctx->pc = 0x232070u;
    {
        const bool branch_taken_0x232070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232074u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x232070) {
            ctx->pc = 0x232080u;
            goto label_232080;
        }
    }
    ctx->pc = 0x232078u;
label_232078:
    // 0x232078: 0x2403ffef
    ctx->pc = 0x232078u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x23207c: 0x431024
    ctx->pc = 0x23207cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232080:
    // 0x232080: 0xafa20004
    ctx->pc = 0x232080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x232084: 0x1000001b
    ctx->pc = 0x232084u;
    {
        const bool branch_taken_0x232084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232088u;
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        if (branch_taken_0x232084) {
            ctx->pc = 0x2320F4u;
            goto label_2320f4;
        }
    }
    ctx->pc = 0x23208Cu;
label_23208c:
    // 0x23208c: 0xc7a10000
    ctx->pc = 0x23208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232090: 0x3c014170
    ctx->pc = 0x232090u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x232094: 0x44810000
    ctx->pc = 0x232094u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x232098: 0x46010034
    ctx->pc = 0x232098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23209c: 0x0
    ctx->pc = 0x23209cu;
    // NOP
    // 0x2320a0: 0x45000015
    ctx->pc = 0x2320A0u;
    {
        const bool branch_taken_0x2320a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2320A4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x2320a0) {
            ctx->pc = 0x2320F8u;
            goto label_2320f8;
        }
    }
    ctx->pc = 0x2320A8u;
    // 0x2320a8: 0x3c030001
    ctx->pc = 0x2320a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2320ac: 0x34630160
    ctx->pc = 0x2320acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 352));
    // 0x2320b0: 0x431024
    ctx->pc = 0x2320b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2320b4: 0x10400010
    ctx->pc = 0x2320B4u;
    {
        const bool branch_taken_0x2320b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2320b4) {
            ctx->pc = 0x2320F8u;
            goto label_2320f8;
        }
    }
    ctx->pc = 0x2320BCu;
    // 0x2320bc: 0x9602093c
    ctx->pc = 0x2320bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
    // 0x2320c0: 0x30422000
    ctx->pc = 0x2320c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
    // 0x2320c4: 0x1440000c
    ctx->pc = 0x2320C4u;
    {
        const bool branch_taken_0x2320c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2320C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2320c4) {
            ctx->pc = 0x2320F8u;
            goto label_2320f8;
        }
    }
    ctx->pc = 0x2320CCu;
    // 0x2320cc: 0xc441ffa4
    ctx->pc = 0x2320ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2320d0: 0x3c014270
    ctx->pc = 0x2320d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
    // 0x2320d4: 0x44810000
    ctx->pc = 0x2320d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2320d8: 0x46010034
    ctx->pc = 0x2320d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2320dc: 0x0
    ctx->pc = 0x2320dcu;
    // NOP
    // 0x2320e0: 0x45000004
    ctx->pc = 0x2320E0u;
    {
        const bool branch_taken_0x2320e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2320E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 125));
        if (branch_taken_0x2320e0) {
            ctx->pc = 0x2320F4u;
            goto label_2320f4;
        }
    }
    ctx->pc = 0x2320E8u;
    // 0x2320e8: 0x8e050000
    ctx->pc = 0x2320e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2320ec: 0xc0a3a1c
    ctx->pc = 0x2320ECu;
    SET_GPR_U32(ctx, 31, 0x2320F4u);
    ctx->pc = 0x2320F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2320F4u; }
    }
    if (ctx->pc != 0x2320F4u) { return; }
    ctx->pc = 0x2320F4u;
label_2320f4:
    // 0x2320f4: 0xc7a10000
    ctx->pc = 0x2320f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2320f8:
    // 0x2320f8: 0x44800000
    ctx->pc = 0x2320f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2320fc: 0x46000834
    ctx->pc = 0x2320fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232100: 0x0
    ctx->pc = 0x232100u;
    // NOP
    // 0x232104: 0x4500001e
    ctx->pc = 0x232104u;
    {
        const bool branch_taken_0x232104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232108u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x232104) {
            ctx->pc = 0x232180u;
            goto label_232180;
        }
    }
    ctx->pc = 0x23210Cu;
    // 0x23210c: 0x4601a001
    ctx->pc = 0x23210cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x232110: 0xe6001a10
    ctx->pc = 0x232110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
    // 0x232114: 0x8fa30004
    ctx->pc = 0x232114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x232118: 0x30628000
    ctx->pc = 0x232118u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
    // 0x23211c: 0x10400082
    ctx->pc = 0x23211Cu;
    {
        const bool branch_taken_0x23211c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x232120u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
        if (branch_taken_0x23211c) {
            ctx->pc = 0x232328u;
            goto label_232328;
        }
    }
    ctx->pc = 0x232124u;
    // 0x232124: 0x10400004
    ctx->pc = 0x232124u;
    {
        const bool branch_taken_0x232124 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x232128u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
        if (branch_taken_0x232124) {
            ctx->pc = 0x232138u;
            goto label_232138;
        }
    }
    ctx->pc = 0x23212Cu;
    // 0x23212c: 0x8e0208ac
    ctx->pc = 0x23212cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x232130: 0x431024
    ctx->pc = 0x232130u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232134: 0xae0208ac
    ctx->pc = 0x232134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 2));
label_232138:
    // 0x232138: 0x8e0208ac
    ctx->pc = 0x232138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x23213c: 0x8fa30004
    ctx->pc = 0x23213cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x232140: 0x431025
    ctx->pc = 0x232140u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232144: 0x12400078
    ctx->pc = 0x232144u;
    {
        const bool branch_taken_0x232144 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x232148u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 2));
        if (branch_taken_0x232144) {
            ctx->pc = 0x232328u;
            goto label_232328;
        }
    }
    ctx->pc = 0x23214Cu;
    // 0x23214c: 0xc6400000
    ctx->pc = 0x23214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232150: 0xc60108b4
    ctx->pc = 0x232150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232154: 0x46010000
    ctx->pc = 0x232154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232158: 0xe60008b4
    ctx->pc = 0x232158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2228), bits); }
    // 0x23215c: 0xc6400004
    ctx->pc = 0x23215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232160: 0xc60108b8
    ctx->pc = 0x232160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232164: 0x46010000
    ctx->pc = 0x232164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232168: 0xe60008b8
    ctx->pc = 0x232168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2232), bits); }
    // 0x23216c: 0xc6400008
    ctx->pc = 0x23216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232170: 0xc60108bc
    ctx->pc = 0x232170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232174: 0x46010000
    ctx->pc = 0x232174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232178: 0x1000006b
    ctx->pc = 0x232178u;
    {
        const bool branch_taken_0x232178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23217Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2236), bits); }
        if (branch_taken_0x232178) {
            ctx->pc = 0x232328u;
            goto label_232328;
        }
    }
    ctx->pc = 0x232180u;
label_232180:
    // 0x232180: 0x5660000a
    ctx->pc = 0x232180u;
    {
        const bool branch_taken_0x232180 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x232180) {
            ctx->pc = 0x232184u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2321ACu;
            goto label_2321ac;
        }
    }
    ctx->pc = 0x232188u;
    // 0x232188: 0x8fa20004
    ctx->pc = 0x232188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23218c: 0x30428000
    ctx->pc = 0x23218cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x232190: 0x54400006
    ctx->pc = 0x232190u;
    {
        const bool branch_taken_0x232190 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x232190) {
            ctx->pc = 0x232194u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2321ACu;
            goto label_2321ac;
        }
    }
    ctx->pc = 0x232198u;
    // 0x232198: 0xc6001a10
    ctx->pc = 0x232198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23219c: 0xc7a10000
    ctx->pc = 0x23219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2321a0: 0x46010001
    ctx->pc = 0x2321a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2321a4: 0xe6001a10
    ctx->pc = 0x2321a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
    // 0x2321a8: 0xc60008a8
    ctx->pc = 0x2321a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2321ac:
    // 0x2321ac: 0xc7a10000
    ctx->pc = 0x2321acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2321b0: 0x46010000
    ctx->pc = 0x2321b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2321b4: 0x2a620002
    ctx->pc = 0x2321b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 2));
    // 0x2321b8: 0x1040005b
    ctx->pc = 0x2321B8u;
    {
        const bool branch_taken_0x2321b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2321BCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2216), bits); }
        if (branch_taken_0x2321b8) {
            ctx->pc = 0x232328u;
            goto label_232328;
        }
    }
    ctx->pc = 0x2321C0u;
    // 0x2321c0: 0x8fa20004
    ctx->pc = 0x2321c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2321c4: 0x3042000f
    ctx->pc = 0x2321c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x2321c8: 0x10400004
    ctx->pc = 0x2321C8u;
    {
        const bool branch_taken_0x2321c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2321CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
        if (branch_taken_0x2321c8) {
            ctx->pc = 0x2321DCu;
            goto label_2321dc;
        }
    }
    ctx->pc = 0x2321D0u;
    // 0x2321d0: 0x8e0208ac
    ctx->pc = 0x2321d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x2321d4: 0x431024
    ctx->pc = 0x2321d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2321d8: 0xae0208ac
    ctx->pc = 0x2321d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 2));
label_2321dc:
    // 0x2321dc: 0xc7a10000
    ctx->pc = 0x2321dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2321e0: 0x3c014000
    ctx->pc = 0x2321e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2321e4: 0x44810000
    ctx->pc = 0x2321e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2321e8: 0x46000836
    ctx->pc = 0x2321e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2321ec: 0x0
    ctx->pc = 0x2321ecu;
    // NOP
    // 0x2321f0: 0x45000005
    ctx->pc = 0x2321F0u;
    {
        const bool branch_taken_0x2321f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2321F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x2321f0) {
            ctx->pc = 0x232208u;
            goto label_232208;
        }
    }
    ctx->pc = 0x2321F8u;
    // 0x2321f8: 0x3c03fffe
    ctx->pc = 0x2321f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65534 << 16));
    // 0x2321fc: 0x3463fe8f
    ctx->pc = 0x2321fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65167));
    // 0x232200: 0x431024
    ctx->pc = 0x232200u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232204: 0xafa20004
    ctx->pc = 0x232204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_232208:
    // 0x232208: 0x8e0208ac
    ctx->pc = 0x232208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x23220c: 0x8fa30004
    ctx->pc = 0x23220cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x232210: 0x431025
    ctx->pc = 0x232210u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232214: 0x1240000d
    ctx->pc = 0x232214u;
    {
        const bool branch_taken_0x232214 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x232218u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 2));
        if (branch_taken_0x232214) {
            ctx->pc = 0x23224Cu;
            goto label_23224c;
        }
    }
    ctx->pc = 0x23221Cu;
    // 0x23221c: 0xc6400000
    ctx->pc = 0x23221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232220: 0xc60108b4
    ctx->pc = 0x232220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232224: 0x46010000
    ctx->pc = 0x232224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232228: 0xe60008b4
    ctx->pc = 0x232228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2228), bits); }
    // 0x23222c: 0xc6400004
    ctx->pc = 0x23222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232230: 0xc60108b8
    ctx->pc = 0x232230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232234: 0x46010000
    ctx->pc = 0x232234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232238: 0xe60008b8
    ctx->pc = 0x232238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2232), bits); }
    // 0x23223c: 0xc6400008
    ctx->pc = 0x23223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232240: 0xc60108bc
    ctx->pc = 0x232240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232244: 0x46010000
    ctx->pc = 0x232244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232248: 0xe60008bc
    ctx->pc = 0x232248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2236), bits); }
label_23224c:
    // 0x23224c: 0xc7a10000
    ctx->pc = 0x23224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232250: 0x44800000
    ctx->pc = 0x232250u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x232254: 0x46010034
    ctx->pc = 0x232254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232258: 0x0
    ctx->pc = 0x232258u;
    // NOP
    // 0x23225c: 0x45000032
    ctx->pc = 0x23225Cu;
    {
        const bool branch_taken_0x23225c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232260u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x23225c) {
            ctx->pc = 0x232328u;
            goto label_232328;
        }
    }
    ctx->pc = 0x232264u;
    // 0x232264: 0x30420800
    ctx->pc = 0x232264u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x232268: 0x10400006
    ctx->pc = 0x232268u;
    {
        const bool branch_taken_0x232268 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23226Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x232268) {
            ctx->pc = 0x232284u;
            goto label_232284;
        }
    }
    ctx->pc = 0x232270u;
    // 0x232270: 0xc440ffa4
    ctx->pc = 0x232270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232274: 0x3c013f80
    ctx->pc = 0x232274u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x232278: 0x44810800
    ctx->pc = 0x232278u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23227c: 0x46010000
    ctx->pc = 0x23227cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232280: 0xe6000870
    ctx->pc = 0x232280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2160), bits); }
label_232284:
    // 0x232284: 0x8fa20004
    ctx->pc = 0x232284u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x232288: 0x30421000
    ctx->pc = 0x232288u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x23228c: 0x10400007
    ctx->pc = 0x23228Cu;
    {
        const bool branch_taken_0x23228c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x232290u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23228c) {
            ctx->pc = 0x2322ACu;
            goto label_2322ac;
        }
    }
    ctx->pc = 0x232294u;
    // 0x232294: 0xc440ffa4
    ctx->pc = 0x232294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232298: 0x3c013d88
    ctx->pc = 0x232298u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15752 << 16));
    // 0x23229c: 0x34218889
    ctx->pc = 0x23229cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2322a0: 0x44810800
    ctx->pc = 0x2322a0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2322a4: 0x46010000
    ctx->pc = 0x2322a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2322a8: 0xe6000870
    ctx->pc = 0x2322a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2160), bits); }
label_2322ac:
    // 0x2322ac: 0x8fa20004
    ctx->pc = 0x2322acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2322b0: 0x3c030001
    ctx->pc = 0x2322b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2322b4: 0x34630040
    ctx->pc = 0x2322b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 64));
    // 0x2322b8: 0x431024
    ctx->pc = 0x2322b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2322bc: 0x10400006
    ctx->pc = 0x2322BCu;
    {
        const bool branch_taken_0x2322bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2322C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2322bc) {
            ctx->pc = 0x2322D8u;
            goto label_2322d8;
        }
    }
    ctx->pc = 0x2322C4u;
    // 0x2322c4: 0x24050003
    ctx->pc = 0x2322c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2322c8: 0xc081a58
    ctx->pc = 0x2322C8u;
    SET_GPR_U32(ctx, 31, 0x2322D0u);
    ctx->pc = 0x2322CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x206960u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_vibe_0x206960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322D0u; }
    }
    if (ctx->pc != 0x2322D0u) { return; }
    ctx->pc = 0x2322D0u;
    // 0x2322d0: 0x10000016
    ctx->pc = 0x2322D0u;
    {
        const bool branch_taken_0x2322d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2322D4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x2322d0) {
            ctx->pc = 0x23232Cu;
            goto label_23232c;
        }
    }
    ctx->pc = 0x2322D8u;
label_2322d8:
    // 0x2322d8: 0x8fa20004
    ctx->pc = 0x2322d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2322dc: 0x30420120
    ctx->pc = 0x2322dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 288));
    // 0x2322e0: 0x10400005
    ctx->pc = 0x2322E0u;
    {
        const bool branch_taken_0x2322e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2322E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2322e0) {
            ctx->pc = 0x2322F8u;
            goto label_2322f8;
        }
    }
    ctx->pc = 0x2322E8u;
    // 0x2322e8: 0xc081a58
    ctx->pc = 0x2322E8u;
    SET_GPR_U32(ctx, 31, 0x2322F0u);
    ctx->pc = 0x2322ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x206960u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_vibe_0x206960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322F0u; }
    }
    if (ctx->pc != 0x2322F0u) { return; }
    ctx->pc = 0x2322F0u;
    // 0x2322f0: 0x1000000e
    ctx->pc = 0x2322F0u;
    {
        const bool branch_taken_0x2322f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2322F4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x2322f0) {
            ctx->pc = 0x23232Cu;
            goto label_23232c;
        }
    }
    ctx->pc = 0x2322F8u;
label_2322f8:
    // 0x2322f8: 0x8fa20004
    ctx->pc = 0x2322f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2322fc: 0x30420090
    ctx->pc = 0x2322fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 144));
    // 0x232300: 0x10400006
    ctx->pc = 0x232300u;
    {
        const bool branch_taken_0x232300 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x232304u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232300) {
            ctx->pc = 0x23231Cu;
            goto label_23231c;
        }
    }
    ctx->pc = 0x232308u;
    // 0x232308: 0x24050001
    ctx->pc = 0x232308u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23230c: 0xc081a58
    ctx->pc = 0x23230Cu;
    SET_GPR_U32(ctx, 31, 0x232314u);
    ctx->pc = 0x232310u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x206960u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_vibe_0x206960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232314u; }
    }
    if (ctx->pc != 0x232314u) { return; }
    ctx->pc = 0x232314u;
    // 0x232314: 0x10000005
    ctx->pc = 0x232314u;
    {
        const bool branch_taken_0x232314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232318u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x232314) {
            ctx->pc = 0x23232Cu;
            goto label_23232c;
        }
    }
    ctx->pc = 0x23231Cu;
label_23231c:
    // 0x23231c: 0x282d
    ctx->pc = 0x23231cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232320: 0xc081a58
    ctx->pc = 0x232320u;
    SET_GPR_U32(ctx, 31, 0x232328u);
    ctx->pc = 0x232324u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x206960u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_vibe_0x206960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232328u; }
    }
    if (ctx->pc != 0x232328u) { return; }
    ctx->pc = 0x232328u;
label_232328:
    // 0x232328: 0xc6011a10
    ctx->pc = 0x232328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23232c:
    // 0x23232c: 0x3c013f80
    ctx->pc = 0x23232cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x232330: 0x44810000
    ctx->pc = 0x232330u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x232334: 0x46000834
    ctx->pc = 0x232334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232338: 0x45000005
    ctx->pc = 0x232338u;
    {
        const bool branch_taken_0x232338 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232338) {
            ctx->pc = 0x232350u;
            goto label_232350;
        }
    }
    ctx->pc = 0x232340u;
    // 0x232340: 0xc08c62a
    ctx->pc = 0x232340u;
    SET_GPR_U32(ctx, 31, 0x232348u);
    ctx->pc = 0x232344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2318A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_dies_0x2318a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232348u; }
    }
    if (ctx->pc != 0x232348u) { return; }
    ctx->pc = 0x232348u;
    // 0x232348: 0x1000008a
    ctx->pc = 0x232348u;
    {
        const bool branch_taken_0x232348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23234Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x232348) {
            ctx->pc = 0x232574u;
            goto label_232574;
        }
    }
    ctx->pc = 0x232350u;
label_232350:
    // 0x232350: 0x3c013f00
    ctx->pc = 0x232350u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x232354: 0x44810800
    ctx->pc = 0x232354u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x232358: 0x4601a000
    ctx->pc = 0x232358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x23235c: 0x460000a4
    ctx->pc = 0x23235cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x232360: 0x44041000
    ctx->pc = 0x232360u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[2]);
    // 0x232364: 0xc6001a10
    ctx->pc = 0x232364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232368: 0x46010000
    ctx->pc = 0x232368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23236c: 0x46000064
    ctx->pc = 0x23236cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x232370: 0x44030800
    ctx->pc = 0x232370u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x232374: 0xc7a10000
    ctx->pc = 0x232374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232378: 0x44800000
    ctx->pc = 0x232378u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x23237c: 0x46010034
    ctx->pc = 0x23237cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232380: 0x0
    ctx->pc = 0x232380u;
    // NOP
    // 0x232384: 0x45000004
    ctx->pc = 0x232384u;
    {
        const bool branch_taken_0x232384 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232388u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 151));
        if (branch_taken_0x232384) {
            ctx->pc = 0x232398u;
            goto label_232398;
        }
    }
    ctx->pc = 0x23238Cu;
    // 0x23238c: 0xc60008fc
    ctx->pc = 0x23238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232390: 0x46010000
    ctx->pc = 0x232390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232394: 0xe60008fc
    ctx->pc = 0x232394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2300), bits); }
label_232398:
    // 0x232398: 0x1440000c
    ctx->pc = 0x232398u;
    {
        const bool branch_taken_0x232398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23239Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 51));
        if (branch_taken_0x232398) {
            ctx->pc = 0x2323CCu;
            goto label_2323cc;
        }
    }
    ctx->pc = 0x2323A0u;
    // 0x2323a0: 0x28620097
    ctx->pc = 0x2323a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 151));
    // 0x2323a4: 0x10400008
    ctx->pc = 0x2323A4u;
    {
        const bool branch_taken_0x2323a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2323A8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2323a4) {
            ctx->pc = 0x2323C8u;
            goto label_2323c8;
        }
    }
    ctx->pc = 0x2323ACu;
    // 0x2323ac: 0x2404000d
    ctx->pc = 0x2323acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x2323b0: 0xc0a3a1c
    ctx->pc = 0x2323B0u;
    SET_GPR_U32(ctx, 31, 0x2323B8u);
    ctx->pc = 0x2323B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323B8u; }
    }
    if (ctx->pc != 0x2323B8u) { return; }
    ctx->pc = 0x2323B8u;
    // 0x2323b8: 0x14400046
    ctx->pc = 0x2323B8u;
    {
        const bool branch_taken_0x2323b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2323BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2323b8) {
            ctx->pc = 0x2324D4u;
            goto label_2324d4;
        }
    }
    ctx->pc = 0x2323C0u;
    // 0x2323c0: 0x1000000c
    ctx->pc = 0x2323C0u;
    {
        const bool branch_taken_0x2323c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2323C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2323c0) {
            ctx->pc = 0x2323F4u;
            goto label_2323f4;
        }
    }
    ctx->pc = 0x2323C8u;
label_2323c8:
    // 0x2323c8: 0x28820033
    ctx->pc = 0x2323c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 51));
label_2323cc:
    // 0x2323cc: 0x1440000e
    ctx->pc = 0x2323CCu;
    {
        const bool branch_taken_0x2323cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2323D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2323cc) {
            ctx->pc = 0x232408u;
            goto label_232408;
        }
    }
    ctx->pc = 0x2323D4u;
    // 0x2323d4: 0x28620033
    ctx->pc = 0x2323d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 51));
    // 0x2323d8: 0x1040000a
    ctx->pc = 0x2323D8u;
    {
        const bool branch_taken_0x2323d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2323DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2323d8) {
            ctx->pc = 0x232404u;
            goto label_232404;
        }
    }
    ctx->pc = 0x2323E0u;
    // 0x2323e0: 0x8c42ffb0
    ctx->pc = 0x2323e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967216)));
    // 0x2323e4: 0x30420001
    ctx->pc = 0x2323e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2323e8: 0x14400002
    ctx->pc = 0x2323E8u;
    {
        const bool branch_taken_0x2323e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2323ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2323e8) {
            ctx->pc = 0x2323F4u;
            goto label_2323f4;
        }
    }
    ctx->pc = 0x2323F0u;
    // 0x2323f0: 0x24040002
    ctx->pc = 0x2323f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_2323f4:
    // 0x2323f4: 0xc097754
    ctx->pc = 0x2323F4u;
    SET_GPR_U32(ctx, 31, 0x2323FCu);
    ctx->pc = 0x2323F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25DD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioNeedFood_0x25dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323FCu; }
    }
    if (ctx->pc != 0x2323FCu) { return; }
    ctx->pc = 0x2323FCu;
    // 0x2323fc: 0x10000035
    ctx->pc = 0x2323FCu;
    {
        const bool branch_taken_0x2323fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232400u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2323fc) {
            ctx->pc = 0x2324D4u;
            goto label_2324d4;
        }
    }
    ctx->pc = 0x232404u;
label_232404:
    // 0x232404: 0x24020002
    ctx->pc = 0x232404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_232408:
    // 0x232408: 0x1682000b
    ctx->pc = 0x232408u;
    {
        const bool branch_taken_0x232408 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x23240Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x232408) {
            ctx->pc = 0x232438u;
            goto label_232438;
        }
    }
    ctx->pc = 0x232410u;
    // 0x232410: 0xc7a10000
    ctx->pc = 0x232410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232414: 0x44800000
    ctx->pc = 0x232414u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x232418: 0x46010034
    ctx->pc = 0x232418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23241c: 0x0
    ctx->pc = 0x23241cu;
    // NOP
    // 0x232420: 0x4502002b
    ctx->pc = 0x232420u;
    {
        const bool branch_taken_0x232420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232420) {
            ctx->pc = 0x232424u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 2300), GPR_U32(ctx, 0));
            ctx->pc = 0x2324D0u;
            goto label_2324d0;
        }
    }
    ctx->pc = 0x232428u;
    // 0x232428: 0xc0978a2
    ctx->pc = 0x232428u;
    SET_GPR_U32(ctx, 31, 0x232430u);
    ctx->pc = 0x23242Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25E288u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerPain_0x25e288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232430u; }
    }
    if (ctx->pc != 0x232430u) { return; }
    ctx->pc = 0x232430u;
    // 0x232430: 0x10000027
    ctx->pc = 0x232430u;
    {
        const bool branch_taken_0x232430 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232434u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2300), GPR_U32(ctx, 0));
        if (branch_taken_0x232430) {
            ctx->pc = 0x2324D0u;
            goto label_2324d0;
        }
    }
    ctx->pc = 0x232438u;
label_232438:
    // 0x232438: 0x16820005
    ctx->pc = 0x232438u;
    {
        const bool branch_taken_0x232438 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        if (branch_taken_0x232438) {
            ctx->pc = 0x232450u;
            goto label_232450;
        }
    }
    ctx->pc = 0x232440u;
    // 0x232440: 0xc0978d8
    ctx->pc = 0x232440u;
    SET_GPR_U32(ctx, 31, 0x232448u);
    ctx->pc = 0x232444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25E360u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerSeverePain_0x25e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232448u; }
    }
    if (ctx->pc != 0x232448u) { return; }
    ctx->pc = 0x232448u;
label_232448:
    // 0x232448: 0x10000021
    ctx->pc = 0x232448u;
    {
        const bool branch_taken_0x232448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23244Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2300), GPR_U32(ctx, 0));
        if (branch_taken_0x232448) {
            ctx->pc = 0x2324D0u;
            goto label_2324d0;
        }
    }
    ctx->pc = 0x232450u;
label_232450:
    // 0x232450: 0x1280001f
    ctx->pc = 0x232450u;
    {
        const bool branch_taken_0x232450 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x232454u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x232450) {
            ctx->pc = 0x2324D0u;
            goto label_2324d0;
        }
    }
    ctx->pc = 0x232458u;
    // 0x232458: 0x2842003d
    ctx->pc = 0x232458u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 61));
    // 0x23245c: 0x5440000b
    ctx->pc = 0x23245Cu;
    {
        const bool branch_taken_0x23245c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23245c) {
            ctx->pc = 0x232460u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23248Cu;
            goto label_23248c;
        }
    }
    ctx->pc = 0x232464u;
    // 0x232464: 0xc7a10000
    ctx->pc = 0x232464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232468: 0x44800000
    ctx->pc = 0x232468u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x23246c: 0x46010034
    ctx->pc = 0x23246cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232470: 0x0
    ctx->pc = 0x232470u;
    // NOP
    // 0x232474: 0x4500fff4
    ctx->pc = 0x232474u;
    {
        const bool branch_taken_0x232474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232478u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232474) {
            ctx->pc = 0x232448u;
            goto label_232448;
        }
    }
    ctx->pc = 0x23247Cu;
    // 0x23247c: 0xc0978a2
    ctx->pc = 0x23247Cu;
    SET_GPR_U32(ctx, 31, 0x232484u);
    ctx->pc = 0x232480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25E288u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerPain_0x25e288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232484u; }
    }
    if (ctx->pc != 0x232484u) { return; }
    ctx->pc = 0x232484u;
    // 0x232484: 0x1000fff0
    ctx->pc = 0x232484u;
    {
        const bool branch_taken_0x232484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232488u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232484) {
            ctx->pc = 0x232448u;
            goto label_232448;
        }
    }
    ctx->pc = 0x23248Cu;
label_23248c:
    // 0x23248c: 0x3c0141f0
    ctx->pc = 0x23248cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x232490: 0x44810800
    ctx->pc = 0x232490u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x232494: 0x46000836
    ctx->pc = 0x232494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232498: 0x0
    ctx->pc = 0x232498u;
    // NOP
    // 0x23249c: 0x4500000d
    ctx->pc = 0x23249Cu;
    {
        const bool branch_taken_0x23249c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2324A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23249c) {
            ctx->pc = 0x2324D4u;
            goto label_2324d4;
        }
    }
    ctx->pc = 0x2324A4u;
    // 0x2324a4: 0x46010001
    ctx->pc = 0x2324a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2324a8: 0xe60008fc
    ctx->pc = 0x2324a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2300), bits); }
    // 0x2324ac: 0xc7a10000
    ctx->pc = 0x2324acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2324b0: 0x44800000
    ctx->pc = 0x2324b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2324b4: 0x46010034
    ctx->pc = 0x2324b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2324b8: 0x0
    ctx->pc = 0x2324b8u;
    // NOP
    // 0x2324bc: 0x45000005
    ctx->pc = 0x2324BCu;
    {
        const bool branch_taken_0x2324bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2324C0u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2324bc) {
            ctx->pc = 0x2324D4u;
            goto label_2324d4;
        }
    }
    ctx->pc = 0x2324C4u;
    // 0x2324c4: 0xc0978a2
    ctx->pc = 0x2324C4u;
    SET_GPR_U32(ctx, 31, 0x2324CCu);
    ctx->pc = 0x2324C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25E288u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerPain_0x25e288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2324CCu; }
    }
    if (ctx->pc != 0x2324CCu) { return; }
    ctx->pc = 0x2324CCu;
    // 0x2324cc: 0xa02d
    ctx->pc = 0x2324ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2324d0:
    // 0x2324d0: 0x24020001
    ctx->pc = 0x2324d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2324d4:
    // 0x2324d4: 0x16820028
    ctx->pc = 0x2324D4u;
    {
        const bool branch_taken_0x2324d4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x2324D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2324d4) {
            ctx->pc = 0x232578u;
            goto label_232578;
        }
    }
    ctx->pc = 0x2324DCu;
    // 0x2324dc: 0x8fa20004
    ctx->pc = 0x2324dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2324e0: 0x30420800
    ctx->pc = 0x2324e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x2324e4: 0x1040000a
    ctx->pc = 0x2324E4u;
    {
        const bool branch_taken_0x2324e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2324E8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x2324e4) {
            ctx->pc = 0x232510u;
            goto label_232510;
        }
    }
    ctx->pc = 0x2324ECu;
    // 0x2324ec: 0x44800000
    ctx->pc = 0x2324ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2324f0: 0x46010034
    ctx->pc = 0x2324f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2324f4: 0x0
    ctx->pc = 0x2324f4u;
    // NOP
    // 0x2324f8: 0x4500001f
    ctx->pc = 0x2324F8u;
    {
        const bool branch_taken_0x2324f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2324FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2324f8) {
            ctx->pc = 0x232578u;
            goto label_232578;
        }
    }
    ctx->pc = 0x232500u;
    // 0x232500: 0xc097962
    ctx->pc = 0x232500u;
    SET_GPR_U32(ctx, 31, 0x232508u);
    ctx->pc = 0x232504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25E588u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerPoison_0x25e588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232508u; }
    }
    if (ctx->pc != 0x232508u) { return; }
    ctx->pc = 0x232508u;
    // 0x232508: 0x1000001b
    ctx->pc = 0x232508u;
    {
        const bool branch_taken_0x232508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23250Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232508) {
            ctx->pc = 0x232578u;
            goto label_232578;
        }
    }
    ctx->pc = 0x232510u;
label_232510:
    // 0x232510: 0x860201c8
    ctx->pc = 0x232510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x232514: 0x1c400018
    ctx->pc = 0x232514u;
    {
        const bool branch_taken_0x232514 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x232518u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232514) {
            ctx->pc = 0x232578u;
            goto label_232578;
        }
    }
    ctx->pc = 0x23251Cu;
    // 0x23251c: 0x8fa20004
    ctx->pc = 0x23251cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x232520: 0x3c030002
    ctx->pc = 0x232520u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
    // 0x232524: 0x431024
    ctx->pc = 0x232524u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232528: 0x10400003
    ctx->pc = 0x232528u;
    {
        const bool branch_taken_0x232528 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23252Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232528) {
            ctx->pc = 0x232538u;
            goto label_232538;
        }
    }
    ctx->pc = 0x232530u;
    // 0x232530: 0x10000006
    ctx->pc = 0x232530u;
    {
        const bool branch_taken_0x232530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232534u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x232530) {
            ctx->pc = 0x23254Cu;
            goto label_23254c;
        }
    }
    ctx->pc = 0x232538u;
label_232538:
    // 0x232538: 0x8fa20004
    ctx->pc = 0x232538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23253c: 0x3c030004
    ctx->pc = 0x23253cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x232540: 0x431024
    ctx->pc = 0x232540u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232544: 0x24030002
    ctx->pc = 0x232544u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x232548: 0x62280b
    ctx->pc = 0x232548u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_23254c:
    // 0x23254c: 0xc7a10000
    ctx->pc = 0x23254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232550: 0x44800000
    ctx->pc = 0x232550u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x232554: 0x46010034
    ctx->pc = 0x232554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232558: 0x0
    ctx->pc = 0x232558u;
    // NOP
    // 0x23255c: 0x45000004
    ctx->pc = 0x23255Cu;
    {
        const bool branch_taken_0x23255c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232560u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x23255c) {
            ctx->pc = 0x232570u;
            goto label_232570;
        }
    }
    ctx->pc = 0x232564u;
    // 0x232564: 0xc097b0c
    ctx->pc = 0x232564u;
    SET_GPR_U32(ctx, 31, 0x23256Cu);
    ctx->pc = 0x232568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25EC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerHit_0x25ec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23256Cu; }
    }
    if (ctx->pc != 0x23256Cu) { return; }
    ctx->pc = 0x23256Cu;
    // 0x23256c: 0x2402001e
    ctx->pc = 0x23256cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_232570:
    // 0x232570: 0xa60201c8
    ctx->pc = 0x232570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 456), (uint16_t)GPR_U32(ctx, 2));
label_232574:
    // 0x232574: 0x2a0102d
    ctx->pc = 0x232574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_232578:
    // 0x232578: 0xdfbf0070
    ctx->pc = 0x232578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23257c: 0xdfb50060
    ctx->pc = 0x23257cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x232580: 0xdfb40050
    ctx->pc = 0x232580u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232584: 0xdfb30040
    ctx->pc = 0x232584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x232588: 0xdfb20030
    ctx->pc = 0x232588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23258c: 0xdfb10020
    ctx->pc = 0x23258cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232590: 0xdfb00010
    ctx->pc = 0x232590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232594: 0xc7b50088
    ctx->pc = 0x232594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x232598: 0xc7b40080
    ctx->pc = 0x232598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23259c: 0x3e00008
    ctx->pc = 0x23259Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2325A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231D60u: goto label_231d60;
            case 0x231D68u: goto label_231d68;
            case 0x231D9Cu: goto label_231d9c;
            case 0x231DC4u: goto label_231dc4;
            case 0x231E48u: goto label_231e48;
            case 0x231E74u: goto label_231e74;
            case 0x231E78u: goto label_231e78;
            case 0x231EACu: goto label_231eac;
            case 0x231EB0u: goto label_231eb0;
            case 0x231F2Cu: goto label_231f2c;
            case 0x231F58u: goto label_231f58;
            case 0x231F8Cu: goto label_231f8c;
            case 0x231F98u: goto label_231f98;
            case 0x231FA8u: goto label_231fa8;
            case 0x232018u: goto label_232018;
            case 0x23204Cu: goto label_23204c;
            case 0x232050u: goto label_232050;
            case 0x232078u: goto label_232078;
            case 0x232080u: goto label_232080;
            case 0x23208Cu: goto label_23208c;
            case 0x2320F4u: goto label_2320f4;
            case 0x2320F8u: goto label_2320f8;
            case 0x232138u: goto label_232138;
            case 0x232180u: goto label_232180;
            case 0x2321ACu: goto label_2321ac;
            case 0x2321DCu: goto label_2321dc;
            case 0x232208u: goto label_232208;
            case 0x23224Cu: goto label_23224c;
            case 0x232284u: goto label_232284;
            case 0x2322ACu: goto label_2322ac;
            case 0x2322D8u: goto label_2322d8;
            case 0x2322F8u: goto label_2322f8;
            case 0x23231Cu: goto label_23231c;
            case 0x232328u: goto label_232328;
            case 0x23232Cu: goto label_23232c;
            case 0x232350u: goto label_232350;
            case 0x232398u: goto label_232398;
            case 0x2323C8u: goto label_2323c8;
            case 0x2323CCu: goto label_2323cc;
            case 0x2323F4u: goto label_2323f4;
            case 0x232404u: goto label_232404;
            case 0x232408u: goto label_232408;
            case 0x232438u: goto label_232438;
            case 0x232448u: goto label_232448;
            case 0x232450u: goto label_232450;
            case 0x23248Cu: goto label_23248c;
            case 0x2324D0u: goto label_2324d0;
            case 0x2324D4u: goto label_2324d4;
            case 0x232510u: goto label_232510;
            case 0x232538u: goto label_232538;
            case 0x23254Cu: goto label_23254c;
            case 0x232570u: goto label_232570;
            case 0x232574u: goto label_232574;
            case 0x232578u: goto label_232578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2325A4u;
}
