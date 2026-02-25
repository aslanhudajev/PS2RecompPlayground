#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage1BossMove4
// Address: 0x1621c0 - 0x162800
void Stage1BossMove4_0x1621c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage1BossMove4_0x1621c0");
#endif

    ctx->pc = 0x1621c0u;

    // 0x1621c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1621c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1621c4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1621c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1621c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1621c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1621cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1621ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1621d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1621d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1621d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1621d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1621d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1621dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1621dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1621e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1621e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1621e4: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1621e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1621e8: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1621E8u;
    SET_GPR_U32(ctx, 31, 0x1621F0u);
    ctx->pc = 0x1621ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1621E8u;
            // 0x1621ec: 0xdc259d60  ld          $a1, -0x62A0($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294942048)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621F0u; }
        if (ctx->pc != 0x1621F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621F0u; }
        if (ctx->pc != 0x1621F0u) { return; }
    }
    ctx->pc = 0x1621F0u;
    // 0x1621f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1621f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1621f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1621f8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1621F8u;
    SET_GPR_U32(ctx, 31, 0x162200u);
    ctx->pc = 0x1621FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1621F8u;
            // 0x1621fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162200u; }
        if (ctx->pc != 0x162200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162200u; }
        if (ctx->pc != 0x162200u) { return; }
    }
    ctx->pc = 0x162200u;
    // 0x162200: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x162200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162208: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x162208u;
    SET_GPR_U32(ctx, 31, 0x162210u);
    ctx->pc = 0x16220Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162208u;
            // 0x16220c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162210u; }
        if (ctx->pc != 0x162210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162210u; }
        if (ctx->pc != 0x162210u) { return; }
    }
    ctx->pc = 0x162210u;
    // 0x162210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162214: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x162214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162218: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x162218u;
    SET_GPR_U32(ctx, 31, 0x162220u);
    ctx->pc = 0x16221Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162218u;
            // 0x16221c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162220u; }
        if (ctx->pc != 0x162220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162220u; }
        if (ctx->pc != 0x162220u) { return; }
    }
    ctx->pc = 0x162220u;
    // 0x162220: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x162220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x162224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162228: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x162228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16222c: 0x106200ac  beq         $v1, $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x16222Cu;
    {
        const bool branch_taken_0x16222c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16222c) {
            ctx->pc = 0x1624E0u;
            goto label_1624e0;
        }
    }
    ctx->pc = 0x162234u;
    // 0x162234: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162238: 0x106200a9  beq         $v1, $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x162238u;
    {
        const bool branch_taken_0x162238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162238u;
            // 0x16223c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162238) {
            ctx->pc = 0x1624E0u;
            goto label_1624e0;
        }
    }
    ctx->pc = 0x162240u;
    // 0x162240: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x162240u;
    {
        const bool branch_taken_0x162240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162240) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x162248u;
    // 0x162248: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162248u;
    {
        const bool branch_taken_0x162248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162248) {
            ctx->pc = 0x162258u;
            goto label_162258;
        }
    }
    ctx->pc = 0x162250u;
    // 0x162250: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x162250u;
    {
        const bool branch_taken_0x162250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162250) {
            ctx->pc = 0x1624E0u;
            goto label_1624e0;
        }
    }
    ctx->pc = 0x162258u;
label_162258:
    // 0x162258: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x162258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x16225c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x16225Cu;
    {
        const bool branch_taken_0x16225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16225Cu;
            // 0x162260: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16225c) {
            ctx->pc = 0x1624E0u;
            goto label_1624e0;
        }
    }
    ctx->pc = 0x162264u;
    // 0x162264: 0x0  nop
    ctx->pc = 0x162264u;
    // NOP
