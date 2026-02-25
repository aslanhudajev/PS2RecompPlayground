#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_codes
// Address: 0x1f111c - 0x1f18b4
void inflate_codes_0x1f111c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_codes_0x1f111c");
#endif

    ctx->pc = 0x1f111cu;

    // 0x1f111c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f111cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f1120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1124: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f1128: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f1128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f112c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f112cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f1130: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f1130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f1134: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f1134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f1138: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f1138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f113c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f1140: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f1140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f1144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1148: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f1148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f114c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1f114cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f1150: 0x8e770000  lw          $s7, 0x0($s3)
    ctx->pc = 0x1f1150u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f1154: 0x8e760004  lw          $s6, 0x4($s3)
    ctx->pc = 0x1f1154u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1f1158: 0xde340020  ld          $s4, 0x20($s1)
    ctx->pc = 0x1f1158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1f115c: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x1f115cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1f1160: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f1160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f1164: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1f1164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f1168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1168u;
    {
        const bool branch_taken_0x1f1168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1168u;
            // 0x1f116c: 0x8e32001c  lw          $s2, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1168) {
            ctx->pc = 0x1F117Cu;
            goto label_1f117c;
        }
    }
    ctx->pc = 0x1F1170u;
    // 0x1f1170: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x1f1170u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f1174: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1174u;
    {
        const bool branch_taken_0x1f1174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1174u;
            // 0x1f1178: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1174) {
            ctx->pc = 0x1F1184u;
            goto label_1f1184;
        }
    }
    ctx->pc = 0x1F117Cu;
label_1f117c:
    // 0x1f117c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1f117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f1180: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x1f1180u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f1184:
    // 0x1f1184: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f1184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f1188: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1f1188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f118c: 0x504001b1  beql        $v0, $zero, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x1F118Cu;
    {
        const bool branch_taken_0x1f118c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f118c) {
            ctx->pc = 0x1F1190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F118Cu;
            // 0x1f1190: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1854u;
            goto label_1f1854;
        }
    }
    ctx->pc = 0x1F1194u;
    // 0x1f1194: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f1194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f1198: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1f1198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1f119c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1f119cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1f11a0: 0x8c223580  lw          $v0, 0x3580($at)
    ctx->pc = 0x1f11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13696)));
    // 0x1f11a4: 0x400008  jr          $v0
    ctx->pc = 0x1F11A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F11ACu: goto label_1f11ac;
            case 0x1F1274u: goto label_1f1274;
            case 0x1F1358u: goto label_1f1358;
            case 0x1F13DCu: goto label_1f13dc;
            case 0x1F14ACu: goto label_1f14ac;
            case 0x1F1560u: goto label_1f1560;
            case 0x1F16B0u: goto label_1f16b0;
            case 0x1F1794u: goto label_1f1794;
            case 0x1F17D4u: goto label_1f17d4;
            case 0x1F1814u: goto label_1f1814;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F11ACu;
label_1f11ac:
    // 0x1f11ac: 0x2ce20102  sltiu       $v0, $a3, 0x102
    ctx->pc = 0x1f11acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
    // 0x1f11b0: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F11B0u;
    {
        const bool branch_taken_0x1f11b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f11b0) {
            ctx->pc = 0x1F11B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F11B0u;
            // 0x1f11b4: 0x92020010  lbu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1260u;
            goto label_1f1260;
        }
    }
    ctx->pc = 0x1F11B8u;
    // 0x1f11b8: 0x2ec2000a  sltiu       $v0, $s6, 0xA
    ctx->pc = 0x1f11b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f11bc: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F11BCu;
    {
        const bool branch_taken_0x1f11bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f11bc) {
            ctx->pc = 0x1F11C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F11BCu;
            // 0x1f11c0: 0x92020010  lbu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1260u;
            goto label_1f1260;
        }
    }
    ctx->pc = 0x1F11C4u;
    // 0x1f11c4: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x1f11c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
    // 0x1f11c8: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x1f11c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
    // 0x1f11cc: 0xae760004  sw          $s6, 0x4($s3)
    ctx->pc = 0x1f11ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 22));
    // 0x1f11d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f11d4: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x1f11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f11d8: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x1f11d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1f11dc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f11dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1f11e0: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1f11e0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1f11e4: 0xae770000  sw          $s7, 0x0($s3)
    ctx->pc = 0x1f11e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x1f11e8: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1f11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x1f11ec: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f11ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f11f0: 0x92050011  lbu         $a1, 0x11($s0)
    ctx->pc = 0x1f11f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x1f11f4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1f11f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f11f8: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x1f11f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f11fc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f11fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1200: 0xc07c69c  jal         func_1F1A70
    ctx->pc = 0x1F1200u;
    SET_GPR_U32(ctx, 31, 0x1F1208u);
    ctx->pc = 0x1F1204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1200u;
            // 0x1f1204: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1A70u;
    if (runtime->hasFunction(0x1F1A70u)) {
        auto targetFn = runtime->lookupFunction(0x1F1A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1208u; }
        if (ctx->pc != 0x1F1208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_fast_0x1f1a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1208u; }
        if (ctx->pc != 0x1F1208u) { return; }
    }
    ctx->pc = 0x1F1208u;
    // 0x1f1208: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f1208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f120c: 0x8e770000  lw          $s7, 0x0($s3)
    ctx->pc = 0x1f120cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f1210: 0x8e760004  lw          $s6, 0x4($s3)
    ctx->pc = 0x1f1210u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1f1214: 0xde340020  ld          $s4, 0x20($s1)
    ctx->pc = 0x1f1214u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1f1218: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x1f1218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1f121c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f1220: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1f1220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f1224: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1224u;
    {
        const bool branch_taken_0x1f1224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1224u;
            // 0x1f1228: 0x8e32001c  lw          $s2, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1224) {
            ctx->pc = 0x1F1238u;
            goto label_1f1238;
        }
    }
    ctx->pc = 0x1F122Cu;
    // 0x1f122c: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1f122cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f1230: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1230u;
    {
        const bool branch_taken_0x1f1230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1230u;
            // 0x1f1234: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1230) {
            ctx->pc = 0x1F1240u;
            goto label_1f1240;
        }
    }
    ctx->pc = 0x1F1238u;
