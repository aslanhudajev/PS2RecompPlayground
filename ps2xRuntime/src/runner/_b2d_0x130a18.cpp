#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _b2d
// Address: 0x130a18 - 0x130b94
void _b2d_0x130a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_b2d_0x130a18");
#endif

    ctx->pc = 0x130a18u;

    // 0x130a18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x130a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x130a1c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x130a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x130a20: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x130a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x130a24: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x130a24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x130a28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x130a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x130a2c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x130a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x130a30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x130a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a34: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x130a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x130a38: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x130a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x130a3c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x130a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x130a40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x130a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x130a44: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x130a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x130a48: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x130a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x130a4c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x130a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130a50: 0xc04c058  jal         func_130160
    ctx->pc = 0x130A50u;
    SET_GPR_U32(ctx, 31, 0x130A58u);
    ctx->pc = 0x130A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130A50u;
            // 0x130a54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130160u;
    if (runtime->hasFunction(0x130160u)) {
        auto targetFn = runtime->lookupFunction(0x130160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A58u; }
        if (ctx->pc != 0x130A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x130160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A58u; }
        if (ctx->pc != 0x130A58u) { return; }
    }
    ctx->pc = 0x130A58u;
    // 0x130a58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x130a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a5c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x130a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x130a60: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x130a60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x130a64: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x130a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x130a68: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x130A68u;
    {
        const bool branch_taken_0x130a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A68u;
            // 0x130a6c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a68) {
            ctx->pc = 0x130AD4u;
            goto label_130ad4;
        }
    }
    ctx->pc = 0x130A70u;
    // 0x130a70: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x130a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x130a74: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x130a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x130a78: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x130a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x130a7c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x130a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x130a80: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x130a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x130a84: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x130a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x130a88: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x130a88u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 3)));
    // 0x130a8c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x130a8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x130a90: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x130a90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x130a94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x130a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x130a98: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x130a98u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
    // 0x130a9c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x130A9Cu;
    {
        const bool branch_taken_0x130a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A9Cu;
            // 0x130aa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a9c) {
            ctx->pc = 0x130AA8u;
            goto label_130aa8;
        }
    }
    ctx->pc = 0x130AA4u;
    // 0x130aa4: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x130aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_130aa8:
    // 0x130aa8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x130aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x130aac: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x130aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x130ab0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x130ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x130ab4: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x130ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x130ab8: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x130ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x130abc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x130abcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x130ac0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x130ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130ac4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x130ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x130ac8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x130ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130acc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x130ACCu;
    {
        const bool branch_taken_0x130acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130ACCu;
            // 0x130ad0: 0x2248824  and         $s1, $s1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130acc) {
            ctx->pc = 0x130B4Cu;
            goto label_130b4c;
        }
    }
    ctx->pc = 0x130AD4u;
label_130ad4:
    // 0x130ad4: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x130ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x130ad8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130AD8u;
    {
        const bool branch_taken_0x130ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130AD8u;
            // 0x130adc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ad8) {
            ctx->pc = 0x130AE8u;
            goto label_130ae8;
        }
    }
    ctx->pc = 0x130AE0u;
    // 0x130ae0: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x130ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x130ae4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x130ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_130ae8:
    // 0x130ae8: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x130ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x130aec: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x130AECu;
    {
        const bool branch_taken_0x130aec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130AECu;
            // 0x130af0: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130aec) {
            ctx->pc = 0x130B58u;
            goto label_130b58;
        }
    }
    ctx->pc = 0x130AF4u;
    // 0x130af4: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x130af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x130af8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x130af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x130afc: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x130afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x130b00: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x130b00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x130b04: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x130b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x130b08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x130b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x130b0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x130b0cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x130b10: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x130b10u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 4)));
    // 0x130b14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x130b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130b18: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x130b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x130b1c: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x130b1cu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 3)));
    // 0x130b20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x130B20u;
    {
        const bool branch_taken_0x130b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B20u;
            // 0x130b24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b20) {
            ctx->pc = 0x130B2Cu;
            goto label_130b2c;
        }
    }
    ctx->pc = 0x130B28u;
    // 0x130b28: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x130b28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_130b2c:
    // 0x130b2c: 0x61023  negu        $v0, $a2
    ctx->pc = 0x130b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x130b30: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x130b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x130b34: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x130b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x130b38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x130b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130b3c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x130b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x130b40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x130b40u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x130b44: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x130b44u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 4)));
    // 0x130b48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x130b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_130b4c:
    // 0x130b4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x130b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x130b50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x130B50u;
    {
        const bool branch_taken_0x130b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B50u;
            // 0x130b54: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b50) {
            ctx->pc = 0x130B70u;
            goto label_130b70;
        }
    }
    ctx->pc = 0x130B58u;
label_130b58:
    // 0x130b58: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x130b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x130b5c: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x130b5cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 19), GPR_VEC(ctx, 3)));
    // 0x130b60: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x130b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x130b64: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x130b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x130b68: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x130b68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130b6c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x130b6cu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
label_130b70:
    // 0x130b70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x130b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b74: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x130b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130b78: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x130b78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x130b7c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x130b7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130b80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x130b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130b84: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x130b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130b88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x130b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x130B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B8Cu;
            // 0x130b90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130AA8u: goto label_130aa8;
            case 0x130AD4u: goto label_130ad4;
            case 0x130AE8u: goto label_130ae8;
            case 0x130B2Cu: goto label_130b2c;
            case 0x130B4Cu: goto label_130b4c;
            case 0x130B58u: goto label_130b58;
            case 0x130B70u: goto label_130b70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130B94u;
}
