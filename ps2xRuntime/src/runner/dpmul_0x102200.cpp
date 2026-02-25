#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dpmul
// Address: 0x102200 - 0x1024a8
void dpmul_0x102200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dpmul_0x102200");
#endif

    ctx->pc = 0x102200u;

    // 0x102200: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x102200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x102204: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x102204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x102208: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x102208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x10220c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x10220cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x102210: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x102210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x102214: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102218: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x102218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x10221c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x10221cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x102220: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x102220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x102224: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x102224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x102228: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x102228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x10222c: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x10222cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x102230: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x102230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x102234: 0xc040798  jal         func_101E60
    ctx->pc = 0x102234u;
    SET_GPR_U32(ctx, 31, 0x10223Cu);
    ctx->pc = 0x102238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102234u;
            // 0x102238: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10223Cu; }
        if (ctx->pc != 0x10223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10223Cu; }
        if (ctx->pc != 0x10223Cu) { return; }
    }
    ctx->pc = 0x10223Cu;
    // 0x10223c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x10223cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x102240: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x102240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x102244: 0xc040798  jal         func_101E60
    ctx->pc = 0x102244u;
    SET_GPR_U32(ctx, 31, 0x10224Cu);
    ctx->pc = 0x102248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102244u;
            // 0x102248: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10224Cu; }
        if (ctx->pc != 0x10224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10224Cu; }
        if (ctx->pc != 0x10224Cu) { return; }
    }
    ctx->pc = 0x10224Cu;
    // 0x10224c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10224cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102250: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x102250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x102254: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x102254u;
    {
        const bool branch_taken_0x102254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102254u;
            // 0x102258: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102254) {
            ctx->pc = 0x1022B0u;
            goto label_1022b0;
        }
    }
    ctx->pc = 0x10225Cu;
    // 0x10225c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10225cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102260: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x102260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x102264: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x102264u;
    {
        const bool branch_taken_0x102264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102264) {
            ctx->pc = 0x102268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102264u;
            // 0x102268: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1022D8u;
            goto label_1022d8;
        }
    }
    ctx->pc = 0x10226Cu;
    // 0x10226c: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x10226cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)4u)));
    // 0x102270: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x102270u;
    {
        const bool branch_taken_0x102270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102270u;
            // 0x102274: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102270) {
            ctx->pc = 0x10228Cu;
            goto label_10228c;
        }
    }
    ctx->pc = 0x102278u;
    // 0x102278: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x102278u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x10227c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10227Cu;
    {
        const bool branch_taken_0x10227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10227Cu;
            // 0x102280: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10227c) {
            ctx->pc = 0x10229Cu;
            goto label_10229c;
        }
    }
    ctx->pc = 0x102284u;
    // 0x102284: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x102284u;
    {
        const bool branch_taken_0x102284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102284u;
            // 0x102288: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102284) {
            ctx->pc = 0x1022B8u;
            goto label_1022b8;
        }
    }
    ctx->pc = 0x10228Cu;
label_10228c:
    // 0x10228c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10228Cu;
    {
        const bool branch_taken_0x10228c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10228Cu;
            // 0x102290: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10228c) {
            ctx->pc = 0x1022A8u;
            goto label_1022a8;
        }
    }
    ctx->pc = 0x102294u;
    // 0x102294: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x102294u;
    {
        const bool branch_taken_0x102294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102294u;
            // 0x102298: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102294) {
            ctx->pc = 0x1022D8u;
            goto label_1022d8;
        }
    }
    ctx->pc = 0x10229Cu;
label_10229c:
    // 0x10229c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10229cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1022a0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1022A0u;
    {
        const bool branch_taken_0x1022a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022A0u;
            // 0x1022a4: 0x24443700  addiu       $a0, $v0, 0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022a0) {
            ctx->pc = 0x102474u;
            goto label_102474;
        }
    }
    ctx->pc = 0x1022A8u;
label_1022a8:
    // 0x1022a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1022A8u;
    {
        const bool branch_taken_0x1022a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1022ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022A8u;
            // 0x1022ac: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022a8) {
            ctx->pc = 0x1022CCu;
            goto label_1022cc;
        }
    }
    ctx->pc = 0x1022B0u;
label_1022b0:
    // 0x1022b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1022b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1022b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1022b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1022b8:
    // 0x1022b8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1022b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1022bc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1022bcu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1022c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1022c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1022c4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1022C4u;
    {
        const bool branch_taken_0x1022c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022C4u;
            // 0x1022c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022c4) {
            ctx->pc = 0x102474u;
            goto label_102474;
        }
    }
    ctx->pc = 0x1022CCu;
