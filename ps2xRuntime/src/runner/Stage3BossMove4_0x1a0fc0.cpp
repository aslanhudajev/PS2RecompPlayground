#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage3BossMove4
// Address: 0x1a0fc0 - 0x1a13ac
void Stage3BossMove4_0x1a0fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage3BossMove4_0x1a0fc0");
#endif

    ctx->pc = 0x1a0fc0u;

    // 0x1a0fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0fc4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1a0fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1a0fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0fd0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fd8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1a0fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1a0fdc: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1A0FDCu;
    SET_GPR_U32(ctx, 31, 0x1A0FE4u);
    ctx->pc = 0x1A0FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FDCu;
            // 0x1a0fe0: 0xdc25a950  ld          $a1, -0x56B0($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FE4u; }
        if (ctx->pc != 0x1A0FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FE4u; }
        if (ctx->pc != 0x1A0FE4u) { return; }
    }
    ctx->pc = 0x1A0FE4u;
    // 0x1a0fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fe8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1A0FE8u;
    SET_GPR_U32(ctx, 31, 0x1A0FF0u);
    ctx->pc = 0x1A0FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FE8u;
            // 0x1a0fec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FF0u; }
        if (ctx->pc != 0x1A0FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FF0u; }
        if (ctx->pc != 0x1A0FF0u) { return; }
    }
    ctx->pc = 0x1A0FF0u;
    // 0x1a0ff0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1a0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a0ff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0ff8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0FF8u;
    {
        const bool branch_taken_0x1a0ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FF8u;
            // 0x1a0ffc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ff8) {
            ctx->pc = 0x1A1030u;
            goto label_1a1030;
        }
    }
    ctx->pc = 0x1A1000u;
    // 0x1a1000: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1A1000u;
    {
        const bool branch_taken_0x1a1000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1000) {
            ctx->pc = 0x1A11B8u;
            goto label_1a11b8;
        }
    }
    ctx->pc = 0x1A1008u;
    // 0x1a1008: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1008u;
    {
        const bool branch_taken_0x1a1008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1008) {
            ctx->pc = 0x1A1018u;
            goto label_1a1018;
        }
    }
    ctx->pc = 0x1A1010u;
    // 0x1a1010: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1A1010u;
    {
        const bool branch_taken_0x1a1010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1010) {
            ctx->pc = 0x1A11B8u;
            goto label_1a11b8;
        }
    }
    ctx->pc = 0x1A1018u;
label_1a1018:
    // 0x1a1018: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a1018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a101c: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1A101Cu;
    {
        const bool branch_taken_0x1a101c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A101Cu;
            // 0x1a1020: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a101c) {
            ctx->pc = 0x1A11B8u;
            goto label_1a11b8;
        }
    }
    ctx->pc = 0x1A1024u;
    // 0x1a1024: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1A1024u;
    {
        const bool branch_taken_0x1a1024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1024u;
            // 0x1a1028: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1024) {
            ctx->pc = 0x1A11B8u;
            goto label_1a11b8;
        }
    }
    ctx->pc = 0x1A102Cu;
    // 0x1a102c: 0x0  nop
    ctx->pc = 0x1a102cu;
    // NOP
