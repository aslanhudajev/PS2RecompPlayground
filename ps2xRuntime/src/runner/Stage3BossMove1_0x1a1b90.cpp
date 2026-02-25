#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage3BossMove1
// Address: 0x1a1b90 - 0x1a1f84
void Stage3BossMove1_0x1a1b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage3BossMove1_0x1a1b90");
#endif

    ctx->pc = 0x1a1b90u;

    // 0x1a1b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1b94: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1a1b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1a1b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a1b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1ba0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a1ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ba8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1a1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1a1bac: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1A1BACu;
    SET_GPR_U32(ctx, 31, 0x1A1BB4u);
    ctx->pc = 0x1A1BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BACu;
            // 0x1a1bb0: 0xdc25a938  ld          $a1, -0x56C8($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BB4u; }
        if (ctx->pc != 0x1A1BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BB4u; }
        if (ctx->pc != 0x1A1BB4u) { return; }
    }
    ctx->pc = 0x1A1BB4u;
    // 0x1a1bb4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a1bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a1bb8: 0xac221ab0  sw          $v0, 0x1AB0($at)
    ctx->pc = 0x1a1bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6832), GPR_U32(ctx, 2));
    // 0x1a1bbc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a1bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a1bc0: 0x8c241ab0  lw          $a0, 0x1AB0($at)
    ctx->pc = 0x1a1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6832)));
    // 0x1a1bc4: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1A1BC4u;
    SET_GPR_U32(ctx, 31, 0x1A1BCCu);
    ctx->pc = 0x1A1BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BC4u;
            // 0x1a1bc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BCCu; }
        if (ctx->pc != 0x1A1BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BCCu; }
        if (ctx->pc != 0x1A1BCCu) { return; }
    }
    ctx->pc = 0x1A1BCCu;
    // 0x1a1bcc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a1bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a1bd0: 0xac221ab8  sw          $v0, 0x1AB8($at)
    ctx->pc = 0x1a1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6840), GPR_U32(ctx, 2));
    // 0x1a1bd4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1a1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a1bd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a1bdc: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A1BDCu;
    {
        const bool branch_taken_0x1a1bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BDCu;
            // 0x1a1be0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bdc) {
            ctx->pc = 0x1A1C18u;
            goto label_1a1c18;
        }
    }
    ctx->pc = 0x1A1BE4u;
    // 0x1a1be4: 0x1083006a  beq         $a0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x1A1BE4u;
    {
        const bool branch_taken_0x1a1be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1be4) {
            ctx->pc = 0x1A1D90u;
            goto label_1a1d90;
        }
    }
    ctx->pc = 0x1A1BECu;
    // 0x1a1bec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1BECu;
    {
        const bool branch_taken_0x1a1bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1bec) {
            ctx->pc = 0x1A1C00u;
            goto label_1a1c00;
        }
    }
    ctx->pc = 0x1A1BF4u;
    // 0x1a1bf4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1A1BF4u;
    {
        const bool branch_taken_0x1a1bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1bf4) {
            ctx->pc = 0x1A1D90u;
            goto label_1a1d90;
        }
    }
    ctx->pc = 0x1A1BFCu;
    // 0x1a1bfc: 0x0  nop
    ctx->pc = 0x1a1bfcu;
    // NOP
label_1a1c00:
    // 0x1a1c00: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1c04: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1A1C04u;
    {
        const bool branch_taken_0x1a1c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c04) {
            ctx->pc = 0x1A1D90u;
            goto label_1a1d90;
        }
    }
    ctx->pc = 0x1A1C0Cu;
    // 0x1a1c0c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1A1C0Cu;
    {
        const bool branch_taken_0x1a1c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C0Cu;
            // 0x1a1c10: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c0c) {
            ctx->pc = 0x1A1D90u;
            goto label_1a1d90;
        }
    }
    ctx->pc = 0x1A1C14u;
    // 0x1a1c14: 0x0  nop
    ctx->pc = 0x1a1c14u;
    // NOP
