#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoTexModSub
// Address: 0x210e48 - 0x210f58
void DoTexModSub_0x210e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x210e48u;

    // 0x210e48: 0x27bdffe0
    ctx->pc = 0x210e48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x210e4c: 0xffbf0010
    ctx->pc = 0x210e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x210e50: 0xffb00000
    ctx->pc = 0x210e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210e54: 0x80302d
    ctx->pc = 0x210e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e58: 0x8cc20044
    ctx->pc = 0x210e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x210e5c: 0x440003b
    ctx->pc = 0x210E5Cu;
    {
        const bool branch_taken_0x210e5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x210E60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x210e5c) {
            ctx->pc = 0x210F4Cu;
            goto label_210f4c;
        }
    }
    ctx->pc = 0x210E64u;
    // 0x210e64: 0x8cc30050
    ctx->pc = 0x210e64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x210e68: 0x18600008
    ctx->pc = 0x210E68u;
    {
        const bool branch_taken_0x210e68 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x210E6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x210e68) {
            ctx->pc = 0x210E8Cu;
            goto label_210e8c;
        }
    }
    ctx->pc = 0x210E70u;
    // 0x210e70: 0x8c42ffb8
    ctx->pc = 0x210e70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967224)));
    // 0x210e74: 0x43001b
    ctx->pc = 0x210e74u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 3) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x210e78: 0x1010
    ctx->pc = 0x210e78u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x210e7c: 0x50600001
    ctx->pc = 0x210E7Cu;
    {
        const bool branch_taken_0x210e7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x210e7c) {
            ctx->pc = 0x210E80u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x210E84u;
            goto label_210e84;
        }
    }
    ctx->pc = 0x210E84u;
label_210e84:
    // 0x210e84: 0x14400032
    ctx->pc = 0x210E84u;
    {
        const bool branch_taken_0x210e84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x210E88u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x210e84) {
            ctx->pc = 0x210F50u;
            goto label_210f50;
        }
    }
    ctx->pc = 0x210E8Cu;
label_210e8c:
    // 0x210e8c: 0x8cc40054
    ctx->pc = 0x210e8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x210e90: 0x24840001
    ctx->pc = 0x210e90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x210e94: 0xacc40054
    ctx->pc = 0x210e94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 4));
    // 0x210e98: 0x84c3004c
    ctx->pc = 0x210e98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x210e9c: 0x32823
    ctx->pc = 0x210e9cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x210ea0: 0x2402ffff
    ctx->pc = 0x210ea0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210ea4: 0x43102a
    ctx->pc = 0x210ea4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x210ea8: 0xa2180a
    ctx->pc = 0x210ea8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
    // 0x210eac: 0x83202a
    ctx->pc = 0x210eacu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x210eb0: 0x50800001
    ctx->pc = 0x210EB0u;
    {
        const bool branch_taken_0x210eb0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x210eb0) {
            ctx->pc = 0x210EB4u;
            WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
            ctx->pc = 0x210EB8u;
            goto label_210eb8;
        }
    }
    ctx->pc = 0x210EB8u;
label_210eb8:
    // 0x210eb8: 0x8cc30048
    ctx->pc = 0x210eb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x210ebc: 0x2402fffd
    ctx->pc = 0x210ebcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x210ec0: 0x10620011
    ctx->pc = 0x210EC0u;
    {
        const bool branch_taken_0x210ec0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x210EC4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967294));
        if (branch_taken_0x210ec0) {
            ctx->pc = 0x210F08u;
            goto label_210f08;
        }
    }
    ctx->pc = 0x210EC8u;
    // 0x210ec8: 0x10400005
    ctx->pc = 0x210EC8u;
    {
        const bool branch_taken_0x210ec8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x210ECCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x210ec8) {
            ctx->pc = 0x210EE0u;
            goto label_210ee0;
        }
    }
    ctx->pc = 0x210ED0u;
    // 0x210ed0: 0x1062001e
    ctx->pc = 0x210ED0u;
    {
        const bool branch_taken_0x210ed0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x210ED4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x210ed0) {
            ctx->pc = 0x210F4Cu;
            goto label_210f4c;
        }
    }
    ctx->pc = 0x210ED8u;
    // 0x210ed8: 0x10000012
    ctx->pc = 0x210ED8u;
    {
        const bool branch_taken_0x210ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210EDCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 6), 68)));
        if (branch_taken_0x210ed8) {
            ctx->pc = 0x210F24u;
            goto label_210f24;
        }
    }
    ctx->pc = 0x210EE0u;