label_162268:
    // 0x162268: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x162268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x16226c: 0x1840009c  blez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x16226Cu;
    {
        const bool branch_taken_0x16226c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16226c) {
            ctx->pc = 0x1624E0u;
            goto label_1624e0;
        }
    }
    ctx->pc = 0x162274u;
    // 0x162274: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x162274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x162278: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x162278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x16227c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x16227cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x162280: 0x0  nop
    ctx->pc = 0x162280u;
    // NOP
    // 0x162284: 0x0  nop
    ctx->pc = 0x162284u;
    // NOP
    // 0x162288: 0x1010  mfhi        $v0
    ctx->pc = 0x162288u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x16228c: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x16228Cu;
    {
        const bool branch_taken_0x16228c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16228c) {
            ctx->pc = 0x1624E0u;
            goto label_1624e0;
        }
    }
    ctx->pc = 0x162294u;
    // 0x162294: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x162294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x162298: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x162298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x16229c: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x16229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1622a0: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1622a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1622a4: 0xc059a4c  jal         func_166930
    ctx->pc = 0x1622A4u;
    SET_GPR_U32(ctx, 31, 0x1622ACu);
    ctx->pc = 0x1622A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1622A4u;
            // 0x1622a8: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622ACu; }
        if (ctx->pc != 0x1622ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622ACu; }
        if (ctx->pc != 0x1622ACu) { return; }
    }
    ctx->pc = 0x1622ACu;
    // 0x1622ac: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1622acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1622b0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x1622b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1622b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1622b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1622b8: 0x2463008a  addiu       $v1, $v1, 0x8A
    ctx->pc = 0x1622b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 138));
    // 0x1622bc: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1622bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1622c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1622c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1622c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1622c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1622c8: 0x0  nop
    ctx->pc = 0x1622c8u;
    // NOP
    // 0x1622cc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1622ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1622d0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1622D0u;
    SET_GPR_U32(ctx, 31, 0x1622D8u);
    ctx->pc = 0x1622D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1622D0u;
            // 0x1622d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622D8u; }
        if (ctx->pc != 0x1622D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622D8u; }
        if (ctx->pc != 0x1622D8u) { return; }
    }
    ctx->pc = 0x1622D8u;
    // 0x1622d8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1622d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1622dc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1622dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1622e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1622e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1622e4: 0x2464008a  addiu       $a0, $v1, 0x8A
    ctx->pc = 0x1622e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 138));
    // 0x1622e8: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1622E8u;
    SET_GPR_U32(ctx, 31, 0x1622F0u);
    ctx->pc = 0x1622ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1622E8u;
            // 0x1622ec: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622F0u; }
        if (ctx->pc != 0x1622F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622F0u; }
        if (ctx->pc != 0x1622F0u) { return; }
    }
    ctx->pc = 0x1622F0u;
    // 0x1622f0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1622f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1622f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1622f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1622f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1622fc: 0x24640096  addiu       $a0, $v1, 0x96
    ctx->pc = 0x1622fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x162300: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162300u;
    SET_GPR_U32(ctx, 31, 0x162308u);
    ctx->pc = 0x162304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162300u;
            // 0x162304: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162308u; }
        if (ctx->pc != 0x162308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162308u; }
        if (ctx->pc != 0x162308u) { return; }
    }
    ctx->pc = 0x162308u;
    // 0x162308: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x162308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x16230c: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x16230cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x162310: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162314: 0x246400a2  addiu       $a0, $v1, 0xA2
    ctx->pc = 0x162314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 162));
    // 0x162318: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162318u;
    SET_GPR_U32(ctx, 31, 0x162320u);
    ctx->pc = 0x16231Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162318u;
            // 0x16231c: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162320u; }
        if (ctx->pc != 0x162320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162320u; }
        if (ctx->pc != 0x162320u) { return; }
    }
    ctx->pc = 0x162320u;
    // 0x162320: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x162320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162324: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x162324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x162328: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16232c: 0x2464008a  addiu       $a0, $v1, 0x8A
    ctx->pc = 0x16232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 138));
    // 0x162330: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162330u;
    SET_GPR_U32(ctx, 31, 0x162338u);
    ctx->pc = 0x162334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162330u;
            // 0x162334: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162338u; }
        if (ctx->pc != 0x162338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162338u; }
        if (ctx->pc != 0x162338u) { return; }
    }
    ctx->pc = 0x162338u;
    // 0x162338: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x162338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x16233c: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x16233cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x162340: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162344: 0x246400a2  addiu       $a0, $v1, 0xA2
    ctx->pc = 0x162344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 162));
    // 0x162348: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162348u;
    SET_GPR_U32(ctx, 31, 0x162350u);
    ctx->pc = 0x16234Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162348u;
            // 0x16234c: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162350u; }
        if (ctx->pc != 0x162350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162350u; }
        if (ctx->pc != 0x162350u) { return; }
    }
    ctx->pc = 0x162350u;
    // 0x162350: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x162350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162354: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x162354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x162358: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16235c: 0x2464008a  addiu       $a0, $v1, 0x8A
    ctx->pc = 0x16235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 138));
    // 0x162360: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162360u;
    SET_GPR_U32(ctx, 31, 0x162368u);
    ctx->pc = 0x162364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162360u;
            // 0x162364: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162368u; }
        if (ctx->pc != 0x162368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162368u; }
        if (ctx->pc != 0x162368u) { return; }
    }
    ctx->pc = 0x162368u;
    // 0x162368: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x162368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x16236c: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x16236cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x162370: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162374: 0x246400a2  addiu       $a0, $v1, 0xA2
    ctx->pc = 0x162374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 162));
    // 0x162378: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162378u;
    SET_GPR_U32(ctx, 31, 0x162380u);
    ctx->pc = 0x16237Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162378u;
            // 0x16237c: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162380u; }
        if (ctx->pc != 0x162380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162380u; }
        if (ctx->pc != 0x162380u) { return; }
    }
    ctx->pc = 0x162380u;
    // 0x162380: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x162380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162384: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x162384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
    // 0x162388: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x162388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16238c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16238cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x162390: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x162390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162394: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x162394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x162398: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x162398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16239c: 0x2484008a  addiu       $a0, $a0, 0x8A
    ctx->pc = 0x16239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 138));
    // 0x1623a0: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1623A0u;
    SET_GPR_U32(ctx, 31, 0x1623A8u);
    ctx->pc = 0x1623A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1623A0u;
            // 0x1623a4: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623A8u; }
        if (ctx->pc != 0x1623A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623A8u; }
        if (ctx->pc != 0x1623A8u) { return; }
    }
    ctx->pc = 0x1623A8u;
    // 0x1623a8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1623a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1623ac: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1623acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1623b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1623b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1623b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1623b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1623b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1623b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1623bc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1623bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1623c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1623c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1623c4: 0x248400a2  addiu       $a0, $a0, 0xA2
    ctx->pc = 0x1623c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 162));
    // 0x1623c8: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1623C8u;
    SET_GPR_U32(ctx, 31, 0x1623D0u);
    ctx->pc = 0x1623CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1623C8u;
            // 0x1623cc: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623D0u; }
        if (ctx->pc != 0x1623D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623D0u; }
        if (ctx->pc != 0x1623D0u) { return; }
    }
    ctx->pc = 0x1623D0u;
    // 0x1623d0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1623D0u;
    SET_GPR_U32(ctx, 31, 0x1623D8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623D8u; }
        if (ctx->pc != 0x1623D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623D8u; }
        if (ctx->pc != 0x1623D8u) { return; }
    }
    ctx->pc = 0x1623D8u;
    // 0x1623d8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1623D8u;
    {
        const bool branch_taken_0x1623d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1623d8) {
            ctx->pc = 0x162428u;
            goto label_162428;
        }
    }
    ctx->pc = 0x1623E0u;
    // 0x1623e0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1623e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1623e4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1623e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1623e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1623e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1623ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1623ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1623f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1623f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1623f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1623f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1623f8: 0x2484008a  addiu       $a0, $a0, 0x8A
    ctx->pc = 0x1623f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 138));
    // 0x1623fc: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1623FCu;
    SET_GPR_U32(ctx, 31, 0x162404u);
    ctx->pc = 0x162400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1623FCu;
            // 0x162400: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162404u; }
        if (ctx->pc != 0x162404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162404u; }
        if (ctx->pc != 0x162404u) { return; }
    }
    ctx->pc = 0x162404u;
    // 0x162404: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x162404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162408: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x162408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16240c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x16240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162410: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x162410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162414: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x162418: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x162418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16241c: 0x248400a2  addiu       $a0, $a0, 0xA2
    ctx->pc = 0x16241cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 162));
    // 0x162420: 0xc0655dc  jal         func_195770
    ctx->pc = 0x162420u;
    SET_GPR_U32(ctx, 31, 0x162428u);
    ctx->pc = 0x162424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162420u;
            // 0x162424: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162428u; }
        if (ctx->pc != 0x162428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162428u; }
        if (ctx->pc != 0x162428u) { return; }
    }
    ctx->pc = 0x162428u;