label_1f1238:
    // 0x1f1238: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1f1238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f123c: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x1f123cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f1240:
    // 0x1f1240: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1240u;
    {
        const bool branch_taken_0x1f1240 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1240) {
            ctx->pc = 0x1F1244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1240u;
            // 0x1f1244: 0x92020010  lbu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1260u;
            goto label_1f1260;
        }
    }
    ctx->pc = 0x1F1248u;
    // 0x1f1248: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f1248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f124c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1f124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f1250: 0x38c30001  xori        $v1, $a2, 0x1
    ctx->pc = 0x1f1250u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)1u)));
    // 0x1f1254: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1f1254u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1f1258: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x1F1258u;
    {
        const bool branch_taken_0x1f1258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1258u;
            // 0x1f125c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1258) {
            ctx->pc = 0x1F1184u;
            goto label_1f1184;
        }
    }
    ctx->pc = 0x1F1260u;
label_1f1260:
    // 0x1f1260: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1f1260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1f1264: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1f1264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f1268: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f1268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f126c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1270: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f1270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f1274:
    // 0x1f1274: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1f1274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f1278: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x1f1278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f127c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F127Cu;
    {
        const bool branch_taken_0x1f127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f127c) {
            ctx->pc = 0x1F12B0u;
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1284u;
label_1f1284:
    // 0x1f1284: 0x52c00092  beql        $s6, $zero, . + 4 + (0x92 << 2)
    ctx->pc = 0x1F1284u;
    {
        const bool branch_taken_0x1f1284 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1284) {
            ctx->pc = 0x1F1288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1284u;
            // 0x1f1288: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F14D0u;
            goto label_1f14d0;
        }
    }
    ctx->pc = 0x1F128Cu;
    // 0x1f128c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f128cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1290: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1f1294: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x1f1294u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1f1298: 0x2421014  dsllv       $v0, $v0, $s2
    ctx->pc = 0x1f1298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x1f129c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1f129cu;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
    // 0x1f12a0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1f12a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1f12a4: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x1f12a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f12a8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1F12A8u;
    {
        const bool branch_taken_0x1f12a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F12ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F12A8u;
            // 0x1f12ac: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12a8) {
            ctx->pc = 0x1F1284u;
            goto label_1f1284;
        }
    }
    ctx->pc = 0x1F12B0u;
label_1f12b0:
    // 0x1f12b0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1f12b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1f12b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f12b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f12b8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1f12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f12bc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1f12bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1f12c0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1f12c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1f12c4: 0x8c22be50  lw          $v0, -0x41B0($at)
    ctx->pc = 0x1f12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950480)));
    // 0x1f12c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f12c8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f12cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f12d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f12d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f12d8: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1f12d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1f12dc: 0x54a016  dsrlv       $s4, $s4, $v0
    ctx->pc = 0x1f12dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x1f12e0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1f12e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f12e4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F12E4u;
    {
        const bool branch_taken_0x1f12e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F12E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F12E4u;
            // 0x1f12e8: 0x2429023  subu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12e4) {
            ctx->pc = 0x1F1300u;
            goto label_1f1300;
        }
    }
    ctx->pc = 0x1F12ECu;
    // 0x1f12ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f12ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f12f0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f12f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f12f8: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x1F12F8u;
    {
        const bool branch_taken_0x1f12f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F12F8u;
            // 0x1f12fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12f8) {
            ctx->pc = 0x1F1184u;
            goto label_1f1184;
        }
    }
    ctx->pc = 0x1F1300u;
label_1f1300:
    // 0x1f1300: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1f1300u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16u)));
    // 0x1f1304: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1304u;
    {
        const bool branch_taken_0x1f1304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1304u;
            // 0x1f1308: 0x30820040  andi        $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1304) {
            ctx->pc = 0x1F1328u;
            goto label_1f1328;
        }
    }
    ctx->pc = 0x1F130Cu;
    // 0x1f130c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1f130cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)15u)));
    // 0x1f1310: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f1310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f1314: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f1314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f1318: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f1318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1f131c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1320: 0x1000ff98  b           . + 4 + (-0x68 << 2)
    ctx->pc = 0x1F1320u;
    {
        const bool branch_taken_0x1f1320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1320u;
            // 0x1f1324: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1320) {
            ctx->pc = 0x1F1184u;
            goto label_1f1184;
        }
    }
    ctx->pc = 0x1F1328u;
