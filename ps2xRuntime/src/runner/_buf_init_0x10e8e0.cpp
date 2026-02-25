#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _buf_init
// Address: 0x10e8e0 - 0x10e9e0
void _buf_init_0x10e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_buf_init_0x10e8e0");
#endif

    ctx->pc = 0x10e8e0u;

label_10e8e0:
    // 0x10e8e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10e8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_10e8e4:
    // 0x10e8e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_10e8e8:
    // 0x10e8e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10e8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10e8ec:
    // 0x10e8ec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_10e8f0:
    // 0x10e8f0: 0xb1001b  divu        $zero, $a1, $s1
    ctx->pc = 0x10e8f0u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_10e8f4:
    // 0x10e8f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_10e8f8:
    // 0x10e8f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10e8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_10e8fc:
    // 0x10e8fc: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x10e8fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
label_10e900:
    // 0x10e900: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10e900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_10e904:
    // 0x10e904: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10e904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e908:
    // 0x10e908: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10e908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_10e90c:
    // 0x10e90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10e910:
    // 0x10e910: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_10e914:
    if (ctx->pc == 0x10E914u) {
        ctx->pc = 0x10E914u;
            // 0x10e914: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x10E918u;
        goto label_10e918;
    }
    ctx->pc = 0x10E910u;
    {
        const bool branch_taken_0x10e910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e910) {
            ctx->pc = 0x10E914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10E910u;
            // 0x10e914: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10E918u;
            goto label_10e918;
        }
    }
    ctx->pc = 0x10E918u;
label_10e918:
    // 0x10e918: 0x1012  mflo        $v0
    ctx->pc = 0x10e918u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_10e91c:
    // 0x10e91c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_10e920:
    if (ctx->pc == 0x10E920u) {
        ctx->pc = 0x10E920u;
            // 0x10e920: 0xae827184  sw          $v0, 0x7184($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 29060), GPR_U32(ctx, 2));
        ctx->pc = 0x10E924u;
        goto label_10e924;
    }
    ctx->pc = 0x10E91Cu;
    {
        const bool branch_taken_0x10e91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E91Cu;
            // 0x10e920: 0xae827184  sw          $v0, 0x7184($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 29060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e91c) {
            ctx->pc = 0x10E94Cu;
            goto label_10e94c;
        }
    }
    ctx->pc = 0x10E924u;
label_10e924:
    // 0x10e924: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x10e924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_10e928:
    // 0x10e928: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x10e928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_10e92c:
    // 0x10e92c: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x10e92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_10e930:
    // 0x10e930: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x10e930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_10e934:
    // 0x10e934: 0x8c6271dc  lw          $v0, 0x71DC($v1)
    ctx->pc = 0x10e934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29148)));
label_10e938:
    // 0x10e938: 0x2812  mflo        $a1
    ctx->pc = 0x10e938u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_10e93c:
    // 0x10e93c: 0x40f809  jalr        $v0