label_1022cc:
    // 0x1022cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1022CCu;
    {
        const bool branch_taken_0x1022cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1022D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022CCu;
            // 0x1022d0: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022cc) {
            ctx->pc = 0x1022F0u;
            goto label_1022f0;
        }
    }
    ctx->pc = 0x1022D4u;
    // 0x1022d4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1022d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1022d8:
    // 0x1022d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1022d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1022dc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1022dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1022e0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1022e0u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1022e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1022e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1022e8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1022E8u;
    {
        const bool branch_taken_0x1022e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022E8u;
            // 0x1022ec: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022e8) {
            ctx->pc = 0x102474u;
            goto label_102474;
        }
    }
    ctx->pc = 0x1022F0u;
label_1022f0:
    // 0x1022f0: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x1022f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x1022f4: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x1022f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x1022f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1022f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1022fc: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x1022fcu;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 19), GPR_VEC(ctx, 22)));
    // 0x102300: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x102300u;
    SET_GPR_VEC(ctx, 21, PS2_PAND(GPR_VEC(ctx, 18), GPR_VEC(ctx, 22)));
    // 0x102304: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x102304u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x102308: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x102308u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x10230c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10230cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102310: 0xc040470  jal         func_1011C0
    ctx->pc = 0x102310u;
    SET_GPR_U32(ctx, 31, 0x102318u);
    ctx->pc = 0x102314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102310u;
            // 0x102314: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1011C0u;
    if (runtime->hasFunction(0x1011C0u)) {
        auto targetFn = runtime->lookupFunction(0x1011C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102318u; }
        if (ctx->pc != 0x102318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x1011c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102318u; }
        if (ctx->pc != 0x102318u) { return; }
    }
    ctx->pc = 0x102318u;
    // 0x102318: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x102318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10231c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10231cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102320: 0xc040470  jal         func_1011C0
    ctx->pc = 0x102320u;
    SET_GPR_U32(ctx, 31, 0x102328u);
    ctx->pc = 0x102324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102320u;
            // 0x102324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1011C0u;
    if (runtime->hasFunction(0x1011C0u)) {
        auto targetFn = runtime->lookupFunction(0x1011C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102328u; }
        if (ctx->pc != 0x102328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x1011c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102328u; }
        if (ctx->pc != 0x102328u) { return; }
    }
    ctx->pc = 0x102328u;
    // 0x102328: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10232c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102330: 0xc040470  jal         func_1011C0
    ctx->pc = 0x102330u;
    SET_GPR_U32(ctx, 31, 0x102338u);
    ctx->pc = 0x102334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102330u;
            // 0x102334: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1011C0u;
    if (runtime->hasFunction(0x1011C0u)) {
        auto targetFn = runtime->lookupFunction(0x1011C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102338u; }
        if (ctx->pc != 0x102338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x1011c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102338u; }
        if (ctx->pc != 0x102338u) { return; }
    }
    ctx->pc = 0x102338u;
    // 0x102338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x102338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10233c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10233cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102340: 0xc040470  jal         func_1011C0
    ctx->pc = 0x102340u;
    SET_GPR_U32(ctx, 31, 0x102348u);
    ctx->pc = 0x102344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102340u;
            // 0x102344: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1011C0u;
    if (runtime->hasFunction(0x1011C0u)) {
        auto targetFn = runtime->lookupFunction(0x1011C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102348u; }
        if (ctx->pc != 0x102348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x1011c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102348u; }
        if (ctx->pc != 0x102348u) { return; }
    }
    ctx->pc = 0x102348u;
    // 0x102348: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x102348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x10234c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x10234cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102350: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x102350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x102354: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x102354u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x102358: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x102358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x10235c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x10235cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x102360: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x102360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102364: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x102364u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 22)));
    // 0x102368: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x102368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10236c: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x10236cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x102370: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x102370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x102374: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x102374u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x102378: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x102378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x10237c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x10237cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x102380: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x102380u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x102384: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x102384u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 20)));
    // 0x102388: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x102388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x10238c: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x10238cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x102390: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x102390u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x102394: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102398: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x102398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x10239c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x10239cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1023a0: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1023a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1023a4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1023A4u;
    {
        const bool branch_taken_0x1023a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1023A4u;
            // 0x1023a8: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023a4) {
            ctx->pc = 0x1023ECu;
            goto label_1023ec;
        }
    }
    ctx->pc = 0x1023ACu;
    // 0x1023ac: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1023acu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x1023b0: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x1023b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1023b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1023b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1023b8: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x1023b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x1023bc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1023bcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)1u)));
