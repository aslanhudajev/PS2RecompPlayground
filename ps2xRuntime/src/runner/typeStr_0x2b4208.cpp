#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: typeStr
// Address: 0x2b4208 - 0x2b431c
void typeStr_0x2b4208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4208u;

    // 0x2b4208: 0x27bdffc0
    ctx->pc = 0x2b4208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b420c: 0xffbf0030
    ctx->pc = 0x2b420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b4210: 0xffb20020
    ctx->pc = 0x2b4210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b4214: 0xffb10010
    ctx->pc = 0x2b4214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b4218: 0x80302d
    ctx->pc = 0x2b4218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b421c: 0x24020003
    ctx->pc = 0x2b421cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b4220: 0x10c20020
    ctx->pc = 0x2B4220u;
    {
        const bool branch_taken_0x2b4220 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4224u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x2b4220) {
            ctx->pc = 0x2B42A4u;
            goto label_2b42a4;
        }
    }
    ctx->pc = 0x2B4228u;
    // 0x2b4228: 0x2cc20004
    ctx->pc = 0x2b4228u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 4));
    // 0x2b422c: 0x10400008
    ctx->pc = 0x2B422Cu;
    {
        const bool branch_taken_0x2b422c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4230u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b422c) {
            ctx->pc = 0x2B4250u;
            goto label_2b4250;
        }
    }
    ctx->pc = 0x2B4234u;
    // 0x2b4234: 0x10c20017
    ctx->pc = 0x2B4234u;
    {
        const bool branch_taken_0x2b4234 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4238u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b4234) {
            ctx->pc = 0x2B4294u;
            goto label_2b4294;
        }
    }
    ctx->pc = 0x2B423Cu;
    // 0x2b423c: 0x2cc20002
    ctx->pc = 0x2b423cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 2));
    // 0x2b4240: 0x50400016
    ctx->pc = 0x2B4240u;
    {
        const bool branch_taken_0x2b4240 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b4240) {
            ctx->pc = 0x2B4244u;
            SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
            ctx->pc = 0x2B429Cu;
            goto label_2b429c;
        }
    }
    ctx->pc = 0x2B4248u;
    // 0x2b4248: 0x10000010
    ctx->pc = 0x2B4248u;
    {
        const bool branch_taken_0x2b4248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B424Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b4248) {
            ctx->pc = 0x2B428Cu;
            goto label_2b428c;
        }
    }
    ctx->pc = 0x2B4250u;
label_2b4250:
    // 0x2b4250: 0x24020040
    ctx->pc = 0x2b4250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b4254: 0x10c20019
    ctx->pc = 0x2B4254u;
    {
        const bool branch_taken_0x2b4254 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4258u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b4254) {
            ctx->pc = 0x2B42BCu;
            goto label_2b42bc;
        }
    }
    ctx->pc = 0x2B425Cu;
    // 0x2b425c: 0x2cc20041
    ctx->pc = 0x2b425cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 65));
    // 0x2b4260: 0x10400005
    ctx->pc = 0x2B4260u;
    {
        const bool branch_taken_0x2b4260 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4264u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b4260) {
            ctx->pc = 0x2B4278u;
            goto label_2b4278;
        }
    }
    ctx->pc = 0x2B4268u;
    // 0x2b4268: 0x10c20011
    ctx->pc = 0x2B4268u;
    {
        const bool branch_taken_0x2b4268 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B426Cu;
        SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
        if (branch_taken_0x2b4268) {
            ctx->pc = 0x2B42B0u;
            goto label_2b42b0;
        }
    }
    ctx->pc = 0x2B4270u;
    // 0x2b4270: 0x10000017
    ctx->pc = 0x2B4270u;
    {
        const bool branch_taken_0x2b4270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4274u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8632)));
        if (branch_taken_0x2b4270) {
            ctx->pc = 0x2B42D0u;
            goto label_2b42d0;
        }
    }
    ctx->pc = 0x2B4278u;
label_2b4278:
    // 0x2b4278: 0x24020080
    ctx->pc = 0x2b4278u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b427c: 0x10c20011
    ctx->pc = 0x2B427Cu;
    {
        const bool branch_taken_0x2b427c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4280u;
        SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
        if (branch_taken_0x2b427c) {
            ctx->pc = 0x2B42C4u;
            goto label_2b42c4;
        }
    }
    ctx->pc = 0x2B4284u;
    // 0x2b4284: 0x10000012
    ctx->pc = 0x2B4284u;
    {
        const bool branch_taken_0x2b4284 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4288u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8632)));
        if (branch_taken_0x2b4284) {
            ctx->pc = 0x2B42D0u;
            goto label_2b42d0;
        }
    }
    ctx->pc = 0x2B428Cu;
label_2b428c:
    // 0x2b428c: 0x1000001d
    ctx->pc = 0x2B428Cu;
    {
        const bool branch_taken_0x2b428c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4290u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17880));
        if (branch_taken_0x2b428c) {
            ctx->pc = 0x2B4304u;
            goto label_2b4304;
        }
    }
    ctx->pc = 0x2B4294u;