label_162428:
    // 0x162428: 0xc065d00  jal         func_197400
    ctx->pc = 0x162428u;
    SET_GPR_U32(ctx, 31, 0x162430u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162430u; }
        if (ctx->pc != 0x162430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162430u; }
        if (ctx->pc != 0x162430u) { return; }
    }
    ctx->pc = 0x162430u;
    // 0x162430: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x162430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x162434: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x162434u;
    {
        const bool branch_taken_0x162434 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x162434) {
            ctx->pc = 0x1624E0u;
            goto label_1624e0;
        }
    }
    ctx->pc = 0x16243Cu;
    // 0x16243c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x16243cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162440: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x162440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
    // 0x162444: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x162444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162448: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162448u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x16244c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16244cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162450: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x162450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x162454: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x162454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162458: 0x2484008a  addiu       $a0, $a0, 0x8A
    ctx->pc = 0x162458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 138));
    // 0x16245c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x16245Cu;
    SET_GPR_U32(ctx, 31, 0x162464u);
    ctx->pc = 0x162460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16245Cu;
            // 0x162460: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162464u; }
        if (ctx->pc != 0x162464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162464u; }
        if (ctx->pc != 0x162464u) { return; }
    }
    ctx->pc = 0x162464u;
    // 0x162464: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x162464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162468: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x162468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x16246c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x16246cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162470: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162470u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x162474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x162474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162478: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x162478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16247c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16247cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162480: 0x248400a2  addiu       $a0, $a0, 0xA2
    ctx->pc = 0x162480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 162));
    // 0x162484: 0xc0655dc  jal         func_195770
    ctx->pc = 0x162484u;
    SET_GPR_U32(ctx, 31, 0x16248Cu);
    ctx->pc = 0x162488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162484u;
            // 0x162488: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16248Cu; }
        if (ctx->pc != 0x16248Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16248Cu; }
        if (ctx->pc != 0x16248Cu) { return; }
    }
    ctx->pc = 0x16248Cu;
    // 0x16248c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162490: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x162490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x162494: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x162494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162498: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162498u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x16249c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16249cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1624a0: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1624a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x1624a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1624a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1624a8: 0x2484008a  addiu       $a0, $a0, 0x8A
    ctx->pc = 0x1624a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 138));
    // 0x1624ac: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1624ACu;
    SET_GPR_U32(ctx, 31, 0x1624B4u);
    ctx->pc = 0x1624B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1624ACu;
            // 0x1624b0: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624B4u; }
        if (ctx->pc != 0x1624B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624B4u; }
        if (ctx->pc != 0x1624B4u) { return; }
    }
    ctx->pc = 0x1624B4u;
    // 0x1624b4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1624b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1624b8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1624b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1624bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1624bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1624c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1624c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1624c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1624c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1624c8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1624c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x1624cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1624ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1624d0: 0x248400a2  addiu       $a0, $a0, 0xA2
    ctx->pc = 0x1624d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 162));
    // 0x1624d4: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1624D4u;
    SET_GPR_U32(ctx, 31, 0x1624DCu);
    ctx->pc = 0x1624D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1624D4u;
            // 0x1624d8: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624DCu; }
        if (ctx->pc != 0x1624DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624DCu; }
        if (ctx->pc != 0x1624DCu) { return; }
    }
    ctx->pc = 0x1624DCu;
    // 0x1624dc: 0x0  nop
    ctx->pc = 0x1624dcu;
    // NOP