label_210ee0:
    // 0x210ee0: 0x2402fffe
    ctx->pc = 0x210ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x210ee4: 0x5462000f
    ctx->pc = 0x210EE4u;
    {
        const bool branch_taken_0x210ee4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x210ee4) {
            ctx->pc = 0x210EE8u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 6), 68)));
            ctx->pc = 0x210F24u;
            goto label_210f24;
        }
    }
    ctx->pc = 0x210EECu;
    // 0x210eec: 0xc0202d
    ctx->pc = 0x210eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ef0: 0x8cc50054
    ctx->pc = 0x210ef0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x210ef4: 0x84c60002
    ctx->pc = 0x210ef4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x210ef8: 0xc084324
    ctx->pc = 0x210EF8u;
    SET_GPR_U32(ctx, 31, 0x210F00u);
    ctx->pc = 0x210EFCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x210C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexScroll2Sub_0x210c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F00u; }
    }
    if (ctx->pc != 0x210F00u) { return; }
    ctx->pc = 0x210F00u;
    // 0x210f00: 0x10000012
    ctx->pc = 0x210F00u;
    {
        const bool branch_taken_0x210f00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210F04u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x210f00) {
            ctx->pc = 0x210F4Cu;
            goto label_210f4c;
        }
    }
    ctx->pc = 0x210F08u;
label_210f08:
    // 0x210f08: 0xc0202d
    ctx->pc = 0x210f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f0c: 0x8cc50054
    ctx->pc = 0x210f0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x210f10: 0x84c60002
    ctx->pc = 0x210f10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x210f14: 0xc084324
    ctx->pc = 0x210F14u;
    SET_GPR_U32(ctx, 31, 0x210F1Cu);
    ctx->pc = 0x210F18u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x210C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexScroll2Sub_0x210c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F1Cu; }
    }
    if (ctx->pc != 0x210F1Cu) { return; }
    ctx->pc = 0x210F1Cu;
    // 0x210f1c: 0x1000000b
    ctx->pc = 0x210F1Cu;
    {
        const bool branch_taken_0x210f1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210F20u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x210f1c) {
            ctx->pc = 0x210F4Cu;
            goto label_210f4c;
        }
    }
    ctx->pc = 0x210F24u;
label_210f24:
    // 0x210f24: 0x6000009
    ctx->pc = 0x210F24u;
    {
        const bool branch_taken_0x210f24 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x210F28u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x210f24) {
            ctx->pc = 0x210F4Cu;
            goto label_210f4c;
        }
    }
    ctx->pc = 0x210F2Cu;
    // 0x210f2c: 0x8cc20048
    ctx->pc = 0x210f2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x210f30: 0x8cc40054
    ctx->pc = 0x210f30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x210f34: 0xc0b3da0
    ctx->pc = 0x210F34u;
    SET_GPR_U32(ctx, 31, 0x210F3Cu);
    ctx->pc = 0x210F38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F3Cu; }
    }
    if (ctx->pc != 0x210F3Cu) { return; }
    ctx->pc = 0x210F3Cu;
    // 0x210f3c: 0x200202d
    ctx->pc = 0x210f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f40: 0xc0b3de4
    ctx->pc = 0x210F40u;
    SET_GPR_U32(ctx, 31, 0x210F48u);
    ctx->pc = 0x210F44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetRomTexture_0x2cf790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F48u; }
    }
    if (ctx->pc != 0x210F48u) { return; }
    ctx->pc = 0x210F48u;
    // 0x210f48: 0xdfbf0010
    ctx->pc = 0x210f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_210f4c:
    // 0x210f4c: 0xdfb00000
    ctx->pc = 0x210f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210f50:
    // 0x210f50: 0x3e00008
    ctx->pc = 0x210F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210F54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210E84u: goto label_210e84;
            case 0x210E8Cu: goto label_210e8c;
            case 0x210EB8u: goto label_210eb8;
            case 0x210EE0u: goto label_210ee0;
            case 0x210F08u: goto label_210f08;
            case 0x210F24u: goto label_210f24;
            case 0x210F4Cu: goto label_210f4c;
            case 0x210F50u: goto label_210f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210F58u;
}