label_1a1c18:
    // 0x1a1c18: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1c1c: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1A1C1Cu;
    {
        const bool branch_taken_0x1a1c1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1c1c) {
            ctx->pc = 0x1A1D90u;
            goto label_1a1d90;
        }
    }
    ctx->pc = 0x1A1C24u;
    // 0x1a1c24: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1a1c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1a1c28: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a1c2c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a1c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1c30: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a1c30u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a1c34: 0x0  nop
    ctx->pc = 0x1a1c34u;
    // NOP
    // 0x1a1c38: 0x0  nop
    ctx->pc = 0x1a1c38u;
    // NOP
    // 0x1a1c3c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a1c3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a1c40: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1A1C40u;
    {
        const bool branch_taken_0x1a1c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c40) {
            ctx->pc = 0x1A1D90u;
            goto label_1a1d90;
        }
    }
    ctx->pc = 0x1A1C48u;
    // 0x1a1c48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1c4c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1a1c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a1c50: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a1c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a1c54: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a1c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a1c58: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A1C58u;
    SET_GPR_U32(ctx, 31, 0x1A1C60u);
    ctx->pc = 0x1A1C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C58u;
            // 0x1a1c5c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C60u; }
        if (ctx->pc != 0x1A1C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C60u; }
        if (ctx->pc != 0x1A1C60u) { return; }
    }
    ctx->pc = 0x1A1C60u;
    // 0x1a1c60: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1c64: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1a1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a1c68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1c6c: 0x2463ff8d  addiu       $v1, $v1, -0x73
    ctx->pc = 0x1a1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967181));
    // 0x1a1c70: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x1a1c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x1a1c74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a1c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1c7c: 0x0  nop
    ctx->pc = 0x1a1c7cu;
    // NOP
    // 0x1a1c80: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a1c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1a1c84: 0xc05d080  jal         func_174200
    ctx->pc = 0x1A1C84u;
    SET_GPR_U32(ctx, 31, 0x1A1C8Cu);
    ctx->pc = 0x1A1C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1C84u;
            // 0x1a1c88: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C8Cu; }
        if (ctx->pc != 0x1A1C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C8Cu; }
        if (ctx->pc != 0x1A1C8Cu) { return; }
    }
    ctx->pc = 0x1A1C8Cu;
    // 0x1a1c8c: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A1C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A1C94u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C94u; }
        if (ctx->pc != 0x1A1C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C94u; }
        if (ctx->pc != 0x1A1C94u) { return; }
    }
    ctx->pc = 0x1A1C94u;
    // 0x1a1c94: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a1c94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a1c98: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A1C98u;
    {
        const bool branch_taken_0x1a1c98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c98) {
            ctx->pc = 0x1A1D18u;
            goto label_1a1d18;
        }
    }
    ctx->pc = 0x1A1CA0u;
    // 0x1a1ca0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a1ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1ca4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a1ca8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1cac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1cb0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1a1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1a1cb4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1a1cb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1a1cb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1cbc: 0x2484ff8d  addiu       $a0, $a0, -0x73
    ctx->pc = 0x1a1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967181));
    // 0x1a1cc0: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A1CC0u;
    SET_GPR_U32(ctx, 31, 0x1A1CC8u);
    ctx->pc = 0x1A1CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CC0u;
            // 0x1a1cc4: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CC8u; }
        if (ctx->pc != 0x1A1CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CC8u; }
        if (ctx->pc != 0x1A1CC8u) { return; }
    }
    ctx->pc = 0x1A1CC8u;
    // 0x1a1cc8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1ccc: 0x3c024013  lui         $v0, 0x4013
    ctx->pc = 0x1a1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16403 << 16));
    // 0x1a1cd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1cd4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a1cd4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a1cd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1cdc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1ce0: 0x2484ff8d  addiu       $a0, $a0, -0x73
    ctx->pc = 0x1a1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967181));
    // 0x1a1ce4: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A1CE4u;
    SET_GPR_U32(ctx, 31, 0x1A1CECu);
    ctx->pc = 0x1A1CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1CE4u;
            // 0x1a1ce8: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CECu; }
        if (ctx->pc != 0x1A1CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1CECu; }
        if (ctx->pc != 0x1A1CECu) { return; }
    }
    ctx->pc = 0x1A1CECu;
    // 0x1a1cec: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a1cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1cf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1cf4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1cf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1cfc: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1a1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1a1d00: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1a1d00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1a1d04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1d08: 0x2484ff8d  addiu       $a0, $a0, -0x73
    ctx->pc = 0x1a1d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967181));
    // 0x1a1d0c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A1D0Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D14u);
    ctx->pc = 0x1A1D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D0Cu;
            // 0x1a1d10: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D14u; }
        if (ctx->pc != 0x1A1D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D14u; }
        if (ctx->pc != 0x1A1D14u) { return; }
    }
    ctx->pc = 0x1A1D14u;
    // 0x1a1d14: 0x0  nop
    ctx->pc = 0x1a1d14u;
    // NOP