label_10e940:
    if (ctx->pc == 0x10E940u) {
        ctx->pc = 0x10E940u;
            // 0x10e940: 0x3c130022  lui         $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x10E944u;
        goto label_10e944;
    }
    ctx->pc = 0x10E93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E944u);
        ctx->pc = 0x10E940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E93Cu;
            // 0x10e940: 0x3c130022  lui         $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E8E0u: goto label_10e8e0;
            case 0x10E8E4u: goto label_10e8e4;
            case 0x10E8E8u: goto label_10e8e8;
            case 0x10E8ECu: goto label_10e8ec;
            case 0x10E8F0u: goto label_10e8f0;
            case 0x10E8F4u: goto label_10e8f4;
            case 0x10E8F8u: goto label_10e8f8;
            case 0x10E8FCu: goto label_10e8fc;
            case 0x10E900u: goto label_10e900;
            case 0x10E904u: goto label_10e904;
            case 0x10E908u: goto label_10e908;
            case 0x10E90Cu: goto label_10e90c;
            case 0x10E910u: goto label_10e910;
            case 0x10E914u: goto label_10e914;
            case 0x10E918u: goto label_10e918;
            case 0x10E91Cu: goto label_10e91c;
            case 0x10E920u: goto label_10e920;
            case 0x10E924u: goto label_10e924;
            case 0x10E928u: goto label_10e928;
            case 0x10E92Cu: goto label_10e92c;
            case 0x10E930u: goto label_10e930;
            case 0x10E934u: goto label_10e934;
            case 0x10E938u: goto label_10e938;
            case 0x10E93Cu: goto label_10e93c;
            case 0x10E940u: goto label_10e940;
            case 0x10E944u: goto label_10e944;
            case 0x10E948u: goto label_10e948;
            case 0x10E94Cu: goto label_10e94c;
            case 0x10E950u: goto label_10e950;
            case 0x10E954u: goto label_10e954;
            case 0x10E958u: goto label_10e958;
            case 0x10E95Cu: goto label_10e95c;
            case 0x10E960u: goto label_10e960;
            case 0x10E964u: goto label_10e964;
            case 0x10E968u: goto label_10e968;
            case 0x10E96Cu: goto label_10e96c;
            case 0x10E970u: goto label_10e970;
            case 0x10E974u: goto label_10e974;
            case 0x10E978u: goto label_10e978;
            case 0x10E97Cu: goto label_10e97c;
            case 0x10E980u: goto label_10e980;
            case 0x10E984u: goto label_10e984;
            case 0x10E988u: goto label_10e988;
            case 0x10E98Cu: goto label_10e98c;
            case 0x10E990u: goto label_10e990;
            case 0x10E994u: goto label_10e994;
            case 0x10E998u: goto label_10e998;
            case 0x10E99Cu: goto label_10e99c;
            case 0x10E9A0u: goto label_10e9a0;
            case 0x10E9A4u: goto label_10e9a4;
            case 0x10E9A8u: goto label_10e9a8;
            case 0x10E9ACu: goto label_10e9ac;
            case 0x10E9B0u: goto label_10e9b0;
            case 0x10E9B4u: goto label_10e9b4;
            case 0x10E9B8u: goto label_10e9b8;
            case 0x10E9BCu: goto label_10e9bc;
            case 0x10E9C0u: goto label_10e9c0;
            case 0x10E9C4u: goto label_10e9c4;
            case 0x10E9C8u: goto label_10e9c8;
            case 0x10E9CCu: goto label_10e9cc;
            case 0x10E9D0u: goto label_10e9d0;
            case 0x10E9D4u: goto label_10e9d4;
            case 0x10E9D8u: goto label_10e9d8;
            case 0x10E9DCu: goto label_10e9dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10E944u; }
            if (ctx->pc != 0x10E944u) { return; }
        }
    }
    ctx->pc = 0x10E944u;
label_10e944:
    // 0x10e944: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_10e948:
    if (ctx->pc == 0x10E948u) {
        ctx->pc = 0x10E948u;
            // 0x10e948: 0xae627180  sw          $v0, 0x7180($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 29056), GPR_U32(ctx, 2));
        ctx->pc = 0x10E94Cu;
        goto label_10e94c;
    }
    ctx->pc = 0x10E944u;
    {
        const bool branch_taken_0x10e944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E944u;
            // 0x10e948: 0xae627180  sw          $v0, 0x7180($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 29056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e944) {
            ctx->pc = 0x10E95Cu;
            goto label_10e95c;
        }
    }
    ctx->pc = 0x10E94Cu;
label_10e94c:
    // 0x10e94c: 0xc0440ec  jal         func_1103B0
label_10e950:
    if (ctx->pc == 0x10E950u) {
        ctx->pc = 0x10E950u;
            // 0x10e950: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10E954u;
        goto label_10e954;
    }
    ctx->pc = 0x10E94Cu;
    SET_GPR_U32(ctx, 31, 0x10E954u);
    ctx->pc = 0x10E950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E94Cu;
            // 0x10e950: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1103B0u;
    if (runtime->hasFunction(0x1103B0u)) {
        auto targetFn = runtime->lookupFunction(0x1103B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E954u; }
        if (ctx->pc != 0x10E954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hig_dma_err_0x1103b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E954u; }
        if (ctx->pc != 0x10E954u) { return; }
    }
    ctx->pc = 0x10E954u;
label_10e954:
    // 0x10e954: 0x1000001a  b           . + 4 + (0x1A << 2)