label_1624e0:
    // 0x1624e0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1624e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1624e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1624e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1624e8: 0x0  nop
    ctx->pc = 0x1624e8u;
    // NOP
    // 0x1624ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1624ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1624f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1624F0u;
    {
        const bool branch_taken_0x1624f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1624F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1624F0u;
            // 0x1624f4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624f0) {
            ctx->pc = 0x162510u;
            goto label_162510;
        }
    }
    ctx->pc = 0x1624F8u;
    // 0x1624f8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1624f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1624fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1624fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162500: 0x0  nop
    ctx->pc = 0x162500u;
    // NOP
    // 0x162504: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162508: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x162508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x16250c: 0x0  nop
    ctx->pc = 0x16250cu;
    // NOP
label_162510:
    // 0x162510: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x162510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162518: 0x0  nop
    ctx->pc = 0x162518u;
    // NOP
    // 0x16251c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16251cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162520: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x162520u;
    {
        const bool branch_taken_0x162520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162520u;
            // 0x162524: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162520) {
            ctx->pc = 0x162540u;
            goto label_162540;
        }
    }
    ctx->pc = 0x162528u;
    // 0x162528: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162528u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x16252c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16252cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162530: 0x0  nop
    ctx->pc = 0x162530u;
    // NOP
    // 0x162534: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162538: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x162538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x16253c: 0x0  nop
    ctx->pc = 0x16253cu;
    // NOP