label_1f1328:
    // 0x1f1328: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1F1328u;
    {
        const bool branch_taken_0x1f1328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F132Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1328u;
            // 0x1f132c: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)32u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1328) {
            ctx->pc = 0x1F1480u;
            goto label_1f1480;
        }
    }
    ctx->pc = 0x1F1330u;
    // 0x1f1330: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1330u;
    {
        const bool branch_taken_0x1f1330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1330u;
            // 0x1f1334: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1330) {
            ctx->pc = 0x1F1340u;
            goto label_1f1340;
        }
    }
    ctx->pc = 0x1F1338u;
    // 0x1f1338: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x1F1338u;
    {
        const bool branch_taken_0x1f1338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1338u;
            // 0x1f133c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1338) {
            ctx->pc = 0x1F1184u;
            goto label_1f1184;
        }
    }
    ctx->pc = 0x1F1340u;
label_1f1340:
    // 0x1f1340: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f1340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f1344: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f1344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f1348: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f134c: 0x24423540  addiu       $v0, $v0, 0x3540
    ctx->pc = 0x1f134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13632));
    // 0x1f1350: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x1F1350u;
    {
        const bool branch_taken_0x1f1350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1350u;
            // 0x1f1354: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1350) {
            ctx->pc = 0x1F1814u;
            goto label_1f1814;
        }
    }
    ctx->pc = 0x1F1358u;
label_1f1358:
    // 0x1f1358: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1f1358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f135c: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x1f135cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f1360: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F1360u;
    {
        const bool branch_taken_0x1f1360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1360) {
            ctx->pc = 0x1F1394u;
            goto label_1f1394;
        }
    }
    ctx->pc = 0x1F1368u;
label_1f1368:
    // 0x1f1368: 0x52c00059  beql        $s6, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x1F1368u;
    {
        const bool branch_taken_0x1f1368 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1368) {
            ctx->pc = 0x1F136Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1368u;
            // 0x1f136c: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F14D0u;
            goto label_1f14d0;
        }
    }
    ctx->pc = 0x1F1370u;
    // 0x1f1370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1374: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1f1374u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1f1378: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x1f1378u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1f137c: 0x2421014  dsllv       $v0, $v0, $s2
    ctx->pc = 0x1f137cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x1f1380: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1f1380u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
    // 0x1f1384: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1f1384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1f1388: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x1f1388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f138c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1F138Cu;
    {
        const bool branch_taken_0x1f138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F138Cu;
            // 0x1f1390: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f138c) {
            ctx->pc = 0x1F1368u;
            goto label_1f1368;
        }
    }
    ctx->pc = 0x1F1394u;
label_1f1394:
    // 0x1f1394: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1f1394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1f1398: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f1398u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f139c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f139cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f13a0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1f13a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1f13a4: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1f13a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1f13a8: 0x8c23be50  lw          $v1, -0x41B0($at)
    ctx->pc = 0x1f13a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950480)));
    // 0x1f13ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f13acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f13b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f13b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f13b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1f13bc: 0x94a016  dsrlv       $s4, $s4, $a0
    ctx->pc = 0x1f13bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x1f13c0: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x1f13c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1f13c4: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x1f13c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x1f13c8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1f13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1f13cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1f13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f13d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f13d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f13d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f13d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f13dc:
    // 0x1f13dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1f13dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f13e0: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x1f13e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f13e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F13E4u;
    {
        const bool branch_taken_0x1f13e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f13e4) {
            ctx->pc = 0x1F1418u;
            goto label_1f1418;
        }
    }
    ctx->pc = 0x1F13ECu;
label_1f13ec:
    // 0x1f13ec: 0x52c00038  beql        $s6, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x1F13ECu;
    {
        const bool branch_taken_0x1f13ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f13ec) {
            ctx->pc = 0x1F13F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F13ECu;
            // 0x1f13f0: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F14D0u;
            goto label_1f14d0;
        }
    }
    ctx->pc = 0x1F13F4u;
    // 0x1f13f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f13f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13f8: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1f13f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1f13fc: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x1f13fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1f1400: 0x2421014  dsllv       $v0, $v0, $s2
    ctx->pc = 0x1f1400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x1f1404: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1f1404u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
    // 0x1f1408: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1f1408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1f140c: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x1f140cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f1410: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1F1410u;
    {
        const bool branch_taken_0x1f1410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1410u;
            // 0x1f1414: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1410) {
            ctx->pc = 0x1F13ECu;
            goto label_1f13ec;
        }
    }
    ctx->pc = 0x1F1418u;
label_1f1418:
    // 0x1f1418: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1f1418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1f141c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f141cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f1420: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f1420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f1424: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1f1424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1f1428: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1f1428u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1f142c: 0x8c23be50  lw          $v1, -0x41B0($at)
    ctx->pc = 0x1f142cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950480)));
    // 0x1f1430: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f1430u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f1434: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f1434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f1438: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f1438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f143c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f1440: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1f1440u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1f1444: 0x54a016  dsrlv       $s4, $s4, $v0
    ctx->pc = 0x1f1444u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x1f1448: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x1f1448u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f144c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1f144cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1450: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1f1450u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16u)));
    // 0x1f1454: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1454u;
    {
        const bool branch_taken_0x1f1454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1454u;
            // 0x1f1458: 0x30820040  andi        $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1454) {
            ctx->pc = 0x1F1478u;
            goto label_1f1478;
        }
    }
    ctx->pc = 0x1F145Cu;
    // 0x1f145c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1f145cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)15u)));
    // 0x1f1460: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f1460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f1464: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f1464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f1468: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1f1468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1f146c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f146cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1470: 0x1000ff44  b           . + 4 + (-0xBC << 2)
    ctx->pc = 0x1F1470u;
    {
        const bool branch_taken_0x1f1470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1470u;
            // 0x1f1474: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1470) {
            ctx->pc = 0x1F1184u;
            goto label_1f1184;
        }
    }
    ctx->pc = 0x1F1478u;