label_10e958:
    if (ctx->pc == 0x10E958u) {
        ctx->pc = 0x10E958u;
            // 0x10e958: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x10E95Cu;
        goto label_10e95c;
    }
    ctx->pc = 0x10E954u;
    {
        const bool branch_taken_0x10e954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E954u;
            // 0x10e958: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e954) {
            ctx->pc = 0x10E9C0u;
            goto label_10e9c0;
        }
    }
    ctx->pc = 0x10E95Cu;
label_10e95c:
    // 0x10e95c: 0x8e827184  lw          $v0, 0x7184($s4)
    ctx->pc = 0x10e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29060)));
label_10e960:
    // 0x10e960: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_10e964:
    if (ctx->pc == 0x10E964u) {
        ctx->pc = 0x10E964u;
            // 0x10e964: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10E968u;
        goto label_10e968;
    }
    ctx->pc = 0x10E960u;
    {
        const bool branch_taken_0x10e960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E960u;
            // 0x10e964: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e960) {
            ctx->pc = 0x10E9B8u;
            goto label_10e9b8;
        }
    }
    ctx->pc = 0x10E968u;
label_10e968:
    // 0x10e968: 0x24150024  addiu       $s5, $zero, 0x24
    ctx->pc = 0x10e968u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_10e96c:
    // 0x10e96c: 0x2111818  mult        $v1, $s0, $s1
    ctx->pc = 0x10e96cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_10e970:
    // 0x10e970: 0x72152818  mult1       $a1, $s0, $s5
    ctx->pc = 0x10e970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_10e974:
    // 0x10e974: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10e974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10e978:
    // 0x10e978: 0x8e647180  lw          $a0, 0x7180($s3)
    ctx->pc = 0x10e978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29056)));
label_10e97c:
    // 0x10e97c: 0x2111018  mult        $v0, $s0, $s1
    ctx->pc = 0x10e97cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_10e980:
    // 0x10e980: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10e980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10e984:
    // 0x10e984: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x10e984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_10e988:
    // 0x10e988: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x10e988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_10e98c:
    // 0x10e98c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10e98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10e990:
    // 0x10e990: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10e990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10e994:
    // 0x10e994: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10e994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_10e998:
    // 0x10e998: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_10e99c:
    // 0x10e99c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x10e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_10e9a0:
    // 0x10e9a0: 0xc0440b4  jal         func_1102D0
label_10e9a4:
    if (ctx->pc == 0x10E9A4u) {
        ctx->pc = 0x10E9A4u;
            // 0x10e9a4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x10E9A8u;
        goto label_10e9a8;
    }
    ctx->pc = 0x10E9A0u;
    SET_GPR_U32(ctx, 31, 0x10E9A8u);
    ctx->pc = 0x10E9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9A0u;
            // 0x10e9a4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102D0u;
    if (runtime->hasFunction(0x1102D0u)) {
        auto targetFn = runtime->lookupFunction(0x1102D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9A8u; }
        if (ctx->pc != 0x10E9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _buf_clear_0x1102d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9A8u; }
        if (ctx->pc != 0x10E9A8u) { return; }
    }
    ctx->pc = 0x10E9A8u;
label_10e9a8:
    // 0x10e9a8: 0x8e827184  lw          $v0, 0x7184($s4)
    ctx->pc = 0x10e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29060)));
label_10e9ac:
    // 0x10e9ac: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10e9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10e9b0:
    // 0x10e9b0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_10e9b4:
    if (ctx->pc == 0x10E9B4u) {
        ctx->pc = 0x10E9B4u;
            // 0x10e9b4: 0x2111818  mult        $v1, $s0, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->pc = 0x10E9B8u;
        goto label_10e9b8;
    }
    ctx->pc = 0x10E9B0u;
    {
        const bool branch_taken_0x10e9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9B0u;
            // 0x10e9b4: 0x2111818  mult        $v1, $s0, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9b0) {
            ctx->pc = 0x10E970u;
            goto label_10e970;
        }
    }
    ctx->pc = 0x10E9B8u;
