#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflateSync
// Address: 0x1ef934 - 0x1efa64
void inflateSync_0x1ef934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflateSync_0x1ef934");
#endif

    ctx->pc = 0x1ef934u;

    // 0x1ef934: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef93c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ef93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ef940: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ef940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ef944: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ef944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef948: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF948u;
    {
        const bool branch_taken_0x1ef948 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF948u;
            // 0x1ef94c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef948) {
            ctx->pc = 0x1EF95Cu;
            goto label_1ef95c;
        }
    }
    ctx->pc = 0x1EF950u;
    // 0x1ef950: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1ef950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ef954: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF954u;
    {
        const bool branch_taken_0x1ef954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef954) {
            ctx->pc = 0x1EF958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF954u;
            // 0x1ef958: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF964u;
            goto label_1ef964;
        }
    }
    ctx->pc = 0x1EF95Cu;
label_1ef95c:
    // 0x1ef95c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1EF95Cu;
    {
        const bool branch_taken_0x1ef95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF95Cu;
            // 0x1ef960: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef95c) {
            ctx->pc = 0x1EFA4Cu;
            goto label_1efa4c;
        }
    }
    ctx->pc = 0x1EF964u;
label_1ef964:
    // 0x1ef964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ef964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef968: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1ef968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ef96c: 0x50440005  beql        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF96Cu;
    {
        const bool branch_taken_0x1ef96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ef96c) {
            ctx->pc = 0x1EF970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF96Cu;
            // 0x1ef970: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF984u;
            goto label_1ef984;
        }
    }
    ctx->pc = 0x1EF974u;
    // 0x1ef974: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ef974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1ef978: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1ef978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ef97c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ef97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1ef980: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1ef980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ef984:
    // 0x1ef984: 0x10c00031  beqz        $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x1EF984u;
    {
        const bool branch_taken_0x1ef984 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF984u;
            // 0x1ef988: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef984) {
            ctx->pc = 0x1EFA4Cu;
            goto label_1efa4c;
        }
    }
    ctx->pc = 0x1EF98Cu;
    // 0x1ef98c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1ef98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ef990: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1ef990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ef994: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EF994u;
    {
        const bool branch_taken_0x1ef994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF994u;
            // 0x1ef998: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef994) {
            ctx->pc = 0x1EF9F4u;
            goto label_1ef9f4;
        }
    }
    ctx->pc = 0x1EF99Cu;
    // 0x1ef99c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x1ef99cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ef9a0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF9A0u;
    {
        const bool branch_taken_0x1ef9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9a0) {
            ctx->pc = 0x1EF9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9A0u;
            // 0x1ef9a4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF9F8u;
            goto label_1ef9f8;
        }
    }
    ctx->pc = 0x1EF9A8u;
    // 0x1ef9a8: 0x27888028  addiu       $t0, $gp, -0x7FD8
    ctx->pc = 0x1ef9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934568));
    // 0x1ef9ac: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ef9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef9b0: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x1ef9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1ef9b4:
    // 0x1ef9b4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1ef9b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ef9b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1ef9b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef9bc: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF9BCu;
    {
        const bool branch_taken_0x1ef9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef9bc) {
            ctx->pc = 0x1EF9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9BCu;
            // 0x1ef9c0: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF9CCu;
            goto label_1ef9cc;
        }
    }
    ctx->pc = 0x1EF9C4u;
    // 0x1ef9c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF9C4u;
    {
        const bool branch_taken_0x1ef9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9C4u;
            // 0x1ef9c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9c4) {
            ctx->pc = 0x1EF9DCu;
            goto label_1ef9dc;
        }
    }
    ctx->pc = 0x1EF9CCu;
label_1ef9cc:
    // 0x1ef9cc: 0xe41823  subu        $v1, $a3, $a0
    ctx->pc = 0x1ef9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1ef9d0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1ef9d0u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)0u)));
    // 0x1ef9d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ef9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9d8: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x1ef9d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1ef9dc:
    // 0x1ef9dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ef9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ef9e0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF9E0u;
    {
        const bool branch_taken_0x1ef9e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9E0u;
            // 0x1ef9e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9e0) {
            ctx->pc = 0x1EF9F4u;
            goto label_1ef9f4;
        }
    }
    ctx->pc = 0x1EF9E8u;
    // 0x1ef9e8: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x1ef9e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ef9ec: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1EF9ECu;
    {
        const bool branch_taken_0x1ef9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9ec) {
            ctx->pc = 0x1EF9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9ECu;
            // 0x1ef9f0: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF9B4u;
            goto label_1ef9b4;
        }
    }
    ctx->pc = 0x1EF9F4u;
label_1ef9f4:
    // 0x1ef9f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ef9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ef9f8:
    // 0x1ef9f8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1ef9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ef9fc: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x1ef9fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1efa00: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1efa00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1efa04: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x1efa04u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x1efa08: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1efa08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x1efa0c: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x1efa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x1efa10: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1efa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1efa14: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1efa14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1efa18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1efa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efa1c: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFA1Cu;
    {
        const bool branch_taken_0x1efa1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EFA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA1Cu;
            // 0x1efa20: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa1c) {
            ctx->pc = 0x1EFA4Cu;
            goto label_1efa4c;
        }
    }
    ctx->pc = 0x1EFA24u;
    // 0x1efa24: 0xde500008  ld          $s0, 0x8($s2)
    ctx->pc = 0x1efa24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1efa28: 0xde510018  ld          $s1, 0x18($s2)
    ctx->pc = 0x1efa28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1efa2c: 0xc07bc36  jal         func_1EF0D8
    ctx->pc = 0x1EFA2Cu;
    SET_GPR_U32(ctx, 31, 0x1EFA34u);
    ctx->pc = 0x1EFA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA2Cu;
            // 0x1efa30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF0D8u;
    if (runtime->hasFunction(0x1EF0D8u)) {
        auto targetFn = runtime->lookupFunction(0x1EF0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA34u; }
        if (ctx->pc != 0x1EFA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflateReset_0x1ef0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA34u; }
        if (ctx->pc != 0x1EFA34u) { return; }
    }
    ctx->pc = 0x1EFA34u;
    // 0x1efa34: 0xfe500008  sd          $s0, 0x8($s2)
    ctx->pc = 0x1efa34u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 16));
    // 0x1efa38: 0xfe510018  sd          $s1, 0x18($s2)
    ctx->pc = 0x1efa38u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 17));
    // 0x1efa3c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1efa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1efa40: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1efa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1efa44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1efa44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1efa48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1efa48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efa4c:
    // 0x1efa4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1efa4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efa50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1efa50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1efa54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1efa54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efa58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1efa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1efa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA5Cu;
            // 0x1efa60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF95Cu: goto label_1ef95c;
            case 0x1EF964u: goto label_1ef964;
            case 0x1EF984u: goto label_1ef984;
            case 0x1EF9B4u: goto label_1ef9b4;
            case 0x1EF9CCu: goto label_1ef9cc;
            case 0x1EF9DCu: goto label_1ef9dc;
            case 0x1EF9F4u: goto label_1ef9f4;
            case 0x1EF9F8u: goto label_1ef9f8;
            case 0x1EFA4Cu: goto label_1efa4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EFA64u;
}