label_1a1030:
    // 0x1a1030: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1034: 0x18400060  blez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1A1034u;
    {
        const bool branch_taken_0x1a1034 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1034) {
            ctx->pc = 0x1A11B8u;
            goto label_1a11b8;
        }
    }
    ctx->pc = 0x1A103Cu;
    // 0x1a103c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1a103cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1a1040: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1a1040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a1044: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1048: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a1048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a104c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a1050: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A1050u;
    SET_GPR_U32(ctx, 31, 0x1A1058u);
    ctx->pc = 0x1A1054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1050u;
            // 0x1a1054: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1058u; }
        if (ctx->pc != 0x1A1058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1058u; }
        if (ctx->pc != 0x1A1058u) { return; }
    }
    ctx->pc = 0x1A1058u;
    // 0x1a1058: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a105c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a105cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a1060: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1a1060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1a1064: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1068: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1a1068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1a106c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1070: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a1070u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a1074: 0x0  nop
    ctx->pc = 0x1a1074u;
    // NOP
    // 0x1a1078: 0x0  nop
    ctx->pc = 0x1a1078u;
    // NOP
    // 0x1a107c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a107cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a1080: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1A1080u;
    {
        const bool branch_taken_0x1a1080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1080) {
            ctx->pc = 0x1A11B8u;
            goto label_1a11b8;
        }
    }
    ctx->pc = 0x1A1088u;
    // 0x1a1088: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a108c: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1a108cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a1090: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1094: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1a1094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1a1098: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1a1098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a109c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a109cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a10a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a10a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a10a4: 0x0  nop
    ctx->pc = 0x1a10a4u;
    // NOP
    // 0x1a10a8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a10a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1a10ac: 0xc05d080  jal         func_174200
    ctx->pc = 0x1A10ACu;
    SET_GPR_U32(ctx, 31, 0x1A10B4u);
    ctx->pc = 0x1A10B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A10ACu;
            // 0x1a10b0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10B4u; }
        if (ctx->pc != 0x1A10B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10B4u; }
        if (ctx->pc != 0x1A10B4u) { return; }
    }
    ctx->pc = 0x1A10B4u;
    // 0x1a10b4: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A10B4u;
    SET_GPR_U32(ctx, 31, 0x1A10BCu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10BCu; }
        if (ctx->pc != 0x1A10BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10BCu; }
        if (ctx->pc != 0x1A10BCu) { return; }
    }
    ctx->pc = 0x1A10BCu;
    // 0x1a10bc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a10bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a10c0: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A10C0u;
    {
        const bool branch_taken_0x1a10c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a10c0) {
            ctx->pc = 0x1A1140u;
            goto label_1a1140;
        }
    }
    ctx->pc = 0x1A10C8u;
    // 0x1a10c8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a10c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a10cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a10d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a10d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a10d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a10d8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1a10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1a10dc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1a10dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1a10e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a10e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a10e4: 0x248400b4  addiu       $a0, $a0, 0xB4
    ctx->pc = 0x1a10e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
    // 0x1a10e8: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A10E8u;
    SET_GPR_U32(ctx, 31, 0x1A10F0u);
    ctx->pc = 0x1A10ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A10E8u;
            // 0x1a10ec: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10F0u; }
        if (ctx->pc != 0x1A10F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10F0u; }
        if (ctx->pc != 0x1A10F0u) { return; }
    }
    ctx->pc = 0x1A10F0u;
    // 0x1a10f0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a10f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a10f4: 0x3c024013  lui         $v0, 0x4013
    ctx->pc = 0x1a10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16403 << 16));
    // 0x1a10f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a10fc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a10fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a1100: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1104: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1108: 0x248400b4  addiu       $a0, $a0, 0xB4
    ctx->pc = 0x1a1108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
    // 0x1a110c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A110Cu;
    SET_GPR_U32(ctx, 31, 0x1A1114u);
    ctx->pc = 0x1A1110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A110Cu;
            // 0x1a1110: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1114u; }
        if (ctx->pc != 0x1A1114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1114u; }
        if (ctx->pc != 0x1A1114u) { return; }
    }
    ctx->pc = 0x1A1114u;
    // 0x1a1114: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a1114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1118: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a1118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a111c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a111cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1120: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1124: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1a1124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1a1128: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1a1128u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1a112c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a112cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1130: 0x248400b4  addiu       $a0, $a0, 0xB4
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
    // 0x1a1134: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A1134u;
    SET_GPR_U32(ctx, 31, 0x1A113Cu);
    ctx->pc = 0x1A1138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1134u;
            // 0x1a1138: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A113Cu; }
        if (ctx->pc != 0x1A113Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A113Cu; }
        if (ctx->pc != 0x1A113Cu) { return; }
    }
    ctx->pc = 0x1A113Cu;
    // 0x1a113c: 0x0  nop
    ctx->pc = 0x1a113cu;
    // NOP