label_1a1d18:
    // 0x1a1d18: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A1D18u;
    SET_GPR_U32(ctx, 31, 0x1A1D20u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D20u; }
        if (ctx->pc != 0x1A1D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D20u; }
        if (ctx->pc != 0x1A1D20u) { return; }
    }
    ctx->pc = 0x1A1D20u;
    // 0x1a1d20: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1D20u;
    {
        const bool branch_taken_0x1a1d20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1d20) {
            ctx->pc = 0x1A1D68u;
            goto label_1a1d68;
        }
    }
    ctx->pc = 0x1A1D28u;
    // 0x1a1d28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a1d2c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1d30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1d34: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a1d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1d38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1d3c: 0x2464ff86  addiu       $a0, $v1, -0x7A
    ctx->pc = 0x1a1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967174));
    // 0x1a1d40: 0xc065254  jal         func_194950
    ctx->pc = 0x1A1D40u;
    SET_GPR_U32(ctx, 31, 0x1A1D48u);
    ctx->pc = 0x1A1D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D40u;
            // 0x1a1d44: 0x2445000f  addiu       $a1, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D48u; }
        if (ctx->pc != 0x1A1D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D48u; }
        if (ctx->pc != 0x1A1D48u) { return; }
    }
    ctx->pc = 0x1A1D48u;
    // 0x1a1d48: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1a1d4c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1d50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1d54: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a1d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1d58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1d5c: 0x2464ff9a  addiu       $a0, $v1, -0x66
    ctx->pc = 0x1a1d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967194));
    // 0x1a1d60: 0xc065254  jal         func_194950
    ctx->pc = 0x1A1D60u;
    SET_GPR_U32(ctx, 31, 0x1A1D68u);
    ctx->pc = 0x1A1D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D60u;
            // 0x1a1d64: 0x2445000f  addiu       $a1, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D68u; }
        if (ctx->pc != 0x1A1D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D68u; }
        if (ctx->pc != 0x1A1D68u) { return; }
    }
    ctx->pc = 0x1A1D68u;
label_1a1d68:
    // 0x1a1d68: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a1d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1d6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1d70: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1a1d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1a1d74: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a1d74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a1d78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1d7c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1d80: 0x2484ff8d  addiu       $a0, $a0, -0x73
    ctx->pc = 0x1a1d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967181));
    // 0x1a1d84: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A1D84u;
    SET_GPR_U32(ctx, 31, 0x1A1D8Cu);
    ctx->pc = 0x1A1D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D84u;
            // 0x1a1d88: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D8Cu; }
        if (ctx->pc != 0x1A1D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D8Cu; }
        if (ctx->pc != 0x1A1D8Cu) { return; }
    }
    ctx->pc = 0x1A1D8Cu;
    // 0x1a1d8c: 0x0  nop
    ctx->pc = 0x1a1d8cu;
    // NOP