label_1f1478:
    // 0x1f1478: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1478u;
    {
        const bool branch_taken_0x1f1478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F147Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1478u;
            // 0x1f147c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1478) {
            ctx->pc = 0x1F1498u;
            goto label_1f1498;
        }
    }
    ctx->pc = 0x1F1480u;
label_1f1480:
    // 0x1f1480: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1f1480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1f1484: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f1484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f1488: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f1488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f148c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f1490: 0x1000ff3c  b           . + 4 + (-0xC4 << 2)
    ctx->pc = 0x1F1490u;
    {
        const bool branch_taken_0x1f1490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1490u;
            // 0x1f1494: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1490) {
            ctx->pc = 0x1F1184u;
            goto label_1f1184;
        }
    }
    ctx->pc = 0x1F1498u;
label_1f1498:
    // 0x1f1498: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f1498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f149c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f149cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f14a0: 0x24423560  addiu       $v0, $v0, 0x3560
    ctx->pc = 0x1f14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13664));
    // 0x1f14a4: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1F14A4u;
    {
        const bool branch_taken_0x1f14a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F14A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14A4u;
            // 0x1f14a8: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14a4) {
            ctx->pc = 0x1F1814u;
            goto label_1f1814;
        }
    }
    ctx->pc = 0x1F14ACu;
label_1f14ac:
    // 0x1f14ac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1f14acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f14b0: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x1f14b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f14b4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F14B4u;
    {
        const bool branch_taken_0x1f14b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f14b4) {
            ctx->pc = 0x1F1528u;
            goto label_1f1528;
        }
    }
    ctx->pc = 0x1F14BCu;
label_1f14bc:
    // 0x1f14bc: 0x52c00004  beql        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F14BCu;
    {
        const bool branch_taken_0x1f14bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f14bc) {
            ctx->pc = 0x1F14C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14BCu;
            // 0x1f14c0: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F14D0u;
            goto label_1f14d0;
        }
    }
    ctx->pc = 0x1F14C4u;
    // 0x1f14c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F14C4u;
    {
        const bool branch_taken_0x1f14c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F14C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14C4u;
            // 0x1f14c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14c4) {
            ctx->pc = 0x1F1508u;
            goto label_1f1508;
        }
    }
    ctx->pc = 0x1F14CCu;
label_1f14cc:
    // 0x1f14cc: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x1f14ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_1f14d0:
    // 0x1f14d0: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x1f14d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
    // 0x1f14d4: 0xae760004  sw          $s6, 0x4($s3)
    ctx->pc = 0x1f14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 22));
    // 0x1f14d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f14dc: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x1f14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f14e0: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x1f14e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1f14e4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f14e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1f14e8: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1f14e8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1f14ec: 0xae770000  sw          $s7, 0x0($s3)
    ctx->pc = 0x1f14ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x1f14f0: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1f14f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x1f14f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f14f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14f8: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F14F8u;
    SET_GPR_U32(ctx, 31, 0x1F1500u);
    ctx->pc = 0x1F14FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F14F8u;
            // 0x1f14fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1500u; }
        if (ctx->pc != 0x1F1500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1500u; }
        if (ctx->pc != 0x1F1500u) { return; }
    }
    ctx->pc = 0x1F1500u;
    // 0x1f1500: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x1F1500u;
    {
        const bool branch_taken_0x1f1500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1500u;
            // 0x1f1504: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1500) {
            ctx->pc = 0x1F188Cu;
            goto label_1f188c;
        }
    }
    ctx->pc = 0x1F1508u;
label_1f1508:
    // 0x1f1508: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1f1508u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1f150c: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x1f150cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1f1510: 0x2421014  dsllv       $v0, $v0, $s2
    ctx->pc = 0x1f1510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x1f1514: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1f1514u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
    // 0x1f1518: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1f1518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1f151c: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x1f151cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f1520: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1F1520u;
    {
        const bool branch_taken_0x1f1520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1520u;
            // 0x1f1524: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1520) {
            ctx->pc = 0x1F14BCu;
            goto label_1f14bc;
        }
    }
    ctx->pc = 0x1F1528u;