label_1a1140:
    // 0x1a1140: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A1140u;
    SET_GPR_U32(ctx, 31, 0x1A1148u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1148u; }
        if (ctx->pc != 0x1A1148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1148u; }
        if (ctx->pc != 0x1A1148u) { return; }
    }
    ctx->pc = 0x1A1148u;
    // 0x1a1148: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1148u;
    {
        const bool branch_taken_0x1a1148 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1148) {
            ctx->pc = 0x1A1190u;
            goto label_1a1190;
        }
    }
    ctx->pc = 0x1A1150u;
    // 0x1a1150: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a1150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a1154: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1158: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a115c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a115cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1160: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1164: 0x246400aa  addiu       $a0, $v1, 0xAA
    ctx->pc = 0x1a1164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 170));
    // 0x1a1168: 0xc065254  jal         func_194950
    ctx->pc = 0x1A1168u;
    SET_GPR_U32(ctx, 31, 0x1A1170u);
    ctx->pc = 0x1A116Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1168u;
            // 0x1a116c: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1170u; }
        if (ctx->pc != 0x1A1170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1170u; }
        if (ctx->pc != 0x1A1170u) { return; }
    }
    ctx->pc = 0x1A1170u;
    // 0x1a1170: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a1170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1a1174: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1178: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a117c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a117cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1180: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1184: 0x246400c1  addiu       $a0, $v1, 0xC1
    ctx->pc = 0x1a1184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 193));
    // 0x1a1188: 0xc065254  jal         func_194950
    ctx->pc = 0x1A1188u;
    SET_GPR_U32(ctx, 31, 0x1A1190u);
    ctx->pc = 0x1A118Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1188u;
            // 0x1a118c: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1190u; }
        if (ctx->pc != 0x1A1190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1190u; }
        if (ctx->pc != 0x1A1190u) { return; }
    }
    ctx->pc = 0x1A1190u;
label_1a1190:
    // 0x1a1190: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a1190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1194: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1198: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1a1198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1a119c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a119cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a11a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a11a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a11a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a11a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a11a8: 0x248400b4  addiu       $a0, $a0, 0xB4
    ctx->pc = 0x1a11a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
    // 0x1a11ac: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A11ACu;
    SET_GPR_U32(ctx, 31, 0x1A11B4u);
    ctx->pc = 0x1A11B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11ACu;
            // 0x1a11b0: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11B4u; }
        if (ctx->pc != 0x1A11B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11B4u; }
        if (ctx->pc != 0x1A11B4u) { return; }
    }
    ctx->pc = 0x1A11B4u;
    // 0x1a11b4: 0x0  nop
    ctx->pc = 0x1a11b4u;
    // NOP
label_1a11b8:
    // 0x1a11b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a11bc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1a11bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a11c0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a11c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a11c4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a11c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a11c8: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A11C8u;
    SET_GPR_U32(ctx, 31, 0x1A11D0u);
    ctx->pc = 0x1A11CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11C8u;
            // 0x1a11cc: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11D0u; }
        if (ctx->pc != 0x1A11D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11D0u; }
        if (ctx->pc != 0x1A11D0u) { return; }
    }
    ctx->pc = 0x1A11D0u;
    // 0x1a11d0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a11d4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a11d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1a11d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a11dc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a11dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1a11e0: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1A11E0u;
    SET_GPR_U32(ctx, 31, 0x1A11E8u);
    ctx->pc = 0x1A11E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11E0u;
            // 0x1a11e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11E8u; }
        if (ctx->pc != 0x1A11E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11E8u; }
        if (ctx->pc != 0x1A11E8u) { return; }
    }
    ctx->pc = 0x1A11E8u;
    // 0x1a11e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a11e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a11ec: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1a11ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a11f0: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1A11F0u;
    SET_GPR_U32(ctx, 31, 0x1A11F8u);
    ctx->pc = 0x1A11F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11F0u;
            // 0x1a11f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11F8u; }
        if (ctx->pc != 0x1A11F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11F8u; }
        if (ctx->pc != 0x1A11F8u) { return; }
    }
    ctx->pc = 0x1A11F8u;
    // 0x1a11f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a11f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a11fc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1a11fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a1200: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1A1200u;
    SET_GPR_U32(ctx, 31, 0x1A1208u);
    ctx->pc = 0x1A1204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1200u;
            // 0x1a1204: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1208u; }
        if (ctx->pc != 0x1A1208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1208u; }
        if (ctx->pc != 0x1A1208u) { return; }
    }
    ctx->pc = 0x1A1208u;
    // 0x1a1208: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a1208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a120c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1a120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a1210: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1A1210u;
    SET_GPR_U32(ctx, 31, 0x1A1218u);
    ctx->pc = 0x1A1214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1210u;
            // 0x1a1214: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1218u; }
        if (ctx->pc != 0x1A1218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1218u; }
        if (ctx->pc != 0x1A1218u) { return; }
    }
    ctx->pc = 0x1A1218u;
    // 0x1a1218: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a1218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a121c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a121cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1220: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1A1220u;
    SET_GPR_U32(ctx, 31, 0x1A1228u);
    ctx->pc = 0x1A1224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1220u;
            // 0x1a1224: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1228u; }
        if (ctx->pc != 0x1A1228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1228u; }
        if (ctx->pc != 0x1A1228u) { return; }
    }
    ctx->pc = 0x1A1228u;
    // 0x1a1228: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a1228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a122c: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A122Cu;
    {
        const bool branch_taken_0x1a122c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a122c) {
            ctx->pc = 0x1A1298u;
            goto label_1a1298;
        }
    }
    ctx->pc = 0x1A1234u;
    // 0x1a1234: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a1234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1238: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a1238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a123c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a123cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a1240: 0x0  nop
    ctx->pc = 0x1a1240u;
    // NOP
    // 0x1a1244: 0x0  nop
    ctx->pc = 0x1a1244u;
    // NOP
    // 0x1a1248: 0x1010  mfhi        $v0
    ctx->pc = 0x1a1248u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a124c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A124Cu;
    {
        const bool branch_taken_0x1a124c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a124c) {
            ctx->pc = 0x1A1278u;
            goto label_1a1278;
        }
    }
    ctx->pc = 0x1A1254u;
    // 0x1a1254: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a1254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1258: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1a1258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1a125c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a1260: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1264: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1268: 0x248400b4  addiu       $a0, $a0, 0xB4
    ctx->pc = 0x1a1268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
    // 0x1a126c: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1A126Cu;
    SET_GPR_U32(ctx, 31, 0x1A1274u);
    ctx->pc = 0x1A1270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A126Cu;
            // 0x1a1270: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1274u; }
        if (ctx->pc != 0x1A1274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1274u; }
        if (ctx->pc != 0x1A1274u) { return; }
    }
    ctx->pc = 0x1A1274u;
    // 0x1a1274: 0x0  nop
    ctx->pc = 0x1a1274u;
    // NOP