label_1a1d90:
    // 0x1a1d90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1d94: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1a1d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a1d98: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a1d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a1d9c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a1d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a1da0: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A1DA0u;
    SET_GPR_U32(ctx, 31, 0x1A1DA8u);
    ctx->pc = 0x1A1DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DA0u;
            // 0x1a1da4: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DA8u; }
        if (ctx->pc != 0x1A1DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DA8u; }
        if (ctx->pc != 0x1A1DA8u) { return; }
    }
    ctx->pc = 0x1A1DA8u;
    // 0x1a1da8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1dac: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a1dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1a1db0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1db4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1a1db8: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1A1DB8u;
    SET_GPR_U32(ctx, 31, 0x1A1DC0u);
    ctx->pc = 0x1A1DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DB8u;
            // 0x1a1dbc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DC0u; }
        if (ctx->pc != 0x1A1DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DC0u; }
        if (ctx->pc != 0x1A1DC0u) { return; }
    }
    ctx->pc = 0x1A1DC0u;
    // 0x1a1dc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a1dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1dc4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1a1dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a1dc8: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1A1DC8u;
    SET_GPR_U32(ctx, 31, 0x1A1DD0u);
    ctx->pc = 0x1A1DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DC8u;
            // 0x1a1dcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DD0u; }
        if (ctx->pc != 0x1A1DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DD0u; }
        if (ctx->pc != 0x1A1DD0u) { return; }
    }
    ctx->pc = 0x1A1DD0u;
    // 0x1a1dd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a1dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1dd4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1a1dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a1dd8: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1A1DD8u;
    SET_GPR_U32(ctx, 31, 0x1A1DE0u);
    ctx->pc = 0x1A1DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DD8u;
            // 0x1a1ddc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DE0u; }
        if (ctx->pc != 0x1A1DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DE0u; }
        if (ctx->pc != 0x1A1DE0u) { return; }
    }
    ctx->pc = 0x1A1DE0u;
    // 0x1a1de0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1de4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1a1de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a1de8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1A1DE8u;
    SET_GPR_U32(ctx, 31, 0x1A1DF0u);
    ctx->pc = 0x1A1DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DE8u;
            // 0x1a1dec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DF0u; }
        if (ctx->pc != 0x1A1DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DF0u; }
        if (ctx->pc != 0x1A1DF0u) { return; }
    }
    ctx->pc = 0x1A1DF0u;
    // 0x1a1df0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a1df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1df4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a1df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1df8: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1A1DF8u;
    SET_GPR_U32(ctx, 31, 0x1A1E00u);
    ctx->pc = 0x1A1DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1DF8u;
            // 0x1a1dfc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E00u; }
        if (ctx->pc != 0x1A1E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E00u; }
        if (ctx->pc != 0x1A1E00u) { return; }
    }
    ctx->pc = 0x1A1E00u;
    // 0x1a1e00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1e04: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a1e08: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a1e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1e0c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A1E0Cu;
    {
        const bool branch_taken_0x1a1e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e0c) {
            ctx->pc = 0x1A1E60u;
            goto label_1a1e60;
        }
    }
    ctx->pc = 0x1A1E14u;
    // 0x1a1e14: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1a1e18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1E18u;
    {
        const bool branch_taken_0x1a1e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e18) {
            ctx->pc = 0x1A1E30u;
            goto label_1a1e30;
        }
    }
    ctx->pc = 0x1A1E20u;
    // 0x1a1e20: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1A1E20u;
    SET_GPR_U32(ctx, 31, 0x1A1E28u);
    ctx->pc = 0x1A1E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E20u;
            // 0x1a1e24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E28u; }
        if (ctx->pc != 0x1A1E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E28u; }
        if (ctx->pc != 0x1A1E28u) { return; }
    }
    ctx->pc = 0x1A1E28u;
    // 0x1a1e28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1E28u;
    {
        const bool branch_taken_0x1a1e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e28) {
            ctx->pc = 0x1A1E38u;
            goto label_1a1e38;
        }
    }
    ctx->pc = 0x1A1E30u;