label_1f1528:
    // 0x1f1528: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1f1528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1f152c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f152cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f1530: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1f1530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f1534: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1f1534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1f1538: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1f1538u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1f153c: 0x8c22be50  lw          $v0, -0x41B0($at)
    ctx->pc = 0x1f153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950480)));
    // 0x1f1540: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f1540u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f1544: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f1544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f1548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f1548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f154c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1f154cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1f1550: 0x94a016  dsrlv       $s4, $s4, $a0
    ctx->pc = 0x1f1550u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x1f1554: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x1f1554u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1f1558: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f1558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f155c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f155cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f1560:
    // 0x1f1560: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f1560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f1564: 0xa2a823  subu        $s5, $a1, $v0
    ctx->pc = 0x1f1564u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f1568: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1f1568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1f156c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f156cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1570: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1f1570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f1574: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F1574u;
    {
        const bool branch_taken_0x1f1574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1574) {
            ctx->pc = 0x1F1578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1574u;
            // 0x1f1578: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F15A4u;
            goto label_1f15a4;
        }
    }
    ctx->pc = 0x1F157Cu;
    // 0x1f157c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1f157cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f1580: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f1580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f1584:
    // 0x1f1584: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1f1584u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f1588: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1f1588u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1f158c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f158cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1590: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1f1590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f1594: 0x0  nop
    ctx->pc = 0x1f1594u;
    // NOP
    // 0x1f1598: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1598u;
    {
        const bool branch_taken_0x1f1598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F159Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1598u;
            // 0x1f159c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1598) {
            ctx->pc = 0x1F1584u;
            goto label_1f1584;
        }
    }
    ctx->pc = 0x1F15A0u;
    // 0x1f15a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f15a4:
    // 0x1f15a4: 0x5040fef7  beql        $v0, $zero, . + 4 + (-0x109 << 2)
    ctx->pc = 0x1F15A4u;
    {
        const bool branch_taken_0x1f15a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f15a4) {
            ctx->pc = 0x1F15A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15A4u;
            // 0x1f15a8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1184u;
            goto label_1f1184;
        }
    }
    ctx->pc = 0x1F15ACu;
label_1f15ac:
    // 0x1f15ac: 0x54e00032  bnel        $a3, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F15ACu;
    {
        const bool branch_taken_0x1f15ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f15ac) {
            ctx->pc = 0x1F15B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15ACu;
            // 0x1f15b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1678u;
            goto label_1f1678;
        }
    }
    ctx->pc = 0x1F15B4u;
    // 0x1f15b4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1f15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f15b8: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F15B8u;
    {
        const bool branch_taken_0x1f15b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f15b8) {
            ctx->pc = 0x1F15F0u;
            goto label_1f15f0;
        }
    }
    ctx->pc = 0x1F15C0u;
    // 0x1f15c0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f15c4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1f15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1f15c8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F15C8u;
    {
        const bool branch_taken_0x1f15c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f15c8) {
            ctx->pc = 0x1F15F0u;
            goto label_1f15f0;
        }
    }
    ctx->pc = 0x1F15D0u;
    // 0x1f15d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f15d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f15d4: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1f15d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f15d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F15D8u;
    {
        const bool branch_taken_0x1f15d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f15d8) {
            ctx->pc = 0x1F15DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15D8u;
            // 0x1f15dc: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F15ECu;
            goto label_1f15ec;
        }
    }
    ctx->pc = 0x1F15E0u;
    // 0x1f15e0: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1f15e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f15e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F15E4u;
    {
        const bool branch_taken_0x1f15e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F15E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15E4u;
            // 0x1f15e8: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15e4) {
            ctx->pc = 0x1F15F0u;
            goto label_1f15f0;
        }
    }
    ctx->pc = 0x1F15ECu;
label_1f15ec:
    // 0x1f15ec: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x1f15ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f15f0:
    // 0x1f15f0: 0x54e00021  bnel        $a3, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F15F0u;
    {
        const bool branch_taken_0x1f15f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f15f0) {
            ctx->pc = 0x1F15F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15F0u;
            // 0x1f15f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1678u;
            goto label_1f1678;
        }
    }
    ctx->pc = 0x1F15F8u;
    // 0x1f15f8: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1f15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x1f15fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f15fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1600: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F1600u;
    SET_GPR_U32(ctx, 31, 0x1F1608u);
    ctx->pc = 0x1F1604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1600u;
            // 0x1f1604: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1608u; }
        if (ctx->pc != 0x1F1608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1608u; }
        if (ctx->pc != 0x1F1608u) { return; }
    }
    ctx->pc = 0x1F1608u;
    // 0x1f1608: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f1608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f160c: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x1f160cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1f1610: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f1610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f1614: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1f1614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f1618: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1618u;
    {
        const bool branch_taken_0x1f1618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1618) {
            ctx->pc = 0x1F161Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1618u;
            // 0x1f161c: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F162Cu;
            goto label_1f162c;
        }
    }
    ctx->pc = 0x1F1620u;
    // 0x1f1620: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1f1620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f1624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1624u;
    {
        const bool branch_taken_0x1f1624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1624u;
            // 0x1f1628: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1624) {
            ctx->pc = 0x1F1630u;
            goto label_1f1630;
        }
    }
    ctx->pc = 0x1F162Cu;