label_1a1278:
    // 0x1a1278: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a1278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a127c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1280: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1a1280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1a1284: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1a1284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a1288: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1A1288u;
    SET_GPR_U32(ctx, 31, 0x1A1290u);
    ctx->pc = 0x1A128Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1288u;
            // 0x1a128c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1290u; }
        if (ctx->pc != 0x1A1290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1290u; }
        if (ctx->pc != 0x1A1290u) { return; }
    }
    ctx->pc = 0x1A1290u;
    // 0x1a1290: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1A1290u;
    {
        const bool branch_taken_0x1a1290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1290u;
            // 0x1a1294: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1290) {
            ctx->pc = 0x1A1390u;
            goto label_1a1390;
        }
    }
    ctx->pc = 0x1A1298u;
label_1a1298:
    // 0x1a1298: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a1298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a129c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a129cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a12a0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A12A0u;
    {
        const bool branch_taken_0x1a12a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12a0) {
            ctx->pc = 0x1A12F8u;
            goto label_1a12f8;
        }
    }
    ctx->pc = 0x1A12A8u;
    // 0x1a12a8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a12a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1a12ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A12ACu;
    {
        const bool branch_taken_0x1a12ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12ac) {
            ctx->pc = 0x1A12C8u;
            goto label_1a12c8;
        }
    }
    ctx->pc = 0x1A12B4u;
    // 0x1a12b4: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1A12B4u;
    SET_GPR_U32(ctx, 31, 0x1A12BCu);
    ctx->pc = 0x1A12B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12B4u;
            // 0x1a12b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12BCu; }
        if (ctx->pc != 0x1A12BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12BCu; }
        if (ctx->pc != 0x1A12BCu) { return; }
    }
    ctx->pc = 0x1A12BCu;
    // 0x1a12bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A12BCu;
    {
        const bool branch_taken_0x1a12bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12bc) {
            ctx->pc = 0x1A12D0u;
            goto label_1a12d0;
        }
    }
    ctx->pc = 0x1A12C4u;
    // 0x1a12c4: 0x0  nop
    ctx->pc = 0x1a12c4u;
    // NOP
label_1a12c8:
    // 0x1a12c8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1A12C8u;
    SET_GPR_U32(ctx, 31, 0x1A12D0u);
    ctx->pc = 0x1A12CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12C8u;
            // 0x1a12cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12D0u; }
        if (ctx->pc != 0x1A12D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12D0u; }
        if (ctx->pc != 0x1A12D0u) { return; }
    }
    ctx->pc = 0x1A12D0u;