label_1a1e30:
    // 0x1a1e30: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1A1E30u;
    SET_GPR_U32(ctx, 31, 0x1A1E38u);
    ctx->pc = 0x1A1E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E30u;
            // 0x1a1e34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E38u; }
        if (ctx->pc != 0x1A1E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E38u; }
        if (ctx->pc != 0x1A1E38u) { return; }
    }
    ctx->pc = 0x1A1E38u;
label_1a1e38:
    // 0x1a1e38: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1a1e3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1E3Cu;
    {
        const bool branch_taken_0x1a1e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e3c) {
            ctx->pc = 0x1A1E50u;
            goto label_1a1e50;
        }
    }
    ctx->pc = 0x1A1E44u;
    // 0x1a1e44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A1E44u;
    {
        const bool branch_taken_0x1a1e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E44u;
            // 0x1a1e48: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e44) {
            ctx->pc = 0x1A1E70u;
            goto label_1a1e70;
        }
    }
    ctx->pc = 0x1A1E4Cu;
    // 0x1a1e4c: 0x0  nop
    ctx->pc = 0x1a1e4cu;
    // NOP
label_1a1e50:
    // 0x1a1e50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1e54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1E54u;
    {
        const bool branch_taken_0x1a1e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E54u;
            // 0x1a1e58: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e54) {
            ctx->pc = 0x1A1E70u;
            goto label_1a1e70;
        }
    }
    ctx->pc = 0x1A1E5Cu;
    // 0x1a1e5c: 0x0  nop
    ctx->pc = 0x1a1e5cu;
    // NOP
label_1a1e60:
    // 0x1a1e60: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1A1E60u;
    SET_GPR_U32(ctx, 31, 0x1A1E68u);
    ctx->pc = 0x1A1E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1E60u;
            // 0x1a1e64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E68u; }
        if (ctx->pc != 0x1A1E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E68u; }
        if (ctx->pc != 0x1A1E68u) { return; }
    }
    ctx->pc = 0x1A1E68u;
    // 0x1a1e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1e6c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a1e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a1e70:
    // 0x1a1e70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1e74: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a1e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a1e78: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1e7c: 0x1c40001a  bgtz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A1E7Cu;
    {
        const bool branch_taken_0x1a1e7c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a1e7c) {
            ctx->pc = 0x1A1EE8u;
            goto label_1a1ee8;
        }
    }
    ctx->pc = 0x1A1E84u;
    // 0x1a1e84: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1e88: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a1e8c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a1e8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a1e90: 0x0  nop
    ctx->pc = 0x1a1e90u;
    // NOP
    // 0x1a1e94: 0x0  nop
    ctx->pc = 0x1a1e94u;
    // NOP
    // 0x1a1e98: 0x1010  mfhi        $v0
    ctx->pc = 0x1a1e98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a1e9c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A1E9Cu;
    {
        const bool branch_taken_0x1a1e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e9c) {
            ctx->pc = 0x1A1EC8u;
            goto label_1a1ec8;
        }
    }
    ctx->pc = 0x1A1EA4u;
    // 0x1a1ea4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a1ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1ea8: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1a1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1a1eac: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a1eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a1eb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1eb4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1eb8: 0x2484ff8e  addiu       $a0, $a0, -0x72
    ctx->pc = 0x1a1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967182));
    // 0x1a1ebc: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1A1EBCu;
    SET_GPR_U32(ctx, 31, 0x1A1EC4u);
    ctx->pc = 0x1A1EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1EBCu;
            // 0x1a1ec0: 0x2465ffd8  addiu       $a1, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EC4u; }
        if (ctx->pc != 0x1A1EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EC4u; }
        if (ctx->pc != 0x1A1EC4u) { return; }
    }
    ctx->pc = 0x1A1EC4u;
    // 0x1a1ec4: 0x0  nop
    ctx->pc = 0x1a1ec4u;
    // NOP