label_162540:
    // 0x162540: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x162540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162548: 0x0  nop
    ctx->pc = 0x162548u;
    // NOP
    // 0x16254c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16254cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162550: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x162550u;
    {
        const bool branch_taken_0x162550 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162550u;
            // 0x162554: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162550) {
            ctx->pc = 0x162570u;
            goto label_162570;
        }
    }
    ctx->pc = 0x162558u;
    // 0x162558: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162558u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x16255c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16255cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162560: 0x0  nop
    ctx->pc = 0x162560u;
    // NOP
    // 0x162564: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162568: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x162568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x16256c: 0x0  nop
    ctx->pc = 0x16256cu;
    // NOP
label_162570:
    // 0x162570: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x162570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x162574: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x162574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x162578: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x162578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16257c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x16257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x162580: 0xc059a4c  jal         func_166930
    ctx->pc = 0x162580u;
    SET_GPR_U32(ctx, 31, 0x162588u);
    ctx->pc = 0x162584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162580u;
            // 0x162584: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162588u; }
        if (ctx->pc != 0x162588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162588u; }
        if (ctx->pc != 0x162588u) { return; }
    }
    ctx->pc = 0x162588u;
    // 0x162588: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x162588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x16258c: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x16258cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x162590: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162594: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x162594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x162598: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x162598u;
    SET_GPR_U32(ctx, 31, 0x1625A0u);
    ctx->pc = 0x16259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162598u;
            // 0x16259c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625A0u; }
        if (ctx->pc != 0x1625A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625A0u; }
        if (ctx->pc != 0x1625A0u) { return; }
    }
    ctx->pc = 0x1625A0u;
    // 0x1625a0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1625a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1625a4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1625a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1625a8: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1625A8u;
    SET_GPR_U32(ctx, 31, 0x1625B0u);
    ctx->pc = 0x1625ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1625A8u;
            // 0x1625ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625B0u; }
        if (ctx->pc != 0x1625B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625B0u; }
        if (ctx->pc != 0x1625B0u) { return; }
    }
    ctx->pc = 0x1625B0u;
    // 0x1625b0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1625b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1625b4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1625b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1625b8: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1625B8u;
    SET_GPR_U32(ctx, 31, 0x1625C0u);
    ctx->pc = 0x1625BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1625B8u;
            // 0x1625bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625C0u; }
        if (ctx->pc != 0x1625C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625C0u; }
        if (ctx->pc != 0x1625C0u) { return; }
    }
    ctx->pc = 0x1625C0u;
    // 0x1625c0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1625c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1625c4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1625c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1625c8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1625C8u;
    SET_GPR_U32(ctx, 31, 0x1625D0u);
    ctx->pc = 0x1625CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1625C8u;
            // 0x1625cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625D0u; }
        if (ctx->pc != 0x1625D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625D0u; }
        if (ctx->pc != 0x1625D0u) { return; }
    }
    ctx->pc = 0x1625D0u;
    // 0x1625d0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1625d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1625d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1625d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1625d8: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1625D8u;
    SET_GPR_U32(ctx, 31, 0x1625E0u);
    ctx->pc = 0x1625DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1625D8u;
            // 0x1625dc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625E0u; }
        if (ctx->pc != 0x1625E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625E0u; }
        if (ctx->pc != 0x1625E0u) { return; }
    }
    ctx->pc = 0x1625E0u;
    // 0x1625e0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1625e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1625e4: 0x1c60003e  bgtz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1625E4u;
    {
        const bool branch_taken_0x1625e4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1625e4) {
            ctx->pc = 0x1626E0u;
            goto label_1626e0;
        }
    }
    ctx->pc = 0x1625ECu;
    // 0x1625ec: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1625ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1625f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1625f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1625f4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1625f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1625f8: 0x0  nop
    ctx->pc = 0x1625f8u;
    // NOP
    // 0x1625fc: 0x0  nop
    ctx->pc = 0x1625fcu;
    // NOP
    // 0x162600: 0x1010  mfhi        $v0
    ctx->pc = 0x162600u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x162604: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x162604u;
    {
        const bool branch_taken_0x162604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162604) {
            ctx->pc = 0x162630u;
            goto label_162630;
        }
    }
    ctx->pc = 0x16260Cu;
    // 0x16260c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x16260cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x162610: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x162610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x162614: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x162614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x162618: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x162618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16261c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16261cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162620: 0x248400ae  addiu       $a0, $a0, 0xAE
    ctx->pc = 0x162620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 174));
    // 0x162624: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x162624u;
    SET_GPR_U32(ctx, 31, 0x16262Cu);
    ctx->pc = 0x162628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162624u;
            // 0x162628: 0x24650078  addiu       $a1, $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16262Cu; }
        if (ctx->pc != 0x16262Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16262Cu; }
        if (ctx->pc != 0x16262Cu) { return; }
    }
    ctx->pc = 0x16262Cu;
    // 0x16262c: 0x0  nop
    ctx->pc = 0x16262cu;
    // NOP