label_1f162c:
    // 0x1f162c: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x1f162cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f1630:
    // 0x1f1630: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1f1630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f1634: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1634u;
    {
        const bool branch_taken_0x1f1634 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f1634) {
            ctx->pc = 0x1F166Cu;
            goto label_1f166c;
        }
    }
    ctx->pc = 0x1F163Cu;
    // 0x1f163c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f1640: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1f1640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1f1644: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1644u;
    {
        const bool branch_taken_0x1f1644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1644) {
            ctx->pc = 0x1F166Cu;
            goto label_1f166c;
        }
    }
    ctx->pc = 0x1F164Cu;
    // 0x1f164c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f164cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1650: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1f1650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f1654: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1654u;
    {
        const bool branch_taken_0x1f1654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1654) {
            ctx->pc = 0x1F1658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1654u;
            // 0x1f1658: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1668u;
            goto label_1f1668;
        }
    }
    ctx->pc = 0x1F165Cu;
    // 0x1f165c: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1f165cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f1660: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1660u;
    {
        const bool branch_taken_0x1f1660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1660u;
            // 0x1f1664: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1660) {
            ctx->pc = 0x1F166Cu;
            goto label_1f166c;
        }
    }
    ctx->pc = 0x1F1668u;
label_1f1668:
    // 0x1f1668: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x1f1668u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f166c:
    // 0x1f166c: 0x50e0ff98  beql        $a3, $zero, . + 4 + (-0x68 << 2)
    ctx->pc = 0x1F166Cu;
    {
        const bool branch_taken_0x1f166c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f166c) {
            ctx->pc = 0x1F1670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F166Cu;
            // 0x1f1670: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F14D0u;
            goto label_1f14d0;
        }
    }
    ctx->pc = 0x1F1674u;
    // 0x1f1674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1678:
    // 0x1f1678: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x1f1678u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f167c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1f167cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1680: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f1680u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1f1684: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f1684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f1688: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1f1688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f168c: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F168Cu;
    {
        const bool branch_taken_0x1f168c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F168Cu;
            // 0x1f1690: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f168c) {
            ctx->pc = 0x1F1698u;
            goto label_1f1698;
        }
    }
    ctx->pc = 0x1F1694u;
    // 0x1f1694: 0x8e35002c  lw          $s5, 0x2C($s1)
    ctx->pc = 0x1f1694u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1f1698:
    // 0x1f1698: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f169c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f16a0: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1F16A0u;
    {
        const bool branch_taken_0x1f16a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F16A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16A0u;
            // 0x1f16a4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16a0) {
            ctx->pc = 0x1F15ACu;
            goto label_1f15ac;
        }
    }
    ctx->pc = 0x1F16A8u;
    // 0x1f16a8: 0x1000feb6  b           . + 4 + (-0x14A << 2)
    ctx->pc = 0x1F16A8u;
    {
        const bool branch_taken_0x1f16a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16A8u;
            // 0x1f16ac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16a8) {
            ctx->pc = 0x1F1184u;
            goto label_1f1184;
        }
    }
    ctx->pc = 0x1F16B0u;
label_1f16b0:
    // 0x1f16b0: 0x54e00032  bnel        $a3, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F16B0u;
    {
        const bool branch_taken_0x1f16b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f16b0) {
            ctx->pc = 0x1F16B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16B0u;
            // 0x1f16b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F177Cu;
            goto label_1f177c;
        }
    }
    ctx->pc = 0x1F16B8u;
    // 0x1f16b8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1f16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f16bc: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F16BCu;
    {
        const bool branch_taken_0x1f16bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f16bc) {
            ctx->pc = 0x1F16F4u;
            goto label_1f16f4;
        }
    }
    ctx->pc = 0x1F16C4u;
    // 0x1f16c4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f16c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f16c8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1f16c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1f16cc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F16CCu;
    {
        const bool branch_taken_0x1f16cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f16cc) {
            ctx->pc = 0x1F16F4u;
            goto label_1f16f4;
        }
    }
    ctx->pc = 0x1F16D4u;
    // 0x1f16d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f16d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16d8: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1f16d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f16dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F16DCu;
    {
        const bool branch_taken_0x1f16dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f16dc) {
            ctx->pc = 0x1F16E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16DCu;
            // 0x1f16e0: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F16F0u;
            goto label_1f16f0;
        }
    }
    ctx->pc = 0x1F16E4u;
    // 0x1f16e4: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x1f16e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f16e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F16E8u;
    {
        const bool branch_taken_0x1f16e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16E8u;
            // 0x1f16ec: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16e8) {
            ctx->pc = 0x1F16F4u;
            goto label_1f16f4;
        }
    }
    ctx->pc = 0x1F16F0u;
label_1f16f0:
    // 0x1f16f0: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x1f16f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f16f4:
    // 0x1f16f4: 0x54e00021  bnel        $a3, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F16F4u;
    {
        const bool branch_taken_0x1f16f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f16f4) {
            ctx->pc = 0x1F16F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16F4u;
            // 0x1f16f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F177Cu;
            goto label_1f177c;
        }
    }
    ctx->pc = 0x1F16FCu;
    // 0x1f16fc: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1f16fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x1f1700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1704: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F1704u;
    SET_GPR_U32(ctx, 31, 0x1F170Cu);
    ctx->pc = 0x1F1708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1704u;
            // 0x1f1708: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F170Cu; }
        if (ctx->pc != 0x1F170Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F170Cu; }
        if (ctx->pc != 0x1F170Cu) { return; }
    }
    ctx->pc = 0x1F170Cu;
    // 0x1f170c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f170cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1710: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x1f1710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1f1714: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f1714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f1718: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1f1718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f171c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F171Cu;
    {
        const bool branch_taken_0x1f171c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f171c) {
            ctx->pc = 0x1F1720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F171Cu;
            // 0x1f1720: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1730u;
            goto label_1f1730;
        }
    }
    ctx->pc = 0x1F1724u;
    // 0x1f1724: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x1f1724u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f1728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1728u;
    {
        const bool branch_taken_0x1f1728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1728u;
            // 0x1f172c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1728) {
            ctx->pc = 0x1F1734u;
            goto label_1f1734;
        }
    }
    ctx->pc = 0x1F1730u;