label_10e9b8:
    // 0x10e9b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e9bc:
    // 0x10e9bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10e9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10e9c0:
    // 0x10e9c0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10e9c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10e9c4:
    // 0x10e9c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10e9c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10e9c8:
    // 0x10e9c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10e9c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10e9cc:
    // 0x10e9cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e9ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10e9d0:
    // 0x10e9d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e9d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10e9d4:
    // 0x10e9d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e9d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e9d8:
    // 0x10e9d8: 0x3e00008  jr          $ra
label_10e9dc:
    if (ctx->pc == 0x10E9DCu) {
        ctx->pc = 0x10E9DCu;
            // 0x10e9dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x10E9E0u;
        goto label_fallthrough_0x10e9d8;
    }
    ctx->pc = 0x10E9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9D8u;
            // 0x10e9dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E8E0u: goto label_10e8e0;
            case 0x10E8E4u: goto label_10e8e4;
            case 0x10E8E8u: goto label_10e8e8;
            case 0x10E8ECu: goto label_10e8ec;
            case 0x10E8F0u: goto label_10e8f0;
            case 0x10E8F4u: goto label_10e8f4;
            case 0x10E8F8u: goto label_10e8f8;
            case 0x10E8FCu: goto label_10e8fc;
            case 0x10E900u: goto label_10e900;
            case 0x10E904u: goto label_10e904;
            case 0x10E908u: goto label_10e908;
            case 0x10E90Cu: goto label_10e90c;
            case 0x10E910u: goto label_10e910;
            case 0x10E914u: goto label_10e914;
            case 0x10E918u: goto label_10e918;
            case 0x10E91Cu: goto label_10e91c;
            case 0x10E920u: goto label_10e920;
            case 0x10E924u: goto label_10e924;
            case 0x10E928u: goto label_10e928;
            case 0x10E92Cu: goto label_10e92c;
            case 0x10E930u: goto label_10e930;
            case 0x10E934u: goto label_10e934;
            case 0x10E938u: goto label_10e938;
            case 0x10E93Cu: goto label_10e93c;
            case 0x10E940u: goto label_10e940;
            case 0x10E944u: goto label_10e944;
            case 0x10E948u: goto label_10e948;
            case 0x10E94Cu: goto label_10e94c;
            case 0x10E950u: goto label_10e950;
            case 0x10E954u: goto label_10e954;
            case 0x10E958u: goto label_10e958;
            case 0x10E95Cu: goto label_10e95c;
            case 0x10E960u: goto label_10e960;
            case 0x10E964u: goto label_10e964;
            case 0x10E968u: goto label_10e968;
            case 0x10E96Cu: goto label_10e96c;
            case 0x10E970u: goto label_10e970;
            case 0x10E974u: goto label_10e974;
            case 0x10E978u: goto label_10e978;
            case 0x10E97Cu: goto label_10e97c;
            case 0x10E980u: goto label_10e980;
            case 0x10E984u: goto label_10e984;
            case 0x10E988u: goto label_10e988;
            case 0x10E98Cu: goto label_10e98c;
            case 0x10E990u: goto label_10e990;
            case 0x10E994u: goto label_10e994;
            case 0x10E998u: goto label_10e998;
            case 0x10E99Cu: goto label_10e99c;
            case 0x10E9A0u: goto label_10e9a0;
            case 0x10E9A4u: goto label_10e9a4;
            case 0x10E9A8u: goto label_10e9a8;
            case 0x10E9ACu: goto label_10e9ac;
            case 0x10E9B0u: goto label_10e9b0;
            case 0x10E9B4u: goto label_10e9b4;
            case 0x10E9B8u: goto label_10e9b8;
            case 0x10E9BCu: goto label_10e9bc;
            case 0x10E9C0u: goto label_10e9c0;
            case 0x10E9C4u: goto label_10e9c4;
            case 0x10E9C8u: goto label_10e9c8;
            case 0x10E9CCu: goto label_10e9cc;
            case 0x10E9D0u: goto label_10e9d0;
            case 0x10E9D4u: goto label_10e9d4;
            case 0x10E9D8u: goto label_10e9d8;
            case 0x10E9DCu: goto label_10e9dc;
            default: break;
        }
        return;
    }
label_fallthrough_0x10e9d8:
    ctx->pc = 0x10E9E0u;
}