label_162630:
    // 0x162630: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x162630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x162634: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x162634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162638: 0x10440021  beq         $v0, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x162638u;
    {
        const bool branch_taken_0x162638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x162638) {
            ctx->pc = 0x1626C0u;
            goto label_1626c0;
        }
    }
    ctx->pc = 0x162640u;
    // 0x162640: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x162640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162644: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x162644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x162648: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x162648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x16264c: 0x24c61a30  addiu       $a2, $a2, 0x1A30
    ctx->pc = 0x16264cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6704));
    // 0x162650: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x162650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162654: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x162654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162658: 0x2442008a  addiu       $v0, $v0, 0x8A
    ctx->pc = 0x162658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 138));
    // 0x16265c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16265cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162660: 0x0  nop
    ctx->pc = 0x162660u;
    // NOP
    // 0x162664: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162668: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x162668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x16266c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x16266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162670: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x162670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x162674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162678: 0x0  nop
    ctx->pc = 0x162678u;
    // NOP
    // 0x16267c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16267cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162680: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x162680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x162684: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x162684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162688: 0x244200ba  addiu       $v0, $v0, 0xBA
    ctx->pc = 0x162688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 186));
    // 0x16268c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16268cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162690: 0x0  nop
    ctx->pc = 0x162690u;
    // NOP
    // 0x162694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162698: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x162698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x16269c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x16269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1626a0: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1626a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1626a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1626a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1626a8: 0x0  nop
    ctx->pc = 0x1626a8u;
    // NOP
    // 0x1626ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1626acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1626b0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1626B0u;
    SET_GPR_U32(ctx, 31, 0x1626B8u);
    ctx->pc = 0x1626B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1626B0u;
            // 0x1626b4: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626B8u; }
        if (ctx->pc != 0x1626B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626B8u; }
        if (ctx->pc != 0x1626B8u) { return; }
    }
    ctx->pc = 0x1626B8u;
    // 0x1626b8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1626B8u;
    SET_GPR_U32(ctx, 31, 0x1626C0u);
    ctx->pc = 0x1626BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1626B8u;
            // 0x1626bc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626C0u; }
        if (ctx->pc != 0x1626C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626C0u; }
        if (ctx->pc != 0x1626C0u) { return; }
    }
    ctx->pc = 0x1626C0u;