label_1a1ec8:
    // 0x1a1ec8: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a1ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a1ecc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1ed0: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1a1ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1a1ed4: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1a1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a1ed8: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1A1ED8u;
    SET_GPR_U32(ctx, 31, 0x1A1EE0u);
    ctx->pc = 0x1A1EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1ED8u;
            // 0x1a1edc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EE0u; }
        if (ctx->pc != 0x1A1EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EE0u; }
        if (ctx->pc != 0x1A1EE0u) { return; }
    }
    ctx->pc = 0x1A1EE0u;
    // 0x1a1ee0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1A1EE0u;
    {
        const bool branch_taken_0x1a1ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ee0) {
            ctx->pc = 0x1A1F68u;
            goto label_1a1f68;
        }
    }
    ctx->pc = 0x1A1EE8u;
label_1a1ee8:
    // 0x1a1ee8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1eec: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a1eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a1ef0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a1ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a1ef4: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1a1ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a1ef8: 0x24c60790  addiu       $a2, $a2, 0x790
    ctx->pc = 0x1a1ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
    // 0x1a1efc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a1efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f00: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a1f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f04: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x1a1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x1a1f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1f0c: 0x0  nop
    ctx->pc = 0x1a1f0cu;
    // NOP
    // 0x1a1f10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1f14: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1a1f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1a1f18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1f1c: 0x2442ff74  addiu       $v0, $v0, -0x8C
    ctx->pc = 0x1a1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967156));
    // 0x1a1f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1f24: 0x0  nop
    ctx->pc = 0x1a1f24u;
    // NOP
    // 0x1a1f28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1f2c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1a1f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1a1f30: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1f34: 0x2442ffa6  addiu       $v0, $v0, -0x5A
    ctx->pc = 0x1a1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967206));
    // 0x1a1f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1f3c: 0x0  nop
    ctx->pc = 0x1a1f3cu;
    // NOP
    // 0x1a1f40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1f44: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1a1f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1a1f48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1f4c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1a1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1a1f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1f54: 0x0  nop
    ctx->pc = 0x1a1f54u;
    // NOP
    // 0x1a1f58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1f5c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1A1F5Cu;
    SET_GPR_U32(ctx, 31, 0x1A1F64u);
    ctx->pc = 0x1A1F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F5Cu;
            // 0x1a1f60: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F64u; }
        if (ctx->pc != 0x1A1F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F64u; }
        if (ctx->pc != 0x1A1F64u) { return; }
    }
    ctx->pc = 0x1A1F64u;
    // 0x1a1f64: 0x0  nop
    ctx->pc = 0x1a1f64u;
    // NOP
label_1a1f68:
    // 0x1a1f68: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a1f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1f6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1f70: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1a1f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1a1f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F7Cu;
            // 0x1a1f80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1C00u: goto label_1a1c00;
            case 0x1A1C18u: goto label_1a1c18;
            case 0x1A1D18u: goto label_1a1d18;
            case 0x1A1D68u: goto label_1a1d68;
            case 0x1A1D90u: goto label_1a1d90;
            case 0x1A1E30u: goto label_1a1e30;
            case 0x1A1E38u: goto label_1a1e38;
            case 0x1A1E50u: goto label_1a1e50;
            case 0x1A1E60u: goto label_1a1e60;
            case 0x1A1E70u: goto label_1a1e70;
            case 0x1A1EC8u: goto label_1a1ec8;
            case 0x1A1EE8u: goto label_1a1ee8;
            case 0x1A1F68u: goto label_1a1f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1F84u;
}
