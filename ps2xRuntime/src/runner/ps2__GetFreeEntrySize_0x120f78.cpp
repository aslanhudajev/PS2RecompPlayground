#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _GetFreeEntrySize
// Address: 0x120f78 - 0x1210a0
void ps2__GetFreeEntrySize_0x120f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__GetFreeEntrySize_0x120f78");
#endif

    ctx->pc = 0x120f78u;

    // 0x120f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x120f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x120f7c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x120f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x120f80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x120f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x120f84: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x120f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120f8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x120f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x120f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120f94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x120f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x120f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x120f9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x120f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fa0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x120fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x120fa4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x120fa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fa8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x120fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x120fac: 0x24554a80  addiu       $s5, $v0, 0x4A80
    ctx->pc = 0x120facu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19072));
    // 0x120fb0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x120fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x120fb4: 0x3c167fff  lui         $s6, 0x7FFF
    ctx->pc = 0x120fb4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32767 << 16));
    // 0x120fb8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x120fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x120fbc: 0x3c178101  lui         $s7, 0x8101
    ctx->pc = 0x120fbcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)33025 << 16));
    // 0x120fc0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x120fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x120fc4: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x120fc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120fc8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x120fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x120fcc: 0x36f7006f  ori         $s7, $s7, 0x6F
    ctx->pc = 0x120fccu;
    SET_GPR_VEC(ctx, 23, PS2_POR(GPR_VEC(ctx, 23), _mm_cvtsi32_si128((int)111u)));
    // 0x120fd0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x120fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x120fd4: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x120fd4u;
    SET_GPR_VEC(ctx, 22, PS2_POR(GPR_VEC(ctx, 22), _mm_cvtsi32_si128((int)65535u)));
label_120fd8:
    // 0x120fd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x120fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fdc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x120fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fe0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x120fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fe4: 0xc048e38  jal         func_1238E0
    ctx->pc = 0x120FE4u;
    SET_GPR_U32(ctx, 31, 0x120FECu);
    ctx->pc = 0x120FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120FE4u;
            // 0x120fe8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238E0u;
    if (runtime->hasFunction(0x1238E0u)) {
        auto targetFn = runtime->lookupFunction(0x1238E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120FECu; }
        if (ctx->pc != 0x120FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcpReadUserClust_0x1238e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120FECu; }
        if (ctx->pc != 0x120FECu) { return; }
    }
    ctx->pc = 0x120FECu;
    // 0x120fec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120FECu;
    {
        const bool branch_taken_0x120fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120FECu;
            // 0x120ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fec) {
            ctx->pc = 0x121000u;
            goto label_121000;
        }
    }
    ctx->pc = 0x120FF4u;
    // 0x120ff4: 0xae770000  sw          $s7, 0x0($s3)
    ctx->pc = 0x120ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x120ff8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x120FF8u;
    {
        const bool branch_taken_0x120ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120FF8u;
            // 0x120ffc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ff8) {
            ctx->pc = 0x121070u;
            goto label_121070;
        }
    }
    ctx->pc = 0x121000u;
label_121000:
    // 0x121000: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x121000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121004: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x121004u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_121008:
    // 0x121008: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x121008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x12100c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x12100cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x121010: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x121010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x121014: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x121014u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x121018: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x121018u;
    {
        const bool branch_taken_0x121018 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12101Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121018u;
            // 0x12101c: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121018) {
            ctx->pc = 0x121030u;
            goto label_121030;
        }
    }
    ctx->pc = 0x121020u;
    // 0x121020: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x121020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x121024: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x121024u;
    {
        const bool branch_taken_0x121024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121024u;
            // 0x121028: 0x245100b  movn        $v0, $s2, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121024) {
            ctx->pc = 0x121070u;
            goto label_121070;
        }
    }
    ctx->pc = 0x12102Cu;
    // 0x12102c: 0x0  nop
    ctx->pc = 0x12102cu;
    // NOP
label_121030:
    // 0x121030: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x121030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x121034: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x121034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x121038: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x121038u;
    {
        const bool branch_taken_0x121038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121038) {
            ctx->pc = 0x12103Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121038u;
            // 0x12103c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121008u;
            goto label_121008;
        }
    }
    ctx->pc = 0x121040u;
    // 0x121040: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x121040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121044: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121048: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x121048u;
    SET_GPR_U32(ctx, 31, 0x121050u);
    ctx->pc = 0x12104Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121048u;
            // 0x12104c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (runtime->hasFunction(0x11F1F0u)) {
        auto targetFn = runtime->lookupFunction(0x11F1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121050u; }
        if (ctx->pc != 0x121050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatGetNextClust_0x11f1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121050u; }
        if (ctx->pc != 0x121050u) { return; }
    }
    ctx->pc = 0x121050u;
    // 0x121050: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x121050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x121054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121058: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x121058u;
    {
        const bool branch_taken_0x121058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121058u;
            // 0x12105c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121058) {
            ctx->pc = 0x121070u;
            goto label_121070;
        }
    }
    ctx->pc = 0x121060u;
    // 0x121060: 0x121e0003  beq         $s0, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x121060u;
    {
        const bool branch_taken_0x121060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        ctx->pc = 0x121064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121060u;
            // 0x121064: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121060) {
            ctx->pc = 0x121070u;
            goto label_121070;
        }
    }
    ctx->pc = 0x121068u;
    // 0x121068: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x121068u;
    {
        const bool branch_taken_0x121068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121068u;
            // 0x12106c: 0x2168024  and         $s0, $s0, $s6 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121068) {
            ctx->pc = 0x120FD8u;
            goto label_120fd8;
        }
    }
    ctx->pc = 0x121070u;
label_121070:
    // 0x121070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121078: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12107c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12107cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121080: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x121080u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121084: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x121084u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x121088: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x121088u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12108c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x12108cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x121090: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x121090u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x121094: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x121094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x121098: 0x3e00008  jr          $ra
    ctx->pc = 0x121098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12109Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121098u;
            // 0x12109c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120FD8u: goto label_120fd8;
            case 0x121000u: goto label_121000;
            case 0x121008u: goto label_121008;
            case 0x121030u: goto label_121030;
            case 0x121070u: goto label_121070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1210A0u;
}