label_1626c0:
    // 0x1626c0: 0x8e620120  lw          $v0, 0x120($s3)
    ctx->pc = 0x1626c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x1626c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1626c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1626c8: 0xae620120  sw          $v0, 0x120($s3)
    ctx->pc = 0x1626c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 2));
    // 0x1626cc: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x1626ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x1626d0: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1626D0u;
    SET_GPR_U32(ctx, 31, 0x1626D8u);
    ctx->pc = 0x1626D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1626D0u;
            // 0x1626d4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626D8u; }
        if (ctx->pc != 0x1626D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626D8u; }
        if (ctx->pc != 0x1626D8u) { return; }
    }
    ctx->pc = 0x1626D8u;
    // 0x1626d8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1626D8u;
    {
        const bool branch_taken_0x1626d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1626DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1626D8u;
            // 0x1626dc: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626d8) {
            ctx->pc = 0x1627D8u;
            goto label_1627d8;
        }
    }
    ctx->pc = 0x1626E0u;
label_1626e0:
    // 0x1626e0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1626e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1626e4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1626e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1626e8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1626E8u;
    {
        const bool branch_taken_0x1626e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1626e8) {
            ctx->pc = 0x162740u;
            goto label_162740;
        }
    }
    ctx->pc = 0x1626F0u;
    // 0x1626f0: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1626f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x1626f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1626F4u;
    {
        const bool branch_taken_0x1626f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1626f4) {
            ctx->pc = 0x162710u;
            goto label_162710;
        }
    }
    ctx->pc = 0x1626FCu;
    // 0x1626fc: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1626FCu;
    SET_GPR_U32(ctx, 31, 0x162704u);
    ctx->pc = 0x162700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1626FCu;
            // 0x162700: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162704u; }
        if (ctx->pc != 0x162704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162704u; }
        if (ctx->pc != 0x162704u) { return; }
    }
    ctx->pc = 0x162704u;
    // 0x162704: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x162704u;
    {
        const bool branch_taken_0x162704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162704) {
            ctx->pc = 0x162718u;
            goto label_162718;
        }
    }
    ctx->pc = 0x16270Cu;
    // 0x16270c: 0x0  nop
    ctx->pc = 0x16270cu;
    // NOP
label_162710:
    // 0x162710: 0xc0604dc  jal         func_181370
    ctx->pc = 0x162710u;
    SET_GPR_U32(ctx, 31, 0x162718u);
    ctx->pc = 0x162714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162710u;
            // 0x162714: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162718u; }
        if (ctx->pc != 0x162718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162718u; }
        if (ctx->pc != 0x162718u) { return; }
    }
    ctx->pc = 0x162718u;