label_1f1730:
    // 0x1f1730: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x1f1730u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f1734:
    // 0x1f1734: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1f1734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f1738: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1738u;
    {
        const bool branch_taken_0x1f1738 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f1738) {
            ctx->pc = 0x1F1770u;
            goto label_1f1770;
        }
    }
    ctx->pc = 0x1F1740u;
    // 0x1f1740: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f1740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f1744: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1f1744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1f1748: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1748u;
    {
        const bool branch_taken_0x1f1748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1748) {
            ctx->pc = 0x1F1770u;
            goto label_1f1770;
        }
    }
    ctx->pc = 0x1F1750u;
    // 0x1f1750: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1754: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1f1754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f1758: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1758u;
    {
        const bool branch_taken_0x1f1758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1758) {
            ctx->pc = 0x1F175Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1758u;
            // 0x1f175c: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F176Cu;
            goto label_1f176c;
        }
    }
    ctx->pc = 0x1F1760u;
    // 0x1f1760: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x1f1760u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f1764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1764u;
    {
        const bool branch_taken_0x1f1764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1764u;
            // 0x1f1768: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1764) {
            ctx->pc = 0x1F1770u;
            goto label_1f1770;
        }
    }
    ctx->pc = 0x1F176Cu;
label_1f176c:
    // 0x1f176c: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x1f176cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f1770:
    // 0x1f1770: 0x50e0ff57  beql        $a3, $zero, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x1F1770u;
    {
        const bool branch_taken_0x1f1770 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1770) {
            ctx->pc = 0x1F1774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1770u;
            // 0x1f1774: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F14D0u;
            goto label_1f14d0;
        }
    }
    ctx->pc = 0x1F1778u;
    // 0x1f1778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f177c:
    // 0x1f177c: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x1f177cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f1780: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1f1780u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1784: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f1784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f1788: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1f1788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1f178c: 0x1000fe7d  b           . + 4 + (-0x183 << 2)
    ctx->pc = 0x1F178Cu;
    {
        const bool branch_taken_0x1f178c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F178Cu;
            // 0x1f1790: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f178c) {
            ctx->pc = 0x1F1184u;
            goto label_1f1184;
        }
    }
    ctx->pc = 0x1F1794u;
label_1f1794:
    // 0x1f1794: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1f1794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f1798: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1798u;
    {
        const bool branch_taken_0x1f1798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F179Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1798u;
            // 0x1f179c: 0xae250038  sw          $a1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1798) {
            ctx->pc = 0x1F17ACu;
            goto label_1f17ac;
        }
    }
    ctx->pc = 0x1F17A0u;
    // 0x1f17a0: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x1f17a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x1f17a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1f17a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1f17a8: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1f17a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_1f17ac:
    // 0x1f17ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f17acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17b0: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F17B0u;
    SET_GPR_U32(ctx, 31, 0x1F17B8u);
    ctx->pc = 0x1F17B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F17B0u;
            // 0x1f17b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F17B8u; }
        if (ctx->pc != 0x1F17B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F17B8u; }
        if (ctx->pc != 0x1F17B8u) { return; }
    }
    ctx->pc = 0x1F17B8u;
    // 0x1f17b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f17b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17bc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f17bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f17c0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1f17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1f17c4: 0x1462ff41  bne         $v1, $v0, . + 4 + (-0xBF << 2)
    ctx->pc = 0x1F17C4u;
    {
        const bool branch_taken_0x1f17c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F17C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F17C4u;
            // 0x1f17c8: 0x8e250038  lw          $a1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17c4) {
            ctx->pc = 0x1F14CCu;
            goto label_1f14cc;
        }
    }
    ctx->pc = 0x1F17CCu;
    // 0x1f17cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f17d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f17d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f17d4:
    // 0x1f17d4: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x1f17d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
    // 0x1f17d8: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x1f17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
    // 0x1f17dc: 0xae760004  sw          $s6, 0x4($s3)
    ctx->pc = 0x1f17dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 22));
    // 0x1f17e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f17e4: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x1f17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f17e8: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x1f17e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1f17ec: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f17ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1f17f0: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1f17f0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1f17f4: 0xae770000  sw          $s7, 0x0($s3)
    ctx->pc = 0x1f17f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x1f17f8: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1f17f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x1f17fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f17fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1800: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f1800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1804: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F1804u;
    SET_GPR_U32(ctx, 31, 0x1F180Cu);
    ctx->pc = 0x1F1808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1804u;
            // 0x1f1808: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F180Cu; }
        if (ctx->pc != 0x1F180Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F180Cu; }
        if (ctx->pc != 0x1F180Cu) { return; }
    }
    ctx->pc = 0x1F180Cu;
    // 0x1f180c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F180Cu;
    {
        const bool branch_taken_0x1f180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F180Cu;
            // 0x1f1810: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f180c) {
            ctx->pc = 0x1F188Cu;
            goto label_1f188c;
        }
    }
    ctx->pc = 0x1F1814u;