label_2b4294:
    // 0x2b4294: 0x1000001b
    ctx->pc = 0x2B4294u;
    {
        const bool branch_taken_0x2b4294 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4298u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17888));
        if (branch_taken_0x2b4294) {
            ctx->pc = 0x2B4304u;
            goto label_2b4304;
        }
    }
    ctx->pc = 0x2B429Cu;
label_2b429c:
    // 0x2b429c: 0x10000019
    ctx->pc = 0x2B429Cu;
    {
        const bool branch_taken_0x2b429c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B42A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17896));
        if (branch_taken_0x2b429c) {
            ctx->pc = 0x2B4304u;
            goto label_2b4304;
        }
    }
    ctx->pc = 0x2B42A4u;
label_2b42a4:
    // 0x2b42a4: 0x3c02003b
    ctx->pc = 0x2b42a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2b42a8: 0x10000016
    ctx->pc = 0x2B42A8u;
    {
        const bool branch_taken_0x2b42a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B42ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17904));
        if (branch_taken_0x2b42a8) {
            ctx->pc = 0x2B4304u;
            goto label_2b4304;
        }
    }
    ctx->pc = 0x2B42B0u;
label_2b42b0:
    // 0x2b42b0: 0x3c02003b
    ctx->pc = 0x2b42b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2b42b4: 0x10000013
    ctx->pc = 0x2B42B4u;
    {
        const bool branch_taken_0x2b42b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B42B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17912));
        if (branch_taken_0x2b42b4) {
            ctx->pc = 0x2B4304u;
            goto label_2b4304;
        }
    }
    ctx->pc = 0x2B42BCu;
label_2b42bc:
    // 0x2b42bc: 0x10000011
    ctx->pc = 0x2B42BCu;
    {
        const bool branch_taken_0x2b42bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B42C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17920));
        if (branch_taken_0x2b42bc) {
            ctx->pc = 0x2B4304u;
            goto label_2b4304;
        }
    }
    ctx->pc = 0x2B42C4u;
label_2b42c4:
    // 0x2b42c4: 0x3c02003b
    ctx->pc = 0x2b42c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2b42c8: 0x1000000e
    ctx->pc = 0x2B42C8u;
    {
        const bool branch_taken_0x2b42c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B42CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17928));
        if (branch_taken_0x2b42c8) {
            ctx->pc = 0x2B4304u;
            goto label_2b4304;
        }
    }
    ctx->pc = 0x2B42D0u;
label_2b42d0:
    // 0x2b42d0: 0x38840001
    ctx->pc = 0x2b42d0u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), 1));
    // 0x2b42d4: 0xae2421b8
    ctx->pc = 0x2b42d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8632), GPR_U32(ctx, 4));
    // 0x2b42d8: 0x24120014
    ctx->pc = 0x2b42d8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b42dc: 0x922018
    ctx->pc = 0x2b42dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b42e0: 0x3c10003c
    ctx->pc = 0x2b42e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2b42e4: 0x26106370
    ctx->pc = 0x2b42e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 25456));
    // 0x2b42e8: 0x902021
    ctx->pc = 0x2b42e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2b42ec: 0x3c05003b
    ctx->pc = 0x2b42ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2b42f0: 0xc0b6252
    ctx->pc = 0x2B42F0u;
    SET_GPR_U32(ctx, 31, 0x2B42F8u);
    ctx->pc = 0x2B42F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17936));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42F8u; }
    }
    if (ctx->pc != 0x2B42F8u) { return; }
    ctx->pc = 0x2B42F8u;
    // 0x2b42f8: 0x8e2221b8
    ctx->pc = 0x2b42f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8632)));
    // 0x2b42fc: 0x521818
    ctx->pc = 0x2b42fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b4300: 0x701021
    ctx->pc = 0x2b4300u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2b4304:
    // 0x2b4304: 0xdfbf0030
    ctx->pc = 0x2b4304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4308: 0xdfb20020
    ctx->pc = 0x2b4308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b430c: 0xdfb10010
    ctx->pc = 0x2b430cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4310: 0xdfb00000
    ctx->pc = 0x2b4310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4314: 0x3e00008
    ctx->pc = 0x2B4314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4318u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4250u: goto label_2b4250;
            case 0x2B4278u: goto label_2b4278;
            case 0x2B428Cu: goto label_2b428c;
            case 0x2B4294u: goto label_2b4294;
            case 0x2B429Cu: goto label_2b429c;
            case 0x2B42A4u: goto label_2b42a4;
            case 0x2B42B0u: goto label_2b42b0;
            case 0x2B42BCu: goto label_2b42bc;
            case 0x2B42C4u: goto label_2b42c4;
            case 0x2B42D0u: goto label_2b42d0;
            case 0x2B4304u: goto label_2b4304;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B431Cu;
}