label_162718:
    // 0x162718: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x162718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x16271c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16271Cu;
    {
        const bool branch_taken_0x16271c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16271c) {
            ctx->pc = 0x162730u;
            goto label_162730;
        }
    }
    ctx->pc = 0x162724u;
    // 0x162724: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x162724u;
    {
        const bool branch_taken_0x162724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162724u;
            // 0x162728: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162724) {
            ctx->pc = 0x162750u;
            goto label_162750;
        }
    }
    ctx->pc = 0x16272Cu;
    // 0x16272c: 0x0  nop
    ctx->pc = 0x16272cu;
    // NOP
label_162730:
    // 0x162730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162734: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x162734u;
    {
        const bool branch_taken_0x162734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162734u;
            // 0x162738: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162734) {
            ctx->pc = 0x162750u;
            goto label_162750;
        }
    }
    ctx->pc = 0x16273Cu;
    // 0x16273c: 0x0  nop
    ctx->pc = 0x16273cu;
    // NOP
label_162740:
    // 0x162740: 0xc0604dc  jal         func_181370
    ctx->pc = 0x162740u;
    SET_GPR_U32(ctx, 31, 0x162748u);
    ctx->pc = 0x162744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162740u;
            // 0x162744: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162748u; }
        if (ctx->pc != 0x162748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162748u; }
        if (ctx->pc != 0x162748u) { return; }
    }
    ctx->pc = 0x162748u;
    // 0x162748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16274c: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x16274cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_162750:
    // 0x162750: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x162750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x162754: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x162754u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x162758: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x162758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16275c: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x16275cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x162760: 0x24c61a30  addiu       $a2, $a2, 0x1A30
    ctx->pc = 0x162760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6704));
    // 0x162764: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x162764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162768: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x162768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16276c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x16276cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x162770: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x162770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162774: 0x2442008a  addiu       $v0, $v0, 0x8A
    ctx->pc = 0x162774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 138));
    // 0x162778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16277c: 0x0  nop
    ctx->pc = 0x16277cu;
    // NOP
    // 0x162780: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162784: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x162784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x162788: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16278c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x16278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x162790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162794: 0x0  nop
    ctx->pc = 0x162794u;
    // NOP
    // 0x162798: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16279c: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x16279cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x1627a0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1627a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1627a4: 0x244200ba  addiu       $v0, $v0, 0xBA
    ctx->pc = 0x1627a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 186));
    // 0x1627a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1627a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1627ac: 0x0  nop
    ctx->pc = 0x1627acu;
    // NOP
    // 0x1627b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1627b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1627b4: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x1627b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x1627b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1627b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1627bc: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1627bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1627c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1627c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1627c4: 0x0  nop
    ctx->pc = 0x1627c4u;
    // NOP
    // 0x1627c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1627c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1627cc: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1627CCu;
    SET_GPR_U32(ctx, 31, 0x1627D4u);
    ctx->pc = 0x1627D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1627CCu;
            // 0x1627d0: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1627D4u; }
        if (ctx->pc != 0x1627D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1627D4u; }
        if (ctx->pc != 0x1627D4u) { return; }
    }
    ctx->pc = 0x1627D4u;
    // 0x1627d4: 0x0  nop
    ctx->pc = 0x1627d4u;
    // NOP
label_1627d8:
    // 0x1627d8: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1627d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1627dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1627dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1627e0: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x1627e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    // 0x1627e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1627e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1627e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1627e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1627ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1627ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1627f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1627f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1627f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1627f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1627f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1627F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1627FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1627F8u;
            // 0x1627fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162258u: goto label_162258;
            case 0x162268u: goto label_162268;
            case 0x162428u: goto label_162428;
            case 0x1624E0u: goto label_1624e0;
            case 0x162510u: goto label_162510;
            case 0x162540u: goto label_162540;
            case 0x162570u: goto label_162570;
            case 0x162630u: goto label_162630;
            case 0x1626C0u: goto label_1626c0;
            case 0x1626E0u: goto label_1626e0;
            case 0x162710u: goto label_162710;
            case 0x162718u: goto label_162718;
            case 0x162730u: goto label_162730;
            case 0x162740u: goto label_162740;
            case 0x162750u: goto label_162750;
            case 0x1627D8u: goto label_1627d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162800u;
}