label_1f1814:
    // 0x1f1814: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x1f1814u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
    // 0x1f1818: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x1f1818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
    // 0x1f181c: 0xae760004  sw          $s6, 0x4($s3)
    ctx->pc = 0x1f181cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 22));
    // 0x1f1820: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f1820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f1824: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x1f1824u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f1828: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x1f1828u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1f182c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f182cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1f1830: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1f1830u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1f1834: 0xae770000  sw          $s7, 0x0($s3)
    ctx->pc = 0x1f1834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x1f1838: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1f1838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x1f183c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f183cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1840: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f1840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1844: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F1844u;
    SET_GPR_U32(ctx, 31, 0x1F184Cu);
    ctx->pc = 0x1F1848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1844u;
            // 0x1f1848: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F184Cu; }
        if (ctx->pc != 0x1F184Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F184Cu; }
        if (ctx->pc != 0x1F184Cu) { return; }
    }
    ctx->pc = 0x1F184Cu;
    // 0x1f184c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F184Cu;
    {
        const bool branch_taken_0x1f184c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F184Cu;
            // 0x1f1850: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f184c) {
            ctx->pc = 0x1F188Cu;
            goto label_1f188c;
        }
    }
    ctx->pc = 0x1F1854u;
label_1f1854:
    // 0x1f1854: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x1f1854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
    // 0x1f1858: 0xae760004  sw          $s6, 0x4($s3)
    ctx->pc = 0x1f1858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 22));
    // 0x1f185c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f1860: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x1f1860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f1864: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x1f1864u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1f1868: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f1868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1f186c: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1f186cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1f1870: 0xae770000  sw          $s7, 0x0($s3)
    ctx->pc = 0x1f1870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x1f1874: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1f1874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x1f1878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f187c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f187cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1880: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F1880u;
    SET_GPR_U32(ctx, 31, 0x1F1888u);
    ctx->pc = 0x1F1884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1880u;
            // 0x1f1884: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1888u; }
        if (ctx->pc != 0x1F1888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1888u; }
        if (ctx->pc != 0x1F1888u) { return; }
    }
    ctx->pc = 0x1F1888u;
    // 0x1f1888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f188c:
    // 0x1f188c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f188cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f1890: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f1890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1894: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f1894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f1898: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f1898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f189c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f189cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f18a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f18a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f18a4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f18a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f18a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f18a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f18ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F18ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F18B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18ACu;
            // 0x1f18b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F117Cu: goto label_1f117c;
            case 0x1F1184u: goto label_1f1184;
            case 0x1F11ACu: goto label_1f11ac;
            case 0x1F1238u: goto label_1f1238;
            case 0x1F1240u: goto label_1f1240;
            case 0x1F1260u: goto label_1f1260;
            case 0x1F1274u: goto label_1f1274;
            case 0x1F1284u: goto label_1f1284;
            case 0x1F12B0u: goto label_1f12b0;
            case 0x1F1300u: goto label_1f1300;
            case 0x1F1328u: goto label_1f1328;
            case 0x1F1340u: goto label_1f1340;
            case 0x1F1358u: goto label_1f1358;
            case 0x1F1368u: goto label_1f1368;
            case 0x1F1394u: goto label_1f1394;
            case 0x1F13DCu: goto label_1f13dc;
            case 0x1F13ECu: goto label_1f13ec;
            case 0x1F1418u: goto label_1f1418;
            case 0x1F1478u: goto label_1f1478;
            case 0x1F1480u: goto label_1f1480;
            case 0x1F1498u: goto label_1f1498;
            case 0x1F14ACu: goto label_1f14ac;
            case 0x1F14BCu: goto label_1f14bc;
            case 0x1F14CCu: goto label_1f14cc;
            case 0x1F14D0u: goto label_1f14d0;
            case 0x1F1508u: goto label_1f1508;
            case 0x1F1528u: goto label_1f1528;
            case 0x1F1560u: goto label_1f1560;
            case 0x1F1584u: goto label_1f1584;
            case 0x1F15A4u: goto label_1f15a4;
            case 0x1F15ACu: goto label_1f15ac;
            case 0x1F15ECu: goto label_1f15ec;
            case 0x1F15F0u: goto label_1f15f0;
            case 0x1F162Cu: goto label_1f162c;
            case 0x1F1630u: goto label_1f1630;
            case 0x1F1668u: goto label_1f1668;
            case 0x1F166Cu: goto label_1f166c;
            case 0x1F1678u: goto label_1f1678;
            case 0x1F1698u: goto label_1f1698;
            case 0x1F16B0u: goto label_1f16b0;
            case 0x1F16F0u: goto label_1f16f0;
            case 0x1F16F4u: goto label_1f16f4;
            case 0x1F1730u: goto label_1f1730;
            case 0x1F1734u: goto label_1f1734;
            case 0x1F176Cu: goto label_1f176c;
            case 0x1F1770u: goto label_1f1770;
            case 0x1F177Cu: goto label_1f177c;
            case 0x1F1794u: goto label_1f1794;
            case 0x1F17ACu: goto label_1f17ac;
            case 0x1F17D4u: goto label_1f17d4;
            case 0x1F1814u: goto label_1f1814;
            case 0x1F1854u: goto label_1f1854;
            case 0x1F188Cu: goto label_1f188c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F18B4u;
}