label_1a12d0:
    // 0x1a12d0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1a12d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A12D4u;
    {
        const bool branch_taken_0x1a12d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12d4) {
            ctx->pc = 0x1A12E8u;
            goto label_1a12e8;
        }
    }
    ctx->pc = 0x1A12DCu;
    // 0x1a12dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A12DCu;
    {
        const bool branch_taken_0x1a12dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12DCu;
            // 0x1a12e0: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12dc) {
            ctx->pc = 0x1A1308u;
            goto label_1a1308;
        }
    }
    ctx->pc = 0x1A12E4u;
    // 0x1a12e4: 0x0  nop
    ctx->pc = 0x1a12e4u;
    // NOP
label_1a12e8:
    // 0x1a12e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a12ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A12ECu;
    {
        const bool branch_taken_0x1a12ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12ECu;
            // 0x1a12f0: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12ec) {
            ctx->pc = 0x1A1308u;
            goto label_1a1308;
        }
    }
    ctx->pc = 0x1A12F4u;
    // 0x1a12f4: 0x0  nop
    ctx->pc = 0x1a12f4u;
    // NOP
label_1a12f8:
    // 0x1a12f8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1A12F8u;
    SET_GPR_U32(ctx, 31, 0x1A1300u);
    ctx->pc = 0x1A12FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12F8u;
            // 0x1a12fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1300u; }
        if (ctx->pc != 0x1A1300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1300u; }
        if (ctx->pc != 0x1A1300u) { return; }
    }
    ctx->pc = 0x1A1300u;
    // 0x1a1300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1304: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a1304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a1308:
    // 0x1a1308: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a130c: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a130cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a1310: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a1310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a1314: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a1318: 0x24c60790  addiu       $a2, $a2, 0x790
    ctx->pc = 0x1a1318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
    // 0x1a131c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a131cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1320: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a1320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1324: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a1324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a1328: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a1328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a132c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1a132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1a1330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1334: 0x0  nop
    ctx->pc = 0x1a1334u;
    // NOP
    // 0x1a1338: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a133c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1a133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1a1340: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1344: 0x2442ff92  addiu       $v0, $v0, -0x6E
    ctx->pc = 0x1a1344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967186));
    // 0x1a1348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a134c: 0x0  nop
    ctx->pc = 0x1a134cu;
    // NOP
    // 0x1a1350: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1354: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1a1354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1a1358: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a1358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a135c: 0x244200be  addiu       $v0, $v0, 0xBE
    ctx->pc = 0x1a135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 190));
    // 0x1a1360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1364: 0x0  nop
    ctx->pc = 0x1a1364u;
    // NOP
    // 0x1a1368: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a136c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1a136cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1a1370: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1374: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1a1374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1a1378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a137c: 0x0  nop
    ctx->pc = 0x1a137cu;
    // NOP
    // 0x1a1380: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1384: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1A1384u;
    SET_GPR_U32(ctx, 31, 0x1A138Cu);
    ctx->pc = 0x1A1388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1384u;
            // 0x1a1388: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A138Cu; }
        if (ctx->pc != 0x1A138Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A138Cu; }
        if (ctx->pc != 0x1A138Cu) { return; }
    }
    ctx->pc = 0x1A138Cu;
    // 0x1a138c: 0x0  nop
    ctx->pc = 0x1a138cu;
    // NOP
label_1a1390:
    // 0x1a1390: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a1390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1394: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1398: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1a1398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1a139c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a139cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a13a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a13a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a13a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A13A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A13A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13A4u;
            // 0x1a13a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1018u: goto label_1a1018;
            case 0x1A1030u: goto label_1a1030;
            case 0x1A1140u: goto label_1a1140;
            case 0x1A1190u: goto label_1a1190;
            case 0x1A11B8u: goto label_1a11b8;
            case 0x1A1278u: goto label_1a1278;
            case 0x1A1298u: goto label_1a1298;
            case 0x1A12C8u: goto label_1a12c8;
            case 0x1A12D0u: goto label_1a12d0;
            case 0x1A12E8u: goto label_1a12e8;
            case 0x1A12F8u: goto label_1a12f8;
            case 0x1A1308u: goto label_1a1308;
            case 0x1A1390u: goto label_1a1390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A13ACu;
}