label_1023c0:
    // 0x1023c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1023c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1023c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1023c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1023c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1023C8u;
    {
        const bool branch_taken_0x1023c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1023C8u;
            // 0x1023cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023c8) {
            ctx->pc = 0x1023D8u;
            goto label_1023d8;
        }
    }
    ctx->pc = 0x1023D0u;
    // 0x1023d0: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x1023d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x1023d4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1023d4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
label_1023d8:
    // 0x1023d8: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x1023d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x1023dc: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1023dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1023e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1023E0u;
    {
        const bool branch_taken_0x1023e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1023E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1023E0u;
            // 0x1023e4: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023e0) {
            ctx->pc = 0x1023C0u;
            goto label_1023c0;
        }
    }
    ctx->pc = 0x1023E8u;
    // 0x1023e8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1023e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_1023ec:
    // 0x1023ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1023ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1023f0: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1023f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1023f4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1023f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1023f8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1023F8u;
    {
        const bool branch_taken_0x1023f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1023FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1023F8u;
            // 0x1023fc: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023f8) {
            ctx->pc = 0x102440u;
            goto label_102440;
        }
    }
    ctx->pc = 0x102400u;
    // 0x102400: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x102400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x102404: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x102404u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x102408: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x102408u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x10240c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x10240cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102410: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x102410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102414: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x102414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_102418:
    // 0x102418: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x102418u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x10241c: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x10241cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
    // 0x102420: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x102420u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 7)));
    // 0x102424: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x102424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x102428: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x102428u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x10242c: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x10242cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x102430: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x102430u;
    {
        const bool branch_taken_0x102430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102430u;
            // 0x102434: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102430) {
            ctx->pc = 0x102418u;
            goto label_102418;
        }
    }
    ctx->pc = 0x102438u;
    // 0x102438: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x102438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x10243c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x10243cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)255u)));
label_102440:
    // 0x102440: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x102440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x102444: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102444u;
    {
        const bool branch_taken_0x102444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x102444) {
            ctx->pc = 0x102448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102444u;
            // 0x102448: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102468u;
            goto label_102468;
        }
    }
    ctx->pc = 0x10244Cu;
    // 0x10244c: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x10244cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)256u)));
    // 0x102450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102450u;
    {
        const bool branch_taken_0x102450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102450u;
            // 0x102454: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102450) {
            ctx->pc = 0x102460u;
            goto label_102460;
        }
    }
    ctx->pc = 0x102458u;
    // 0x102458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x102458u;
    {
        const bool branch_taken_0x102458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10245Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102458u;
            // 0x10245c: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102458) {
            ctx->pc = 0x102464u;
            goto label_102464;
        }
    }
    ctx->pc = 0x102460u;
label_102460:
    // 0x102460: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x102460u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_102464:
    // 0x102464: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x102464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_102468:
    // 0x102468: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x102468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10246c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x10246cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x102470: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x102470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_102474:
    // 0x102474: 0xc04074c  jal         func_101D30
    ctx->pc = 0x102474u;
    SET_GPR_U32(ctx, 31, 0x10247Cu);
    ctx->pc = 0x101D30u;
    if (runtime->hasFunction(0x101D30u)) {
        auto targetFn = runtime->lookupFunction(0x101D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10247Cu; }
        if (ctx->pc != 0x10247Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x101d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10247Cu; }
        if (ctx->pc != 0x10247Cu) { return; }
    }
    ctx->pc = 0x10247Cu;
    // 0x10247c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x10247cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x102480: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x102480u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x102484: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x102484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x102488: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x102488u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10248c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x10248cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x102490: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x102490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x102494: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x102494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x102498: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x102498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10249c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x10249cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1024a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1024A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1024A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024A0u;
            // 0x1024a4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10228Cu: goto label_10228c;
            case 0x10229Cu: goto label_10229c;
            case 0x1022A8u: goto label_1022a8;
            case 0x1022B0u: goto label_1022b0;
            case 0x1022B8u: goto label_1022b8;
            case 0x1022CCu: goto label_1022cc;
            case 0x1022D8u: goto label_1022d8;
            case 0x1022F0u: goto label_1022f0;
            case 0x1023C0u: goto label_1023c0;
            case 0x1023D8u: goto label_1023d8;
            case 0x1023ECu: goto label_1023ec;
            case 0x102418u: goto label_102418;
            case 0x102440u: goto label_102440;
            case 0x102460u: goto label_102460;
            case 0x102464u: goto label_102464;
            case 0x102468u: goto label_102468;
            case 0x102474u: goto label_102474;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1024A8u;
}
